#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"

#include "ppport.h"

#include <libnet.h>
#include <stdio.h>

char errbuf[LIBNET_ERRBUF_SIZE];
typedef libnet_t * Net__Libnet__Libnet;
MODULE = Net::Libnet  PACKAGE = Net::Libnet

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

char*
get_ip_from_ipaddr4(addr)
long addr;
CODE:
    RETVAL = libnet_addr2name4((u_int32_t)addr, LIBNET_DONT_RESOLVE);
OUTPUT:
    RETVAL

char*
get_hostname_from_ipaddr4(addr)
long addr;
CODE:
    RETVAL = libnet_addr2name4((u_int32_t)addr, LIBNET_RESOLVE);
OUTPUT:
    RETVAL

MODULE=Net::Libnet PACKAGE=Net::Libnet::Libnet PREFIX=Ctx_
char*
Ctx_getdevice(context)
Net::Libnet::Libnet context
CODE:
    RETVAL = libnet_getdevice(context);
OUTPUT:
    RETVAL

AV*
Ctx_get_hwaddr(context)
Net::Libnet::Libnet context
CODE:
    struct libnet_ether_addr *e;
    e = libnet_get_hwaddr(context);
    if(!e){
        croak(libnet_geterror(context));
    } else {
        RETVAL = newAV();
	int i;
	for (i = 0; i < 6; i++) {
	    av_push(RETVAL, newSViv(e->ether_addr_octet[i]));
	}    
    }

    OUTPUT:
        RETVAL

SV*
get_ipaddr4(context)
Net::Libnet::Libnet context
CODE:
    long addr = libnet_get_ipaddr4(context);
    if (-1 == addr) {
        RETVAL = &PL_sv_undef;
    } else {
        RETVAL = newSViv(addr);
    }	
    OUTPUT:
        RETVAL

void
DESTROY(context)
Net::Libnet::Libnet context
CODE:
    libnet_destroy(context);
