#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"

#include "ppport.h"

#include <libnet.h>
#include <libnet/libnet-asn1.h>
#include <libnet/libnet-functions.h>
#include <libnet/libnet-headers.h>
#include <libnet/libnet-macros.h>
#include <libnet/libnet-structures.h>
#include <libnet/libnet-types.h>
#include <stdio.h>

#include "const-c.inc"

char errbuf[LIBNET_ERRBUF_SIZE];
typedef libnet_t * Net__Libnet__Libnet;

typedef struct ipv4 {
    u_int32_t addr;
} ipv4;

typedef ipv4* Net__Libnet__IPv4;

/* This macro lifted from Zlib.xs */
#define MALLOC(to, typ) ((to = (typ *)safemalloc(sizeof(typ))), \
                                Zero(to,1,typ))

MODULE = Net::Libnet		PACKAGE = Net::Libnet		

INCLUDE: const-xs.inc

PROTOTYPES:     DISABLE

Net::Libnet::Libnet
libnet_init(inj_type, device=NULL)
int inj_type
char* device
CODE:
    RETVAL = libnet_init(inj_type, device, errbuf);
OUTPUT:
    RETVAL

char*
libnet_error()
CODE:
    RETVAL = errbuf;
OUTPUT:
    RETVAL

MODULE=Net::Libnet PACKAGE=Net::Libnet::Libnet PREFIX=Ctx_
char *
Ctx_getdevice(context)
Net::Libnet::Libnet context
PREINIT:
    char *device;
CODE:
    device = (char *)libnet_getdevice(context);
    RETVAL = device;
OUTPUT:
    RETVAL

AV*
Ctx_get_hwaddr(context)
Net::Libnet::Libnet context
PREINIT:
    struct libnet_ether_addr *e;
CODE:
    e = libnet_get_hwaddr(context);
    if(!e){
        croak(libnet_geterror(context));
    } else {
        int i;
        RETVAL = newAV();
        for (i = 0; i < 6; i++) {
            av_push(RETVAL, newSViv(e->ether_addr_octet[i]));
        }
    }

    OUTPUT:
        RETVAL

Net::Libnet::IPv4
Ctx_get_ipaddr4(context)
Net::Libnet::Libnet context
PREINIT:
    long addr;
CODE:
    addr = libnet_get_ipaddr4(context);
    if (-1 == addr) {
        RETVAL = NULL;
    } else {
        MALLOC(RETVAL, ipv4);
        RETVAL->addr = addr;
    }
    OUTPUT:
        RETVAL

char*
Ctx_get_error(context)
Net::Libnet::Libnet context
PREINIT:
    char *error;
CODE:
    error = libnet_geterror(context);
    RETVAL = error;
    OUTPUT:
        RETVAL

void
DESTROY(context)
Net::Libnet::Libnet context
CODE:
    libnet_destroy(context);

MODULE=Net::Libnet PACKAGE=Net::Libnet::IPv4 PREFIX=Ipv4_

char*
Ipv4_get_ip_addr(addr)
Net::Libnet::IPv4 addr;
CODE:
    RETVAL = libnet_addr2name4((u_int32_t)addr->addr, LIBNET_DONT_RESOLVE);
OUTPUT:
    RETVAL

char*
Ipv4_get_hostname(addr)
Net::Libnet::IPv4 addr;
CODE:
    RETVAL = libnet_addr2name4((u_int32_t)addr->addr, LIBNET_RESOLVE);
OUTPUT:
    RETVAL

void
DESTROY(addr)
Net::Libnet::IPv4 addr;
CODE:
    safefree((char*)addr);

