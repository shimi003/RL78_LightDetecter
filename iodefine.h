/******************************************************************************/
/* DISCLAIMER                                                                 */
/* This software is supplied by Renesas Electronics Corporation and is only   */
/* intended for use with Renesas products. No other uses are authorized.This  */
/* software is owned by Renesas Electronics Corporation and is protected      */
/* under all applicable laws, including copyright laws.                       */
/* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES          */
/* REGARDING THIS SOFTWARE, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING  */
/* BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR */
/* PURPOSE AND NON-INFRINGEMENT.  ALL SUCH WARRANTIES ARE EXPRESSLY           */
/* DISCLAIMED.                                                                */
/* TO THE MAXIMUM EXTENT PERMITTED NOT PROHIBITED BY LAW, NEITHER RENESAS     */
/* ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES SHALL BE       */
/* LIABLE FOR ANY DIRECT, INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL      */
/* DAMAGES FOR ANY REASON RELATED TO THIS SOFTWARE, EVEN IF RENESAS OR ITS    */
/* AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.           */
/* Renesas reserves the right, without notice, to make changes to this        */
/* software and to discontinue the availability of this software.             */
/* By using this software, you agree to the additional terms and conditions   */
/* found by accessing the following link:                                     */
/* http://www.renesas.com/disclaimer                                          */
/*                                                                            */
/* Device     : RL78/R5F1006A                                                 */
/* File Name  : iodefine.h                                                    */
/* Abstract   : Definition of Special Function Register (SFR)                 */
/* History    : V1.14  [Device File version]                                  */
/* Options    : -df=C:\Program Files (x86)\Renesas Electronics\CS+\CC\Device\ */
/*              RL78\Devicefile\DR5F1006A.DVF -o=C:\Users\user\Documents\buzz */
/*              er_v3\iodefine.h -f                                           */
/* Date       : 2020/12/26                                                    */
/* Version    : V1.13.00.01  [df2iodef.exe version]                           */
/* This is a typical example.                                                 */
/*                                                                            */
/******************************************************************************/
#ifndef __R5F1006AIODEFINE_HEADER__
#define __R5F1006AIODEFINE_HEADER__

typedef struct
{
    unsigned char no0:1;
    unsigned char no1:1;
    unsigned char no2:1;
    unsigned char no3:1;
    unsigned char no4:1;
    unsigned char no5:1;
    unsigned char no6:1;
    unsigned char no7:1;
} __bitf_T;

typedef struct
{
    unsigned char no0:1;
    unsigned char no1:1;
    unsigned char no2:1;
    unsigned char no3:1;
    unsigned char no4:1;
    unsigned char no5:1;
    unsigned char no6:1;
    unsigned char no7:1;
    unsigned char no8:1;
    unsigned char no9:1;
    unsigned char no10:1;
    unsigned char no11:1;
    unsigned char no12:1;
    unsigned char no13:1;
    unsigned char no14:1;
    unsigned char no15:1;
} __bitf_T2;



#define ADM2        (*(volatile __near unsigned char  *)0x10)
#define ADM2_bit    (*(volatile __near __bitf_T *)0x10)
#define ADTYP       (((volatile __near __bitf_T *)0x10)->no0)
#define AWC         (((volatile __near __bitf_T *)0x10)->no2)
#define ADRCK       (((volatile __near __bitf_T *)0x10)->no3)
#define ADUL        (*(volatile __near unsigned char  *)0x11)
#define ADLL        (*(volatile __near unsigned char  *)0x12)
#define ADTES       (*(volatile __near unsigned char  *)0x13)
#define PU0         (*(volatile __near unsigned char  *)0x30)
#define PU0_bit     (*(volatile __near __bitf_T *)0x30)
#define PU1         (*(volatile __near unsigned char  *)0x31)
#define PU1_bit     (*(volatile __near __bitf_T *)0x31)
#define PU3         (*(volatile __near unsigned char  *)0x33)
#define PU3_bit     (*(volatile __near __bitf_T *)0x33)
#define PU4         (*(volatile __near unsigned char  *)0x34)
#define PU4_bit     (*(volatile __near __bitf_T *)0x34)
#define PU14        (*(volatile __near unsigned char  *)0x3E)
#define PU14_bit    (*(volatile __near __bitf_T *)0x3E)
#define PIM0        (*(volatile __near unsigned char  *)0x40)
#define PIM0_bit    (*(volatile __near __bitf_T *)0x40)
#define PIM1        (*(volatile __near unsigned char  *)0x41)
#define PIM1_bit    (*(volatile __near __bitf_T *)0x41)
#define POM0        (*(volatile __near unsigned char  *)0x50)
#define POM0_bit    (*(volatile __near __bitf_T *)0x50)
#define POM1        (*(volatile __near unsigned char  *)0x51)
#define POM1_bit    (*(volatile __near __bitf_T *)0x51)
#define PMC0        (*(volatile __near unsigned char  *)0x60)
#define PMC0_bit    (*(volatile __near __bitf_T *)0x60)
#define PMC14       (*(volatile __near unsigned char  *)0x6E)
#define PMC14_bit   (*(volatile __near __bitf_T *)0x6E)
#define NFEN0       (*(volatile __near unsigned char  *)0x70)
#define NFEN0_bit   (*(volatile __near __bitf_T *)0x70)
#define NFEN1       (*(volatile __near unsigned char  *)0x71)
#define NFEN1_bit   (*(volatile __near __bitf_T *)0x71)
#define TIS0        (*(volatile __near unsigned char  *)0x74)
#define ADPC        (*(volatile __near unsigned char  *)0x76)
#define PIOR        (*(volatile __near unsigned char  *)0x77)
#define IAWCTL      (*(volatile __near unsigned char  *)0x78)
#define DFLCTL      (*(volatile __near unsigned char  *)0x90)
#define DFLCTL_bit  (*(volatile __near __bitf_T *)0x90)
#define DFLEN       (((volatile __near __bitf_T *)0x90)->no0)
#define HIOTRM      (*(volatile __near unsigned char  *)0xA0)
#define HOCODIV     (*(volatile __near unsigned char  *)0xA8)
#define TEMPCAL0    (*(volatile __near unsigned char  *)0xAC)
#define TEMPCAL1    (*(volatile __near unsigned char  *)0xAD)
#define TEMPCAL2    (*(volatile __near unsigned char  *)0xAE)
#define TEMPCAL3    (*(volatile __near unsigned char  *)0xAF)
#define MDCL        (*(volatile __near unsigned short *)0xE0)
#define MDCH        (*(volatile __near unsigned short *)0xE2)
#define MDUC        (*(volatile __near unsigned char  *)0xE8)
#define MDUC_bit    (*(volatile __near __bitf_T *)0xE8)
#define DIVST       (((volatile __near __bitf_T *)0xE8)->no0)
#define MACSF       (((volatile __near __bitf_T *)0xE8)->no1)
#define MACOF       (((volatile __near __bitf_T *)0xE8)->no2)
#define MDSM        (((volatile __near __bitf_T *)0xE8)->no3)
#define MACMODE     (((volatile __near __bitf_T *)0xE8)->no6)
#define DIVMODE     (((volatile __near __bitf_T *)0xE8)->no7)
#define PER0        (*(volatile __near unsigned char  *)0xF0)
#define PER0_bit    (*(volatile __near __bitf_T *)0xF0)
#define TAU0EN      (((volatile __near __bitf_T *)0xF0)->no0)
#define SAU0EN      (((volatile __near __bitf_T *)0xF0)->no2)
#define ADCEN       (((volatile __near __bitf_T *)0xF0)->no5)
#define RTCEN       (((volatile __near __bitf_T *)0xF0)->no7)
#define OSMC        (*(volatile __near unsigned char  *)0xF3)
#define RMC         (*(volatile __near unsigned char  *)0xF4)
#define RMC_bit     (*(volatile __near __bitf_T *)0xF4)
#define WDVOL       (((volatile __near __bitf_T *)0xF4)->no7)
#define RPECTL      (*(volatile __near unsigned char  *)0xF5)
#define RPECTL_bit  (*(volatile __near __bitf_T *)0xF5)
#define RPEF        (((volatile __near __bitf_T *)0xF5)->no0)
#define RPERDIS     (((volatile __near __bitf_T *)0xF5)->no7)
#define BCDADJ      (*(volatile __near unsigned char  *)0xFE)
#define SSR00       (*(volatile __near unsigned short *)0x100)
#define SSR00L      (*(volatile __near unsigned char  *)0x100)
#define SSR01       (*(volatile __near unsigned short *)0x102)
#define SSR01L      (*(volatile __near unsigned char  *)0x102)
#define SSR02       (*(volatile __near unsigned short *)0x104)
#define SSR02L      (*(volatile __near unsigned char  *)0x104)
#define SSR03       (*(volatile __near unsigned short *)0x106)
#define SSR03L      (*(volatile __near unsigned char  *)0x106)
#define SIR00       (*(volatile __near unsigned short *)0x108)
#define SIR00L      (*(volatile __near unsigned char  *)0x108)
#define SIR01       (*(volatile __near unsigned short *)0x10A)
#define SIR01L      (*(volatile __near unsigned char  *)0x10A)
#define SIR02       (*(volatile __near unsigned short *)0x10C)
#define SIR02L      (*(volatile __near unsigned char  *)0x10C)
#define SIR03       (*(volatile __near unsigned short *)0x10E)
#define SIR03L      (*(volatile __near unsigned char  *)0x10E)
#define SMR00       (*(volatile __near unsigned short *)0x110)
#define SMR01       (*(volatile __near unsigned short *)0x112)
#define SMR02       (*(volatile __near unsigned short *)0x114)
#define SMR03       (*(volatile __near unsigned short *)0x116)
#define SCR00       (*(volatile __near unsigned short *)0x118)
#define SCR01       (*(volatile __near unsigned short *)0x11A)
#define SCR02       (*(volatile __near unsigned short *)0x11C)
#define SCR03       (*(volatile __near unsigned short *)0x11E)
#define SE0         (*(volatile __near unsigned short *)0x120)
#define SE0L        (*(volatile __near unsigned char  *)0x120)
#define SE0L_bit    (*(volatile __near __bitf_T *)0x120)
#define SS0         (*(volatile __near unsigned short *)0x122)
#define SS0L        (*(volatile __near unsigned char  *)0x122)
#define SS0L_bit    (*(volatile __near __bitf_T *)0x122)
#define ST0         (*(volatile __near unsigned short *)0x124)
#define ST0L        (*(volatile __near unsigned char  *)0x124)
#define ST0L_bit    (*(volatile __near __bitf_T *)0x124)
#define SPS0        (*(volatile __near unsigned short *)0x126)
#define SPS0L       (*(volatile __near unsigned char  *)0x126)
#define SO0         (*(volatile __near unsigned short *)0x128)
#define SOE0        (*(volatile __near unsigned short *)0x12A)
#define SOE0L       (*(volatile __near unsigned char  *)0x12A)
#define SOE0L_bit   (*(volatile __near __bitf_T *)0x12A)
#define SOL0        (*(volatile __near unsigned short *)0x134)
#define SOL0L       (*(volatile __near unsigned char  *)0x134)
#define SSC0        (*(volatile __near unsigned short *)0x138)
#define SSC0L       (*(volatile __near unsigned char  *)0x138)
#define TCR00       (*(volatile __near unsigned short *)0x180)
#define TCR01       (*(volatile __near unsigned short *)0x182)
#define TCR02       (*(volatile __near unsigned short *)0x184)
#define TCR03       (*(volatile __near unsigned short *)0x186)
#define TCR04       (*(volatile __near unsigned short *)0x188)
#define TCR05       (*(volatile __near unsigned short *)0x18A)
#define TCR06       (*(volatile __near unsigned short *)0x18C)
#define TCR07       (*(volatile __near unsigned short *)0x18E)
#define TMR00       (*(volatile __near unsigned short *)0x190)
#define TMR01       (*(volatile __near unsigned short *)0x192)
#define TMR02       (*(volatile __near unsigned short *)0x194)
#define TMR03       (*(volatile __near unsigned short *)0x196)
#define TMR04       (*(volatile __near unsigned short *)0x198)
#define TMR05       (*(volatile __near unsigned short *)0x19A)
#define TMR06       (*(volatile __near unsigned short *)0x19C)
#define TMR07       (*(volatile __near unsigned short *)0x19E)
#define TSR00       (*(volatile __near unsigned short *)0x1A0)
#define TSR00L      (*(volatile __near unsigned char  *)0x1A0)
#define TSR01       (*(volatile __near unsigned short *)0x1A2)
#define TSR01L      (*(volatile __near unsigned char  *)0x1A2)
#define TSR02       (*(volatile __near unsigned short *)0x1A4)
#define TSR02L      (*(volatile __near unsigned char  *)0x1A4)
#define TSR03       (*(volatile __near unsigned short *)0x1A6)
#define TSR03L      (*(volatile __near unsigned char  *)0x1A6)
#define TSR04       (*(volatile __near unsigned short *)0x1A8)
#define TSR04L      (*(volatile __near unsigned char  *)0x1A8)
#define TSR05       (*(volatile __near unsigned short *)0x1AA)
#define TSR05L      (*(volatile __near unsigned char  *)0x1AA)
#define TSR06       (*(volatile __near unsigned short *)0x1AC)
#define TSR06L      (*(volatile __near unsigned char  *)0x1AC)
#define TSR07       (*(volatile __near unsigned short *)0x1AE)
#define TSR07L      (*(volatile __near unsigned char  *)0x1AE)
#define TE0         (*(volatile __near unsigned short *)0x1B0)
#define TE0L        (*(volatile __near unsigned char  *)0x1B0)
#define TE0L_bit    (*(volatile __near __bitf_T *)0x1B0)
#define TS0         (*(volatile __near unsigned short *)0x1B2)
#define TS0L        (*(volatile __near unsigned char  *)0x1B2)
#define TS0L_bit    (*(volatile __near __bitf_T *)0x1B2)
#define TT0         (*(volatile __near unsigned short *)0x1B4)
#define TT0L        (*(volatile __near unsigned char  *)0x1B4)
#define TT0L_bit    (*(volatile __near __bitf_T *)0x1B4)
#define TPS0        (*(volatile __near unsigned short *)0x1B6)
#define TO0         (*(volatile __near unsigned short *)0x1B8)
#define TO0L        (*(volatile __near unsigned char  *)0x1B8)
#define TOE0        (*(volatile __near unsigned short *)0x1BA)
#define TOE0L       (*(volatile __near unsigned char  *)0x1BA)
#define TOE0L_bit   (*(volatile __near __bitf_T *)0x1BA)
#define TOL0        (*(volatile __near unsigned short *)0x1BC)
#define TOL0L       (*(volatile __near unsigned char  *)0x1BC)
#define TOM0        (*(volatile __near unsigned short *)0x1BE)
#define TOM0L       (*(volatile __near unsigned char  *)0x1BE)
#define CRC0CTL     (*(volatile __near unsigned char  *)0x2F0)
#define CRC0CTL_bit (*(volatile __near __bitf_T *)0x2F0)
#define CRC0EN      (((volatile __near __bitf_T *)0x2F0)->no7)
#define PGCRCL      (*(volatile __near unsigned short *)0x2F2)
#define CRCD        (*(volatile __near unsigned short *)0x2FA)
#define P0          (*(volatile __near unsigned char  *)0xFF00)
#define P0_bit      (*(volatile __near __bitf_T *)0xFF00)
#define P1          (*(volatile __near unsigned char  *)0xFF01)
#define P1_bit      (*(volatile __near __bitf_T *)0xFF01)
#define P2          (*(volatile __near unsigned char  *)0xFF02)
#define P2_bit      (*(volatile __near __bitf_T *)0xFF02)
#define P3          (*(volatile __near unsigned char  *)0xFF03)
#define P3_bit      (*(volatile __near __bitf_T *)0xFF03)
#define P4          (*(volatile __near unsigned char  *)0xFF04)
#define P4_bit      (*(volatile __near __bitf_T *)0xFF04)
#define P12         (*(volatile __near unsigned char  *)0xFF0C)
#define P12_bit     (*(volatile __near __bitf_T *)0xFF0C)
#define P13         (*(volatile __near unsigned char  *)0xFF0D)
#define P13_bit     (*(volatile __near __bitf_T *)0xFF0D)
#define P14         (*(volatile __near unsigned char  *)0xFF0E)
#define P14_bit     (*(volatile __near __bitf_T *)0xFF0E)
#define SDR00       (*(volatile __near unsigned short *)0xFF10)
#define SIO00       (*(volatile __near unsigned char  *)0xFF10)
#define TXD0        (*(volatile __near unsigned char  *)0xFF10)
#define SDR01       (*(volatile __near unsigned short *)0xFF12)
#define RXD0        (*(volatile __near unsigned char  *)0xFF12)
#define TDR00       (*(volatile __near unsigned short *)0xFF18)
#define TDR01       (*(volatile __near unsigned short *)0xFF1A)
#define TDR01L      (*(volatile __near unsigned char  *)0xFF1A)
#define TDR01H      (*(volatile __near unsigned char  *)0xFF1B)
#define ADCR        (*(volatile __near unsigned short *)0xFF1E)
#define ADCRH       (*(volatile __near unsigned char  *)0xFF1F)
#define PM0         (*(volatile __near unsigned char  *)0xFF20)
#define PM0_bit     (*(volatile __near __bitf_T *)0xFF20)
#define PM1         (*(volatile __near unsigned char  *)0xFF21)
#define PM1_bit     (*(volatile __near __bitf_T *)0xFF21)
#define PM2         (*(volatile __near unsigned char  *)0xFF22)
#define PM2_bit     (*(volatile __near __bitf_T *)0xFF22)
#define PM3         (*(volatile __near unsigned char  *)0xFF23)
#define PM3_bit     (*(volatile __near __bitf_T *)0xFF23)
#define PM4         (*(volatile __near unsigned char  *)0xFF24)
#define PM4_bit     (*(volatile __near __bitf_T *)0xFF24)
#define PM14        (*(volatile __near unsigned char  *)0xFF2E)
#define PM14_bit    (*(volatile __near __bitf_T *)0xFF2E)
#define ADM0        (*(volatile __near unsigned char  *)0xFF30)
#define ADM0_bit    (*(volatile __near __bitf_T *)0xFF30)
#define ADCE        (((volatile __near __bitf_T *)0xFF30)->no0)
#define ADCS        (((volatile __near __bitf_T *)0xFF30)->no7)
#define ADS         (*(volatile __near unsigned char  *)0xFF31)
#define ADS_bit     (*(volatile __near __bitf_T *)0xFF31)
#define ADM1        (*(volatile __near unsigned char  *)0xFF32)
#define ADM1_bit    (*(volatile __near __bitf_T *)0xFF32)
#define EGP0        (*(volatile __near unsigned char  *)0xFF38)
#define EGP0_bit    (*(volatile __near __bitf_T *)0xFF38)
#define EGN0        (*(volatile __near unsigned char  *)0xFF39)
#define EGN0_bit    (*(volatile __near __bitf_T *)0xFF39)
#define SDR02       (*(volatile __near unsigned short *)0xFF44)
#define TXD1        (*(volatile __near unsigned char  *)0xFF44)
#define SDR03       (*(volatile __near unsigned short *)0xFF46)
#define RXD1        (*(volatile __near unsigned char  *)0xFF46)
#define SIO11       (*(volatile __near unsigned char  *)0xFF46)
#define TDR02       (*(volatile __near unsigned short *)0xFF64)
#define TDR03       (*(volatile __near unsigned short *)0xFF66)
#define TDR03L      (*(volatile __near unsigned char  *)0xFF66)
#define TDR03H      (*(volatile __near unsigned char  *)0xFF67)
#define TDR04       (*(volatile __near unsigned short *)0xFF68)
#define TDR05       (*(volatile __near unsigned short *)0xFF6A)
#define TDR06       (*(volatile __near unsigned short *)0xFF6C)
#define TDR07       (*(volatile __near unsigned short *)0xFF6E)
#define ITMC        (*(volatile __near unsigned short *)0xFF90)
#define SEC         (*(volatile __near unsigned char  *)0xFF92)
#define MIN         (*(volatile __near unsigned char  *)0xFF93)
#define HOUR        (*(volatile __near unsigned char  *)0xFF94)
#define WEEK        (*(volatile __near unsigned char  *)0xFF95)
#define DAY         (*(volatile __near unsigned char  *)0xFF96)
#define MONTH       (*(volatile __near unsigned char  *)0xFF97)
#define YEAR        (*(volatile __near unsigned char  *)0xFF98)
#define SUBCUD      (*(volatile __near unsigned char  *)0xFF99)
#define ALARMWM     (*(volatile __near unsigned char  *)0xFF9A)
#define ALARMWH     (*(volatile __near unsigned char  *)0xFF9B)
#define ALARMWW     (*(volatile __near unsigned char  *)0xFF9C)
#define RTCC0       (*(volatile __near unsigned char  *)0xFF9D)
#define RTCC0_bit   (*(volatile __near __bitf_T *)0xFF9D)
#define RCLOE1      (((volatile __near __bitf_T *)0xFF9D)->no5)
#define RTCE        (((volatile __near __bitf_T *)0xFF9D)->no7)
#define RTCC1       (*(volatile __near unsigned char  *)0xFF9E)
#define RTCC1_bit   (*(volatile __near __bitf_T *)0xFF9E)
#define RWAIT       (((volatile __near __bitf_T *)0xFF9E)->no0)
#define RWST        (((volatile __near __bitf_T *)0xFF9E)->no1)
#define RIFG        (((volatile __near __bitf_T *)0xFF9E)->no3)
#define WAFG        (((volatile __near __bitf_T *)0xFF9E)->no4)
#define WALIE       (((volatile __near __bitf_T *)0xFF9E)->no6)
#define WALE        (((volatile __near __bitf_T *)0xFF9E)->no7)
#define CMC         (*(volatile __near unsigned char  *)0xFFA0)
#define CSC         (*(volatile __near unsigned char  *)0xFFA1)
#define CSC_bit     (*(volatile __near __bitf_T *)0xFFA1)
#define HIOSTOP     (((volatile __near __bitf_T *)0xFFA1)->no0)
#define MSTOP       (((volatile __near __bitf_T *)0xFFA1)->no7)
#define OSTC        (*(volatile __near unsigned char  *)0xFFA2)
#define OSTC_bit    (*(volatile __near __bitf_T *)0xFFA2)
#define OSTS        (*(volatile __near unsigned char  *)0xFFA3)
#define CKC         (*(volatile __near unsigned char  *)0xFFA4)
#define CKC_bit     (*(volatile __near __bitf_T *)0xFFA4)
#define MCM0        (((volatile __near __bitf_T *)0xFFA4)->no4)
#define MCS         (((volatile __near __bitf_T *)0xFFA4)->no5)
#define RESF        (*(volatile __near unsigned char  *)0xFFA8)
#define LVIM        (*(volatile __near unsigned char  *)0xFFA9)
#define LVIM_bit    (*(volatile __near __bitf_T *)0xFFA9)
#define LVIF        (((volatile __near __bitf_T *)0xFFA9)->no0)
#define LVIOMSK     (((volatile __near __bitf_T *)0xFFA9)->no1)
#define LVISEN      (((volatile __near __bitf_T *)0xFFA9)->no7)
#define LVIS        (*(volatile __near unsigned char  *)0xFFAA)
#define LVIS_bit    (*(volatile __near __bitf_T *)0xFFAA)
#define LVILV       (((volatile __near __bitf_T *)0xFFAA)->no0)
#define LVIMD       (((volatile __near __bitf_T *)0xFFAA)->no7)
#define WDTE        (*(volatile __near unsigned char  *)0xFFAB)
#define CRCIN       (*(volatile __near unsigned char  *)0xFFAC)
#define DSA0        (*(volatile __near unsigned char  *)0xFFB0)
#define DSA1        (*(volatile __near unsigned char  *)0xFFB1)
#define DRA0        (*(volatile __near unsigned short *)0xFFB2)
#define DRA0L       (*(volatile __near unsigned char  *)0xFFB2)
#define DRA0H       (*(volatile __near unsigned char  *)0xFFB3)
#define DRA1        (*(volatile __near unsigned short *)0xFFB4)
#define DRA1L       (*(volatile __near unsigned char  *)0xFFB4)
#define DRA1H       (*(volatile __near unsigned char  *)0xFFB5)
#define DBC0        (*(volatile __near unsigned short *)0xFFB6)
#define DBC0L       (*(volatile __near unsigned char  *)0xFFB6)
#define DBC0H       (*(volatile __near unsigned char  *)0xFFB7)
#define DBC1        (*(volatile __near unsigned short *)0xFFB8)
#define DBC1L       (*(volatile __near unsigned char  *)0xFFB8)
#define DBC1H       (*(volatile __near unsigned char  *)0xFFB9)
#define DMC0        (*(volatile __near unsigned char  *)0xFFBA)
#define DMC0_bit    (*(volatile __near __bitf_T *)0xFFBA)
#define DWAIT0      (((volatile __near __bitf_T *)0xFFBA)->no4)
#define DS0         (((volatile __near __bitf_T *)0xFFBA)->no5)
#define DRS0        (((volatile __near __bitf_T *)0xFFBA)->no6)
#define STG0        (((volatile __near __bitf_T *)0xFFBA)->no7)
#define DMC1        (*(volatile __near unsigned char  *)0xFFBB)
#define DMC1_bit    (*(volatile __near __bitf_T *)0xFFBB)
#define DWAIT1      (((volatile __near __bitf_T *)0xFFBB)->no4)
#define DS1         (((volatile __near __bitf_T *)0xFFBB)->no5)
#define DRS1        (((volatile __near __bitf_T *)0xFFBB)->no6)
#define STG1        (((volatile __near __bitf_T *)0xFFBB)->no7)
#define DRC0        (*(volatile __near unsigned char  *)0xFFBC)
#define DRC0_bit    (*(volatile __near __bitf_T *)0xFFBC)
#define DST0        (((volatile __near __bitf_T *)0xFFBC)->no0)
#define DEN0        (((volatile __near __bitf_T *)0xFFBC)->no7)
#define DRC1        (*(volatile __near unsigned char  *)0xFFBD)
#define DRC1_bit    (*(volatile __near __bitf_T *)0xFFBD)
#define DST1        (((volatile __near __bitf_T *)0xFFBD)->no0)
#define DEN1        (((volatile __near __bitf_T *)0xFFBD)->no7)
#define IF2         (*(volatile __near unsigned short *)0xFFD0)
#define IF2L        (*(volatile __near unsigned char  *)0xFFD0)
#define IF2L_bit    (*(volatile __near __bitf_T *)0xFFD0)
#define IF2H        (*(volatile __near unsigned char  *)0xFFD1)
#define IF2H_bit    (*(volatile __near __bitf_T *)0xFFD1)
#define TMIF05      (((volatile __near __bitf_T *)0xFFD0)->no0)
#define TMIF06      (((volatile __near __bitf_T *)0xFFD0)->no1)
#define TMIF07      (((volatile __near __bitf_T *)0xFFD0)->no2)
#define MDIF        (((volatile __near __bitf_T *)0xFFD1)->no5)
#define FLIF        (((volatile __near __bitf_T *)0xFFD1)->no7)
#define MK2         (*(volatile __near unsigned short *)0xFFD4)
#define MK2L        (*(volatile __near unsigned char  *)0xFFD4)
#define MK2L_bit    (*(volatile __near __bitf_T *)0xFFD4)
#define MK2H        (*(volatile __near unsigned char  *)0xFFD5)
#define MK2H_bit    (*(volatile __near __bitf_T *)0xFFD5)
#define TMMK05      (((volatile __near __bitf_T *)0xFFD4)->no0)
#define TMMK06      (((volatile __near __bitf_T *)0xFFD4)->no1)
#define TMMK07      (((volatile __near __bitf_T *)0xFFD4)->no2)
#define MDMK        (((volatile __near __bitf_T *)0xFFD5)->no5)
#define FLMK        (((volatile __near __bitf_T *)0xFFD5)->no7)
#define PR02        (*(volatile __near unsigned short *)0xFFD8)
#define PR02L       (*(volatile __near unsigned char  *)0xFFD8)
#define PR02L_bit   (*(volatile __near __bitf_T *)0xFFD8)
#define PR02H       (*(volatile __near unsigned char  *)0xFFD9)
#define PR02H_bit   (*(volatile __near __bitf_T *)0xFFD9)
#define TMPR005     (((volatile __near __bitf_T *)0xFFD8)->no0)
#define TMPR006     (((volatile __near __bitf_T *)0xFFD8)->no1)
#define TMPR007     (((volatile __near __bitf_T *)0xFFD8)->no2)
#define MDPR0       (((volatile __near __bitf_T *)0xFFD9)->no5)
#define FLPR0       (((volatile __near __bitf_T *)0xFFD9)->no7)
#define PR12        (*(volatile __near unsigned short *)0xFFDC)
#define PR12L       (*(volatile __near unsigned char  *)0xFFDC)
#define PR12L_bit   (*(volatile __near __bitf_T *)0xFFDC)
#define PR12H       (*(volatile __near unsigned char  *)0xFFDD)
#define PR12H_bit   (*(volatile __near __bitf_T *)0xFFDD)
#define TMPR105     (((volatile __near __bitf_T *)0xFFDC)->no0)
#define TMPR106     (((volatile __near __bitf_T *)0xFFDC)->no1)
#define TMPR107     (((volatile __near __bitf_T *)0xFFDC)->no2)
#define MDPR1       (((volatile __near __bitf_T *)0xFFDD)->no5)
#define FLPR1       (((volatile __near __bitf_T *)0xFFDD)->no7)
#define IF0         (*(volatile __near unsigned short *)0xFFE0)
#define IF0L        (*(volatile __near unsigned char  *)0xFFE0)
#define IF0L_bit    (*(volatile __near __bitf_T *)0xFFE0)
#define IF0H        (*(volatile __near unsigned char  *)0xFFE1)
#define IF0H_bit    (*(volatile __near __bitf_T *)0xFFE1)
#define WDTIIF      (((volatile __near __bitf_T *)0xFFE0)->no0)
#define LVIIF       (((volatile __near __bitf_T *)0xFFE0)->no1)
#define PIF0        (((volatile __near __bitf_T *)0xFFE0)->no2)
#define PIF3        (((volatile __near __bitf_T *)0xFFE0)->no5)
#define PIF5        (((volatile __near __bitf_T *)0xFFE0)->no7)
#define DMAIF0      (((volatile __near __bitf_T *)0xFFE1)->no3)
#define DMAIF1      (((volatile __near __bitf_T *)0xFFE1)->no4)
#define CSIIF00     (((volatile __near __bitf_T *)0xFFE1)->no5)
#define IICIF00     (((volatile __near __bitf_T *)0xFFE1)->no5)
#define STIF0       (((volatile __near __bitf_T *)0xFFE1)->no5)
#define SRIF0       (((volatile __near __bitf_T *)0xFFE1)->no6)
#define SREIF0      (((volatile __near __bitf_T *)0xFFE1)->no7)
#define TMIF01H     (((volatile __near __bitf_T *)0xFFE1)->no7)
#define IF1         (*(volatile __near unsigned short *)0xFFE2)
#define IF1L        (*(volatile __near unsigned char  *)0xFFE2)
#define IF1L_bit    (*(volatile __near __bitf_T *)0xFFE2)
#define IF1H        (*(volatile __near unsigned char  *)0xFFE3)
#define IF1H_bit    (*(volatile __near __bitf_T *)0xFFE3)
#define STIF1       (((volatile __near __bitf_T *)0xFFE2)->no0)
#define CSIIF11     (((volatile __near __bitf_T *)0xFFE2)->no1)
#define IICIF11     (((volatile __near __bitf_T *)0xFFE2)->no1)
#define SRIF1       (((volatile __near __bitf_T *)0xFFE2)->no1)
#define SREIF1      (((volatile __near __bitf_T *)0xFFE2)->no2)
#define TMIF03H     (((volatile __near __bitf_T *)0xFFE2)->no2)
#define TMIF00      (((volatile __near __bitf_T *)0xFFE2)->no4)
#define TMIF01      (((volatile __near __bitf_T *)0xFFE2)->no5)
#define TMIF02      (((volatile __near __bitf_T *)0xFFE2)->no6)
#define TMIF03      (((volatile __near __bitf_T *)0xFFE2)->no7)
#define ADIF        (((volatile __near __bitf_T *)0xFFE3)->no0)
#define RTCIF       (((volatile __near __bitf_T *)0xFFE3)->no1)
#define ITIF        (((volatile __near __bitf_T *)0xFFE3)->no2)
#define TMIF04      (((volatile __near __bitf_T *)0xFFE3)->no7)
#define MK0         (*(volatile __near unsigned short *)0xFFE4)
#define MK0L        (*(volatile __near unsigned char  *)0xFFE4)
#define MK0L_bit    (*(volatile __near __bitf_T *)0xFFE4)
#define MK0H        (*(volatile __near unsigned char  *)0xFFE5)
#define MK0H_bit    (*(volatile __near __bitf_T *)0xFFE5)
#define WDTIMK      (((volatile __near __bitf_T *)0xFFE4)->no0)
#define LVIMK       (((volatile __near __bitf_T *)0xFFE4)->no1)
#define PMK0        (((volatile __near __bitf_T *)0xFFE4)->no2)
#define PMK3        (((volatile __near __bitf_T *)0xFFE4)->no5)
#define PMK5        (((volatile __near __bitf_T *)0xFFE4)->no7)
#define DMAMK0      (((volatile __near __bitf_T *)0xFFE5)->no3)
#define DMAMK1      (((volatile __near __bitf_T *)0xFFE5)->no4)
#define CSIMK00     (((volatile __near __bitf_T *)0xFFE5)->no5)
#define IICMK00     (((volatile __near __bitf_T *)0xFFE5)->no5)
#define STMK0       (((volatile __near __bitf_T *)0xFFE5)->no5)
#define SRMK0       (((volatile __near __bitf_T *)0xFFE5)->no6)
#define SREMK0      (((volatile __near __bitf_T *)0xFFE5)->no7)
#define TMMK01H     (((volatile __near __bitf_T *)0xFFE5)->no7)
#define MK1         (*(volatile __near unsigned short *)0xFFE6)
#define MK1L        (*(volatile __near unsigned char  *)0xFFE6)
#define MK1L_bit    (*(volatile __near __bitf_T *)0xFFE6)
#define MK1H        (*(volatile __near unsigned char  *)0xFFE7)
#define MK1H_bit    (*(volatile __near __bitf_T *)0xFFE7)
#define STMK1       (((volatile __near __bitf_T *)0xFFE6)->no0)
#define CSIMK11     (((volatile __near __bitf_T *)0xFFE6)->no1)
#define IICMK11     (((volatile __near __bitf_T *)0xFFE6)->no1)
#define SRMK1       (((volatile __near __bitf_T *)0xFFE6)->no1)
#define SREMK1      (((volatile __near __bitf_T *)0xFFE6)->no2)
#define TMMK03H     (((volatile __near __bitf_T *)0xFFE6)->no2)
#define TMMK00      (((volatile __near __bitf_T *)0xFFE6)->no4)
#define TMMK01      (((volatile __near __bitf_T *)0xFFE6)->no5)
#define TMMK02      (((volatile __near __bitf_T *)0xFFE6)->no6)
#define TMMK03      (((volatile __near __bitf_T *)0xFFE6)->no7)
#define ADMK        (((volatile __near __bitf_T *)0xFFE7)->no0)
#define RTCMK       (((volatile __near __bitf_T *)0xFFE7)->no1)
#define ITMK        (((volatile __near __bitf_T *)0xFFE7)->no2)
#define TMMK04      (((volatile __near __bitf_T *)0xFFE7)->no7)
#define PR00        (*(volatile __near unsigned short *)0xFFE8)
#define PR00L       (*(volatile __near unsigned char  *)0xFFE8)
#define PR00L_bit   (*(volatile __near __bitf_T *)0xFFE8)
#define PR00H       (*(volatile __near unsigned char  *)0xFFE9)
#define PR00H_bit   (*(volatile __near __bitf_T *)0xFFE9)
#define WDTIPR0     (((volatile __near __bitf_T *)0xFFE8)->no0)
#define LVIPR0      (((volatile __near __bitf_T *)0xFFE8)->no1)
#define PPR00       (((volatile __near __bitf_T *)0xFFE8)->no2)
#define PPR03       (((volatile __near __bitf_T *)0xFFE8)->no5)
#define PPR05       (((volatile __near __bitf_T *)0xFFE8)->no7)
#define DMAPR00     (((volatile __near __bitf_T *)0xFFE9)->no3)
#define DMAPR01     (((volatile __near __bitf_T *)0xFFE9)->no4)
#define CSIPR000    (((volatile __near __bitf_T *)0xFFE9)->no5)
#define IICPR000    (((volatile __near __bitf_T *)0xFFE9)->no5)
#define STPR00      (((volatile __near __bitf_T *)0xFFE9)->no5)
#define SRPR00      (((volatile __near __bitf_T *)0xFFE9)->no6)
#define SREPR00     (((volatile __near __bitf_T *)0xFFE9)->no7)
#define TMPR001H    (((volatile __near __bitf_T *)0xFFE9)->no7)
#define PR01        (*(volatile __near unsigned short *)0xFFEA)
#define PR01L       (*(volatile __near unsigned char  *)0xFFEA)
#define PR01L_bit   (*(volatile __near __bitf_T *)0xFFEA)
#define PR01H       (*(volatile __near unsigned char  *)0xFFEB)
#define PR01H_bit   (*(volatile __near __bitf_T *)0xFFEB)
#define STPR01      (((volatile __near __bitf_T *)0xFFEA)->no0)
#define CSIPR011    (((volatile __near __bitf_T *)0xFFEA)->no1)
#define IICPR011    (((volatile __near __bitf_T *)0xFFEA)->no1)
#define SRPR01      (((volatile __near __bitf_T *)0xFFEA)->no1)
#define SREPR01     (((volatile __near __bitf_T *)0xFFEA)->no2)
#define TMPR003H    (((volatile __near __bitf_T *)0xFFEA)->no2)
#define TMPR000     (((volatile __near __bitf_T *)0xFFEA)->no4)
#define TMPR001     (((volatile __near __bitf_T *)0xFFEA)->no5)
#define TMPR002     (((volatile __near __bitf_T *)0xFFEA)->no6)
#define TMPR003     (((volatile __near __bitf_T *)0xFFEA)->no7)
#define ADPR0       (((volatile __near __bitf_T *)0xFFEB)->no0)
#define RTCPR0      (((volatile __near __bitf_T *)0xFFEB)->no1)
#define ITPR0       (((volatile __near __bitf_T *)0xFFEB)->no2)
#define TMPR004     (((volatile __near __bitf_T *)0xFFEB)->no7)
#define PR10        (*(volatile __near unsigned short *)0xFFEC)
#define PR10L       (*(volatile __near unsigned char  *)0xFFEC)
#define PR10L_bit   (*(volatile __near __bitf_T *)0xFFEC)
#define PR10H       (*(volatile __near unsigned char  *)0xFFED)
#define PR10H_bit   (*(volatile __near __bitf_T *)0xFFED)
#define WDTIPR1     (((volatile __near __bitf_T *)0xFFEC)->no0)
#define LVIPR1      (((volatile __near __bitf_T *)0xFFEC)->no1)
#define PPR10       (((volatile __near __bitf_T *)0xFFEC)->no2)
#define PPR13       (((volatile __near __bitf_T *)0xFFEC)->no5)
#define PPR15       (((volatile __near __bitf_T *)0xFFEC)->no7)
#define DMAPR10     (((volatile __near __bitf_T *)0xFFED)->no3)
#define DMAPR11     (((volatile __near __bitf_T *)0xFFED)->no4)
#define CSIPR100    (((volatile __near __bitf_T *)0xFFED)->no5)
#define IICPR100    (((volatile __near __bitf_T *)0xFFED)->no5)
#define STPR10      (((volatile __near __bitf_T *)0xFFED)->no5)
#define SRPR10      (((volatile __near __bitf_T *)0xFFED)->no6)
#define SREPR10     (((volatile __near __bitf_T *)0xFFED)->no7)
#define TMPR101H    (((volatile __near __bitf_T *)0xFFED)->no7)
#define PR11        (*(volatile __near unsigned short *)0xFFEE)
#define PR11L       (*(volatile __near unsigned char  *)0xFFEE)
#define PR11L_bit   (*(volatile __near __bitf_T *)0xFFEE)
#define PR11H       (*(volatile __near unsigned char  *)0xFFEF)
#define PR11H_bit   (*(volatile __near __bitf_T *)0xFFEF)
#define STPR11      (((volatile __near __bitf_T *)0xFFEE)->no0)
#define CSIPR111    (((volatile __near __bitf_T *)0xFFEE)->no1)
#define IICPR111    (((volatile __near __bitf_T *)0xFFEE)->no1)
#define SRPR11      (((volatile __near __bitf_T *)0xFFEE)->no1)
#define SREPR11     (((volatile __near __bitf_T *)0xFFEE)->no2)
#define TMPR103H    (((volatile __near __bitf_T *)0xFFEE)->no2)
#define TMPR100     (((volatile __near __bitf_T *)0xFFEE)->no4)
#define TMPR101     (((volatile __near __bitf_T *)0xFFEE)->no5)
#define TMPR102     (((volatile __near __bitf_T *)0xFFEE)->no6)
#define TMPR103     (((volatile __near __bitf_T *)0xFFEE)->no7)
#define ADPR1       (((volatile __near __bitf_T *)0xFFEF)->no0)
#define RTCPR1      (((volatile __near __bitf_T *)0xFFEF)->no1)
#define ITPR1       (((volatile __near __bitf_T *)0xFFEF)->no2)
#define TMPR104     (((volatile __near __bitf_T *)0xFFEF)->no7)
#define MDAL        (*(volatile __near unsigned short *)0xFFF0)
#define MULA        (*(volatile __near unsigned short *)0xFFF0)
#define MDAH        (*(volatile __near unsigned short *)0xFFF2)
#define MULB        (*(volatile __near unsigned short *)0xFFF2)
#define MDBH        (*(volatile __near unsigned short *)0xFFF4)
#define MULOH       (*(volatile __near unsigned short *)0xFFF4)
#define MDBL        (*(volatile __near unsigned short *)0xFFF6)
#define MULOL       (*(volatile __near unsigned short *)0xFFF6)
#define PMC         (*(volatile __near unsigned char  *)0xFFFE)
#define PMC_bit     (*(volatile __near __bitf_T *)0xFFFE)
#define MAA         (((volatile __near __bitf_T *)0xFFFE)->no0)


#define INTWDTI                         0x0004
#define INTLVI                          0x0006
#define INTP0                           0x0008
#define INTP3                           0x000E
#define INTP5                           0x0012
#define INTDMA0                         0x001A
#define INTDMA1                         0x001C
#define INTCSI00                        0x001E
#define INTIIC00                        0x001E
#define INTST0                          0x001E
#define INTSR0                          0x0020
#define INTSRE0                         0x0022
#define INTTM01H                        0x0022
#define INTST1                          0x0024
#define INTCSI11                        0x0026
#define INTIIC11                        0x0026
#define INTSR1                          0x0026
#define INTSRE1                         0x0028
#define INTTM03H                        0x0028
#define INTTM00                         0x002C
#define INTTM01                         0x002E
#define INTTM02                         0x0030
#define INTTM03                         0x0032
#define INTAD                           0x0034
#define INTRTC                          0x0036
#define INTIT                           0x0038
#define INTTM04                         0x0042
#define INTTM05                         0x0044
#define INTTM06                         0x0046
#define INTTM07                         0x0048
#define INTMD                           0x005E
#define INTFL                           0x0062

#endif
