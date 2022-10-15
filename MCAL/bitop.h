/*
This header file contains some usefull macros for bitwise operations on registers.
Which simplifies the code and makes it more readable.
*/

#ifndef _BITOP_H_
#define	_BITOP_H_

#define BIT0                (1<<0)
#define BIT1                (1<<1)
#define BIT2                (1<<2)
#define BIT3                (1<<3)
#define BIT4                (1<<4)
#define BIT5                (1<<5)
#define BIT6                (1<<6)
#define BIT7                (1<<7)

#define SET_BIT(X,BIT_NO)   (X)|=(1<<(BIT_NO))
#define CLR_BIT(X,BIT_NO)   (X)&=~(1<<(BIT_NO))
#define TOG_BIT(X,BIT_NO)   (X)^=(1<<(BIT_NO))
#define READ_BIT(X,BIT_NO)  (((X)&(1<<(BIT_NO)))>>(BIT_NO))
#define CHK_BIT(X, BIT_NO)  (((X)&(1<<BIT_NO))==1)
#define NCHK_BIT(X, BIT_NO) (((X)&(1<<BIT_NO))==0)

#define SET_MBIT(X, M, V)   (X)=(((X)&((0xff)^(M)))|((V)&(M)))

#define SET_REG(X)          (X)=0xFF
#define CLR_REG(X)          (X)=0x00
#define FLP_REG(X)          (X)~=(X)

#endif	/* BITOP_H */

