/*
 * POSIX Compatibility Library for AmigaOS
 *
 * Written by Frank Wille <frank@phoenix.owl.de> in 2003
 *
 * $Id: sockio.h,v 1.1 2005/04/11 21:46:13 phx Exp $
 */

#ifndef _SYS_SOCKIO_H_
#define _SYS_SOCKIO_H_

#include <sys/ioccom.h>

/* 
 * Socket I/O controls
 *
 * SIOCSPGRP and SIOCGPGRP are identical to the FIOSETOWN and FIOGETOWN,
 * respectively.
 */
#define SIOCATMARK      _IOR('s',  7, long)                  /* at oob mark? */
#define SIOCSPGRP       _IOW('s',  8, long)             /* set process group */
#define SIOCGPGRP       _IOR('s',  9, long)             /* get process group */

#define SIOCADDRT       _IOW('r', 10, struct ortentry)          /* add route */
#define SIOCDELRT       _IOW('r', 11, struct ortentry)       /* delete route */

#define SIOCSIFADDR     _IOW ('i',12, struct ifreq)     /* set ifnet address */
#define SIOCGIFADDR     _IOWR('i',33, struct ifreq)     /* get ifnet address */
#define SIOCSIFDSTADDR  _IOW ('i',14, struct ifreq)       /* set p-p address */
#define SIOCGIFDSTADDR  _IOWR('i',34, struct ifreq)       /* get p-p address */
#define SIOCSIFFLAGS    _IOW ('i',16, struct ifreq)       /* set ifnet flags */
#define SIOCGIFFLAGS    _IOWR('i',17, struct ifreq)       /* get ifnet flags */
#define SIOCGIFBRDADDR  _IOWR('i',35, struct ifreq)    /* get broadcast addr */
#define SIOCSIFBRDADDR  _IOW ('i',19, struct ifreq)    /* set broadcast addr */
#define SIOCGIFCONF     _IOWR('i',36, struct ifconf)       /* get ifnet list */
#define SIOCGIFNETMASK  _IOWR('i',37, struct ifreq)     /* get net addr mask */
#define SIOCSIFNETMASK  _IOW ('i',22, struct ifreq)     /* set net addr mask */
#define SIOCGIFMETRIC   _IOWR('i',23, struct ifreq)         /* get IF metric */
#define SIOCSIFMETRIC   _IOW ('i',24, struct ifreq)         /* set IF metric */
#define SIOCDIFADDR     _IOW ('i',25, struct ifreq)        /* delete IF addr */
#define SIOCAIFADDR     _IOW ('i',26, struct ifaliasreq) /* add/chg IF alias */

#define SIOCADDMULTI    _IOW ('i',49, struct ifreq)       /* add m'cast addr */
#define SIOCDELMULTI    _IOW ('i',50, struct ifreq)       /* del m'cast addr */
#define SIOCGIFMTU      _IOWR('i',51, struct ifreq)            /* get IF mtu */
#define SIOCSIFMTU      _IOW ('i',52, struct ifreq)            /* set IF mtu */
#define SIOCGIFPHYS     _IOWR('i',53, struct ifreq)           /* get IF wire */
#define SIOCSIFPHYS     _IOW ('i',54, struct ifreq)           /* set IF wire */

#define SIOCSARP        _IOW ('I',30, struct arpreq)        /* set arp entry */
#define SIOCGARP        _IOWR('I',38, struct arpreq)        /* get arp entry */
#define SIOCDARP        _IOW ('I',32, struct arpreq)     /* delete arp entry */

/*
 * Private extensions to the BSD44 ioctl interface) 
 */
#define SIOCGARPT       _IOWR('I',66, struct arptabreq)     /* get arp table */
/*
 * EXPERIMENTAL support for the internal SLIP & PPP drivers
 *
 * ifr_data carries a struct IOExtSer *
 */
#define SIOCGSERREQ     _IOWR('i',70, struct ifreq)        /* get ser IO req */
#define SIOCFSERREQ     _IOW ('i',71, struct ifreq)         /* return IO req */

#endif  /* _SYS_SOCKIO_H_ */
