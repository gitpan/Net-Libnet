#define PERL_constant_NOTFOUND	1
#define PERL_constant_NOTDEF	2
#define PERL_constant_ISIV	3
#define PERL_constant_ISNO	4
#define PERL_constant_ISNV	5
#define PERL_constant_ISPV	6
#define PERL_constant_ISPVN	7
#define PERL_constant_ISSV	8
#define PERL_constant_ISUNDEF	9
#define PERL_constant_ISUV	10
#define PERL_constant_ISYES	11

#ifndef NVTYPE
typedef double NV; /* 5.6 and later define NVTYPE, and typedef NV to it.  */
#endif
#ifndef aTHX_
#define aTHX_ /* 5.6 or later define this for threading support.  */
#endif
#ifndef pTHX_
#define pTHX_ /* 5.6 or later define this for threading support.  */
#endif

static int
constant_5 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     IP_DF IP_MF IP_RF */
  /* Offset 3 gives the best switch position.  */
  switch (name[3]) {
  case 'D':
    if (memEQ(name, "IP_DF", 5)) {
    /*                  ^       */
#ifdef IP_DF
      *iv_return = IP_DF;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "IP_MF", 5)) {
    /*                  ^       */
#ifdef IP_MF
      *iv_return = IP_MF;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "IP_RF", 5)) {
    /*                  ^       */
#ifdef IP_RF
      *iv_return = IP_RF;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_6 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     GRE_IP TH_ACK TH_CWR TH_ECE TH_FIN TH_RST TH_SYN TH_URG */
  /* Offset 3 gives the best switch position.  */
  switch (name[3]) {
  case 'A':
    if (memEQ(name, "TH_ACK", 6)) {
    /*                  ^        */
#ifdef TH_ACK
      *iv_return = TH_ACK;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "TH_CWR", 6)) {
    /*                  ^        */
#ifdef TH_CWR
      *iv_return = TH_CWR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "TH_ECE", 6)) {
    /*                  ^        */
#ifdef TH_ECE
      *iv_return = TH_ECE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "TH_FIN", 6)) {
    /*                  ^        */
#ifdef TH_FIN
      *iv_return = TH_FIN;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "TH_RST", 6)) {
    /*                  ^        */
#ifdef TH_RST
      *iv_return = TH_RST;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "TH_SYN", 6)) {
    /*                  ^        */
#ifdef TH_SYN
      *iv_return = TH_SYN;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "TH_URG", 6)) {
    /*                  ^        */
#ifdef TH_URG
      *iv_return = TH_URG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "GRE_IP", 6)) {
    /*                  ^        */
#ifdef GRE_IP
      *iv_return = GRE_IP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_7 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ASN_SET GRE_ACK GRE_KEY GRE_PPP GRE_PUP GRE_REC GRE_SEQ GRE_SNA GRE_XNS
     TH_PUSH gre_key gre_seq gre_sum icmp_id */
  /* Offset 6 gives the best switch position.  */
  switch (name[6]) {
  case 'A':
    if (memEQ(name, "GRE_SN", 6)) {
    /*                     A     */
#ifdef GRE_SNA
      *iv_return = GRE_SNA;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "GRE_RE", 6)) {
    /*                     C     */
#ifdef GRE_REC
      *iv_return = GRE_REC;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'H':
    if (memEQ(name, "TH_PUS", 6)) {
    /*                     H     */
#ifdef TH_PUSH
      *iv_return = TH_PUSH;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'K':
    if (memEQ(name, "GRE_AC", 6)) {
    /*                     K     */
#ifdef GRE_ACK
      *iv_return = GRE_ACK;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "GRE_PP", 6)) {
    /*                     P     */
#ifdef GRE_PPP
      *iv_return = GRE_PPP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "GRE_PU", 6)) {
    /*                     P     */
#ifdef GRE_PUP
      *iv_return = GRE_PUP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'Q':
    if (memEQ(name, "GRE_SE", 6)) {
    /*                     Q     */
#ifdef GRE_SEQ
      *iv_return = GRE_SEQ;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "GRE_XN", 6)) {
    /*                     S     */
#ifdef GRE_XNS
      *iv_return = GRE_XNS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "ASN_SE", 6)) {
    /*                     T     */
#ifdef ASN_SET
      *iv_return = ASN_SET;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'Y':
    if (memEQ(name, "GRE_KE", 6)) {
    /*                     Y     */
#ifdef GRE_KEY
      *iv_return = GRE_KEY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'd':
    if (memEQ(name, "icmp_i", 6)) {
    /*                     d     */
#ifdef icmp_id
      *iv_return = icmp_id;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'm':
    if (memEQ(name, "gre_su", 6)) {
    /*                     m     */
#ifdef gre_sum
      *iv_return = gre_sum;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'q':
    if (memEQ(name, "gre_se", 6)) {
    /*                     q     */
#ifdef gre_seq
      *iv_return = gre_seq;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'y':
    if (memEQ(name, "gre_ke", 6)) {
    /*                     y     */
#ifdef gre_key
      *iv_return = gre_key;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_8 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ASN_BIT8 ASN_NULL GRE_CSUM IPOPT_RR IPOPT_TS RIPVER_0 RIPVER_1 RIPVER_2
     egre_ack egre_seq icmp_seq */
  /* Offset 7 gives the best switch position.  */
  switch (name[7]) {
  case '0':
    if (memEQ(name, "RIPVER_", 7)) {
    /*                      0     */
#ifdef RIPVER_0
      *iv_return = RIPVER_0;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '1':
    if (memEQ(name, "RIPVER_", 7)) {
    /*                      1     */
#ifdef RIPVER_1
      *iv_return = RIPVER_1;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '2':
    if (memEQ(name, "RIPVER_", 7)) {
    /*                      2     */
#ifdef RIPVER_2
      *iv_return = RIPVER_2;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '8':
    if (memEQ(name, "ASN_BIT", 7)) {
    /*                      8     */
#ifdef ASN_BIT8
      *iv_return = ASN_BIT8;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "ASN_NUL", 7)) {
    /*                      L     */
#ifdef ASN_NULL
      *iv_return = ASN_NULL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "GRE_CSU", 7)) {
    /*                      M     */
#ifdef GRE_CSUM
      *iv_return = GRE_CSUM;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "IPOPT_R", 7)) {
    /*                      R     */
#ifdef IPOPT_RR
      *iv_return = IPOPT_RR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "IPOPT_T", 7)) {
    /*                      S     */
#ifdef IPOPT_TS
      *iv_return = IPOPT_TS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'k':
    if (memEQ(name, "egre_ac", 7)) {
    /*                      k     */
#ifdef egre_ack
      *iv_return = egre_ack;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'q':
    if (memEQ(name, "egre_se", 7)) {
    /*                      q     */
#ifdef egre_seq
      *iv_return = egre_seq;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "icmp_se", 7)) {
    /*                      q     */
#ifdef icmp_seq
      *iv_return = icmp_seq;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_9 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     GRE_CHAOS GRE_VINES ICMP_ECHO ICMP_IREQ IPOPT_EOL IPOPT_NOP LIBNET_ON
     MAX_SUBID icmp_data icmp_mask */
  /* Offset 8 gives the best switch position.  */
  switch (name[8]) {
  case 'D':
    if (memEQ(name, "MAX_SUBI", 8)) {
    /*                       D     */
#ifdef MAX_SUBID
      *iv_return = MAX_SUBID;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "IPOPT_EO", 8)) {
    /*                       L     */
#ifdef IPOPT_EOL
      *iv_return = IPOPT_EOL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "LIBNET_O", 8)) {
    /*                       N     */
#ifdef LIBNET_ON
      *iv_return = LIBNET_ON;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "ICMP_ECH", 8)) {
    /*                       O     */
#ifdef ICMP_ECHO
      *iv_return = ICMP_ECHO;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "IPOPT_NO", 8)) {
    /*                       P     */
#ifdef IPOPT_NOP
      *iv_return = IPOPT_NOP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'Q':
    if (memEQ(name, "ICMP_IRE", 8)) {
    /*                       Q     */
#ifdef ICMP_IREQ
      *iv_return = ICMP_IREQ;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "GRE_CHAO", 8)) {
    /*                       S     */
#ifdef GRE_CHAOS
      *iv_return = GRE_CHAOS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "GRE_VINE", 8)) {
    /*                       S     */
#ifdef GRE_VINES
      *iv_return = GRE_VINES;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'a':
    if (memEQ(name, "icmp_dat", 8)) {
    /*                       a     */
#ifdef icmp_data
      *iv_return = icmp_data;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'k':
    if (memEQ(name, "icmp_mas", 8)) {
    /*                       k     */
#ifdef icmp_mask
      *iv_return = icmp_mask;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_10 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ARPHRD_ATM DHCP_MAGIC GRE_DECNET GRE_STRICT ICMP6_ECHO IPOPT_LSRR
     IPOPT_SSRR IPPROTO_AH IP_OFFMASK LIBNET_OFF LIBNET_PR2 LIBNET_PR8
     RIPCMD_MAX gre_offset icmp_otime icmp_rtime icmp_ttime */
  /* Offset 9 gives the best switch position.  */
  switch (name[9]) {
  case '2':
    if (memEQ(name, "LIBNET_PR", 9)) {
    /*                        2     */
#ifdef LIBNET_PR2
      *iv_return = LIBNET_PR2;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '8':
    if (memEQ(name, "LIBNET_PR", 9)) {
    /*                        8     */
#ifdef LIBNET_PR8
      *iv_return = LIBNET_PR8;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "DHCP_MAGI", 9)) {
    /*                        C     */
#ifdef DHCP_MAGIC
      *iv_return = DHCP_MAGIC;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "LIBNET_OF", 9)) {
    /*                        F     */
#ifdef LIBNET_OFF
      *iv_return = LIBNET_OFF;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'H':
    if (memEQ(name, "IPPROTO_A", 9)) {
    /*                        H     */
#ifdef IPPROTO_AH
      *iv_return = IPPROTO_AH;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'K':
    if (memEQ(name, "IP_OFFMAS", 9)) {
    /*                        K     */
#ifdef IP_OFFMASK
      *iv_return = IP_OFFMASK;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "ARPHRD_AT", 9)) {
    /*                        M     */
#ifdef ARPHRD_ATM
      *iv_return = ARPHRD_ATM;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "ICMP6_ECH", 9)) {
    /*                        O     */
#ifdef ICMP6_ECHO
      *iv_return = ICMP6_ECHO;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "IPOPT_LSR", 9)) {
    /*                        R     */
#ifdef IPOPT_LSRR
      *iv_return = IPOPT_LSRR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "IPOPT_SSR", 9)) {
    /*                        R     */
#ifdef IPOPT_SSRR
      *iv_return = IPOPT_SSRR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "GRE_DECNE", 9)) {
    /*                        T     */
#ifdef GRE_DECNET
      *iv_return = GRE_DECNET;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "GRE_STRIC", 9)) {
    /*                        T     */
#ifdef GRE_STRICT
      *iv_return = GRE_STRICT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'X':
    if (memEQ(name, "RIPCMD_MA", 9)) {
    /*                        X     */
#ifdef RIPCMD_MAX
      *iv_return = RIPCMD_MAX;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'e':
    if (memEQ(name, "icmp_otim", 9)) {
    /*                        e     */
#ifdef icmp_otime
      *iv_return = icmp_otime;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "icmp_rtim", 9)) {
    /*                        e     */
#ifdef icmp_rtime
      *iv_return = icmp_rtime;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "icmp_ttim", 9)) {
    /*                        e     */
#ifdef icmp_ttime
      *iv_return = icmp_ttime;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 't':
    if (memEQ(name, "gre_offse", 9)) {
    /*                        t     */
#ifdef gre_offset
      *iv_return = gre_offset;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_11 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ARPHRD_AX25 ARPHRD_DLCI ARPOP_REPLY ASN_BIT_STR ASN_BOOLEAN ASN_CONTEXT
     ASN_INTEGER ASN_PRIVATE GRE_ROUTING ICMP_TSTAMP IPOPT_SATID IPPROTO_ESP
     IPPROTO_GRE LIBNET_LINK LIBNET_MODX LIBNET_PR16 LIBNET_PR32 LIBNET_RAW4
     LIBNET_RAW6 MAX_OID_LEN OSPFVERSION RIPCMD_POLL egre_callID */
  /* Offset 9 gives the best switch position.  */
  switch (name[9]) {
  case '1':
    if (memEQ(name, "LIBNET_PR16", 11)) {
    /*                        ^        */
#ifdef LIBNET_PR16
      *iv_return = LIBNET_PR16;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '2':
    if (memEQ(name, "ARPHRD_AX25", 11)) {
    /*                        ^        */
#ifdef ARPHRD_AX25
      *iv_return = ARPHRD_AX25;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '3':
    if (memEQ(name, "LIBNET_PR32", 11)) {
    /*                        ^        */
#ifdef LIBNET_PR32
      *iv_return = LIBNET_PR32;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'A':
    if (memEQ(name, "ASN_BOOLEAN", 11)) {
    /*                        ^        */
#ifdef ASN_BOOLEAN
      *iv_return = ASN_BOOLEAN;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "ARPHRD_DLCI", 11)) {
    /*                        ^        */
#ifdef ARPHRD_DLCI
      *iv_return = ARPHRD_DLCI;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "LIBNET_MODX", 11)) {
    /*                        ^        */
#ifdef LIBNET_MODX
      *iv_return = LIBNET_MODX;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "ASN_INTEGER", 11)) {
    /*                        ^        */
#ifdef ASN_INTEGER
      *iv_return = ASN_INTEGER;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "MAX_OID_LEN", 11)) {
    /*                        ^        */
#ifdef MAX_OID_LEN
      *iv_return = MAX_OID_LEN;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "IPOPT_SATID", 11)) {
    /*                        ^        */
#ifdef IPOPT_SATID
      *iv_return = IPOPT_SATID;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "egre_callID", 11)) {
    /*                        ^        */
#ifdef egre_callID
      *iv_return = egre_callID;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "ARPOP_REPLY", 11)) {
    /*                        ^        */
#ifdef ARPOP_REPLY
      *iv_return = ARPOP_REPLY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "RIPCMD_POLL", 11)) {
    /*                        ^        */
#ifdef RIPCMD_POLL
      *iv_return = RIPCMD_POLL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "ICMP_TSTAMP", 11)) {
    /*                        ^        */
#ifdef ICMP_TSTAMP
      *iv_return = ICMP_TSTAMP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "GRE_ROUTING", 11)) {
    /*                        ^        */
#ifdef GRE_ROUTING
      *iv_return = GRE_ROUTING;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_LINK", 11)) {
    /*                        ^        */
#ifdef LIBNET_LINK
      *iv_return = LIBNET_LINK;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "OSPFVERSION", 11)) {
    /*                        ^        */
#ifdef OSPFVERSION
      *iv_return = OSPFVERSION;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "IPPROTO_GRE", 11)) {
    /*                        ^        */
#ifdef IPPROTO_GRE
      *iv_return = IPPROTO_GRE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "IPPROTO_ESP", 11)) {
    /*                        ^        */
#ifdef IPPROTO_ESP
      *iv_return = IPPROTO_ESP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "ASN_BIT_STR", 11)) {
    /*                        ^        */
#ifdef ASN_BIT_STR
      *iv_return = ASN_BIT_STR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "ASN_PRIVATE", 11)) {
    /*                        ^        */
#ifdef ASN_PRIVATE
      *iv_return = ASN_PRIVATE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'W':
    if (memEQ(name, "LIBNET_RAW4", 11)) {
    /*                        ^        */
#ifdef LIBNET_RAW4
      *iv_return = LIBNET_RAW4;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_RAW6", 11)) {
    /*                        ^        */
#ifdef LIBNET_RAW6
      *iv_return = LIBNET_RAW6;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'X':
    if (memEQ(name, "ASN_CONTEXT", 11)) {
    /*                        ^        */
#ifdef ASN_CONTEXT
      *iv_return = ASN_CONTEXT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_12 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ARPHRD_CHAOS ARPHRD_ETHER ARPHRD_IPSEC ASN_LONG_LEN ASN_SEQUENCE
     CQ_LOCK_READ ETHERTYPE_IP FDDI_TYPE_IP ICMP_MASKREQ ICMP_UNREACH
     IPPROTO_OSPF IPPROTO_VRRP IP_MAXPACKET LIBNET_ARP_H LIBNET_CDP_H
     LIBNET_DNS_H LIBNET_ETH_H LIBNET_GRE_H LIBNET_ISL_H LIBNET_NTP_H
     LIBNET_PRu16 LIBNET_PRu32 LIBNET_RIP_H LIBNET_TCP_H LIBNET_UDP_H */
  /* Offset 7 gives the best switch position.  */
  switch (name[7]) {
  case 'A':
    if (memEQ(name, "IP_MAXPACKET", 12)) {
    /*                      ^           */
#ifdef IP_MAXPACKET
      *iv_return = IP_MAXPACKET;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_ARP_H", 12)) {
    /*                      ^           */
#ifdef LIBNET_ARP_H
      *iv_return = LIBNET_ARP_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "ARPHRD_CHAOS", 12)) {
    /*                      ^           */
#ifdef ARPHRD_CHAOS
      *iv_return = ARPHRD_CHAOS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_CDP_H", 12)) {
    /*                      ^           */
#ifdef LIBNET_CDP_H
      *iv_return = LIBNET_CDP_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "LIBNET_DNS_H", 12)) {
    /*                      ^           */
#ifdef LIBNET_DNS_H
      *iv_return = LIBNET_DNS_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "ARPHRD_ETHER", 12)) {
    /*                      ^           */
#ifdef ARPHRD_ETHER
      *iv_return = ARPHRD_ETHER;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_ETH_H", 12)) {
    /*                      ^           */
#ifdef LIBNET_ETH_H
      *iv_return = LIBNET_ETH_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'G':
    if (memEQ(name, "ASN_LONG_LEN", 12)) {
    /*                      ^           */
#ifdef ASN_LONG_LEN
      *iv_return = ASN_LONG_LEN;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_GRE_H", 12)) {
    /*                      ^           */
#ifdef LIBNET_GRE_H
      *iv_return = LIBNET_GRE_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "ARPHRD_IPSEC", 12)) {
    /*                      ^           */
#ifdef ARPHRD_IPSEC
      *iv_return = ARPHRD_IPSEC;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_ISL_H", 12)) {
    /*                      ^           */
#ifdef LIBNET_ISL_H
      *iv_return = LIBNET_ISL_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "LIBNET_NTP_H", 12)) {
    /*                      ^           */
#ifdef LIBNET_NTP_H
      *iv_return = LIBNET_NTP_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "ETHERTYPE_IP", 12)) {
    /*                      ^           */
#ifdef ETHERTYPE_IP
      *iv_return = ETHERTYPE_IP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "FDDI_TYPE_IP", 12)) {
    /*                      ^           */
#ifdef FDDI_TYPE_IP
      *iv_return = FDDI_TYPE_IP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PRu16", 12)) {
    /*                      ^           */
#ifdef LIBNET_PRu16
      *iv_return = LIBNET_PRu16;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PRu32", 12)) {
    /*                      ^           */
#ifdef LIBNET_PRu32
      *iv_return = LIBNET_PRu32;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "ICMP_UNREACH", 12)) {
    /*                      ^           */
#ifdef ICMP_UNREACH
      *iv_return = ICMP_UNREACH;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_RIP_H", 12)) {
    /*                      ^           */
#ifdef LIBNET_RIP_H
      *iv_return = LIBNET_RIP_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "ICMP_MASKREQ", 12)) {
    /*                      ^           */
#ifdef ICMP_MASKREQ
      *iv_return = ICMP_MASKREQ;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "LIBNET_TCP_H", 12)) {
    /*                      ^           */
#ifdef LIBNET_TCP_H
      *iv_return = LIBNET_TCP_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "ASN_SEQUENCE", 12)) {
    /*                      ^           */
#ifdef ASN_SEQUENCE
      *iv_return = ASN_SEQUENCE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_UDP_H", 12)) {
    /*                      ^           */
#ifdef LIBNET_UDP_H
      *iv_return = LIBNET_UDP_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "CQ_LOCK_READ", 12)) {
    /*                      ^           */
#ifdef CQ_LOCK_READ
      *iv_return = CQ_LOCK_READ;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "IPPROTO_OSPF", 12)) {
    /*                      ^           */
#ifdef IPPROTO_OSPF
      *iv_return = IPPROTO_OSPF;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "IPPROTO_VRRP", 12)) {
    /*                      ^           */
#ifdef IPPROTO_VRRP
      *iv_return = IPPROTO_VRRP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_13 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ARPHRD_ARCNET ARPHRD_EETHER ARPHRD_NETROM ARPHRD_PRONET ARPOP_REQUEST
     ASN_OBJECT_ID ASN_OCTET_STR ASN_PRIMITIVE ASN_UNIVERSAL CQ_LOCK_WRITE
     ETHERTYPE_ARP ETHERTYPE_EAP ETHERTYPE_PUP FDDI_ADDR_LEN FDDI_TYPE_ARP
     GRE_ETHERTALK GRE_VERSION_0 GRE_VERSION_1 ICMP6_UNREACH ICMP_REDIRECT
     ICMP_TIMXCEED IPPROTO_ICMP6 IPTOS_LOWCOST LIBNET_FDDI_H LIBNET_IGMP_H
     LIBNET_IPV4_H LIBNET_IPV6_H LIBNET_MPLS_H LIBNET_OSPF_H LIBNET_VRRP_H
     RTR_TYPE_VRTL */
  /* Offset 10 gives the best switch position.  */
  switch (name[10]) {
  case '4':
    if (memEQ(name, "LIBNET_IPV4_H", 13)) {
    /*                         ^         */
#ifdef LIBNET_IPV4_H
      *iv_return = LIBNET_IPV4_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '6':
    if (memEQ(name, "LIBNET_IPV6_H", 13)) {
    /*                         ^         */
#ifdef LIBNET_IPV6_H
      *iv_return = LIBNET_IPV6_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'A':
    if (memEQ(name, "ETHERTYPE_ARP", 13)) {
    /*                         ^         */
#ifdef ETHERTYPE_ARP
      *iv_return = ETHERTYPE_ARP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "FDDI_TYPE_ARP", 13)) {
    /*                         ^         */
#ifdef FDDI_TYPE_ARP
      *iv_return = FDDI_TYPE_ARP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "GRE_ETHERTALK", 13)) {
    /*                         ^         */
#ifdef GRE_ETHERTALK
      *iv_return = GRE_ETHERTALK;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "ICMP6_UNREACH", 13)) {
    /*                         ^         */
#ifdef ICMP6_UNREACH
      *iv_return = ICMP6_UNREACH;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "ARPOP_REQUEST", 13)) {
    /*                         ^         */
#ifdef ARPOP_REQUEST
      *iv_return = ARPOP_REQUEST;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "ETHERTYPE_EAP", 13)) {
    /*                         ^         */
#ifdef ETHERTYPE_EAP
      *iv_return = ETHERTYPE_EAP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "ICMP_REDIRECT", 13)) {
    /*                         ^         */
#ifdef ICMP_REDIRECT
      *iv_return = ICMP_REDIRECT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "ICMP_TIMXCEED", 13)) {
    /*                         ^         */
#ifdef ICMP_TIMXCEED
      *iv_return = ICMP_TIMXCEED;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "LIBNET_OSPF_H", 13)) {
    /*                         ^         */
#ifdef LIBNET_OSPF_H
      *iv_return = LIBNET_OSPF_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'H':
    if (memEQ(name, "ARPHRD_EETHER", 13)) {
    /*                         ^         */
#ifdef ARPHRD_EETHER
      *iv_return = ARPHRD_EETHER;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "ASN_PRIMITIVE", 13)) {
    /*                         ^         */
#ifdef ASN_PRIMITIVE
      *iv_return = ASN_PRIMITIVE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CQ_LOCK_WRITE", 13)) {
    /*                         ^         */
#ifdef CQ_LOCK_WRITE
      *iv_return = CQ_LOCK_WRITE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_FDDI_H", 13)) {
    /*                         ^         */
#ifdef LIBNET_FDDI_H
      *iv_return = LIBNET_FDDI_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "FDDI_ADDR_LEN", 13)) {
    /*                         ^         */
#ifdef FDDI_ADDR_LEN
      *iv_return = FDDI_ADDR_LEN;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "IPPROTO_ICMP6", 13)) {
    /*                         ^         */
#ifdef IPPROTO_ICMP6
      *iv_return = IPPROTO_ICMP6;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "ARPHRD_ARCNET", 13)) {
    /*                         ^         */
#ifdef ARPHRD_ARCNET
      *iv_return = ARPHRD_ARCNET;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "ARPHRD_PRONET", 13)) {
    /*                         ^         */
#ifdef ARPHRD_PRONET
      *iv_return = ARPHRD_PRONET;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "GRE_VERSION_0", 13)) {
    /*                         ^         */
#ifdef GRE_VERSION_0
      *iv_return = GRE_VERSION_0;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "GRE_VERSION_1", 13)) {
    /*                         ^         */
#ifdef GRE_VERSION_1
      *iv_return = GRE_VERSION_1;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "IPTOS_LOWCOST", 13)) {
    /*                         ^         */
#ifdef IPTOS_LOWCOST
      *iv_return = IPTOS_LOWCOST;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "ETHERTYPE_PUP", 13)) {
    /*                         ^         */
#ifdef ETHERTYPE_PUP
      *iv_return = ETHERTYPE_PUP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_IGMP_H", 13)) {
    /*                         ^         */
#ifdef LIBNET_IGMP_H
      *iv_return = LIBNET_IGMP_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_VRRP_H", 13)) {
    /*                         ^         */
#ifdef LIBNET_VRRP_H
      *iv_return = LIBNET_VRRP_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "ARPHRD_NETROM", 13)) {
    /*                         ^         */
#ifdef ARPHRD_NETROM
      *iv_return = ARPHRD_NETROM;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "RTR_TYPE_VRTL", 13)) {
    /*                         ^         */
#ifdef RTR_TYPE_VRTL
      *iv_return = RTR_TYPE_VRTL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "ASN_OCTET_STR", 13)) {
    /*                         ^         */
#ifdef ASN_OCTET_STR
      *iv_return = ASN_OCTET_STR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "ASN_UNIVERSAL", 13)) {
    /*                         ^         */
#ifdef ASN_UNIVERSAL
      *iv_return = ASN_UNIVERSAL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_MPLS_H", 13)) {
    /*                         ^         */
#ifdef LIBNET_MPLS_H
      *iv_return = LIBNET_MPLS_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "ASN_OBJECT_ID", 13)) {
    /*                         ^         */
#ifdef ASN_OBJECT_ID
      *iv_return = ASN_OBJECT_ID;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_14 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ARPHRD_IEEE802 ARPHRD_LANSTAR ARPOP_INVREPLY ARPOP_REVREPLY ETHERTYPE_MPLS
     ETHERTYPE_VLAN ETHER_ADDR_LEN GRE_FLAGS_MASK GRE_NOVELL_IPX GRE_VINES_ECHO
     ICMP6_TIMXCEED ICMP_ECHOREPLY ICMP_IREQREPLY ICMP_MASKREPLY ICMP_PARAMPROB
     IPOPT_SECURITY IPTOS_LOWDELAY LIBNET_802_2_H LIBNET_802_3_H LIBNET_DBD_IBI
     LIBNET_RESOLVE LIBNET_SAP_STP LIBNET_SEBEK_H RIPCMD_REQUEST RIPCMD_TRACEON
     egre_payload_s libnet_s6_addr */
  /* Offset 8 gives the best switch position.  */
  switch (name[8]) {
  case '0':
    if (memEQ(name, "LIBNET_802_2_H", 14)) {
    /*                       ^            */
#ifdef LIBNET_802_2_H
      *iv_return = LIBNET_802_2_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_802_3_H", 14)) {
    /*                       ^            */
#ifdef LIBNET_802_3_H
      *iv_return = LIBNET_802_3_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '6':
    if (memEQ(name, "libnet_s6_addr", 14)) {
    /*                       ^            */
#ifdef libnet_s6_addr
      *iv_return = libnet_s6_addr;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'A':
    if (memEQ(name, "ARPHRD_LANSTAR", 14)) {
    /*                       ^            */
#ifdef ARPHRD_LANSTAR
      *iv_return = ARPHRD_LANSTAR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "ICMP_PARAMPROB", 14)) {
    /*                       ^            */
#ifdef ICMP_PARAMPROB
      *iv_return = ICMP_PARAMPROB;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_SAP_STP", 14)) {
    /*                       ^            */
#ifdef LIBNET_SAP_STP
      *iv_return = LIBNET_SAP_STP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'B':
    if (memEQ(name, "LIBNET_DBD_IBI", 14)) {
    /*                       ^            */
#ifdef LIBNET_DBD_IBI
      *iv_return = LIBNET_DBD_IBI;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "IPOPT_SECURITY", 14)) {
    /*                       ^            */
#ifdef IPOPT_SECURITY
      *iv_return = IPOPT_SECURITY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "ETHER_ADDR_LEN", 14)) {
    /*                       ^            */
#ifdef ETHER_ADDR_LEN
      *iv_return = ETHER_ADDR_LEN;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "ARPHRD_IEEE802", 14)) {
    /*                       ^            */
#ifdef ARPHRD_IEEE802
      *iv_return = ARPHRD_IEEE802;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "ETHERTYPE_MPLS", 14)) {
    /*                       ^            */
#ifdef ETHERTYPE_MPLS
      *iv_return = ETHERTYPE_MPLS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "ETHERTYPE_VLAN", 14)) {
    /*                       ^            */
#ifdef ETHERTYPE_VLAN
      *iv_return = ETHERTYPE_VLAN;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_RESOLVE", 14)) {
    /*                       ^            */
#ifdef LIBNET_RESOLVE
      *iv_return = LIBNET_RESOLVE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_SEBEK_H", 14)) {
    /*                       ^            */
#ifdef LIBNET_SEBEK_H
      *iv_return = LIBNET_SEBEK_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "RIPCMD_REQUEST", 14)) {
    /*                       ^            */
#ifdef RIPCMD_REQUEST
      *iv_return = RIPCMD_REQUEST;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'K':
    if (memEQ(name, "ICMP_MASKREPLY", 14)) {
    /*                       ^            */
#ifdef ICMP_MASKREPLY
      *iv_return = ICMP_MASKREPLY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "GRE_NOVELL_IPX", 14)) {
    /*                       ^            */
#ifdef GRE_NOVELL_IPX
      *iv_return = GRE_NOVELL_IPX;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "ICMP6_TIMXCEED", 14)) {
    /*                       ^            */
#ifdef ICMP6_TIMXCEED
      *iv_return = ICMP6_TIMXCEED;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "ICMP_ECHOREPLY", 14)) {
    /*                       ^            */
#ifdef ICMP_ECHOREPLY
      *iv_return = ICMP_ECHOREPLY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'Q':
    if (memEQ(name, "ICMP_IREQREPLY", 14)) {
    /*                       ^            */
#ifdef ICMP_IREQREPLY
      *iv_return = ICMP_IREQREPLY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "RIPCMD_TRACEON", 14)) {
    /*                       ^            */
#ifdef RIPCMD_TRACEON
      *iv_return = RIPCMD_TRACEON;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "GRE_FLAGS_MASK", 14)) {
    /*                       ^            */
#ifdef GRE_FLAGS_MASK
      *iv_return = GRE_FLAGS_MASK;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "GRE_VINES_ECHO", 14)) {
    /*                       ^            */
#ifdef GRE_VINES_ECHO
      *iv_return = GRE_VINES_ECHO;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'V':
    if (memEQ(name, "ARPOP_INVREPLY", 14)) {
    /*                       ^            */
#ifdef ARPOP_INVREPLY
      *iv_return = ARPOP_INVREPLY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "ARPOP_REVREPLY", 14)) {
    /*                       ^            */
#ifdef ARPOP_REVREPLY
      *iv_return = ARPOP_REVREPLY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'W':
    if (memEQ(name, "IPTOS_LOWDELAY", 14)) {
    /*                       ^            */
#ifdef IPTOS_LOWDELAY
      *iv_return = IPTOS_LOWDELAY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'l':
    if (memEQ(name, "egre_payload_s", 14)) {
    /*                       ^            */
#ifdef egre_payload_s
      *iv_return = egre_payload_s;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_15 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ARPHRD_APPLETLK ARPHRD_METRICOM ASN_APPLICATION ASN_CONSTRUCTOR
     GRE_RFC_826_ARP GRE_SECURE_DATA ICMP6_ECHOREPLY ICMP6_PARAMPROB
     ICMP6_PKTTOOBIG LIBNET_802_1Q_H LIBNET_802_1X_H LIBNET_ADV_MASK
     LIBNET_DBD_MBIT LIBNET_DHCPV4_H LIBNET_DHCP_DNS LIBNET_DHCP_END
     LIBNET_DHCP_PAD LIBNET_ICMPV4_H LIBNET_ICMPV6_H LIBNET_LINK_ADV
     LIBNET_NTP_VN_2 LIBNET_NTP_VN_3 LIBNET_NTP_VN_4 LIBNET_OPT_EBIT
     LIBNET_OSPF_DBD LIBNET_OSPF_LSA LIBNET_OSPF_LSR LIBNET_OSPF_LSU
     LIBNET_OSPF_UMD LIBNET_RAW4_ADV LIBNET_RAW6_ADV LIBNET_RPC_CALL
     LIBNET_RPC_VERS LIBNET_SAP_SNAP RIPCMD_RESPONSE RIPCMD_TRACEOFF
     SEBEK_TYPE_READ */
  /* Offset 14 gives the best switch position.  */
  switch (name[14]) {
  case '2':
    if (memEQ(name, "LIBNET_NTP_VN_", 14)) {
    /*                             2      */
#ifdef LIBNET_NTP_VN_2
      *iv_return = LIBNET_NTP_VN_2;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '3':
    if (memEQ(name, "LIBNET_NTP_VN_", 14)) {
    /*                             3      */
#ifdef LIBNET_NTP_VN_3
      *iv_return = LIBNET_NTP_VN_3;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '4':
    if (memEQ(name, "LIBNET_NTP_VN_", 14)) {
    /*                             4      */
#ifdef LIBNET_NTP_VN_4
      *iv_return = LIBNET_NTP_VN_4;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'A':
    if (memEQ(name, "GRE_SECURE_DAT", 14)) {
    /*                             A      */
#ifdef GRE_SECURE_DATA
      *iv_return = GRE_SECURE_DATA;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_OSPF_LS", 14)) {
    /*                             A      */
#ifdef LIBNET_OSPF_LSA
      *iv_return = LIBNET_OSPF_LSA;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'B':
    if (memEQ(name, "ICMP6_PARAMPRO", 14)) {
    /*                             B      */
#ifdef ICMP6_PARAMPROB
      *iv_return = ICMP6_PARAMPROB;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "LIBNET_DHCP_EN", 14)) {
    /*                             D      */
#ifdef LIBNET_DHCP_END
      *iv_return = LIBNET_DHCP_END;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_PA", 14)) {
    /*                             D      */
#ifdef LIBNET_DHCP_PAD
      *iv_return = LIBNET_DHCP_PAD;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_OSPF_DB", 14)) {
    /*                             D      */
#ifdef LIBNET_OSPF_DBD
      *iv_return = LIBNET_OSPF_DBD;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_OSPF_UM", 14)) {
    /*                             D      */
#ifdef LIBNET_OSPF_UMD
      *iv_return = LIBNET_OSPF_UMD;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "SEBEK_TYPE_REA", 14)) {
    /*                             D      */
#ifdef SEBEK_TYPE_READ
      *iv_return = SEBEK_TYPE_READ;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "RIPCMD_RESPONS", 14)) {
    /*                             E      */
#ifdef RIPCMD_RESPONSE
      *iv_return = RIPCMD_RESPONSE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "RIPCMD_TRACEOF", 14)) {
    /*                             F      */
#ifdef RIPCMD_TRACEOFF
      *iv_return = RIPCMD_TRACEOFF;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'G':
    if (memEQ(name, "ICMP6_PKTTOOBI", 14)) {
    /*                             G      */
#ifdef ICMP6_PKTTOOBIG
      *iv_return = ICMP6_PKTTOOBIG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'H':
    if (memEQ(name, "LIBNET_802_1Q_", 14)) {
    /*                             H      */
#ifdef LIBNET_802_1Q_H
      *iv_return = LIBNET_802_1Q_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_802_1X_", 14)) {
    /*                             H      */
#ifdef LIBNET_802_1X_H
      *iv_return = LIBNET_802_1X_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCPV4_", 14)) {
    /*                             H      */
#ifdef LIBNET_DHCPV4_H
      *iv_return = LIBNET_DHCPV4_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_ICMPV4_", 14)) {
    /*                             H      */
#ifdef LIBNET_ICMPV4_H
      *iv_return = LIBNET_ICMPV4_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_ICMPV6_", 14)) {
    /*                             H      */
#ifdef LIBNET_ICMPV6_H
      *iv_return = LIBNET_ICMPV6_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'K':
    if (memEQ(name, "ARPHRD_APPLETL", 14)) {
    /*                             K      */
#ifdef ARPHRD_APPLETLK
      *iv_return = ARPHRD_APPLETLK;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_ADV_MAS", 14)) {
    /*                             K      */
#ifdef LIBNET_ADV_MASK
      *iv_return = LIBNET_ADV_MASK;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "LIBNET_RPC_CAL", 14)) {
    /*                             L      */
#ifdef LIBNET_RPC_CALL
      *iv_return = LIBNET_RPC_CALL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "ARPHRD_METRICO", 14)) {
    /*                             M      */
#ifdef ARPHRD_METRICOM
      *iv_return = ARPHRD_METRICOM;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "ASN_APPLICATIO", 14)) {
    /*                             N      */
#ifdef ASN_APPLICATION
      *iv_return = ASN_APPLICATION;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "GRE_RFC_826_AR", 14)) {
    /*                             P      */
#ifdef GRE_RFC_826_ARP
      *iv_return = GRE_RFC_826_ARP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_SAP_SNA", 14)) {
    /*                             P      */
#ifdef LIBNET_SAP_SNAP
      *iv_return = LIBNET_SAP_SNAP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "ASN_CONSTRUCTO", 14)) {
    /*                             R      */
#ifdef ASN_CONSTRUCTOR
      *iv_return = ASN_CONSTRUCTOR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_OSPF_LS", 14)) {
    /*                             R      */
#ifdef LIBNET_OSPF_LSR
      *iv_return = LIBNET_OSPF_LSR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "LIBNET_DHCP_DN", 14)) {
    /*                             S      */
#ifdef LIBNET_DHCP_DNS
      *iv_return = LIBNET_DHCP_DNS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_RPC_VER", 14)) {
    /*                             S      */
#ifdef LIBNET_RPC_VERS
      *iv_return = LIBNET_RPC_VERS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "LIBNET_DBD_MBI", 14)) {
    /*                             T      */
#ifdef LIBNET_DBD_MBIT
      *iv_return = LIBNET_DBD_MBIT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_OPT_EBI", 14)) {
    /*                             T      */
#ifdef LIBNET_OPT_EBIT
      *iv_return = LIBNET_OPT_EBIT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "LIBNET_OSPF_LS", 14)) {
    /*                             U      */
#ifdef LIBNET_OSPF_LSU
      *iv_return = LIBNET_OSPF_LSU;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'V':
    if (memEQ(name, "LIBNET_LINK_AD", 14)) {
    /*                             V      */
#ifdef LIBNET_LINK_ADV
      *iv_return = LIBNET_LINK_ADV;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_RAW4_AD", 14)) {
    /*                             V      */
#ifdef LIBNET_RAW4_ADV
      *iv_return = LIBNET_RAW4_ADV;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_RAW6_AD", 14)) {
    /*                             V      */
#ifdef LIBNET_RAW6_ADV
      *iv_return = LIBNET_RAW6_ADV;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'Y':
    if (memEQ(name, "ICMP6_ECHOREPL", 14)) {
    /*                             Y      */
#ifdef ICMP6_ECHOREPLY
      *iv_return = ICMP6_ECHOREPLY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_16 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ARPOP_INVREQUEST ARPOP_REVREQUEST ASN_EXTENSION_ID CQ_LOCK_UNLOCKED
     ETHERTYPE_REVARP FDDI_TYPE_REVARP GRE_VERSION_MASK ICMP_TSTAMPREPLY
     ICMP_UNREACH_NET IGMP_LEAVE_GROUP IPPROTO_OSPF_LSA IPTOS_THROUGHPUT
     LIBNET_BGP4_OPEN LIBNET_CDP_DEVID LIBNET_DBD_MSBIT LIBNET_DHCP_NBDD
     LIBNET_DHCP_NBNS LIBNET_GRE_SRE_H LIBNET_NTP_LI_AC LIBNET_NTP_LI_AS
     LIBNET_NTP_LI_DS LIBNET_NTP_LI_NW LIBNET_OPT_DCBIT LIBNET_OPT_EABIT
     LIBNET_OPT_MCBIT LIBNET_OPT_NPBIT LIBNET_PRAND_MAX LIBNET_PROTO_CDP
     LIBNET_PROTO_ISL LIBNET_RPC_REPLY LIBNET_STP_TCN_H RIPCMD_POLLENTRY
     SEBEK_CMD_LENGTH SEBEK_TYPE_WRITE */
  /* Offset 7 gives the best switch position.  */
  switch (name[7]) {
  case 'A':
    if (memEQ(name, "IGMP_LEAVE_GROUP", 16)) {
    /*                      ^               */
#ifdef IGMP_LEAVE_GROUP
      *iv_return = IGMP_LEAVE_GROUP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'B':
    if (memEQ(name, "LIBNET_BGP4_OPEN", 16)) {
    /*                      ^               */
#ifdef LIBNET_BGP4_OPEN
      *iv_return = LIBNET_BGP4_OPEN;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "LIBNET_CDP_DEVID", 16)) {
    /*                      ^               */
#ifdef LIBNET_CDP_DEVID
      *iv_return = LIBNET_CDP_DEVID;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "LIBNET_DBD_MSBIT", 16)) {
    /*                      ^               */
#ifdef LIBNET_DBD_MSBIT
      *iv_return = LIBNET_DBD_MSBIT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_NBDD", 16)) {
    /*                      ^               */
#ifdef LIBNET_DHCP_NBDD
      *iv_return = LIBNET_DHCP_NBDD;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_NBNS", 16)) {
    /*                      ^               */
#ifdef LIBNET_DHCP_NBNS
      *iv_return = LIBNET_DHCP_NBNS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "ARPOP_REVREQUEST", 16)) {
    /*                      ^               */
#ifdef ARPOP_REVREQUEST
      *iv_return = ARPOP_REVREQUEST;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "ASN_EXTENSION_ID", 16)) {
    /*                      ^               */
#ifdef ASN_EXTENSION_ID
      *iv_return = ASN_EXTENSION_ID;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'G':
    if (memEQ(name, "LIBNET_GRE_SRE_H", 16)) {
    /*                      ^               */
#ifdef LIBNET_GRE_SRE_H
      *iv_return = LIBNET_GRE_SRE_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'H':
    if (memEQ(name, "IPTOS_THROUGHPUT", 16)) {
    /*                      ^               */
#ifdef IPTOS_THROUGHPUT
      *iv_return = IPTOS_THROUGHPUT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "SEBEK_CMD_LENGTH", 16)) {
    /*                      ^               */
#ifdef SEBEK_CMD_LENGTH
      *iv_return = SEBEK_CMD_LENGTH;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "ARPOP_INVREQUEST", 16)) {
    /*                      ^               */
#ifdef ARPOP_INVREQUEST
      *iv_return = ARPOP_INVREQUEST;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_NTP_LI_AC", 16)) {
    /*                      ^               */
#ifdef LIBNET_NTP_LI_AC
      *iv_return = LIBNET_NTP_LI_AC;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_NTP_LI_AS", 16)) {
    /*                      ^               */
#ifdef LIBNET_NTP_LI_AS
      *iv_return = LIBNET_NTP_LI_AS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_NTP_LI_DS", 16)) {
    /*                      ^               */
#ifdef LIBNET_NTP_LI_DS
      *iv_return = LIBNET_NTP_LI_DS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_NTP_LI_NW", 16)) {
    /*                      ^               */
#ifdef LIBNET_NTP_LI_NW
      *iv_return = LIBNET_NTP_LI_NW;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "LIBNET_OPT_DCBIT", 16)) {
    /*                      ^               */
#ifdef LIBNET_OPT_DCBIT
      *iv_return = LIBNET_OPT_DCBIT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_OPT_EABIT", 16)) {
    /*                      ^               */
#ifdef LIBNET_OPT_EABIT
      *iv_return = LIBNET_OPT_EABIT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_OPT_MCBIT", 16)) {
    /*                      ^               */
#ifdef LIBNET_OPT_MCBIT
      *iv_return = LIBNET_OPT_MCBIT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_OPT_NPBIT", 16)) {
    /*                      ^               */
#ifdef LIBNET_OPT_NPBIT
      *iv_return = LIBNET_OPT_NPBIT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "ETHERTYPE_REVARP", 16)) {
    /*                      ^               */
#ifdef ETHERTYPE_REVARP
      *iv_return = ETHERTYPE_REVARP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "FDDI_TYPE_REVARP", 16)) {
    /*                      ^               */
#ifdef FDDI_TYPE_REVARP
      *iv_return = FDDI_TYPE_REVARP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PRAND_MAX", 16)) {
    /*                      ^               */
#ifdef LIBNET_PRAND_MAX
      *iv_return = LIBNET_PRAND_MAX;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PROTO_CDP", 16)) {
    /*                      ^               */
#ifdef LIBNET_PROTO_CDP
      *iv_return = LIBNET_PROTO_CDP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PROTO_ISL", 16)) {
    /*                      ^               */
#ifdef LIBNET_PROTO_ISL
      *iv_return = LIBNET_PROTO_ISL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "RIPCMD_POLLENTRY", 16)) {
    /*                      ^               */
#ifdef RIPCMD_POLLENTRY
      *iv_return = RIPCMD_POLLENTRY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "ICMP_UNREACH_NET", 16)) {
    /*                      ^               */
#ifdef ICMP_UNREACH_NET
      *iv_return = ICMP_UNREACH_NET;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_RPC_REPLY", 16)) {
    /*                      ^               */
#ifdef LIBNET_RPC_REPLY
      *iv_return = LIBNET_RPC_REPLY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "GRE_VERSION_MASK", 16)) {
    /*                      ^               */
#ifdef GRE_VERSION_MASK
      *iv_return = GRE_VERSION_MASK;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_STP_TCN_H", 16)) {
    /*                      ^               */
#ifdef LIBNET_STP_TCN_H
      *iv_return = LIBNET_STP_TCN_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "ICMP_TSTAMPREPLY", 16)) {
    /*                      ^               */
#ifdef ICMP_TSTAMPREPLY
      *iv_return = ICMP_TSTAMPREPLY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'Y':
    if (memEQ(name, "SEBEK_TYPE_WRITE", 16)) {
    /*                      ^               */
#ifdef SEBEK_TYPE_WRITE
      *iv_return = SEBEK_TYPE_WRITE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "CQ_LOCK_UNLOCKED", 16)) {
    /*                      ^               */
#ifdef CQ_LOCK_UNLOCKED
      *iv_return = CQ_LOCK_UNLOCKED;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "IPPROTO_OSPF_LSA", 16)) {
    /*                      ^               */
#ifdef IPPROTO_OSPF_LSA
      *iv_return = IPPROTO_OSPF_LSA;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_17 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     GRE_APOLLO_DOMAIN ICMP_REDIRECT_NET ICMP_ROUTERADVERT ICMP_SOURCEQUENCH
     ICMP_UNREACH_HOST ICMP_UNREACH_PORT IPTOS_RELIABILITY LIBNET_802_1X_KEY
     LIBNET_BGP4_CEASE LIBNET_CDP_CAP_SR LIBNET_CDP_PORTID LIBNET_DHCP_IPTTL
     LIBNET_DHCP_REPLY LIBNET_DHCP_XFONT LIBNET_IPSEC_AH_H LIBNET_LABEL_SIZE
     LIBNET_LIL_ENDIAN LIBNET_LS_TYPE_IP LIBNET_MAX_PACKET LIBNET_NTP_MODE_A
     LIBNET_NTP_MODE_B LIBNET_NTP_MODE_C LIBNET_NTP_MODE_P LIBNET_NTP_MODE_R
     LIBNET_NTP_MODE_S LIBNET_OSPF_CKSUM LIBNET_OSPF_DBD_H LIBNET_OSPF_HELLO
     LIBNET_OSPF_LSA_H LIBNET_OSPF_LSR_H LIBNET_OSPF_LSU_H LIBNET_RPC_CALL_H
     LIBNET_STP_CONF_H */
  /* Offset 14 gives the best switch position.  */
  switch (name[14]) {
  case 'A':
    if (memEQ(name, "GRE_APOLLO_DOMAIN", 17)) {
    /*                             ^         */
#ifdef GRE_APOLLO_DOMAIN
      *iv_return = GRE_APOLLO_DOMAIN;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_BGP4_CEASE", 17)) {
    /*                             ^         */
#ifdef LIBNET_BGP4_CEASE
      *iv_return = LIBNET_BGP4_CEASE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_OSPF_LSA_H", 17)) {
    /*                             ^         */
#ifdef LIBNET_OSPF_LSA_H
      *iv_return = LIBNET_OSPF_LSA_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "LIBNET_OSPF_DBD_H", 17)) {
    /*                             ^         */
#ifdef LIBNET_OSPF_DBD_H
      *iv_return = LIBNET_OSPF_DBD_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "ICMP_ROUTERADVERT", 17)) {
    /*                             ^         */
#ifdef ICMP_ROUTERADVERT
      *iv_return = ICMP_ROUTERADVERT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_NTP_MODE_A", 17)) {
    /*                             ^         */
#ifdef LIBNET_NTP_MODE_A
      *iv_return = LIBNET_NTP_MODE_A;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_NTP_MODE_B", 17)) {
    /*                             ^         */
#ifdef LIBNET_NTP_MODE_B
      *iv_return = LIBNET_NTP_MODE_B;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_NTP_MODE_C", 17)) {
    /*                             ^         */
#ifdef LIBNET_NTP_MODE_C
      *iv_return = LIBNET_NTP_MODE_C;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_NTP_MODE_P", 17)) {
    /*                             ^         */
#ifdef LIBNET_NTP_MODE_P
      *iv_return = LIBNET_NTP_MODE_P;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_NTP_MODE_R", 17)) {
    /*                             ^         */
#ifdef LIBNET_NTP_MODE_R
      *iv_return = LIBNET_NTP_MODE_R;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_NTP_MODE_S", 17)) {
    /*                             ^         */
#ifdef LIBNET_NTP_MODE_S
      *iv_return = LIBNET_NTP_MODE_S;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "LIBNET_STP_CONF_H", 17)) {
    /*                             ^         */
#ifdef LIBNET_STP_CONF_H
      *iv_return = LIBNET_STP_CONF_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'H':
    if (memEQ(name, "LIBNET_IPSEC_AH_H", 17)) {
    /*                             ^         */
#ifdef LIBNET_IPSEC_AH_H
      *iv_return = LIBNET_IPSEC_AH_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "IPTOS_RELIABILITY", 17)) {
    /*                             ^         */
#ifdef IPTOS_RELIABILITY
      *iv_return = IPTOS_RELIABILITY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_LABEL_SIZE", 17)) {
    /*                             ^         */
#ifdef LIBNET_LABEL_SIZE
      *iv_return = LIBNET_LABEL_SIZE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_LIL_ENDIAN", 17)) {
    /*                             ^         */
#ifdef LIBNET_LIL_ENDIAN
      *iv_return = LIBNET_LIL_ENDIAN;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'K':
    if (memEQ(name, "LIBNET_802_1X_KEY", 17)) {
    /*                             ^         */
#ifdef LIBNET_802_1X_KEY
      *iv_return = LIBNET_802_1X_KEY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_MAX_PACKET", 17)) {
    /*                             ^         */
#ifdef LIBNET_MAX_PACKET
      *iv_return = LIBNET_MAX_PACKET;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "LIBNET_OSPF_HELLO", 17)) {
    /*                             ^         */
#ifdef LIBNET_OSPF_HELLO
      *iv_return = LIBNET_OSPF_HELLO;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_RPC_CALL_H", 17)) {
    /*                             ^         */
#ifdef LIBNET_RPC_CALL_H
      *iv_return = LIBNET_RPC_CALL_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "ICMP_REDIRECT_NET", 17)) {
    /*                             ^         */
#ifdef ICMP_REDIRECT_NET
      *iv_return = ICMP_REDIRECT_NET;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "ICMP_SOURCEQUENCH", 17)) {
    /*                             ^         */
#ifdef ICMP_SOURCEQUENCH
      *iv_return = ICMP_SOURCEQUENCH;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "ICMP_UNREACH_HOST", 17)) {
    /*                             ^         */
#ifdef ICMP_UNREACH_HOST
      *iv_return = ICMP_UNREACH_HOST;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "ICMP_UNREACH_PORT", 17)) {
    /*                             ^         */
#ifdef ICMP_UNREACH_PORT
      *iv_return = ICMP_UNREACH_PORT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_XFONT", 17)) {
    /*                             ^         */
#ifdef LIBNET_DHCP_XFONT
      *iv_return = LIBNET_DHCP_XFONT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "LIBNET_DHCP_REPLY", 17)) {
    /*                             ^         */
#ifdef LIBNET_DHCP_REPLY
      *iv_return = LIBNET_DHCP_REPLY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "LIBNET_OSPF_LSR_H", 17)) {
    /*                             ^         */
#ifdef LIBNET_OSPF_LSR_H
      *iv_return = LIBNET_OSPF_LSR_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "LIBNET_OSPF_CKSUM", 17)) {
    /*                             ^         */
#ifdef LIBNET_OSPF_CKSUM
      *iv_return = LIBNET_OSPF_CKSUM;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "LIBNET_CDP_PORTID", 17)) {
    /*                             ^         */
#ifdef LIBNET_CDP_PORTID
      *iv_return = LIBNET_CDP_PORTID;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_IPTTL", 17)) {
    /*                             ^         */
#ifdef LIBNET_DHCP_IPTTL
      *iv_return = LIBNET_DHCP_IPTTL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "LIBNET_OSPF_LSU_H", 17)) {
    /*                             ^         */
#ifdef LIBNET_OSPF_LSU_H
      *iv_return = LIBNET_OSPF_LSU_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "LIBNET_CDP_CAP_SR", 17)) {
    /*                             ^         */
#ifdef LIBNET_CDP_CAP_SR
      *iv_return = LIBNET_CDP_CAP_SR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_LS_TYPE_IP", 17)) {
    /*                             ^         */
#ifdef LIBNET_LS_TYPE_IP
      *iv_return = LIBNET_LS_TYPE_IP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_18 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ETHERTYPE_LOOPBACK GRE_VINES_LOOPBACK ICMP_REDIRECT_HOST
     ICMP_ROUTERSOLICIT IN6ADDR_ERROR_INIT LIBNET_802_2SNAP_H
     LIBNET_AS_E_BIT_ON LIBNET_BGP4_OPEN_H LIBNET_BGP4_UPDATE
     LIBNET_CDP_ADDRESS LIBNET_CDP_CAPABIL LIBNET_CDP_CAP_L1F
     LIBNET_CDP_CAP_L2B LIBNET_CDP_CAP_L2S LIBNET_CDP_CAP_L3R
     LIBNET_CDP_CAP_NOI LIBNET_CDP_VERSION LIBNET_DHCP_MSGACK
     LIBNET_DHCP_ROUTER LIBNET_DHCP_TCPTTL LIBNET_ERRBUF_SIZE
     LIBNET_ICMPV4_TS_H LIBNET_IPV6_FRAG_H LIBNET_IPV6_NH_HBH
     LIBNET_LINK_ID_SUB LIBNET_LS_TYPE_NET LIBNET_LS_TYPE_RTR
     LIBNET_MPLS_BOS_ON LIBNET_NTP_MODE_RC LIBNET_NTP_MODE_RP
     LIBNET_NTP_REF_CHU LIBNET_NTP_REF_DCF LIBNET_NTP_REF_GPS
     LIBNET_NTP_REF_MSF LIBNET_NTP_REF_PPS LIBNET_NTP_REF_PTB
     LIBNET_NTP_REF_TDF LIBNET_NTP_REF_WWV LIBNET_OSPF_AUTH_H
     LIBNET_RTR_FLAGS_B LIBNET_RTR_FLAGS_E LIBNET_RTR_FLAGS_W
     LIBNET_TCP_DNSV4_H LIBNET_UDP_DNSV4_H TOKEN_RING_TYPE_IP */
  /* Offset 15 gives the best switch position.  */
  switch (name[15]) {
  case '4':
    if (memEQ(name, "LIBNET_TCP_DNSV4_H", 18)) {
    /*                              ^         */
#ifdef LIBNET_TCP_DNSV4_H
      *iv_return = LIBNET_TCP_DNSV4_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_UDP_DNSV4_H", 18)) {
    /*                              ^         */
#ifdef LIBNET_UDP_DNSV4_H
      *iv_return = LIBNET_UDP_DNSV4_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'A':
    if (memEQ(name, "ETHERTYPE_LOOPBACK", 18)) {
    /*                              ^         */
#ifdef ETHERTYPE_LOOPBACK
      *iv_return = ETHERTYPE_LOOPBACK;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "GRE_VINES_LOOPBACK", 18)) {
    /*                              ^         */
#ifdef GRE_VINES_LOOPBACK
      *iv_return = GRE_VINES_LOOPBACK;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_BGP4_UPDATE", 18)) {
    /*                              ^         */
#ifdef LIBNET_BGP4_UPDATE
      *iv_return = LIBNET_BGP4_UPDATE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_MSGACK", 18)) {
    /*                              ^         */
#ifdef LIBNET_DHCP_MSGACK
      *iv_return = LIBNET_DHCP_MSGACK;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'B':
    if (memEQ(name, "LIBNET_CDP_CAPABIL", 18)) {
    /*                              ^         */
#ifdef LIBNET_CDP_CAPABIL
      *iv_return = LIBNET_CDP_CAPABIL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "ICMP_ROUTERSOLICIT", 18)) {
    /*                              ^         */
#ifdef ICMP_ROUTERSOLICIT
      *iv_return = ICMP_ROUTERSOLICIT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_NTP_REF_CHU", 18)) {
    /*                              ^         */
#ifdef LIBNET_NTP_REF_CHU
      *iv_return = LIBNET_NTP_REF_CHU;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "LIBNET_NTP_REF_DCF", 18)) {
    /*                              ^         */
#ifdef LIBNET_NTP_REF_DCF
      *iv_return = LIBNET_NTP_REF_DCF;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "LIBNET_CDP_ADDRESS", 18)) {
    /*                              ^         */
#ifdef LIBNET_CDP_ADDRESS
      *iv_return = LIBNET_CDP_ADDRESS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'G':
    if (memEQ(name, "LIBNET_IPV6_FRAG_H", 18)) {
    /*                              ^         */
#ifdef LIBNET_IPV6_FRAG_H
      *iv_return = LIBNET_IPV6_FRAG_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_NTP_REF_GPS", 18)) {
    /*                              ^         */
#ifdef LIBNET_NTP_REF_GPS
      *iv_return = LIBNET_NTP_REF_GPS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'H':
    if (memEQ(name, "LIBNET_IPV6_NH_HBH", 18)) {
    /*                              ^         */
#ifdef LIBNET_IPV6_NH_HBH
      *iv_return = LIBNET_IPV6_NH_HBH;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_OSPF_AUTH_H", 18)) {
    /*                              ^         */
#ifdef LIBNET_OSPF_AUTH_H
      *iv_return = LIBNET_OSPF_AUTH_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "LIBNET_CDP_VERSION", 18)) {
    /*                              ^         */
#ifdef LIBNET_CDP_VERSION
      *iv_return = LIBNET_CDP_VERSION;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_ERRBUF_SIZE", 18)) {
    /*                              ^         */
#ifdef LIBNET_ERRBUF_SIZE
      *iv_return = LIBNET_ERRBUF_SIZE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "LIBNET_CDP_CAP_L1F", 18)) {
    /*                              ^         */
#ifdef LIBNET_CDP_CAP_L1F
      *iv_return = LIBNET_CDP_CAP_L1F;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_CDP_CAP_L2B", 18)) {
    /*                              ^         */
#ifdef LIBNET_CDP_CAP_L2B
      *iv_return = LIBNET_CDP_CAP_L2B;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_CDP_CAP_L2S", 18)) {
    /*                              ^         */
#ifdef LIBNET_CDP_CAP_L2S
      *iv_return = LIBNET_CDP_CAP_L2S;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_CDP_CAP_L3R", 18)) {
    /*                              ^         */
#ifdef LIBNET_CDP_CAP_L3R
      *iv_return = LIBNET_CDP_CAP_L3R;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "LIBNET_NTP_REF_MSF", 18)) {
    /*                              ^         */
#ifdef LIBNET_NTP_REF_MSF
      *iv_return = LIBNET_NTP_REF_MSF;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "IN6ADDR_ERROR_INIT", 18)) {
    /*                              ^         */
#ifdef IN6ADDR_ERROR_INIT
      *iv_return = IN6ADDR_ERROR_INIT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_BGP4_OPEN_H", 18)) {
    /*                              ^         */
#ifdef LIBNET_BGP4_OPEN_H
      *iv_return = LIBNET_BGP4_OPEN_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_CDP_CAP_NOI", 18)) {
    /*                              ^         */
#ifdef LIBNET_CDP_CAP_NOI
      *iv_return = LIBNET_CDP_CAP_NOI;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_LS_TYPE_NET", 18)) {
    /*                              ^         */
#ifdef LIBNET_LS_TYPE_NET
      *iv_return = LIBNET_LS_TYPE_NET;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "ICMP_REDIRECT_HOST", 18)) {
    /*                              ^         */
#ifdef ICMP_REDIRECT_HOST
      *iv_return = ICMP_REDIRECT_HOST;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "LIBNET_802_2SNAP_H", 18)) {
    /*                              ^         */
#ifdef LIBNET_802_2SNAP_H
      *iv_return = LIBNET_802_2SNAP_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_NTP_REF_PPS", 18)) {
    /*                              ^         */
#ifdef LIBNET_NTP_REF_PPS
      *iv_return = LIBNET_NTP_REF_PPS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_NTP_REF_PTB", 18)) {
    /*                              ^         */
#ifdef LIBNET_NTP_REF_PTB
      *iv_return = LIBNET_NTP_REF_PTB;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "LIBNET_LS_TYPE_RTR", 18)) {
    /*                              ^         */
#ifdef LIBNET_LS_TYPE_RTR
      *iv_return = LIBNET_LS_TYPE_RTR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "LIBNET_ICMPV4_TS_H", 18)) {
    /*                              ^         */
#ifdef LIBNET_ICMPV4_TS_H
      *iv_return = LIBNET_ICMPV4_TS_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_LINK_ID_SUB", 18)) {
    /*                              ^         */
#ifdef LIBNET_LINK_ID_SUB
      *iv_return = LIBNET_LINK_ID_SUB;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_RTR_FLAGS_B", 18)) {
    /*                              ^         */
#ifdef LIBNET_RTR_FLAGS_B
      *iv_return = LIBNET_RTR_FLAGS_B;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_RTR_FLAGS_E", 18)) {
    /*                              ^         */
#ifdef LIBNET_RTR_FLAGS_E
      *iv_return = LIBNET_RTR_FLAGS_E;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_RTR_FLAGS_W", 18)) {
    /*                              ^         */
#ifdef LIBNET_RTR_FLAGS_W
      *iv_return = LIBNET_RTR_FLAGS_W;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "LIBNET_DHCP_ROUTER", 18)) {
    /*                              ^         */
#ifdef LIBNET_DHCP_ROUTER
      *iv_return = LIBNET_DHCP_ROUTER;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_TCPTTL", 18)) {
    /*                              ^         */
#ifdef LIBNET_DHCP_TCPTTL
      *iv_return = LIBNET_DHCP_TCPTTL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_NTP_REF_TDF", 18)) {
    /*                              ^         */
#ifdef LIBNET_NTP_REF_TDF
      *iv_return = LIBNET_NTP_REF_TDF;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'W':
    if (memEQ(name, "LIBNET_NTP_REF_WWV", 18)) {
    /*                              ^         */
#ifdef LIBNET_NTP_REF_WWV
      *iv_return = LIBNET_NTP_REF_WWV;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "LIBNET_AS_E_BIT_ON", 18)) {
    /*                              ^         */
#ifdef LIBNET_AS_E_BIT_ON
      *iv_return = LIBNET_AS_E_BIT_ON;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_MPLS_BOS_ON", 18)) {
    /*                              ^         */
#ifdef LIBNET_MPLS_BOS_ON
      *iv_return = LIBNET_MPLS_BOS_ON;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_NTP_MODE_RC", 18)) {
    /*                              ^         */
#ifdef LIBNET_NTP_MODE_RC
      *iv_return = LIBNET_NTP_MODE_RC;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_NTP_MODE_RP", 18)) {
    /*                              ^         */
#ifdef LIBNET_NTP_MODE_RP
      *iv_return = LIBNET_NTP_MODE_RP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "TOKEN_RING_TYPE_IP", 18)) {
    /*                              ^         */
#ifdef TOKEN_RING_TYPE_IP
      *iv_return = TOKEN_RING_TYPE_IP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_19 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     GRE_FRAME_RELAY_ARP GRE_RAW_FRAME_RELAY ICMP_TIMXCEED_REASS
     ICMP_UNREACH_TOSNET LIBNET_802_1X_START LIBNET_ARP_ETH_IP_H
     LIBNET_CDP_IPPREFIX LIBNET_CDP_PLATFORM LIBNET_DHCP_IMPSERV
     LIBNET_DHCP_LOGSERV LIBNET_DHCP_LPRSERV LIBNET_DHCP_MESSAGE
     LIBNET_DHCP_MSGNACK LIBNET_DHCP_MTUSIZE LIBNET_DHCP_NBTCPIP
     LIBNET_DHCP_REQUEST LIBNET_DHCP_RESSERV LIBNET_DONT_RESOLVE
     LIBNET_FDDI_FC_REQD LIBNET_LS_TYPE_ASBR LIBNET_MPLS_BOS_OFF
     LIBNET_NTP_REF_ACTS LIBNET_NTP_REF_GOES LIBNET_NTP_REF_LORC
     LIBNET_NTP_REF_OMEG LIBNET_NTP_REF_USNO LIBNET_NTP_REF_WWVB
     LIBNET_NTP_REF_WWVH LIBNET_OSPF_HELLO_H LIBNET_PBLOCK_ARP_H
     LIBNET_PBLOCK_CDP_H LIBNET_PBLOCK_ETH_H LIBNET_PBLOCK_GRE_H
     LIBNET_PBLOCK_IPO_H LIBNET_PBLOCK_ISL_H LIBNET_PBLOCK_NTP_H
     LIBNET_PBLOCK_RIP_H LIBNET_PBLOCK_TCP_H LIBNET_PBLOCK_UDP_H
     LIBNET_PMAP_PROGRAM LIBNET_RTR_TYPE_PTP LIBNET_TOKEN_RING_H
     SEBEK_PROTO_VERSION TOKEN_RING_ADDR_LEN TOKEN_RING_TYPE_ARP */
  /* Offset 15 gives the best switch position.  */
  switch (name[15]) {
  case 'A':
    if (memEQ(name, "LIBNET_LS_TYPE_ASBR", 19)) {
    /*                              ^          */
#ifdef LIBNET_LS_TYPE_ASBR
      *iv_return = LIBNET_LS_TYPE_ASBR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_NTP_REF_ACTS", 19)) {
    /*                              ^          */
#ifdef LIBNET_NTP_REF_ACTS
      *iv_return = LIBNET_NTP_REF_ACTS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "LIBNET_DHCP_NBTCPIP", 19)) {
    /*                              ^          */
#ifdef LIBNET_DHCP_NBTCPIP
      *iv_return = LIBNET_DHCP_NBTCPIP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PBLOCK_TCP_H", 19)) {
    /*                              ^          */
#ifdef LIBNET_PBLOCK_TCP_H
      *iv_return = LIBNET_PBLOCK_TCP_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "LIBNET_PBLOCK_CDP_H", 19)) {
    /*                              ^          */
#ifdef LIBNET_PBLOCK_CDP_H
      *iv_return = LIBNET_PBLOCK_CDP_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PBLOCK_UDP_H", 19)) {
    /*                              ^          */
#ifdef LIBNET_PBLOCK_UDP_H
      *iv_return = LIBNET_PBLOCK_UDP_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "GRE_RAW_FRAME_RELAY", 19)) {
    /*                              ^          */
#ifdef GRE_RAW_FRAME_RELAY
      *iv_return = GRE_RAW_FRAME_RELAY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "ICMP_TIMXCEED_REASS", 19)) {
    /*                              ^          */
#ifdef ICMP_TIMXCEED_REASS
      *iv_return = ICMP_TIMXCEED_REASS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_CDP_IPPREFIX", 19)) {
    /*                              ^          */
#ifdef LIBNET_CDP_IPPREFIX
      *iv_return = LIBNET_CDP_IPPREFIX;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "LIBNET_CDP_PLATFORM", 19)) {
    /*                              ^          */
#ifdef LIBNET_CDP_PLATFORM
      *iv_return = LIBNET_CDP_PLATFORM;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'G':
    if (memEQ(name, "LIBNET_NTP_REF_GOES", 19)) {
    /*                              ^          */
#ifdef LIBNET_NTP_REF_GOES
      *iv_return = LIBNET_NTP_REF_GOES;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PMAP_PROGRAM", 19)) {
    /*                              ^          */
#ifdef LIBNET_PMAP_PROGRAM
      *iv_return = LIBNET_PMAP_PROGRAM;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "LIBNET_ARP_ETH_IP_H", 19)) {
    /*                              ^          */
#ifdef LIBNET_ARP_ETH_IP_H
      *iv_return = LIBNET_ARP_ETH_IP_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PBLOCK_RIP_H", 19)) {
    /*                              ^          */
#ifdef LIBNET_PBLOCK_RIP_H
      *iv_return = LIBNET_PBLOCK_RIP_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "LIBNET_NTP_REF_LORC", 19)) {
    /*                              ^          */
#ifdef LIBNET_NTP_REF_LORC
      *iv_return = LIBNET_NTP_REF_LORC;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_OSPF_HELLO_H", 19)) {
    /*                              ^          */
#ifdef LIBNET_OSPF_HELLO_H
      *iv_return = LIBNET_OSPF_HELLO_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "LIBNET_DHCP_MSGNACK", 19)) {
    /*                              ^          */
#ifdef LIBNET_DHCP_MSGNACK
      *iv_return = LIBNET_DHCP_MSGNACK;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_TOKEN_RING_H", 19)) {
    /*                              ^          */
#ifdef LIBNET_TOKEN_RING_H
      *iv_return = LIBNET_TOKEN_RING_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "LIBNET_DONT_RESOLVE", 19)) {
    /*                              ^          */
#ifdef LIBNET_DONT_RESOLVE
      *iv_return = LIBNET_DONT_RESOLVE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_NTP_REF_OMEG", 19)) {
    /*                              ^          */
#ifdef LIBNET_NTP_REF_OMEG
      *iv_return = LIBNET_NTP_REF_OMEG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "LIBNET_PBLOCK_IPO_H", 19)) {
    /*                              ^          */
#ifdef LIBNET_PBLOCK_IPO_H
      *iv_return = LIBNET_PBLOCK_IPO_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "LIBNET_FDDI_FC_REQD", 19)) {
    /*                              ^          */
#ifdef LIBNET_FDDI_FC_REQD
      *iv_return = LIBNET_FDDI_FC_REQD;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PBLOCK_ARP_H", 19)) {
    /*                              ^          */
#ifdef LIBNET_PBLOCK_ARP_H
      *iv_return = LIBNET_PBLOCK_ARP_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PBLOCK_GRE_H", 19)) {
    /*                              ^          */
#ifdef LIBNET_PBLOCK_GRE_H
      *iv_return = LIBNET_PBLOCK_GRE_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "ICMP_UNREACH_TOSNET", 19)) {
    /*                              ^          */
#ifdef ICMP_UNREACH_TOSNET
      *iv_return = ICMP_UNREACH_TOSNET;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_IMPSERV", 19)) {
    /*                              ^          */
#ifdef LIBNET_DHCP_IMPSERV
      *iv_return = LIBNET_DHCP_IMPSERV;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_LOGSERV", 19)) {
    /*                              ^          */
#ifdef LIBNET_DHCP_LOGSERV
      *iv_return = LIBNET_DHCP_LOGSERV;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_LPRSERV", 19)) {
    /*                              ^          */
#ifdef LIBNET_DHCP_LPRSERV
      *iv_return = LIBNET_DHCP_LPRSERV;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_MESSAGE", 19)) {
    /*                              ^          */
#ifdef LIBNET_DHCP_MESSAGE
      *iv_return = LIBNET_DHCP_MESSAGE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_MTUSIZE", 19)) {
    /*                              ^          */
#ifdef LIBNET_DHCP_MTUSIZE
      *iv_return = LIBNET_DHCP_MTUSIZE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_RESSERV", 19)) {
    /*                              ^          */
#ifdef LIBNET_DHCP_RESSERV
      *iv_return = LIBNET_DHCP_RESSERV;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PBLOCK_ISL_H", 19)) {
    /*                              ^          */
#ifdef LIBNET_PBLOCK_ISL_H
      *iv_return = LIBNET_PBLOCK_ISL_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "SEBEK_PROTO_VERSION", 19)) {
    /*                              ^          */
#ifdef SEBEK_PROTO_VERSION
      *iv_return = SEBEK_PROTO_VERSION;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "LIBNET_802_1X_START", 19)) {
    /*                              ^          */
#ifdef LIBNET_802_1X_START
      *iv_return = LIBNET_802_1X_START;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PBLOCK_ETH_H", 19)) {
    /*                              ^          */
#ifdef LIBNET_PBLOCK_ETH_H
      *iv_return = LIBNET_PBLOCK_ETH_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PBLOCK_NTP_H", 19)) {
    /*                              ^          */
#ifdef LIBNET_PBLOCK_NTP_H
      *iv_return = LIBNET_PBLOCK_NTP_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "LIBNET_DHCP_REQUEST", 19)) {
    /*                              ^          */
#ifdef LIBNET_DHCP_REQUEST
      *iv_return = LIBNET_DHCP_REQUEST;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_NTP_REF_USNO", 19)) {
    /*                              ^          */
#ifdef LIBNET_NTP_REF_USNO
      *iv_return = LIBNET_NTP_REF_USNO;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'W':
    if (memEQ(name, "LIBNET_NTP_REF_WWVB", 19)) {
    /*                              ^          */
#ifdef LIBNET_NTP_REF_WWVB
      *iv_return = LIBNET_NTP_REF_WWVB;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_NTP_REF_WWVH", 19)) {
    /*                              ^          */
#ifdef LIBNET_NTP_REF_WWVH
      *iv_return = LIBNET_NTP_REF_WWVH;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "GRE_FRAME_RELAY_ARP", 19)) {
    /*                              ^          */
#ifdef GRE_FRAME_RELAY_ARP
      *iv_return = GRE_FRAME_RELAY_ARP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_MPLS_BOS_OFF", 19)) {
    /*                              ^          */
#ifdef LIBNET_MPLS_BOS_OFF
      *iv_return = LIBNET_MPLS_BOS_OFF;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_RTR_TYPE_PTP", 19)) {
    /*                              ^          */
#ifdef LIBNET_RTR_TYPE_PTP
      *iv_return = LIBNET_RTR_TYPE_PTP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "TOKEN_RING_ADDR_LEN", 19)) {
    /*                              ^          */
#ifdef TOKEN_RING_ADDR_LEN
      *iv_return = TOKEN_RING_ADDR_LEN;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "TOKEN_RING_TYPE_ARP", 19)) {
    /*                              ^          */
#ifdef TOKEN_RING_TYPE_ARP
      *iv_return = TOKEN_RING_TYPE_ARP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_20 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ICMP_REDIRECT_TOSNET ICMP_UNREACH_SRCFAIL ICMP_UNREACH_TOSHOST
     LIBNET_802_1X_LOGOFF LIBNET_802_1X_PACKET LIBNET_BGP4_HEADER_H
     LIBNET_BGP4_UPDATE_H LIBNET_BOOTP_MIN_LEN LIBNET_CDP_CAP_L2SRB
     LIBNET_DHCP_CLASSSID LIBNET_DHCP_CLIENTID LIBNET_DHCP_DUMPFILE
     LIBNET_DHCP_HOSTNAME LIBNET_DHCP_MSGOFFER LIBNET_DHCP_MTUTABLE
     LIBNET_DHCP_ROOTPATH LIBNET_DHCP_SRCROUTE LIBNET_DHCP_STSERVER
     LIBNET_DHCP_SWAPSERV LIBNET_ICMPV4_ECHO_H LIBNET_ICMPV4_MASK_H
     LIBNET_LS_TYPE_ASEXT LIBNET_NTP_REF_LOCAL LIBNET_ORG_CODE_SIZE
     LIBNET_OSPF_AUTH_MD5 LIBNET_OSPF_LS_NET_H LIBNET_OSPF_LS_RTR_H
     LIBNET_OSPF_LS_SUM_H LIBNET_PBLOCK_DATA_H LIBNET_PBLOCK_FDDI_H
     LIBNET_PBLOCK_IGMP_H LIBNET_PBLOCK_IPDATA LIBNET_PBLOCK_IPV4_H
     LIBNET_PBLOCK_IPV6_H LIBNET_PBLOCK_MPLS_H LIBNET_PBLOCK_OSPF_H
     LIBNET_PBLOCK_TCPO_H LIBNET_PBLOCK_VRRP_H LIBNET_PMAP_PROC_SET
     LIBNET_RPC_LAST_FRAG LIBNET_RTR_TYPE_STUB */
  /* Offset 17 gives the best switch position.  */
  switch (name[17]) {
  case '4':
    if (memEQ(name, "LIBNET_PBLOCK_IPV4_H", 20)) {
    /*                                ^         */
#ifdef LIBNET_PBLOCK_IPV4_H
      *iv_return = LIBNET_PBLOCK_IPV4_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '6':
    if (memEQ(name, "LIBNET_PBLOCK_IPV6_H", 20)) {
    /*                                ^         */
#ifdef LIBNET_PBLOCK_IPV6_H
      *iv_return = LIBNET_PBLOCK_IPV6_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'A':
    if (memEQ(name, "ICMP_UNREACH_SRCFAIL", 20)) {
    /*                                ^         */
#ifdef ICMP_UNREACH_SRCFAIL
      *iv_return = ICMP_UNREACH_SRCFAIL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_HOSTNAME", 20)) {
    /*                                ^         */
#ifdef LIBNET_DHCP_HOSTNAME
      *iv_return = LIBNET_DHCP_HOSTNAME;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_ROOTPATH", 20)) {
    /*                                ^         */
#ifdef LIBNET_DHCP_ROOTPATH
      *iv_return = LIBNET_DHCP_ROOTPATH;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PBLOCK_DATA_H", 20)) {
    /*                                ^         */
#ifdef LIBNET_PBLOCK_DATA_H
      *iv_return = LIBNET_PBLOCK_DATA_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PBLOCK_IPDATA", 20)) {
    /*                                ^         */
#ifdef LIBNET_PBLOCK_IPDATA
      *iv_return = LIBNET_PBLOCK_IPDATA;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'B':
    if (memEQ(name, "LIBNET_DHCP_MTUTABLE", 20)) {
    /*                                ^         */
#ifdef LIBNET_DHCP_MTUTABLE
      *iv_return = LIBNET_DHCP_MTUTABLE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "LIBNET_NTP_REF_LOCAL", 20)) {
    /*                                ^         */
#ifdef LIBNET_NTP_REF_LOCAL
      *iv_return = LIBNET_NTP_REF_LOCAL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "LIBNET_BGP4_UPDATE_H", 20)) {
    /*                                ^         */
#ifdef LIBNET_BGP4_UPDATE_H
      *iv_return = LIBNET_BGP4_UPDATE_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_SWAPSERV", 20)) {
    /*                                ^         */
#ifdef LIBNET_DHCP_SWAPSERV
      *iv_return = LIBNET_DHCP_SWAPSERV;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_LS_TYPE_ASEXT", 20)) {
    /*                                ^         */
#ifdef LIBNET_LS_TYPE_ASEXT
      *iv_return = LIBNET_LS_TYPE_ASEXT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "LIBNET_DHCP_MSGOFFER", 20)) {
    /*                                ^         */
#ifdef LIBNET_DHCP_MSGOFFER
      *iv_return = LIBNET_DHCP_MSGOFFER;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PBLOCK_OSPF_H", 20)) {
    /*                                ^         */
#ifdef LIBNET_PBLOCK_OSPF_H
      *iv_return = LIBNET_PBLOCK_OSPF_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "LIBNET_DHCP_DUMPFILE", 20)) {
    /*                                ^         */
#ifdef LIBNET_DHCP_DUMPFILE
      *iv_return = LIBNET_DHCP_DUMPFILE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_ORG_CODE_SIZE", 20)) {
    /*                                ^         */
#ifdef LIBNET_ORG_CODE_SIZE
      *iv_return = LIBNET_ORG_CODE_SIZE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PBLOCK_FDDI_H", 20)) {
    /*                                ^         */
#ifdef LIBNET_PBLOCK_FDDI_H
      *iv_return = LIBNET_PBLOCK_FDDI_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'K':
    if (memEQ(name, "LIBNET_802_1X_PACKET", 20)) {
    /*                                ^         */
#ifdef LIBNET_802_1X_PACKET
      *iv_return = LIBNET_802_1X_PACKET;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_ICMPV4_MASK_H", 20)) {
    /*                                ^         */
#ifdef LIBNET_ICMPV4_MASK_H
      *iv_return = LIBNET_ICMPV4_MASK_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "LIBNET_BOOTP_MIN_LEN", 20)) {
    /*                                ^         */
#ifdef LIBNET_BOOTP_MIN_LEN
      *iv_return = LIBNET_BOOTP_MIN_LEN;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "LIBNET_OSPF_AUTH_MD5", 20)) {
    /*                                ^         */
#ifdef LIBNET_OSPF_AUTH_MD5
      *iv_return = LIBNET_OSPF_AUTH_MD5;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_OSPF_LS_SUM_H", 20)) {
    /*                                ^         */
#ifdef LIBNET_OSPF_LS_SUM_H
      *iv_return = LIBNET_OSPF_LS_SUM_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "ICMP_REDIRECT_TOSNET", 20)) {
    /*                                ^         */
#ifdef ICMP_REDIRECT_TOSNET
      *iv_return = ICMP_REDIRECT_TOSNET;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "ICMP_UNREACH_TOSHOST", 20)) {
    /*                                ^         */
#ifdef ICMP_UNREACH_TOSHOST
      *iv_return = ICMP_UNREACH_TOSHOST;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_802_1X_LOGOFF", 20)) {
    /*                                ^         */
#ifdef LIBNET_802_1X_LOGOFF
      *iv_return = LIBNET_802_1X_LOGOFF;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_ICMPV4_ECHO_H", 20)) {
    /*                                ^         */
#ifdef LIBNET_ICMPV4_ECHO_H
      *iv_return = LIBNET_ICMPV4_ECHO_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PBLOCK_TCPO_H", 20)) {
    /*                                ^         */
#ifdef LIBNET_PBLOCK_TCPO_H
      *iv_return = LIBNET_PBLOCK_TCPO_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "LIBNET_PBLOCK_IGMP_H", 20)) {
    /*                                ^         */
#ifdef LIBNET_PBLOCK_IGMP_H
      *iv_return = LIBNET_PBLOCK_IGMP_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PBLOCK_VRRP_H", 20)) {
    /*                                ^         */
#ifdef LIBNET_PBLOCK_VRRP_H
      *iv_return = LIBNET_PBLOCK_VRRP_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "LIBNET_BGP4_HEADER_H", 20)) {
    /*                                ^         */
#ifdef LIBNET_BGP4_HEADER_H
      *iv_return = LIBNET_BGP4_HEADER_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_OSPF_LS_RTR_H", 20)) {
    /*                                ^         */
#ifdef LIBNET_OSPF_LS_RTR_H
      *iv_return = LIBNET_OSPF_LS_RTR_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_RPC_LAST_FRAG", 20)) {
    /*                                ^         */
#ifdef LIBNET_RPC_LAST_FRAG
      *iv_return = LIBNET_RPC_LAST_FRAG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "LIBNET_CDP_CAP_L2SRB", 20)) {
    /*                                ^         */
#ifdef LIBNET_CDP_CAP_L2SRB
      *iv_return = LIBNET_CDP_CAP_L2SRB;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_CLASSSID", 20)) {
    /*                                ^         */
#ifdef LIBNET_DHCP_CLASSSID
      *iv_return = LIBNET_DHCP_CLASSSID;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PBLOCK_MPLS_H", 20)) {
    /*                                ^         */
#ifdef LIBNET_PBLOCK_MPLS_H
      *iv_return = LIBNET_PBLOCK_MPLS_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PMAP_PROC_SET", 20)) {
    /*                                ^         */
#ifdef LIBNET_PMAP_PROC_SET
      *iv_return = LIBNET_PMAP_PROC_SET;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "LIBNET_DHCP_CLIENTID", 20)) {
    /*                                ^         */
#ifdef LIBNET_DHCP_CLIENTID
      *iv_return = LIBNET_DHCP_CLIENTID;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_OSPF_LS_NET_H", 20)) {
    /*                                ^         */
#ifdef LIBNET_OSPF_LS_NET_H
      *iv_return = LIBNET_OSPF_LS_NET_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_RTR_TYPE_STUB", 20)) {
    /*                                ^         */
#ifdef LIBNET_RTR_TYPE_STUB
      *iv_return = LIBNET_RTR_TYPE_STUB;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "LIBNET_DHCP_SRCROUTE", 20)) {
    /*                                ^         */
#ifdef LIBNET_DHCP_SRCROUTE
      *iv_return = LIBNET_DHCP_SRCROUTE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'V':
    if (memEQ(name, "LIBNET_DHCP_STSERVER", 20)) {
    /*                                ^         */
#ifdef LIBNET_DHCP_STSERVER
      *iv_return = LIBNET_DHCP_STSERVER;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_21 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     GRE_OSI_NETWORK_LAYER ICMP_REDIRECT_TOSHOST ICMP_TIMXCEED_INTRANS
     ICMP_UNREACH_ISOLATED ICMP_UNREACH_NEEDFRAG ICMP_UNREACH_PROTOCOL
     IGMP_MEMBERSHIP_QUERY LIBNET_802_1Q_CFIMASK LIBNET_802_1Q_PRIMASK
     LIBNET_802_1Q_VIDMASK LIBNET_BGP4_KEEPALIVE LIBNET_DHCP_EXTENPATH
     LIBNET_DHCP_IPFORWARD LIBNET_DHCP_IRCSERVER LIBNET_DHCP_LEASETIME
     LIBNET_DHCP_MSGINFORM LIBNET_DHCP_NISDOMAIN LIBNET_DHCP_RENEWTIME
     LIBNET_DHCP_SERVIDENT LIBNET_DHCP_WWWSERVER LIBNET_FDDI_LLC_FRAME
     LIBNET_IPV6_HBHOPTS_H LIBNET_IPV6_ROUTING_H LIBNET_LINK_ID_IP_DES
     LIBNET_LINK_ID_NBR_ID LIBNET_MAXOPTION_SIZE LIBNET_OSPF_AUTH_NULL
     LIBNET_PBLOCK_802_2_H LIBNET_PBLOCK_802_3_H LIBNET_PBLOCK_DNSV4_H
     LIBNET_PBLOCK_SEBEK_H LIBNET_PBLOCK_TCPDATA LIBNET_PMAP_PROC_DUMP
     LIBNET_PMAP_PROC_NULL LIBNET_RPC_CALL_TCP_H LIBNET_RTR_TYPE_TRANS
     LIBNET_VRRP_AUTH_IPAH LIBNET_VRRP_AUTH_NONE */
  /* Offset 14 gives the best switch position.  */
  switch (name[14]) {
  case '8':
    if (memEQ(name, "LIBNET_PBLOCK_802_2_H", 21)) {
    /*                             ^             */
#ifdef LIBNET_PBLOCK_802_2_H
      *iv_return = LIBNET_PBLOCK_802_2_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PBLOCK_802_3_H", 21)) {
    /*                             ^             */
#ifdef LIBNET_PBLOCK_802_3_H
      *iv_return = LIBNET_PBLOCK_802_3_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'A':
    if (memEQ(name, "LIBNET_DHCP_LEASETIME", 21)) {
    /*                             ^             */
#ifdef LIBNET_DHCP_LEASETIME
      *iv_return = LIBNET_DHCP_LEASETIME;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "LIBNET_802_1Q_CFIMASK", 21)) {
    /*                             ^             */
#ifdef LIBNET_802_1Q_CFIMASK
      *iv_return = LIBNET_802_1Q_CFIMASK;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_IRCSERVER", 21)) {
    /*                             ^             */
#ifdef LIBNET_DHCP_IRCSERVER
      *iv_return = LIBNET_DHCP_IRCSERVER;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_FDDI_LLC_FRAME", 21)) {
    /*                             ^             */
#ifdef LIBNET_FDDI_LLC_FRAME
      *iv_return = LIBNET_FDDI_LLC_FRAME;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "LIBNET_PBLOCK_DNSV4_H", 21)) {
    /*                             ^             */
#ifdef LIBNET_PBLOCK_DNSV4_H
      *iv_return = LIBNET_PBLOCK_DNSV4_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "ICMP_UNREACH_NEEDFRAG", 21)) {
    /*                             ^             */
#ifdef ICMP_UNREACH_NEEDFRAG
      *iv_return = ICMP_UNREACH_NEEDFRAG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_BGP4_KEEPALIVE", 21)) {
    /*                             ^             */
#ifdef LIBNET_BGP4_KEEPALIVE
      *iv_return = LIBNET_BGP4_KEEPALIVE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_RTR_TYPE_TRANS", 21)) {
    /*                             ^             */
#ifdef LIBNET_RTR_TYPE_TRANS
      *iv_return = LIBNET_RTR_TYPE_TRANS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "LIBNET_DHCP_IPFORWARD", 21)) {
    /*                             ^             */
#ifdef LIBNET_DHCP_IPFORWARD
      *iv_return = LIBNET_DHCP_IPFORWARD;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'G':
    if (memEQ(name, "LIBNET_DHCP_MSGINFORM", 21)) {
    /*                             ^             */
#ifdef LIBNET_DHCP_MSGINFORM
      *iv_return = LIBNET_DHCP_MSGINFORM;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'H':
    if (memEQ(name, "LIBNET_IPV6_HBHOPTS_H", 21)) {
    /*                             ^             */
#ifdef LIBNET_IPV6_HBHOPTS_H
      *iv_return = LIBNET_IPV6_HBHOPTS_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "ICMP_TIMXCEED_INTRANS", 21)) {
    /*                             ^             */
#ifdef ICMP_TIMXCEED_INTRANS
      *iv_return = ICMP_TIMXCEED_INTRANS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'K':
    if (memEQ(name, "GRE_OSI_NETWORK_LAYER", 21)) {
    /*                             ^             */
#ifdef GRE_OSI_NETWORK_LAYER
      *iv_return = GRE_OSI_NETWORK_LAYER;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "LIBNET_RPC_CALL_TCP_H", 21)) {
    /*                             ^             */
#ifdef LIBNET_RPC_CALL_TCP_H
      *iv_return = LIBNET_RPC_CALL_TCP_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "LIBNET_DHCP_RENEWTIME", 21)) {
    /*                             ^             */
#ifdef LIBNET_DHCP_RENEWTIME
      *iv_return = LIBNET_DHCP_RENEWTIME;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "LIBNET_MAXOPTION_SIZE", 21)) {
    /*                             ^             */
#ifdef LIBNET_MAXOPTION_SIZE
      *iv_return = LIBNET_MAXOPTION_SIZE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PMAP_PROC_DUMP", 21)) {
    /*                             ^             */
#ifdef LIBNET_PMAP_PROC_DUMP
      *iv_return = LIBNET_PMAP_PROC_DUMP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PMAP_PROC_NULL", 21)) {
    /*                             ^             */
#ifdef LIBNET_PMAP_PROC_NULL
      *iv_return = LIBNET_PMAP_PROC_NULL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "IGMP_MEMBERSHIP_QUERY", 21)) {
    /*                             ^             */
#ifdef IGMP_MEMBERSHIP_QUERY
      *iv_return = IGMP_MEMBERSHIP_QUERY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_802_1Q_PRIMASK", 21)) {
    /*                             ^             */
#ifdef LIBNET_802_1Q_PRIMASK
      *iv_return = LIBNET_802_1Q_PRIMASK;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "ICMP_UNREACH_PROTOCOL", 21)) {
    /*                             ^             */
#ifdef ICMP_UNREACH_PROTOCOL
      *iv_return = ICMP_UNREACH_PROTOCOL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_SERVIDENT", 21)) {
    /*                             ^             */
#ifdef LIBNET_DHCP_SERVIDENT
      *iv_return = LIBNET_DHCP_SERVIDENT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "ICMP_UNREACH_ISOLATED", 21)) {
    /*                             ^             */
#ifdef ICMP_UNREACH_ISOLATED
      *iv_return = ICMP_UNREACH_ISOLATED;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_NISDOMAIN", 21)) {
    /*                             ^             */
#ifdef LIBNET_DHCP_NISDOMAIN
      *iv_return = LIBNET_DHCP_NISDOMAIN;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PBLOCK_SEBEK_H", 21)) {
    /*                             ^             */
#ifdef LIBNET_PBLOCK_SEBEK_H
      *iv_return = LIBNET_PBLOCK_SEBEK_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "ICMP_REDIRECT_TOSHOST", 21)) {
    /*                             ^             */
#ifdef ICMP_REDIRECT_TOSHOST
      *iv_return = ICMP_REDIRECT_TOSHOST;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_EXTENPATH", 21)) {
    /*                             ^             */
#ifdef LIBNET_DHCP_EXTENPATH
      *iv_return = LIBNET_DHCP_EXTENPATH;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_OSPF_AUTH_NULL", 21)) {
    /*                             ^             */
#ifdef LIBNET_OSPF_AUTH_NULL
      *iv_return = LIBNET_OSPF_AUTH_NULL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PBLOCK_TCPDATA", 21)) {
    /*                             ^             */
#ifdef LIBNET_PBLOCK_TCPDATA
      *iv_return = LIBNET_PBLOCK_TCPDATA;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_VRRP_AUTH_IPAH", 21)) {
    /*                             ^             */
#ifdef LIBNET_VRRP_AUTH_IPAH
      *iv_return = LIBNET_VRRP_AUTH_IPAH;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_VRRP_AUTH_NONE", 21)) {
    /*                             ^             */
#ifdef LIBNET_VRRP_AUTH_NONE
      *iv_return = LIBNET_VRRP_AUTH_NONE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "LIBNET_IPV6_ROUTING_H", 21)) {
    /*                             ^             */
#ifdef LIBNET_IPV6_ROUTING_H
      *iv_return = LIBNET_IPV6_ROUTING_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'V':
    if (memEQ(name, "LIBNET_802_1Q_VIDMASK", 21)) {
    /*                             ^             */
#ifdef LIBNET_802_1Q_VIDMASK
      *iv_return = LIBNET_802_1Q_VIDMASK;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'W':
    if (memEQ(name, "LIBNET_DHCP_WWWSERVER", 21)) {
    /*                             ^             */
#ifdef LIBNET_DHCP_WWWSERVER
      *iv_return = LIBNET_DHCP_WWWSERVER;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "LIBNET_LINK_ID_IP_DES", 21)) {
    /*                             ^             */
#ifdef LIBNET_LINK_ID_IP_DES
      *iv_return = LIBNET_LINK_ID_IP_DES;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_LINK_ID_NBR_ID", 21)) {
    /*                             ^             */
#ifdef LIBNET_LINK_ID_NBR_ID
      *iv_return = LIBNET_LINK_ID_NBR_ID;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_22 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     LIBNET_802_1X_ENCASFAL LIBNET_DHCP_ARPTIMEOUT LIBNET_DHCP_COOKIESERV
     LIBNET_DHCP_DOMAINNAME LIBNET_DHCP_ETHERENCAP LIBNET_DHCP_MASKSUPPLY
     LIBNET_DHCP_MAXASMSIZE LIBNET_DHCP_MAXMSGSIZE LIBNET_DHCP_MSGDECLINE
     LIBNET_DHCP_MSGRELEASE LIBNET_DHCP_MSGREQUEST LIBNET_DHCP_MTUTIMEOUT
     LIBNET_DHCP_NAMESERVER LIBNET_DHCP_NBTCPSCOPE LIBNET_DHCP_NISSERVERS
     LIBNET_DHCP_NNTPSERVER LIBNET_DHCP_POP3SERVER LIBNET_DHCP_REBINDTIME
     LIBNET_DHCP_SMTPSERVER LIBNET_DHCP_STDASERVER LIBNET_DHCP_SUBNETMASK
     LIBNET_DHCP_TIMEOFFSET LIBNET_DHCP_TIMESERVER LIBNET_FDDI_48BIT_ADDR
     LIBNET_IPSEC_ESP_FTR_H LIBNET_IPSEC_ESP_HDR_H LIBNET_IPV6_DESTOPTS_H
     LIBNET_IPV6_NH_ROUTING LIBNET_PBLOCK_802_1Q_H LIBNET_PBLOCK_802_1X_H
     LIBNET_PBLOCK_DHCPV4_H LIBNET_PBLOCK_ICMPV4_H LIBNET_PBLOCK_LS_NET_H
     LIBNET_PBLOCK_LS_RTR_H LIBNET_PBLOCK_LS_SUM_H LIBNET_PMAP_PROC_BCAST
     LIBNET_PMAP_PROC_UNSET LIBNET_VRRP_VERSION_01 LIBNET_VRRP_VERSION_02
     TOKEN_RING_TYPE_REVARP */
  /* Offset 14 gives the best switch position.  */
  switch (name[14]) {
  case '8':
    if (memEQ(name, "LIBNET_PBLOCK_802_1Q_H", 22)) {
    /*                             ^              */
#ifdef LIBNET_PBLOCK_802_1Q_H
      *iv_return = LIBNET_PBLOCK_802_1Q_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PBLOCK_802_1X_H", 22)) {
    /*                             ^              */
#ifdef LIBNET_PBLOCK_802_1X_H
      *iv_return = LIBNET_PBLOCK_802_1X_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'B':
    if (memEQ(name, "LIBNET_DHCP_REBINDTIME", 22)) {
    /*                             ^              */
#ifdef LIBNET_DHCP_REBINDTIME
      *iv_return = LIBNET_DHCP_REBINDTIME;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_SUBNETMASK", 22)) {
    /*                             ^              */
#ifdef LIBNET_DHCP_SUBNETMASK
      *iv_return = LIBNET_DHCP_SUBNETMASK;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_FDDI_48BIT_ADDR", 22)) {
    /*                             ^              */
#ifdef LIBNET_FDDI_48BIT_ADDR
      *iv_return = LIBNET_FDDI_48BIT_ADDR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "LIBNET_DHCP_STDASERVER", 22)) {
    /*                             ^              */
#ifdef LIBNET_DHCP_STDASERVER
      *iv_return = LIBNET_DHCP_STDASERVER;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PBLOCK_DHCPV4_H", 22)) {
    /*                             ^              */
#ifdef LIBNET_PBLOCK_DHCPV4_H
      *iv_return = LIBNET_PBLOCK_DHCPV4_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "LIBNET_802_1X_ENCASFAL", 22)) {
    /*                             ^              */
#ifdef LIBNET_802_1X_ENCASFAL
      *iv_return = LIBNET_802_1X_ENCASFAL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "TOKEN_RING_TYPE_REVARP", 22)) {
    /*                             ^              */
#ifdef TOKEN_RING_TYPE_REVARP
      *iv_return = TOKEN_RING_TYPE_REVARP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'G':
    if (memEQ(name, "LIBNET_DHCP_MSGDECLINE", 22)) {
    /*                             ^              */
#ifdef LIBNET_DHCP_MSGDECLINE
      *iv_return = LIBNET_DHCP_MSGDECLINE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_MSGRELEASE", 22)) {
    /*                             ^              */
#ifdef LIBNET_DHCP_MSGRELEASE
      *iv_return = LIBNET_DHCP_MSGRELEASE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_MSGREQUEST", 22)) {
    /*                             ^              */
#ifdef LIBNET_DHCP_MSGREQUEST
      *iv_return = LIBNET_DHCP_MSGREQUEST;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'H':
    if (memEQ(name, "LIBNET_DHCP_ETHERENCAP", 22)) {
    /*                             ^              */
#ifdef LIBNET_DHCP_ETHERENCAP
      *iv_return = LIBNET_DHCP_ETHERENCAP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "LIBNET_PBLOCK_ICMPV4_H", 22)) {
    /*                             ^              */
#ifdef LIBNET_PBLOCK_ICMPV4_H
      *iv_return = LIBNET_PBLOCK_ICMPV4_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "LIBNET_PBLOCK_LS_NET_H", 22)) {
    /*                             ^              */
#ifdef LIBNET_PBLOCK_LS_NET_H
      *iv_return = LIBNET_PBLOCK_LS_NET_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PBLOCK_LS_RTR_H", 22)) {
    /*                             ^              */
#ifdef LIBNET_PBLOCK_LS_RTR_H
      *iv_return = LIBNET_PBLOCK_LS_RTR_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PBLOCK_LS_SUM_H", 22)) {
    /*                             ^              */
#ifdef LIBNET_PBLOCK_LS_SUM_H
      *iv_return = LIBNET_PBLOCK_LS_SUM_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "LIBNET_DHCP_DOMAINNAME", 22)) {
    /*                             ^              */
#ifdef LIBNET_DHCP_DOMAINNAME
      *iv_return = LIBNET_DHCP_DOMAINNAME;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_NAMESERVER", 22)) {
    /*                             ^              */
#ifdef LIBNET_DHCP_NAMESERVER
      *iv_return = LIBNET_DHCP_NAMESERVER;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_TIMEOFFSET", 22)) {
    /*                             ^              */
#ifdef LIBNET_DHCP_TIMEOFFSET
      *iv_return = LIBNET_DHCP_TIMEOFFSET;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_TIMESERVER", 22)) {
    /*                             ^              */
#ifdef LIBNET_DHCP_TIMESERVER
      *iv_return = LIBNET_DHCP_TIMESERVER;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "LIBNET_DHCP_COOKIESERV", 22)) {
    /*                             ^              */
#ifdef LIBNET_DHCP_COOKIESERV
      *iv_return = LIBNET_DHCP_COOKIESERV;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PMAP_PROC_BCAST", 22)) {
    /*                             ^              */
#ifdef LIBNET_PMAP_PROC_BCAST
      *iv_return = LIBNET_PMAP_PROC_BCAST;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PMAP_PROC_UNSET", 22)) {
    /*                             ^              */
#ifdef LIBNET_PMAP_PROC_UNSET
      *iv_return = LIBNET_PMAP_PROC_UNSET;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "LIBNET_DHCP_ARPTIMEOUT", 22)) {
    /*                             ^              */
#ifdef LIBNET_DHCP_ARPTIMEOUT
      *iv_return = LIBNET_DHCP_ARPTIMEOUT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_POP3SERVER", 22)) {
    /*                             ^              */
#ifdef LIBNET_DHCP_POP3SERVER
      *iv_return = LIBNET_DHCP_POP3SERVER;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "LIBNET_VRRP_VERSION_01", 22)) {
    /*                             ^              */
#ifdef LIBNET_VRRP_VERSION_01
      *iv_return = LIBNET_VRRP_VERSION_01;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_VRRP_VERSION_02", 22)) {
    /*                             ^              */
#ifdef LIBNET_VRRP_VERSION_02
      *iv_return = LIBNET_VRRP_VERSION_02;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "LIBNET_DHCP_MASKSUPPLY", 22)) {
    /*                             ^              */
#ifdef LIBNET_DHCP_MASKSUPPLY
      *iv_return = LIBNET_DHCP_MASKSUPPLY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_NISSERVERS", 22)) {
    /*                             ^              */
#ifdef LIBNET_DHCP_NISSERVERS
      *iv_return = LIBNET_DHCP_NISSERVERS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_IPSEC_ESP_FTR_H", 22)) {
    /*                             ^              */
#ifdef LIBNET_IPSEC_ESP_FTR_H
      *iv_return = LIBNET_IPSEC_ESP_FTR_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_IPSEC_ESP_HDR_H", 22)) {
    /*                             ^              */
#ifdef LIBNET_IPSEC_ESP_HDR_H
      *iv_return = LIBNET_IPSEC_ESP_HDR_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_IPV6_DESTOPTS_H", 22)) {
    /*                             ^              */
#ifdef LIBNET_IPV6_DESTOPTS_H
      *iv_return = LIBNET_IPV6_DESTOPTS_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "LIBNET_DHCP_NBTCPSCOPE", 22)) {
    /*                             ^              */
#ifdef LIBNET_DHCP_NBTCPSCOPE
      *iv_return = LIBNET_DHCP_NBTCPSCOPE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_NNTPSERVER", 22)) {
    /*                             ^              */
#ifdef LIBNET_DHCP_NNTPSERVER
      *iv_return = LIBNET_DHCP_NNTPSERVER;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_SMTPSERVER", 22)) {
    /*                             ^              */
#ifdef LIBNET_DHCP_SMTPSERVER
      *iv_return = LIBNET_DHCP_SMTPSERVER;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "LIBNET_DHCP_MTUTIMEOUT", 22)) {
    /*                             ^              */
#ifdef LIBNET_DHCP_MTUTIMEOUT
      *iv_return = LIBNET_DHCP_MTUTIMEOUT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'X':
    if (memEQ(name, "LIBNET_DHCP_MAXASMSIZE", 22)) {
    /*                             ^              */
#ifdef LIBNET_DHCP_MAXASMSIZE
      *iv_return = LIBNET_DHCP_MAXASMSIZE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_MAXMSGSIZE", 22)) {
    /*                             ^              */
#ifdef LIBNET_DHCP_MAXMSGSIZE
      *iv_return = LIBNET_DHCP_MAXMSGSIZE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "LIBNET_IPV6_NH_ROUTING", 22)) {
    /*                             ^              */
#ifdef LIBNET_IPV6_NH_ROUTING
      *iv_return = LIBNET_IPV6_NH_ROUTING;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_23 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ICMP_UNREACH_NET_PROHIB LIBNET_BGP4_BAD_PEER_AS LIBNET_BGP4_MARKER_SIZE
     LIBNET_DHCP_DOROUTEDISC LIBNET_DHCP_MESSAGETYPE LIBNET_DHCP_MSGDISCOVER
     LIBNET_DHCP_NISTIMESERV LIBNET_DHCP_STATICROUTE LIBNET_DHCP_XDISPLAYMGR
     LIBNET_ICMPV4_UNREACH_H LIBNET_IPV6_NH_DESTOPTS LIBNET_IPV6_NH_FRAGMENT
     LIBNET_OSPF_AUTH_SIMPLE LIBNET_OSPF_LS_AS_EXT_H LIBNET_PBLOCK_GRE_SRE_H
     LIBNET_PBLOCK_STP_TCN_H LIBNET_PMAP_PROC_CALLIT LIBNET_PTAG_INITIALIZER
     LIBNET_TOKEN_RING_FRAME LIBNET_VRRP_AUTH_PASSWD LIBNET_VRRP_TYPE_ADVERT */
  /* Offset 20 gives the best switch position.  */
  switch (name[20]) {
  case 'A':
    if (memEQ(name, "LIBNET_TOKEN_RING_FRAME", 23)) {
    /*                                   ^         */
#ifdef LIBNET_TOKEN_RING_FRAME
      *iv_return = LIBNET_TOKEN_RING_FRAME;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "LIBNET_DHCP_NISTIMESERV", 23)) {
    /*                                   ^         */
#ifdef LIBNET_DHCP_NISTIMESERV
      *iv_return = LIBNET_DHCP_NISTIMESERV;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_IPV6_NH_FRAGMENT", 23)) {
    /*                                   ^         */
#ifdef LIBNET_IPV6_NH_FRAGMENT
      *iv_return = LIBNET_IPV6_NH_FRAGMENT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PBLOCK_GRE_SRE_H", 23)) {
    /*                                   ^         */
#ifdef LIBNET_PBLOCK_GRE_SRE_H
      *iv_return = LIBNET_PBLOCK_GRE_SRE_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_VRRP_TYPE_ADVERT", 23)) {
    /*                                   ^         */
#ifdef LIBNET_VRRP_TYPE_ADVERT
      *iv_return = LIBNET_VRRP_TYPE_ADVERT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'H':
    if (memEQ(name, "ICMP_UNREACH_NET_PROHIB", 23)) {
    /*                                   ^         */
#ifdef ICMP_UNREACH_NET_PROHIB
      *iv_return = ICMP_UNREACH_NET_PROHIB;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_ICMPV4_UNREACH_H", 23)) {
    /*                                   ^         */
#ifdef LIBNET_ICMPV4_UNREACH_H
      *iv_return = LIBNET_ICMPV4_UNREACH_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "LIBNET_BGP4_MARKER_SIZE", 23)) {
    /*                                   ^         */
#ifdef LIBNET_BGP4_MARKER_SIZE
      *iv_return = LIBNET_BGP4_MARKER_SIZE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_DOROUTEDISC", 23)) {
    /*                                   ^         */
#ifdef LIBNET_DHCP_DOROUTEDISC
      *iv_return = LIBNET_DHCP_DOROUTEDISC;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "LIBNET_PMAP_PROC_CALLIT", 23)) {
    /*                                   ^         */
#ifdef LIBNET_PMAP_PROC_CALLIT
      *iv_return = LIBNET_PMAP_PROC_CALLIT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "LIBNET_DHCP_XDISPLAYMGR", 23)) {
    /*                                   ^         */
#ifdef LIBNET_DHCP_XDISPLAYMGR
      *iv_return = LIBNET_DHCP_XDISPLAYMGR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "LIBNET_PBLOCK_STP_TCN_H", 23)) {
    /*                                   ^         */
#ifdef LIBNET_PBLOCK_STP_TCN_H
      *iv_return = LIBNET_PBLOCK_STP_TCN_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "LIBNET_IPV6_NH_DESTOPTS", 23)) {
    /*                                   ^         */
#ifdef LIBNET_IPV6_NH_DESTOPTS
      *iv_return = LIBNET_IPV6_NH_DESTOPTS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_OSPF_AUTH_SIMPLE", 23)) {
    /*                                   ^         */
#ifdef LIBNET_OSPF_AUTH_SIMPLE
      *iv_return = LIBNET_OSPF_AUTH_SIMPLE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "LIBNET_VRRP_AUTH_PASSWD", 23)) {
    /*                                   ^         */
#ifdef LIBNET_VRRP_AUTH_PASSWD
      *iv_return = LIBNET_VRRP_AUTH_PASSWD;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "LIBNET_OSPF_LS_AS_EXT_H", 23)) {
    /*                                   ^         */
#ifdef LIBNET_OSPF_LS_AS_EXT_H
      *iv_return = LIBNET_OSPF_LS_AS_EXT_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "LIBNET_DHCP_STATICROUTE", 23)) {
    /*                                   ^         */
#ifdef LIBNET_DHCP_STATICROUTE
      *iv_return = LIBNET_DHCP_STATICROUTE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'V':
    if (memEQ(name, "LIBNET_DHCP_MSGDISCOVER", 23)) {
    /*                                   ^         */
#ifdef LIBNET_DHCP_MSGDISCOVER
      *iv_return = LIBNET_DHCP_MSGDISCOVER;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'Y':
    if (memEQ(name, "LIBNET_DHCP_MESSAGETYPE", 23)) {
    /*                                   ^         */
#ifdef LIBNET_DHCP_MESSAGETYPE
      *iv_return = LIBNET_DHCP_MESSAGETYPE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'Z':
    if (memEQ(name, "LIBNET_PTAG_INITIALIZER", 23)) {
    /*                                   ^         */
#ifdef LIBNET_PTAG_INITIALIZER
      *iv_return = LIBNET_PTAG_INITIALIZER;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "LIBNET_BGP4_BAD_PEER_AS", 23)) {
    /*                                   ^         */
#ifdef LIBNET_BGP4_BAD_PEER_AS
      *iv_return = LIBNET_BGP4_BAD_PEER_AS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_24 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ICMP_PARAMPROB_OPTABSENT ICMP_UNREACH_HOST_PROHIB ICMP_UNREACH_NET_UNKNOWN
     LIBNET_BGP4_NOTIFICATION LIBNET_DHCP_BOOTFILESIZE LIBNET_DHCP_DISCOVERADDR
     LIBNET_DHCP_DOMASKDISCOV LIBNET_DHCP_FINGERSERVER LIBNET_DHCP_LOCALSUBNETS
     LIBNET_DHCP_PARAMREQUEST LIBNET_DHCP_POLICYFILTER LIBNET_DHCP_TCPKEEPALIVE
     LIBNET_DHCP_TRAILERENCAP LIBNET_DHCP_VENDSPECIFIC LIBNET_ICMPV4_REDIRECT_H
     LIBNET_ICMPV4_TIMXCEED_H LIBNET_PBLOCK_IPSEC_AH_H LIBNET_PBLOCK_OSPF_CKSUM
     LIBNET_PBLOCK_OSPF_DBD_H LIBNET_PBLOCK_OSPF_LSA_H LIBNET_PBLOCK_OSPF_LSR_H
     LIBNET_PBLOCK_OSPF_LSU_H LIBNET_PBLOCK_RPC_CALL_H LIBNET_PBLOCK_STP_CONF_H
     LIBNET_PMAP_PROC_GETADDR LIBNET_PMAP_PROC_GETSTAT LIBNET_PMAP_PROC_GETTIME
     */
  /* Offset 21 gives the best switch position.  */
  switch (name[21]) {
  case 'A':
    if (memEQ(name, "LIBNET_PBLOCK_OSPF_LSA_H", 24)) {
    /*                                    ^         */
#ifdef LIBNET_PBLOCK_OSPF_LSA_H
      *iv_return = LIBNET_PBLOCK_OSPF_LSA_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "LIBNET_DHCP_DOMASKDISCOV", 24)) {
    /*                                    ^         */
#ifdef LIBNET_DHCP_DOMASKDISCOV
      *iv_return = LIBNET_DHCP_DOMASKDISCOV;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_TRAILERENCAP", 24)) {
    /*                                    ^         */
#ifdef LIBNET_DHCP_TRAILERENCAP
      *iv_return = LIBNET_DHCP_TRAILERENCAP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "LIBNET_DHCP_DISCOVERADDR", 24)) {
    /*                                    ^         */
#ifdef LIBNET_DHCP_DISCOVERADDR
      *iv_return = LIBNET_DHCP_DISCOVERADDR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_ICMPV4_TIMXCEED_H", 24)) {
    /*                                    ^         */
#ifdef LIBNET_ICMPV4_TIMXCEED_H
      *iv_return = LIBNET_ICMPV4_TIMXCEED_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PBLOCK_OSPF_DBD_H", 24)) {
    /*                                    ^         */
#ifdef LIBNET_PBLOCK_OSPF_DBD_H
      *iv_return = LIBNET_PBLOCK_OSPF_DBD_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PMAP_PROC_GETADDR", 24)) {
    /*                                    ^         */
#ifdef LIBNET_PMAP_PROC_GETADDR
      *iv_return = LIBNET_PMAP_PROC_GETADDR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "ICMP_PARAMPROB_OPTABSENT", 24)) {
    /*                                    ^         */
#ifdef ICMP_PARAMPROB_OPTABSENT
      *iv_return = ICMP_PARAMPROB_OPTABSENT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_LOCALSUBNETS", 24)) {
    /*                                    ^         */
#ifdef LIBNET_DHCP_LOCALSUBNETS
      *iv_return = LIBNET_DHCP_LOCALSUBNETS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_PARAMREQUEST", 24)) {
    /*                                    ^         */
#ifdef LIBNET_DHCP_PARAMREQUEST
      *iv_return = LIBNET_DHCP_PARAMREQUEST;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "LIBNET_DHCP_VENDSPECIFIC", 24)) {
    /*                                    ^         */
#ifdef LIBNET_DHCP_VENDSPECIFIC
      *iv_return = LIBNET_DHCP_VENDSPECIFIC;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PBLOCK_STP_CONF_H", 24)) {
    /*                                    ^         */
#ifdef LIBNET_PBLOCK_STP_CONF_H
      *iv_return = LIBNET_PBLOCK_STP_CONF_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'H':
    if (memEQ(name, "ICMP_UNREACH_HOST_PROHIB", 24)) {
    /*                                    ^         */
#ifdef ICMP_UNREACH_HOST_PROHIB
      *iv_return = ICMP_UNREACH_HOST_PROHIB;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PBLOCK_IPSEC_AH_H", 24)) {
    /*                                    ^         */
#ifdef LIBNET_PBLOCK_IPSEC_AH_H
      *iv_return = LIBNET_PBLOCK_IPSEC_AH_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "LIBNET_BGP4_NOTIFICATION", 24)) {
    /*                                    ^         */
#ifdef LIBNET_BGP4_NOTIFICATION
      *iv_return = LIBNET_BGP4_NOTIFICATION;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_BOOTFILESIZE", 24)) {
    /*                                    ^         */
#ifdef LIBNET_DHCP_BOOTFILESIZE
      *iv_return = LIBNET_DHCP_BOOTFILESIZE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_DHCP_TCPKEEPALIVE", 24)) {
    /*                                    ^         */
#ifdef LIBNET_DHCP_TCPKEEPALIVE
      *iv_return = LIBNET_DHCP_TCPKEEPALIVE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PMAP_PROC_GETTIME", 24)) {
    /*                                    ^         */
#ifdef LIBNET_PMAP_PROC_GETTIME
      *iv_return = LIBNET_PMAP_PROC_GETTIME;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "LIBNET_PBLOCK_RPC_CALL_H", 24)) {
    /*                                    ^         */
#ifdef LIBNET_PBLOCK_RPC_CALL_H
      *iv_return = LIBNET_PBLOCK_RPC_CALL_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "ICMP_UNREACH_NET_UNKNOWN", 24)) {
    /*                                    ^         */
#ifdef ICMP_UNREACH_NET_UNKNOWN
      *iv_return = ICMP_UNREACH_NET_UNKNOWN;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "LIBNET_PBLOCK_OSPF_LSR_H", 24)) {
    /*                                    ^         */
#ifdef LIBNET_PBLOCK_OSPF_LSR_H
      *iv_return = LIBNET_PBLOCK_OSPF_LSR_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "LIBNET_PBLOCK_OSPF_CKSUM", 24)) {
    /*                                    ^         */
#ifdef LIBNET_PBLOCK_OSPF_CKSUM
      *iv_return = LIBNET_PBLOCK_OSPF_CKSUM;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "LIBNET_DHCP_POLICYFILTER", 24)) {
    /*                                    ^         */
#ifdef LIBNET_DHCP_POLICYFILTER
      *iv_return = LIBNET_DHCP_POLICYFILTER;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_ICMPV4_REDIRECT_H", 24)) {
    /*                                    ^         */
#ifdef LIBNET_ICMPV4_REDIRECT_H
      *iv_return = LIBNET_ICMPV4_REDIRECT_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PMAP_PROC_GETSTAT", 24)) {
    /*                                    ^         */
#ifdef LIBNET_PMAP_PROC_GETSTAT
      *iv_return = LIBNET_PMAP_PROC_GETSTAT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "LIBNET_PBLOCK_OSPF_LSU_H", 24)) {
    /*                                    ^         */
#ifdef LIBNET_PBLOCK_OSPF_LSU_H
      *iv_return = LIBNET_PBLOCK_OSPF_LSU_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'V':
    if (memEQ(name, "LIBNET_DHCP_FINGERSERVER", 24)) {
    /*                                    ^         */
#ifdef LIBNET_DHCP_FINGERSERVER
      *iv_return = LIBNET_DHCP_FINGERSERVER;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_25 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     GRE_IP_AUTONOMOUS_SYSTEMS ICMP_UNREACH_HOST_UNKNOWN
     IGMP_V1_MEMBERSHIP_REPORT IGMP_V2_MEMBERSHIP_REPORT
     LIBNET_DHCP_BROADCASTADDR LIBNET_DHCP_MOBILEIPAGENT
     LIBNET_DHCP_NISPLUSDOMAIN LIBNET_DHCP_ROUTERSOLICIT
     LIBNET_PBLOCK_802_2SNAP_H LIBNET_PBLOCK_BGP4_OPEN_H
     LIBNET_PBLOCK_DO_CHECKSUM LIBNET_PBLOCK_ICMPV4_TS_H
     LIBNET_PBLOCK_IPV6_FRAG_H LIBNET_PBLOCK_LS_AS_EXT_H
     LIBNET_PBLOCK_OSPF_AUTH_H LIBNET_PMAP_PROC_INDIRECT */
  /* Offset 20 gives the best switch position.  */
  switch (name[20]) {
  case 'A':
    if (memEQ(name, "LIBNET_DHCP_MOBILEIPAGENT", 25)) {
    /*                                   ^           */
#ifdef LIBNET_DHCP_MOBILEIPAGENT
      *iv_return = LIBNET_DHCP_MOBILEIPAGENT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "LIBNET_PBLOCK_DO_CHECKSUM", 25)) {
    /*                                   ^           */
#ifdef LIBNET_PBLOCK_DO_CHECKSUM
      *iv_return = LIBNET_PBLOCK_DO_CHECKSUM;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "IGMP_V1_MEMBERSHIP_REPORT", 25)) {
    /*                                   ^           */
#ifdef IGMP_V1_MEMBERSHIP_REPORT
      *iv_return = IGMP_V1_MEMBERSHIP_REPORT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "IGMP_V2_MEMBERSHIP_REPORT", 25)) {
    /*                                   ^           */
#ifdef IGMP_V2_MEMBERSHIP_REPORT
      *iv_return = IGMP_V2_MEMBERSHIP_REPORT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_PBLOCK_LS_AS_EXT_H", 25)) {
    /*                                   ^           */
#ifdef LIBNET_PBLOCK_LS_AS_EXT_H
      *iv_return = LIBNET_PBLOCK_LS_AS_EXT_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "LIBNET_PMAP_PROC_INDIRECT", 25)) {
    /*                                   ^           */
#ifdef LIBNET_PMAP_PROC_INDIRECT
      *iv_return = LIBNET_PMAP_PROC_INDIRECT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'K':
    if (memEQ(name, "ICMP_UNREACH_HOST_UNKNOWN", 25)) {
    /*                                   ^           */
#ifdef ICMP_UNREACH_HOST_UNKNOWN
      *iv_return = ICMP_UNREACH_HOST_UNKNOWN;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "LIBNET_DHCP_ROUTERSOLICIT", 25)) {
    /*                                   ^           */
#ifdef LIBNET_DHCP_ROUTERSOLICIT
      *iv_return = LIBNET_DHCP_ROUTERSOLICIT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "LIBNET_PBLOCK_802_2SNAP_H", 25)) {
    /*                                   ^           */
#ifdef LIBNET_PBLOCK_802_2SNAP_H
      *iv_return = LIBNET_PBLOCK_802_2SNAP_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "LIBNET_DHCP_NISPLUSDOMAIN", 25)) {
    /*                                   ^           */
#ifdef LIBNET_DHCP_NISPLUSDOMAIN
      *iv_return = LIBNET_DHCP_NISPLUSDOMAIN;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "LIBNET_PBLOCK_BGP4_OPEN_H", 25)) {
    /*                                   ^           */
#ifdef LIBNET_PBLOCK_BGP4_OPEN_H
      *iv_return = LIBNET_PBLOCK_BGP4_OPEN_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "LIBNET_PBLOCK_IPV6_FRAG_H", 25)) {
    /*                                   ^           */
#ifdef LIBNET_PBLOCK_IPV6_FRAG_H
      *iv_return = LIBNET_PBLOCK_IPV6_FRAG_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "GRE_IP_AUTONOMOUS_SYSTEMS", 25)) {
    /*                                   ^           */
#ifdef GRE_IP_AUTONOMOUS_SYSTEMS
      *iv_return = GRE_IP_AUTONOMOUS_SYSTEMS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "LIBNET_DHCP_BROADCASTADDR", 25)) {
    /*                                   ^           */
#ifdef LIBNET_DHCP_BROADCASTADDR
      *iv_return = LIBNET_DHCP_BROADCASTADDR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "LIBNET_PBLOCK_OSPF_AUTH_H", 25)) {
    /*                                   ^           */
#ifdef LIBNET_PBLOCK_OSPF_AUTH_H
      *iv_return = LIBNET_PBLOCK_OSPF_AUTH_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "LIBNET_PBLOCK_ICMPV4_TS_H", 25)) {
    /*                                   ^           */
#ifdef LIBNET_PBLOCK_ICMPV4_TS_H
      *iv_return = LIBNET_PBLOCK_ICMPV4_TS_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_26 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ICMP_UNREACH_FILTER_PROHIB LIBNET_BGP4_NOTIFICATION_H
     LIBNET_DHCP_NISPLUSSERVERS LIBNET_DHCP_OPTIONOVERLOAD
     LIBNET_NTP_STRATUM_PRIMARY LIBNET_NTP_STRATUM_UNAVAIL
     LIBNET_PBLOCK_OSPF_HELLO_H LIBNET_PBLOCK_TOKEN_RING_H */
  /* Offset 16 gives the best switch position.  */
  switch (name[16]) {
  case 'F':
    if (memEQ(name, "LIBNET_BGP4_NOTIFICATION_H", 26)) {
    /*                               ^                */
#ifdef LIBNET_BGP4_NOTIFICATION_H
      *iv_return = LIBNET_BGP4_NOTIFICATION_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'K':
    if (memEQ(name, "LIBNET_PBLOCK_TOKEN_RING_H", 26)) {
    /*                               ^                */
#ifdef LIBNET_PBLOCK_TOKEN_RING_H
      *iv_return = LIBNET_PBLOCK_TOKEN_RING_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "LIBNET_DHCP_NISPLUSSERVERS", 26)) {
    /*                               ^                */
#ifdef LIBNET_DHCP_NISPLUSSERVERS
      *iv_return = LIBNET_DHCP_NISPLUSSERVERS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "LIBNET_DHCP_OPTIONOVERLOAD", 26)) {
    /*                               ^                */
#ifdef LIBNET_DHCP_OPTIONOVERLOAD
      *iv_return = LIBNET_DHCP_OPTIONOVERLOAD;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "LIBNET_PBLOCK_OSPF_HELLO_H", 26)) {
    /*                               ^                */
#ifdef LIBNET_PBLOCK_OSPF_HELLO_H
      *iv_return = LIBNET_PBLOCK_OSPF_HELLO_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "ICMP_UNREACH_FILTER_PROHIB", 26)) {
    /*                               ^                */
#ifdef ICMP_UNREACH_FILTER_PROHIB
      *iv_return = ICMP_UNREACH_FILTER_PROHIB;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "LIBNET_NTP_STRATUM_PRIMARY", 26)) {
    /*                               ^                */
#ifdef LIBNET_NTP_STRATUM_PRIMARY
      *iv_return = LIBNET_NTP_STRATUM_PRIMARY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "LIBNET_NTP_STRATUM_UNAVAIL", 26)) {
    /*                               ^                */
#ifdef LIBNET_NTP_STRATUM_UNAVAIL
      *iv_return = LIBNET_NTP_STRATUM_UNAVAIL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_27 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     LIBNET_DHCP_TCPALIVEGARBAGE LIBNET_PBLOCK_BGP4_HEADER_H
     LIBNET_PBLOCK_BGP4_UPDATE_H LIBNET_PBLOCK_ICMPV4_ECHO_H
     LIBNET_PBLOCK_ICMPV4_MASK_H LIBNET_TOKEN_RING_LLC_FRAME */
  /* Offset 23 gives the best switch position.  */
  switch (name[23]) {
  case 'B':
    if (memEQ(name, "LIBNET_DHCP_TCPALIVEGARBAGE", 27)) {
    /*                                      ^          */
#ifdef LIBNET_DHCP_TCPALIVEGARBAGE
      *iv_return = LIBNET_DHCP_TCPALIVEGARBAGE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "LIBNET_PBLOCK_BGP4_HEADER_H", 27)) {
    /*                                      ^          */
#ifdef LIBNET_PBLOCK_BGP4_HEADER_H
      *iv_return = LIBNET_PBLOCK_BGP4_HEADER_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'H':
    if (memEQ(name, "LIBNET_PBLOCK_ICMPV4_ECHO_H", 27)) {
    /*                                      ^          */
#ifdef LIBNET_PBLOCK_ICMPV4_ECHO_H
      *iv_return = LIBNET_PBLOCK_ICMPV4_ECHO_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "LIBNET_TOKEN_RING_LLC_FRAME", 27)) {
    /*                                      ^          */
#ifdef LIBNET_TOKEN_RING_LLC_FRAME
      *iv_return = LIBNET_TOKEN_RING_LLC_FRAME;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "LIBNET_PBLOCK_ICMPV4_MASK_H", 27)) {
    /*                                      ^          */
#ifdef LIBNET_PBLOCK_ICMPV4_MASK_H
      *iv_return = LIBNET_PBLOCK_ICMPV4_MASK_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "LIBNET_PBLOCK_BGP4_UPDATE_H", 27)) {
    /*                                      ^          */
#ifdef LIBNET_PBLOCK_BGP4_UPDATE_H
      *iv_return = LIBNET_PBLOCK_BGP4_UPDATE_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_28 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ICMP_UNREACH_HOST_PRECEDENCE LIBNET_BGP4_BAD_MESSAGE_TYPE
     LIBNET_PBLOCK_IPV6_HBHOPTS_H LIBNET_PBLOCK_IPV6_ROUTING_H
     LIBNET_PMAP_PROC_GETADDRLIST LIBNET_PMAP_PROC_GETVERSADDR
     LIBNET_PMAP_PROC_TADDR2UADDR LIBNET_PMAP_PROC_UADDR2TADDR */
  /* Offset 23 gives the best switch position.  */
  switch (name[23]) {
  case 'D':
    if (memEQ(name, "ICMP_UNREACH_HOST_PRECEDENCE", 28)) {
    /*                                      ^           */
#ifdef ICMP_UNREACH_HOST_PRECEDENCE
      *iv_return = ICMP_UNREACH_HOST_PRECEDENCE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "LIBNET_PBLOCK_IPV6_ROUTING_H", 28)) {
    /*                                      ^           */
#ifdef LIBNET_PBLOCK_IPV6_ROUTING_H
      *iv_return = LIBNET_PBLOCK_IPV6_ROUTING_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "LIBNET_PBLOCK_IPV6_HBHOPTS_H", 28)) {
    /*                                      ^           */
#ifdef LIBNET_PBLOCK_IPV6_HBHOPTS_H
      *iv_return = LIBNET_PBLOCK_IPV6_HBHOPTS_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "LIBNET_PMAP_PROC_GETADDRLIST", 28)) {
    /*                                      ^           */
#ifdef LIBNET_PMAP_PROC_GETADDRLIST
      *iv_return = LIBNET_PMAP_PROC_GETADDRLIST;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "LIBNET_PMAP_PROC_GETVERSADDR", 28)) {
    /*                                      ^           */
#ifdef LIBNET_PMAP_PROC_GETVERSADDR
      *iv_return = LIBNET_PMAP_PROC_GETVERSADDR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "LIBNET_PMAP_PROC_UADDR2TADDR", 28)) {
    /*                                      ^           */
#ifdef LIBNET_PMAP_PROC_UADDR2TADDR
      *iv_return = LIBNET_PMAP_PROC_UADDR2TADDR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "LIBNET_PMAP_PROC_TADDR2UADDR", 28)) {
    /*                                      ^           */
#ifdef LIBNET_PMAP_PROC_TADDR2UADDR
      *iv_return = LIBNET_PMAP_PROC_TADDR2UADDR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "LIBNET_BGP4_BAD_MESSAGE_TYPE", 28)) {
    /*                                      ^           */
#ifdef LIBNET_BGP4_BAD_MESSAGE_TYPE
      *iv_return = LIBNET_BGP4_BAD_MESSAGE_TYPE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_29 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     LIBNET_PBLOCK_IPSEC_ESP_FTR_H LIBNET_PBLOCK_IPSEC_ESP_HDR_H
     LIBNET_PBLOCK_IPV6_DESTOPTS_H */
  /* Offset 24 gives the best switch position.  */
  switch (name[24]) {
  case 'F':
    if (memEQ(name, "LIBNET_PBLOCK_IPSEC_ESP_FTR_H", 29)) {
    /*                                       ^           */
#ifdef LIBNET_PBLOCK_IPSEC_ESP_FTR_H
      *iv_return = LIBNET_PBLOCK_IPSEC_ESP_FTR_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'H':
    if (memEQ(name, "LIBNET_PBLOCK_IPSEC_ESP_HDR_H", 29)) {
    /*                                       ^           */
#ifdef LIBNET_PBLOCK_IPSEC_ESP_HDR_H
      *iv_return = LIBNET_PBLOCK_IPSEC_ESP_HDR_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "LIBNET_PBLOCK_IPV6_DESTOPTS_H", 29)) {
    /*                                       ^           */
#ifdef LIBNET_PBLOCK_IPV6_DESTOPTS_H
      *iv_return = LIBNET_PBLOCK_IPV6_DESTOPTS_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_30 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ICMP_UNREACH_PRECEDENCE_CUTOFF LIBNET_BGP4_BAD_BGP_IDENTIFIER
     LIBNET_BGP4_BAD_MESSAGE_LENGTH LIBNET_BGP4_HOLD_TIMER_EXPIRED
     LIBNET_BGP4_OPEN_MESSAGE_ERROR LIBNET_PBLOCK_ICMPV4_UNREACH_H */
  /* Offset 26 gives the best switch position.  */
  switch (name[26]) {
  case 'C':
    if (memEQ(name, "LIBNET_PBLOCK_ICMPV4_UNREACH_H", 30)) {
    /*                                         ^          */
#ifdef LIBNET_PBLOCK_ICMPV4_UNREACH_H
      *iv_return = LIBNET_PBLOCK_ICMPV4_UNREACH_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "LIBNET_BGP4_BAD_BGP_IDENTIFIER", 30)) {
    /*                                         ^          */
#ifdef LIBNET_BGP4_BAD_BGP_IDENTIFIER
      *iv_return = LIBNET_BGP4_BAD_BGP_IDENTIFIER;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "LIBNET_BGP4_HOLD_TIMER_EXPIRED", 30)) {
    /*                                         ^          */
#ifdef LIBNET_BGP4_HOLD_TIMER_EXPIRED
      *iv_return = LIBNET_BGP4_HOLD_TIMER_EXPIRED;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "LIBNET_BGP4_BAD_MESSAGE_LENGTH", 30)) {
    /*                                         ^          */
#ifdef LIBNET_BGP4_BAD_MESSAGE_LENGTH
      *iv_return = LIBNET_BGP4_BAD_MESSAGE_LENGTH;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "LIBNET_BGP4_OPEN_MESSAGE_ERROR", 30)) {
    /*                                         ^          */
#ifdef LIBNET_BGP4_OPEN_MESSAGE_ERROR
      *iv_return = LIBNET_BGP4_OPEN_MESSAGE_ERROR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "ICMP_UNREACH_PRECEDENCE_CUTOFF", 30)) {
    /*                                         ^          */
#ifdef ICMP_UNREACH_PRECEDENCE_CUTOFF
      *iv_return = ICMP_UNREACH_PRECEDENCE_CUTOFF;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_31 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     GRE_RFC_1144_TCP_IP_COMPRESSION LIBNET_BGP4_FINITE_STATE__ERROR
     LIBNET_PBLOCK_ICMPV4_REDIRECT_H LIBNET_PBLOCK_ICMPV4_TIMXCEED_H */
  /* Offset 23 gives the best switch position.  */
  switch (name[23]) {
  case 'D':
    if (memEQ(name, "LIBNET_PBLOCK_ICMPV4_REDIRECT_H", 31)) {
    /*                                      ^              */
#ifdef LIBNET_PBLOCK_ICMPV4_REDIRECT_H
      *iv_return = LIBNET_PBLOCK_ICMPV4_REDIRECT_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "LIBNET_BGP4_FINITE_STATE__ERROR", 31)) {
    /*                                      ^              */
#ifdef LIBNET_BGP4_FINITE_STATE__ERROR
      *iv_return = LIBNET_BGP4_FINITE_STATE__ERROR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "LIBNET_PBLOCK_ICMPV4_TIMXCEED_H", 31)) {
    /*                                      ^              */
#ifdef LIBNET_PBLOCK_ICMPV4_TIMXCEED_H
      *iv_return = LIBNET_PBLOCK_ICMPV4_TIMXCEED_H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "GRE_RFC_1144_TCP_IP_COMPRESSION", 31)) {
    /*                                      ^              */
#ifdef GRE_RFC_1144_TCP_IP_COMPRESSION
      *iv_return = GRE_RFC_1144_TCP_IP_COMPRESSION;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant (pTHX_ const char *name, STRLEN len, IV *iv_return) {
  /* Initially switch on the length of the name.  */
  /* When generated this function returned values for the list of names given
     in this section of perl code.  Rather than manually editing these functions
     to add or remove constants, which would result in this comment and section
     of code becoming inaccurate, we recommend that you edit this section of
     code, and use it to regenerate a new set of constant functions which you
     then use to replace the originals.

     Regenerate these constant functions by feeding this entire source file to
     perl -x

#!/usr/bin/perl -w
use ExtUtils::Constant qw (constant_types C_constant XS_constant);

my $types = {map {($_, 1)} qw(IV)};
my @names = (qw(ARPHRD_APPLETLK ARPHRD_ARCNET ARPHRD_ATM ARPHRD_AX25
	       ARPHRD_CHAOS ARPHRD_DLCI ARPHRD_EETHER ARPHRD_ETHER
	       ARPHRD_IEEE802 ARPHRD_IPSEC ARPHRD_LANSTAR ARPHRD_METRICOM
	       ARPHRD_NETROM ARPHRD_PRONET ARPOP_INVREPLY ARPOP_INVREQUEST
	       ARPOP_REPLY ARPOP_REQUEST ARPOP_REVREPLY ARPOP_REVREQUEST
	       ASN_APPLICATION ASN_BIT8 ASN_BIT_STR ASN_BOOLEAN ASN_CONSTRUCTOR
	       ASN_CONTEXT ASN_EXTENSION_ID ASN_INTEGER ASN_LONG_LEN ASN_NULL
	       ASN_OBJECT_ID ASN_OCTET_STR ASN_PRIMITIVE ASN_PRIVATE
	       ASN_SEQUENCE ASN_SET ASN_UNIVERSAL CQ_LOCK_READ CQ_LOCK_UNLOCKED
	       CQ_LOCK_WRITE DHCP_MAGIC ETHERTYPE_ARP ETHERTYPE_EAP
	       ETHERTYPE_IP ETHERTYPE_LOOPBACK ETHERTYPE_MPLS ETHERTYPE_PUP
	       ETHERTYPE_REVARP ETHERTYPE_VLAN ETHER_ADDR_LEN FDDI_ADDR_LEN
	       FDDI_TYPE_ARP FDDI_TYPE_IP FDDI_TYPE_REVARP GRE_ACK
	       GRE_APOLLO_DOMAIN GRE_CHAOS GRE_CSUM GRE_DECNET GRE_ETHERTALK
	       GRE_FLAGS_MASK GRE_FRAME_RELAY_ARP GRE_IP
	       GRE_IP_AUTONOMOUS_SYSTEMS GRE_KEY GRE_NOVELL_IPX
	       GRE_OSI_NETWORK_LAYER GRE_PPP GRE_PUP GRE_RAW_FRAME_RELAY
	       GRE_REC GRE_RFC_1144_TCP_IP_COMPRESSION GRE_RFC_826_ARP
	       GRE_ROUTING GRE_SECURE_DATA GRE_SEQ GRE_SNA GRE_STRICT
	       GRE_TRANSPARENT_ETHERNET_BRIDGING GRE_VERSION_0 GRE_VERSION_1
	       GRE_VERSION_MASK GRE_VINES GRE_VINES_ECHO GRE_VINES_LOOPBACK
	       GRE_XNS ICMP6_ECHO ICMP6_ECHOREPLY ICMP6_PARAMPROB
	       ICMP6_PKTTOOBIG ICMP6_TIMXCEED ICMP6_UNREACH ICMP_ECHO
	       ICMP_ECHOREPLY ICMP_IREQ ICMP_IREQREPLY ICMP_MASKREPLY
	       ICMP_MASKREQ ICMP_PARAMPROB ICMP_PARAMPROB_OPTABSENT
	       ICMP_REDIRECT ICMP_REDIRECT_HOST ICMP_REDIRECT_NET
	       ICMP_REDIRECT_TOSHOST ICMP_REDIRECT_TOSNET ICMP_ROUTERADVERT
	       ICMP_ROUTERSOLICIT ICMP_SOURCEQUENCH ICMP_TIMXCEED
	       ICMP_TIMXCEED_INTRANS ICMP_TIMXCEED_REASS ICMP_TSTAMP
	       ICMP_TSTAMPREPLY ICMP_UNREACH ICMP_UNREACH_FILTER_PROHIB
	       ICMP_UNREACH_HOST ICMP_UNREACH_HOST_PRECEDENCE
	       ICMP_UNREACH_HOST_PROHIB ICMP_UNREACH_HOST_UNKNOWN
	       ICMP_UNREACH_ISOLATED ICMP_UNREACH_NEEDFRAG ICMP_UNREACH_NET
	       ICMP_UNREACH_NET_PROHIB ICMP_UNREACH_NET_UNKNOWN
	       ICMP_UNREACH_PORT ICMP_UNREACH_PRECEDENCE_CUTOFF
	       ICMP_UNREACH_PROTOCOL ICMP_UNREACH_SRCFAIL ICMP_UNREACH_TOSHOST
	       ICMP_UNREACH_TOSNET IGMP_LEAVE_GROUP IGMP_MEMBERSHIP_QUERY
	       IGMP_V1_MEMBERSHIP_REPORT IGMP_V2_MEMBERSHIP_REPORT
	       IN6ADDR_ERROR_INIT IPOPT_EOL IPOPT_LSRR IPOPT_NOP IPOPT_RR
	       IPOPT_SATID IPOPT_SECURITY IPOPT_SSRR IPOPT_TS IPPROTO_AH
	       IPPROTO_ESP IPPROTO_GRE IPPROTO_ICMP6 IPPROTO_OSPF
	       IPPROTO_OSPF_LSA IPPROTO_VRRP IPTOS_LOWCOST IPTOS_LOWDELAY
	       IPTOS_RELIABILITY IPTOS_THROUGHPUT IP_DF IP_MAXPACKET IP_MF
	       IP_OFFMASK IP_RF LIBNET_802_1Q_CFIMASK LIBNET_802_1Q_H
	       LIBNET_802_1Q_PRIMASK LIBNET_802_1Q_VIDMASK
	       LIBNET_802_1X_ENCASFAL LIBNET_802_1X_H LIBNET_802_1X_KEY
	       LIBNET_802_1X_LOGOFF LIBNET_802_1X_PACKET LIBNET_802_1X_START
	       LIBNET_802_2SNAP_H LIBNET_802_2_H LIBNET_802_3_H LIBNET_ADV_MASK
	       LIBNET_ARP_ETH_IP_H LIBNET_ARP_H LIBNET_AS_E_BIT_ON
	       LIBNET_BGP4_AUTHENTICATION_FAILURE
	       LIBNET_BGP4_BAD_BGP_IDENTIFIER LIBNET_BGP4_BAD_MESSAGE_LENGTH
	       LIBNET_BGP4_BAD_MESSAGE_TYPE LIBNET_BGP4_BAD_PEER_AS
	       LIBNET_BGP4_CEASE LIBNET_BGP4_CONNECTION_NOT_SYNCHRONIZED
	       LIBNET_BGP4_FINITE_STATE__ERROR LIBNET_BGP4_HEADER_H
	       LIBNET_BGP4_HOLD_TIMER_EXPIRED LIBNET_BGP4_KEEPALIVE
	       LIBNET_BGP4_MARKER_SIZE LIBNET_BGP4_MESSAGE_HEADER_ERROR
	       LIBNET_BGP4_NOTIFICATION LIBNET_BGP4_NOTIFICATION_H
	       LIBNET_BGP4_OPEN LIBNET_BGP4_OPEN_H
	       LIBNET_BGP4_OPEN_MESSAGE_ERROR
	       LIBNET_BGP4_UNACCEPTABLE_HOLD_TIME
	       LIBNET_BGP4_UNSUPPORTED_OPTIONAL_PARAMETER
	       LIBNET_BGP4_UNSUPPORTED_VERSION_NUMBER LIBNET_BGP4_UPDATE
	       LIBNET_BGP4_UPDATE_H LIBNET_BGP4_UPDATE_MESSAGE_ERROR
	       LIBNET_BOOTP_MIN_LEN LIBNET_CDP_ADDRESS LIBNET_CDP_CAPABIL
	       LIBNET_CDP_CAP_L1F LIBNET_CDP_CAP_L2B LIBNET_CDP_CAP_L2S
	       LIBNET_CDP_CAP_L2SRB LIBNET_CDP_CAP_L3R LIBNET_CDP_CAP_NOI
	       LIBNET_CDP_CAP_SR LIBNET_CDP_DEVID LIBNET_CDP_H
	       LIBNET_CDP_IPPREFIX LIBNET_CDP_PLATFORM LIBNET_CDP_PORTID
	       LIBNET_CDP_VERSION LIBNET_DBD_IBI LIBNET_DBD_MBIT
	       LIBNET_DBD_MSBIT LIBNET_DHCPV4_H LIBNET_DHCP_ARPTIMEOUT
	       LIBNET_DHCP_BOOTFILESIZE LIBNET_DHCP_BROADCASTADDR
	       LIBNET_DHCP_CLASSSID LIBNET_DHCP_CLIENTID LIBNET_DHCP_COOKIESERV
	       LIBNET_DHCP_DISCOVERADDR LIBNET_DHCP_DNS LIBNET_DHCP_DOMAINNAME
	       LIBNET_DHCP_DOMASKDISCOV LIBNET_DHCP_DOROUTEDISC
	       LIBNET_DHCP_DUMPFILE LIBNET_DHCP_END LIBNET_DHCP_ETHERENCAP
	       LIBNET_DHCP_EXTENPATH LIBNET_DHCP_FINGERSERVER
	       LIBNET_DHCP_HOSTNAME LIBNET_DHCP_IMPSERV LIBNET_DHCP_IPFORWARD
	       LIBNET_DHCP_IPTTL LIBNET_DHCP_IRCSERVER LIBNET_DHCP_LEASETIME
	       LIBNET_DHCP_LOCALSUBNETS LIBNET_DHCP_LOGSERV LIBNET_DHCP_LPRSERV
	       LIBNET_DHCP_MASKSUPPLY LIBNET_DHCP_MAXASMSIZE
	       LIBNET_DHCP_MAXMSGSIZE LIBNET_DHCP_MESSAGE
	       LIBNET_DHCP_MESSAGETYPE LIBNET_DHCP_MOBILEIPAGENT
	       LIBNET_DHCP_MSGACK LIBNET_DHCP_MSGDECLINE
	       LIBNET_DHCP_MSGDISCOVER LIBNET_DHCP_MSGINFORM
	       LIBNET_DHCP_MSGNACK LIBNET_DHCP_MSGOFFER LIBNET_DHCP_MSGRELEASE
	       LIBNET_DHCP_MSGREQUEST LIBNET_DHCP_MTUSIZE LIBNET_DHCP_MTUTABLE
	       LIBNET_DHCP_MTUTIMEOUT LIBNET_DHCP_NAMESERVER LIBNET_DHCP_NBDD
	       LIBNET_DHCP_NBNS LIBNET_DHCP_NBTCPIP LIBNET_DHCP_NBTCPSCOPE
	       LIBNET_DHCP_NISDOMAIN LIBNET_DHCP_NISPLUSDOMAIN
	       LIBNET_DHCP_NISPLUSSERVERS LIBNET_DHCP_NISSERVERS
	       LIBNET_DHCP_NISTIMESERV LIBNET_DHCP_NNTPSERVER
	       LIBNET_DHCP_OPTIONOVERLOAD LIBNET_DHCP_PAD
	       LIBNET_DHCP_PARAMREQUEST LIBNET_DHCP_POLICYFILTER
	       LIBNET_DHCP_POP3SERVER LIBNET_DHCP_REBINDTIME
	       LIBNET_DHCP_RENEWTIME LIBNET_DHCP_REPLY LIBNET_DHCP_REQUEST
	       LIBNET_DHCP_RESSERV LIBNET_DHCP_ROOTPATH LIBNET_DHCP_ROUTER
	       LIBNET_DHCP_ROUTERSOLICIT LIBNET_DHCP_SERVIDENT
	       LIBNET_DHCP_SMTPSERVER LIBNET_DHCP_SRCROUTE
	       LIBNET_DHCP_STATICROUTE LIBNET_DHCP_STDASERVER
	       LIBNET_DHCP_STSERVER LIBNET_DHCP_SUBNETMASK LIBNET_DHCP_SWAPSERV
	       LIBNET_DHCP_TCPALIVEGARBAGE LIBNET_DHCP_TCPKEEPALIVE
	       LIBNET_DHCP_TCPTTL LIBNET_DHCP_TIMEOFFSET LIBNET_DHCP_TIMESERVER
	       LIBNET_DHCP_TRAILERENCAP LIBNET_DHCP_VENDSPECIFIC
	       LIBNET_DHCP_WWWSERVER LIBNET_DHCP_XDISPLAYMGR LIBNET_DHCP_XFONT
	       LIBNET_DNS_H LIBNET_DONT_RESOLVE LIBNET_ERRBUF_SIZE LIBNET_ETH_H
	       LIBNET_FDDI_48BIT_ADDR LIBNET_FDDI_FC_REQD LIBNET_FDDI_H
	       LIBNET_FDDI_LLC_FRAME LIBNET_GRE_H LIBNET_GRE_SRE_H
	       LIBNET_ICMPV4_ECHO_H LIBNET_ICMPV4_H LIBNET_ICMPV4_MASK_H
	       LIBNET_ICMPV4_REDIRECT_H LIBNET_ICMPV4_TIMXCEED_H
	       LIBNET_ICMPV4_TS_H LIBNET_ICMPV4_UNREACH_H LIBNET_ICMPV6_H
	       LIBNET_IGMP_H LIBNET_IPSEC_AH_H LIBNET_IPSEC_ESP_FTR_H
	       LIBNET_IPSEC_ESP_HDR_H LIBNET_IPV4_H LIBNET_IPV6_DESTOPTS_H
	       LIBNET_IPV6_FRAG_H LIBNET_IPV6_H LIBNET_IPV6_HBHOPTS_H
	       LIBNET_IPV6_NH_DESTOPTS LIBNET_IPV6_NH_FRAGMENT
	       LIBNET_IPV6_NH_HBH LIBNET_IPV6_NH_ROUTING LIBNET_IPV6_ROUTING_H
	       LIBNET_ISL_H LIBNET_LABEL_SIZE LIBNET_LIL_ENDIAN LIBNET_LINK
	       LIBNET_LINK_ADV LIBNET_LINK_ID_IP_DES LIBNET_LINK_ID_NBR_ID
	       LIBNET_LINK_ID_SUB LIBNET_LS_TYPE_ASBR LIBNET_LS_TYPE_ASEXT
	       LIBNET_LS_TYPE_IP LIBNET_LS_TYPE_NET LIBNET_LS_TYPE_RTR
	       LIBNET_MAXOPTION_SIZE LIBNET_MAX_PACKET LIBNET_MODX
	       LIBNET_MPLS_BOS_OFF LIBNET_MPLS_BOS_ON LIBNET_MPLS_H
	       LIBNET_NTP_H LIBNET_NTP_LI_AC LIBNET_NTP_LI_AS LIBNET_NTP_LI_DS
	       LIBNET_NTP_LI_NW LIBNET_NTP_MODE_A LIBNET_NTP_MODE_B
	       LIBNET_NTP_MODE_C LIBNET_NTP_MODE_P LIBNET_NTP_MODE_R
	       LIBNET_NTP_MODE_RC LIBNET_NTP_MODE_RP LIBNET_NTP_MODE_S
	       LIBNET_NTP_REF_ACTS LIBNET_NTP_REF_CHU LIBNET_NTP_REF_DCF
	       LIBNET_NTP_REF_GOES LIBNET_NTP_REF_GPS LIBNET_NTP_REF_LOCAL
	       LIBNET_NTP_REF_LORC LIBNET_NTP_REF_MSF LIBNET_NTP_REF_OMEG
	       LIBNET_NTP_REF_PPS LIBNET_NTP_REF_PTB LIBNET_NTP_REF_TDF
	       LIBNET_NTP_REF_USNO LIBNET_NTP_REF_WWV LIBNET_NTP_REF_WWVB
	       LIBNET_NTP_REF_WWVH LIBNET_NTP_STRATUM_PRIMARY
	       LIBNET_NTP_STRATUM_UNAVAIL LIBNET_NTP_VN_2 LIBNET_NTP_VN_3
	       LIBNET_NTP_VN_4 LIBNET_OFF LIBNET_ON LIBNET_OPT_DCBIT
	       LIBNET_OPT_EABIT LIBNET_OPT_EBIT LIBNET_OPT_MCBIT
	       LIBNET_OPT_NPBIT LIBNET_ORG_CODE_SIZE LIBNET_OSPF_AUTH_H
	       LIBNET_OSPF_AUTH_MD5 LIBNET_OSPF_AUTH_NULL
	       LIBNET_OSPF_AUTH_SIMPLE LIBNET_OSPF_CKSUM LIBNET_OSPF_DBD
	       LIBNET_OSPF_DBD_H LIBNET_OSPF_H LIBNET_OSPF_HELLO
	       LIBNET_OSPF_HELLO_H LIBNET_OSPF_LSA LIBNET_OSPF_LSA_H
	       LIBNET_OSPF_LSR LIBNET_OSPF_LSR_H LIBNET_OSPF_LSU
	       LIBNET_OSPF_LSU_H LIBNET_OSPF_LS_AS_EXT_H LIBNET_OSPF_LS_NET_H
	       LIBNET_OSPF_LS_RTR_H LIBNET_OSPF_LS_SUM_H LIBNET_OSPF_UMD
	       LIBNET_PBLOCK_802_1Q_H LIBNET_PBLOCK_802_1X_H
	       LIBNET_PBLOCK_802_2SNAP_H LIBNET_PBLOCK_802_2_H
	       LIBNET_PBLOCK_802_3_H LIBNET_PBLOCK_ARP_H
	       LIBNET_PBLOCK_BGP4_HEADER_H LIBNET_PBLOCK_BGP4_NOTIFICATION_H
	       LIBNET_PBLOCK_BGP4_OPEN_H LIBNET_PBLOCK_BGP4_UPDATE_H
	       LIBNET_PBLOCK_CDP_H LIBNET_PBLOCK_DATA_H LIBNET_PBLOCK_DHCPV4_H
	       LIBNET_PBLOCK_DNSV4_H LIBNET_PBLOCK_DO_CHECKSUM
	       LIBNET_PBLOCK_ETH_H LIBNET_PBLOCK_FDDI_H LIBNET_PBLOCK_GRE_H
	       LIBNET_PBLOCK_GRE_SRE_H LIBNET_PBLOCK_ICMPV4_ECHO_H
	       LIBNET_PBLOCK_ICMPV4_H LIBNET_PBLOCK_ICMPV4_MASK_H
	       LIBNET_PBLOCK_ICMPV4_REDIRECT_H LIBNET_PBLOCK_ICMPV4_TIMXCEED_H
	       LIBNET_PBLOCK_ICMPV4_TS_H LIBNET_PBLOCK_ICMPV4_UNREACH_H
	       LIBNET_PBLOCK_IGMP_H LIBNET_PBLOCK_IPDATA LIBNET_PBLOCK_IPO_H
	       LIBNET_PBLOCK_IPSEC_AH_H LIBNET_PBLOCK_IPSEC_ESP_FTR_H
	       LIBNET_PBLOCK_IPSEC_ESP_HDR_H LIBNET_PBLOCK_IPV4_H
	       LIBNET_PBLOCK_IPV6_DESTOPTS_H LIBNET_PBLOCK_IPV6_FRAG_H
	       LIBNET_PBLOCK_IPV6_H LIBNET_PBLOCK_IPV6_HBHOPTS_H
	       LIBNET_PBLOCK_IPV6_ROUTING_H LIBNET_PBLOCK_ISL_H
	       LIBNET_PBLOCK_LS_AS_EXT_H LIBNET_PBLOCK_LS_NET_H
	       LIBNET_PBLOCK_LS_RTR_H LIBNET_PBLOCK_LS_SUM_H
	       LIBNET_PBLOCK_MPLS_H LIBNET_PBLOCK_NTP_H
	       LIBNET_PBLOCK_OSPF_AUTH_H LIBNET_PBLOCK_OSPF_CKSUM
	       LIBNET_PBLOCK_OSPF_DBD_H LIBNET_PBLOCK_OSPF_H
	       LIBNET_PBLOCK_OSPF_HELLO_H LIBNET_PBLOCK_OSPF_LSA_H
	       LIBNET_PBLOCK_OSPF_LSR_H LIBNET_PBLOCK_OSPF_LSU_H
	       LIBNET_PBLOCK_RIP_H LIBNET_PBLOCK_RPC_CALL_H
	       LIBNET_PBLOCK_SEBEK_H LIBNET_PBLOCK_STP_CONF_H
	       LIBNET_PBLOCK_STP_TCN_H LIBNET_PBLOCK_TCPDATA
	       LIBNET_PBLOCK_TCPO_H LIBNET_PBLOCK_TCP_H
	       LIBNET_PBLOCK_TOKEN_RING_H LIBNET_PBLOCK_UDP_H
	       LIBNET_PBLOCK_VRRP_H LIBNET_PMAP_PROC_BCAST
	       LIBNET_PMAP_PROC_CALLIT LIBNET_PMAP_PROC_DUMP
	       LIBNET_PMAP_PROC_GETADDR LIBNET_PMAP_PROC_GETADDRLIST
	       LIBNET_PMAP_PROC_GETSTAT LIBNET_PMAP_PROC_GETTIME
	       LIBNET_PMAP_PROC_GETVERSADDR LIBNET_PMAP_PROC_INDIRECT
	       LIBNET_PMAP_PROC_NULL LIBNET_PMAP_PROC_SET
	       LIBNET_PMAP_PROC_TADDR2UADDR LIBNET_PMAP_PROC_UADDR2TADDR
	       LIBNET_PMAP_PROC_UNSET LIBNET_PMAP_PROGRAM LIBNET_PR16
	       LIBNET_PR2 LIBNET_PR32 LIBNET_PR8 LIBNET_PRAND_MAX
	       LIBNET_PROTO_CDP LIBNET_PROTO_ISL LIBNET_PRu16 LIBNET_PRu32
	       LIBNET_PTAG_INITIALIZER LIBNET_RAW4 LIBNET_RAW4_ADV LIBNET_RAW6
	       LIBNET_RAW6_ADV LIBNET_RESOLVE LIBNET_RIP_H LIBNET_RPC_CALL
	       LIBNET_RPC_CALL_H LIBNET_RPC_CALL_TCP_H LIBNET_RPC_LAST_FRAG
	       LIBNET_RPC_REPLY LIBNET_RPC_VERS LIBNET_RTR_FLAGS_B
	       LIBNET_RTR_FLAGS_E LIBNET_RTR_FLAGS_W LIBNET_RTR_TYPE_PTP
	       LIBNET_RTR_TYPE_STUB LIBNET_RTR_TYPE_TRANS LIBNET_SAP_SNAP
	       LIBNET_SAP_STP LIBNET_SEBEK_H LIBNET_STP_CONF_H LIBNET_STP_TCN_H
	       LIBNET_TCP_DNSV4_H LIBNET_TCP_H LIBNET_TOKEN_RING_FRAME
	       LIBNET_TOKEN_RING_H LIBNET_TOKEN_RING_LLC_FRAME
	       LIBNET_UDP_DNSV4_H LIBNET_UDP_H LIBNET_VRRP_AUTH_IPAH
	       LIBNET_VRRP_AUTH_NONE LIBNET_VRRP_AUTH_PASSWD LIBNET_VRRP_H
	       LIBNET_VRRP_TYPE_ADVERT LIBNET_VRRP_VERSION_01
	       LIBNET_VRRP_VERSION_02 MAX_OID_LEN MAX_SUBID OSPFVERSION
	       RIPCMD_MAX RIPCMD_POLL RIPCMD_POLLENTRY RIPCMD_REQUEST
	       RIPCMD_RESPONSE RIPCMD_TRACEOFF RIPCMD_TRACEON RIPVER_0 RIPVER_1
	       RIPVER_2 RTR_TYPE_VRTL SEBEK_CMD_LENGTH SEBEK_PROTO_VERSION
	       SEBEK_TYPE_READ SEBEK_TYPE_WRITE TH_ACK TH_CWR TH_ECE TH_FIN
	       TH_PUSH TH_RST TH_SYN TH_URG TOKEN_RING_ADDR_LEN
	       TOKEN_RING_TYPE_ARP TOKEN_RING_TYPE_IP TOKEN_RING_TYPE_REVARP
	       egre_ack egre_callID egre_payload_s egre_seq gre_key gre_offset
	       gre_seq gre_sum icmp_data icmp_id icmp_mask icmp_otime
	       icmp_rtime icmp_seq icmp_ttime libnet_s6_addr));

print constant_types(); # macro defs
foreach (C_constant ("Net::Libnet", 'constant', 'IV', $types, undef, 3, @names) ) {
    print $_, "\n"; # C constant subs
}
print "#### XS Section:\n";
print XS_constant ("Net::Libnet", $types);
__END__
   */

  switch (len) {
  case 5:
    return constant_5 (aTHX_ name, iv_return);
    break;
  case 6:
    return constant_6 (aTHX_ name, iv_return);
    break;
  case 7:
    return constant_7 (aTHX_ name, iv_return);
    break;
  case 8:
    return constant_8 (aTHX_ name, iv_return);
    break;
  case 9:
    return constant_9 (aTHX_ name, iv_return);
    break;
  case 10:
    return constant_10 (aTHX_ name, iv_return);
    break;
  case 11:
    return constant_11 (aTHX_ name, iv_return);
    break;
  case 12:
    return constant_12 (aTHX_ name, iv_return);
    break;
  case 13:
    return constant_13 (aTHX_ name, iv_return);
    break;
  case 14:
    return constant_14 (aTHX_ name, iv_return);
    break;
  case 15:
    return constant_15 (aTHX_ name, iv_return);
    break;
  case 16:
    return constant_16 (aTHX_ name, iv_return);
    break;
  case 17:
    return constant_17 (aTHX_ name, iv_return);
    break;
  case 18:
    return constant_18 (aTHX_ name, iv_return);
    break;
  case 19:
    return constant_19 (aTHX_ name, iv_return);
    break;
  case 20:
    return constant_20 (aTHX_ name, iv_return);
    break;
  case 21:
    return constant_21 (aTHX_ name, iv_return);
    break;
  case 22:
    return constant_22 (aTHX_ name, iv_return);
    break;
  case 23:
    return constant_23 (aTHX_ name, iv_return);
    break;
  case 24:
    return constant_24 (aTHX_ name, iv_return);
    break;
  case 25:
    return constant_25 (aTHX_ name, iv_return);
    break;
  case 26:
    return constant_26 (aTHX_ name, iv_return);
    break;
  case 27:
    return constant_27 (aTHX_ name, iv_return);
    break;
  case 28:
    return constant_28 (aTHX_ name, iv_return);
    break;
  case 29:
    return constant_29 (aTHX_ name, iv_return);
    break;
  case 30:
    return constant_30 (aTHX_ name, iv_return);
    break;
  case 31:
    return constant_31 (aTHX_ name, iv_return);
    break;
  case 32:
    /* Names all of length 32.  */
    /* LIBNET_BGP4_MESSAGE_HEADER_ERROR LIBNET_BGP4_UPDATE_MESSAGE_ERROR */
    /* Offset 17 gives the best switch position.  */
    switch (name[17]) {
    case 'E':
      if (memEQ(name, "LIBNET_BGP4_UPDATE_MESSAGE_ERROR", 32)) {
      /*                                ^                     */
#ifdef LIBNET_BGP4_UPDATE_MESSAGE_ERROR
        *iv_return = LIBNET_BGP4_UPDATE_MESSAGE_ERROR;
        return PERL_constant_ISIV;
#else
        return PERL_constant_NOTDEF;
#endif
      }
      break;
    case 'G':
      if (memEQ(name, "LIBNET_BGP4_MESSAGE_HEADER_ERROR", 32)) {
      /*                                ^                     */
#ifdef LIBNET_BGP4_MESSAGE_HEADER_ERROR
        *iv_return = LIBNET_BGP4_MESSAGE_HEADER_ERROR;
        return PERL_constant_ISIV;
#else
        return PERL_constant_NOTDEF;
#endif
      }
      break;
    }
    break;
  case 33:
    /* Names all of length 33.  */
    /* GRE_TRANSPARENT_ETHERNET_BRIDGING LIBNET_PBLOCK_BGP4_NOTIFICATION_H */
    /* Offset 32 gives the best switch position.  */
    switch (name[32]) {
    case 'G':
      if (memEQ(name, "GRE_TRANSPARENT_ETHERNET_BRIDGIN", 32)) {
      /*                                               G      */
#ifdef GRE_TRANSPARENT_ETHERNET_BRIDGING
        *iv_return = GRE_TRANSPARENT_ETHERNET_BRIDGING;
        return PERL_constant_ISIV;
#else
        return PERL_constant_NOTDEF;
#endif
      }
      break;
    case 'H':
      if (memEQ(name, "LIBNET_PBLOCK_BGP4_NOTIFICATION_", 32)) {
      /*                                               H      */
#ifdef LIBNET_PBLOCK_BGP4_NOTIFICATION_H
        *iv_return = LIBNET_PBLOCK_BGP4_NOTIFICATION_H;
        return PERL_constant_ISIV;
#else
        return PERL_constant_NOTDEF;
#endif
      }
      break;
    }
    break;
  case 34:
    /* Names all of length 34.  */
    /* LIBNET_BGP4_AUTHENTICATION_FAILURE LIBNET_BGP4_UNACCEPTABLE_HOLD_TIME */
    /* Offset 21 gives the best switch position.  */
    switch (name[21]) {
    case 'A':
      if (memEQ(name, "LIBNET_BGP4_AUTHENTICATION_FAILURE", 34)) {
      /*                                    ^                   */
#ifdef LIBNET_BGP4_AUTHENTICATION_FAILURE
        *iv_return = LIBNET_BGP4_AUTHENTICATION_FAILURE;
        return PERL_constant_ISIV;
#else
        return PERL_constant_NOTDEF;
#endif
      }
      break;
    case 'B':
      if (memEQ(name, "LIBNET_BGP4_UNACCEPTABLE_HOLD_TIME", 34)) {
      /*                                    ^                   */
#ifdef LIBNET_BGP4_UNACCEPTABLE_HOLD_TIME
        *iv_return = LIBNET_BGP4_UNACCEPTABLE_HOLD_TIME;
        return PERL_constant_ISIV;
#else
        return PERL_constant_NOTDEF;
#endif
      }
      break;
    }
    break;
  case 38:
    if (memEQ(name, "LIBNET_BGP4_UNSUPPORTED_VERSION_NUMBER", 38)) {
#ifdef LIBNET_BGP4_UNSUPPORTED_VERSION_NUMBER
      *iv_return = LIBNET_BGP4_UNSUPPORTED_VERSION_NUMBER;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 39:
    if (memEQ(name, "LIBNET_BGP4_CONNECTION_NOT_SYNCHRONIZED", 39)) {
#ifdef LIBNET_BGP4_CONNECTION_NOT_SYNCHRONIZED
      *iv_return = LIBNET_BGP4_CONNECTION_NOT_SYNCHRONIZED;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 42:
    if (memEQ(name, "LIBNET_BGP4_UNSUPPORTED_OPTIONAL_PARAMETER", 42)) {
#ifdef LIBNET_BGP4_UNSUPPORTED_OPTIONAL_PARAMETER
      *iv_return = LIBNET_BGP4_UNSUPPORTED_OPTIONAL_PARAMETER;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

