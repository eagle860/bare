#ifndef _OK6410_H
#define _OK6410_H


/*=======================================================
**	基地址的定义
=========================================================*/
#define	AHB_BASE		(0x7F000000)

/******************************************************************
**  GPX的地址定义
*******************************************************************/
#define	GPX_BASE		(AHB_BASE+0x08000)

/******************************************************************
**		GPA寄存器地址定义
*******************************************************************/
#define	GPACON			(*(volatile unsigned long *)(GPX_BASE + 0x0000))
#define	GPADAT			(*(volatile unsigned long *)(GPX_BASE + 0x0004))
#define	GPAPUD			(*(volatile unsigned long *)(GPX_BASE + 0x0008))
#define	GPACONSLP		(*(volatile unsigned long *)(GPX_BASE + 0x000C))
#define	GPAPUDSLP		(*(volatile unsigned long *)(GPX_BASE + 0x0010))

/******************************************************************
**		GPB寄存器地址定义
******************************************************************/
#define	GPBCON			(*(volatile unsigned long *)(GPX_BASE + 0x0020))
#define	GPBDAT			(*(volatile unsigned long *)(GPX_BASE + 0x0024))
#define	GPBPUD			(*(volatile unsigned long *)(GPX_BASE + 0x0028))
#define	GPBCONSLP		(*(volatile unsigned long *)(GPX_BASE + 0x002C))
#define	GPBPUDSLP		(*(volatile unsigned long *)(GPX_BASE + 0x0030))

/******************************************************************
**		GPC寄存器地址定义
******************************************************************/
#define	GPCCON			(*(volatile unsigned long *)(GPX_BASE + 0x0040))
#define	GPCDAT			(*(volatile unsigned long *)(GPX_BASE + 0x0044))
#define	GPCPUD			(*(volatile unsigned long *)(GPX_BASE + 0x0048))
#define	GPCCONSLP		(*(volatile unsigned long *)(GPX_BASE + 0x004C))
#define	GPCPUDSLP		(*(volatile unsigned long *)(GPX_BASE + 0x0050))

/******************************************************************
**		GPD寄存器地址定义
******************************************************************/
#define	GPDCON			(*(volatile unsigned long *)(GPX_BASE + 0x0060))
#define	GPDDAT			(*(volatile unsigned long *)(GPX_BASE + 0x0064))
#define	GPDPUD			(*(volatile unsigned long *)(GPX_BASE + 0x0068))
#define	GPDCONSLP		(*(volatile unsigned long *)(GPX_BASE + 0x006C))
#define	GPDPUDSLP		(*(volatile unsigned long *)(GPX_BASE + 0x0070))

/******************************************************************
**		GPE寄存器地址定义
******************************************************************/
#define	GPECON			(*(volatile unsigned long *)(GPX_BASE + 0x0080))
#define	GPEDAT			(*(volatile unsigned long *)(GPX_BASE + 0x0084))
#define	GPEPUD			(*(volatile unsigned long *)(GPX_BASE + 0x0088))
#define	GPECONSLP		(*(volatile unsigned long *)(GPX_BASE + 0x008C))
#define	GPEPUDSLP		(*(volatile unsigned long *)(GPX_BASE + 0x0090))

/******************************************************************
**		GPF寄存器地址定义
******************************************************************/
#define	GPFCON			(*(volatile unsigned long *)(GPX_BASE + 0x00A0))
#define	GPFDAT			(*(volatile unsigned long *)(GPX_BASE + 0x00A4))
#define	GPFPUD			(*(volatile unsigned long *)(GPX_BASE + 0x00A8))
#define	GPFCONSLP		(*(volatile unsigned long *)(GPX_BASE + 0x00AC))
#define	GPFPUDSLP		(*(volatile unsigned long *)(GPX_BASE + 0x00B0))

/******************************************************************
**		GPG寄存器地址定义
******************************************************************/
#define	GPGCON			(*(volatile unsigned long *)(GPX_BASE + 0x00C0))
#define	GPGDAT			(*(volatile unsigned long *)(GPX_BASE + 0x00C4))
#define	GPGPUD			(*(volatile unsigned long *)(GPX_BASE + 0x00C8))
#define	GPGCONSLP		(*(volatile unsigned long *)(GPX_BASE + 0x00CC))
#define	GPGPUDSLP		(*(volatile unsigned long *)(GPX_BASE + 0x00D0))

/******************************************************************
**		GPH寄存器地址定义
******************************************************************/
#define	GPHCON			(*(volatile unsigned long *)(GPX_BASE + 0x00E0))
#define	GPHDAT			(*(volatile unsigned long *)(GPX_BASE + 0x00E4))
#define	GPHPUD			(*(volatile unsigned long *)(GPX_BASE + 0x00E8))
#define	GPHCONSLP		(*(volatile unsigned long *)(GPX_BASE + 0x00EC))
#define	GPHPUDSLP		(*(volatile unsigned long *)(GPX_BASE + 0x00F0))

/******************************************************************
**		GPI寄存器地址定义
******************************************************************/
#define	GPICON			(*(volatile unsigned long *)(GPX_BASE + 0x0100))
#define	GPIDAT			(*(volatile unsigned long *)(GPX_BASE + 0x0104))
#define	GPIPUD			(*(volatile unsigned long *)(GPX_BASE + 0x0108))
#define	GPICONSLP		(*(volatile unsigned long *)(GPX_BASE + 0x010C))
#define	GPIPUDSLP		(*(volatile unsigned long *)(GPX_BASE + 0x0110))

/******************************************************************
**		GPJ寄存器地址定义
******************************************************************/
#define	GPJCON			(*(volatile unsigned long *)(GPX_BASE + 0x0120))
#define	GPJDAT			(*(volatile unsigned long *)(GPX_BASE + 0x0124))
#define	GPJPUD			(*(volatile unsigned long *)(GPX_BASE + 0x0128))
#define	GPJCONSLP		(*(volatile unsigned long *)(GPX_BASE + 0x012C))
#define	GPJPUDSLP		(*(volatile unsigned long *)(GPX_BASE + 0x0130))

/******************************************************************
**		GPK寄存器地址定义
******************************************************************/
#define	GPKCON0			(*(volatile unsigned long *)(GPX_BASE + 0x0800))
#define	GPKCON1			(*(volatile unsigned long *)(GPX_BASE + 0x0804))
#define	GPKDAT			(*(volatile unsigned long *)(GPX_BASE + 0x0808))
#define	GPKPUD			(*(volatile unsigned long *)(GPX_BASE + 0x080C))

/******************************************************************
**		GPL寄存器地址定义
******************************************************************/
#define	GPLCON0			(*(volatile unsigned long *)(GPX_BASE + 0x0810))
#define	GPLCON1			(*(volatile unsigned long *)(GPX_BASE + 0x0814))
#define	GPLDAT			(*(volatile unsigned long *)(GPX_BASE + 0x0818))
#define	GPLPUD			(*(volatile unsigned long *)(GPX_BASE + 0x081C))

/******************************************************************
**		GPM寄存器地址定义
******************************************************************/
#define	GPMCON			(*(volatile unsigned long *)(GPX_BASE + 0x0820))
#define	GPMDAT			(*(volatile unsigned long *)(GPX_BASE + 0x0824))
#define	GPMPUD			(*(volatile unsigned long *)(GPX_BASE + 0x0828))

/******************************************************************
**		GPN寄存器地址定义
******************************************************************/
#define	GPNCON			(*(volatile unsigned long *)(GPX_BASE + 0x0830))
#define	GPNDAT			(*(volatile unsigned long *)(GPX_BASE + 0x0834))
#define	GPNPUD			(*(volatile unsigned long *)(GPX_BASE + 0x0838))

/******************************************************************
**		GPO寄存器地址定义
******************************************************************/
#define	GPOCON			(*(volatile unsigned long *)(GPX_BASE + 0x0140))
#define	GPODAT			(*(volatile unsigned long *)(GPX_BASE + 0x0144))
#define	GPOPUD			(*(volatile unsigned long *)(GPX_BASE + 0x0148))
#define	GPOCONSLP		(*(volatile unsigned long *)(GPX_BASE + 0x014C))
#define	GPOPUDSLP		(*(volatile unsigned long *)(GPX_BASE + 0x0150))

/******************************************************************
**		GPP寄存器地址定义
******************************************************************/
#define	GPPCON			(*(volatile unsigned long *)(GPX_BASE + 0x0160))
#define	GPPDAT			(*(volatile unsigned long *)(GPX_BASE + 0x0164))
#define	GPPPUD			(*(volatile unsigned long *)(GPX_BASE + 0x0168))
#define	GPPCONSLP		(*(volatile unsigned long *)(GPX_BASE + 0x016C))
#define	GPPPUDSLP		(*(volatile unsigned long *)(GPX_BASE + 0x0170))

/******************************************************************
**		GPQ寄存器地址定义
******************************************************************/
#define	GPQCON			(*(volatile unsigned long *)(GPX_BASE + 0x0180))
#define	GPQDAT			(*(volatile unsigned long *)(GPX_BASE + 0x0184))
#define	GPQPUD			(*(volatile unsigned long *)(GPX_BASE + 0x0188))
#define	GPQCONSLP		(*(volatile unsigned long *)(GPX_BASE + 0x018C))
#define	GPQPUDSLP		(*(volatile unsigned long *)(GPX_BASE + 0x0190))


/******************************************************************
**	特殊端口配置寄存器
*******************************************************************/
//#define	SP_BASE			(AHB_BASE+0x08000)
#define	SPCON			(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x01A0))
#define	SPCONSLP		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0880))

/*****************************************************************
**	存储器端口配置
******************************************************************/
//#define	MEM_BASE		(AHB_BASE+0x08000)
#define	MEM0CONSLP0	(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x01C0))
#define	MEM0CONSLP1	(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x01C4))
#define	MEM0CONSLP2	(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x01C8))
#define	MEM0DRVCON		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x01D0))
#define	MEM1DRVCON		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x01D4))

/*****************************************************************
**	外部中断配置寄存器地址
******************************************************************/
//#define	EINT_BASE		(AHB_BASE+0x08000)

/* 外部中断配置寄存器0*/
#define	EINT0CON0		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0900))

/* 外部中断配置寄存器1*/
#define	EINT0CON1		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0904))

/* 外部中断过滤控制寄存器0*/
#define	EINT0FLTCON0	(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0910))

/* 外部中断过滤控制寄存器1*/
#define	EINT0FLTCON1	(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0914))

/* 外部中断过滤控制寄存器2*/
#define	EINT0FLTCON2	(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0918))

/* 外部中断过滤控制寄存器3*/
#define	EINT0FLTCON3	(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x091C))

/* 外部中断屏蔽寄存器*/
#define	EINT0MASK		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0920))

/* 外部中断悬挂寄存器*/
#define	EINT0PEND		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0924))

/* 睡眠模式垫配置寄存器*/
#define	SLPEN			(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0930))

/* 外部中断1,2配置寄存器0*/
#define	EINT12CON		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0200))
/* 外部中断3,4配置寄存器0*/
#define	EINT34CON		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0204))
/* 外部中断5,6配置寄存器0*/
#define	EINT56CON		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0208))
/* 外部中断7,8配置寄存器0*/
#define	EINT78CON		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x020C))
/* 外部中断9配置寄存器0*/
#define	EINT9CON		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0210))

/* 外部中断1,2控制寄存器0*/
#define	EINT12FLTCON	(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0220))
/* 外部中断3,4控制寄存器0*/
#define	EINT34FLTCON	(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0224))
/* 外部中断5,6控制寄存器0*/
#define	EINT56FLTCON	(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0228))
/* 外部中断7,8控制寄存器0*/
#define	EINT78FLTCON	(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x022C))
/* 外部中断9控制寄存器0*/
#define	EINT9FLTCON		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0230))

/* 外部中断1,2屏蔽寄存器0*/
#define	EINT12MASK		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0240))
/* 外部中断3,4屏蔽寄存器0*/
#define	EINT34MASK		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0244))
/* 外部中断5,6屏蔽寄存器0*/
#define	EINT56MASK		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0248))
/* 外部中断7,8屏蔽寄存器0*/
#define	EINT78MASK		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x024C))
/* 外部中断9屏蔽寄存器0*/
#define	EINT9MASK		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0250))

/* 外部中断1,2悬挂寄存器0*/
#define	EINT12PEND		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0260))
/* 外部中断3,4悬挂寄存器0*/
#define	EINT34PEND		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0264))
/* 外部中断5,6悬挂寄存器0*/
#define	EINT56PEND		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0268))
/* 外部中断7,8悬挂寄存器0*/
#define	EINT78PEND		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x026C))
/* 外部中断9悬挂寄存器0*/
#define	EINT9PEND		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0260))

/******************************************************************
**	优先级控制寄存器
*******************************************************************/
//#define	PRIO_BASE		(AHB_BASE+0x08000)
#define	PRIORITY		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0280))


/******************************************************************
**	当前服务寄存器
*******************************************************************/
//#define	SER_BASE		(AHB_BASE+0x08000)
#define	SERVICE			(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0284))
#define	SERVICEPEND		(*(volatile unsigned long *)((AHB_BASE+0x08000) + 0x0288))


/*=======================================================
**	UART寄存器地址
=======================================================*/
#define	UART_BASE		(AHB_BASE+0x05000)

/*                                  UART通道0                                                                              */

/*UART通道0行控制寄存器*/
#define	ULCON0			(*(volatile unsigned long *)(UART_BASE + 0x0000))
/*UART通道0控制寄存器*/
#define	UCON0			(*(volatile unsigned long *)(UART_BASE + 0x0004))
/*UART通道0FIFO控制寄存器*/
#define	UFCON0			(*(volatile unsigned long *)(UART_BASE + 0x0008))
/*UART通道0调制解调器控制寄存器*/
#define	UMCON0			(*(volatile unsigned long *)(UART_BASE + 0x000C))

/*UART通道0发送/接收状态寄存器*/
#define	UTRSTAT0		(*(volatile unsigned long *)(UART_BASE + 0x0010))
/*UART通道0接收错误状态寄存器*/
#define	UERSTAT0		(*(volatile unsigned long *)(UART_BASE + 0x0014))
/*UART通道0FIFO状态寄存器*/
#define	UFSTAT0			(*(volatile unsigned long *)(UART_BASE + 0x0018))
/*UART通道0调制解调器状态寄存器*/
#define	UMSTAT0			(*(volatile unsigned long *)(UART_BASE + 0x001C))

/*UART通道0发送缓冲寄存器*/
#define	UTXH0			(*(volatile unsigned long *)(UART_BASE + 0x0020))
/*UART通道0接收缓冲寄存器*/
#define	URXH0			(*(volatile unsigned long *)(UART_BASE + 0x0024))
/*UART通道0波特率分频寄存器*/
#define	UBRDIV0			(*(volatile unsigned long *)(UART_BASE + 0x0028))
/*UART通道0分频插槽寄存器*/
#define	UDIVSLOT0		(*(volatile unsigned long *)(UART_BASE + 0x002C))
/*UART通道0中断处理寄存器*/
#define	UINTP0			(*(volatile unsigned long *)(UART_BASE + 0x0030))
/*UART通道0中断源处理寄存器*/
#define	UINTSP0			(*(volatile unsigned long *)(UART_BASE + 0x0034))
/*UART通道0中断屏蔽寄存器*/
#define	UINTM0			(*(volatile unsigned long *)(UART_BASE + 0x0038))


/*                                  UART通道1                                                                          */

/*UART通道1行控制寄存器*/
#define	ULCON1			(*(volatile unsigned long *)(UART_BASE + 0x0400))
/*UART通道1控制寄存器*/
#define	UCON1			(*(volatile unsigned long *)(UART_BASE + 0x0404))
/*UART通道1FIFO控制寄存器*/
#define	UFCON1			(*(volatile unsigned long *)(UART_BASE + 0x0408))
/*UART通道1调制解调器控制寄存器*/
#define	UMCON1		    	(*(volatile unsigned long *)(UART_BASE + 0x040C))

/*UART通道1发送/接收状态寄存器*/
#define	UTRSTAT1		(*(volatile unsigned long *)(UART_BASE + 0x0410))
/*UART通道1接收错误状态寄存器*/
#define	UERSTAT1		(*(volatile unsigned long *)(UART_BASE + 0x0414))
/*UART通道1FIFO状态寄存器*/
#define	UFSTAT1			(*(volatile unsigned long *)(UART_BASE + 0x0418))
/*UART通道1调制解调器状态寄存器*/
#define	UMSTAT1			(*(volatile unsigned long *)(UART_BASE + 0x041C))

/*UART通道1发送缓冲寄存器*/
#define	UTXH1			(*(volatile unsigned long *)(UART_BASE + 0x0420))
/*UART通道1接收缓冲寄存器*/
#define	URXH1			(*(volatile unsigned long *)(UART_BASE + 0x0424))
/*UART通道1波特率分频寄存器*/
#define	UBRDIV1			(*(volatile unsigned long *)(UART_BASE + 0x0428))
/*UART通道1分频插槽寄存器*/
#define	UDIVSLOT1		(*(volatile unsigned long *)(UART_BASE + 0x042C))
/*UART通道1中断处理寄存器*/
#define	UINTP1			(*(volatile unsigned long *)(UART_BASE + 0x0430))
/*UART通道1中断源处理寄存器*/
#define	UINTSP1			(*(volatile unsigned long *)(UART_BASE + 0x0434))
/*UART通道1中断屏蔽寄存器*/
#define	UINTM1			(*(volatile unsigned long *)(UART_BASE + 0x0438))


/*                                  UART通道2                                                                                 */

/*UART通道2行控制寄存器*/
#define	ULCON2			(*(volatile unsigned long *)(UART_BASE + 0x0800))
/*UART通道2控制寄存器*/
#define	UCON2			(*(volatile unsigned long *)(UART_BASE + 0x0804))
/*UART通道2FIFO控制寄存器*/
#define	UFCON2			(*(volatile unsigned long *)(UART_BASE + 0x0808))
/*UART通道2调制解调器控制寄存器*/
#define	UMCON2		    	(*(volatile unsigned long *)(UART_BASE + 0x080C))

/*UART通道2发送/接收状态寄存器*/
#define	UTRSTAT2		(*(volatile unsigned long *)(UART_BASE + 0x0810))
/*UART通道2接收错误状态寄存器*/
#define	UERSTAT2		(*(volatile unsigned long *)(UART_BASE + 0x0814))
/*UART通道2FIFO状态寄存器*/
#define	UFSTAT2			(*(volatile unsigned long *)(UART_BASE + 0x0818))
/*UART通道2调制解调器状态寄存器*/
#define	UMSTAT2			(*(volatile unsigned long *)(UART_BASE + 0x081C))

/*UART通道2发送缓冲寄存器*/
#define	UTXH2			(*(volatile unsigned long *)(UART_BASE + 0x0820))
/*UART通道2接收缓冲寄存器*/
#define	URXH2			(*(volatile unsigned long *)(UART_BASE + 0x0824))
/*UART通道2波特率分频寄存器*/
#define	UBRDIV2			(*(volatile unsigned long *)(UART_BASE + 0x0828))
/*UART通道2分频插槽寄存器*/
#define	UDIVSLOT2		(*(volatile unsigned long *)(UART_BASE + 0x082C))
/*UART通道2中断处理寄存器*/
#define	UINTP2			(*(volatile unsigned long *)(UART_BASE + 0x0830))
/*UART通道2中断源处理寄存器*/
#define	UINTSP2			(*(volatile unsigned long *)(UART_BASE + 0x0834))
/*UART通道2中断屏蔽寄存器*/
#define	UINTM2			(*(volatile unsigned long *)(UART_BASE + 0x0838))


/*                                  UART通道3                                                                            */

/*UART通道3行控制寄存器*/
#define	ULCON3			(*(volatile unsigned long *)(UART_BASE + 0x0C00))
/*UART通道3控制寄存器*/
#define	UCON3			(*(volatile unsigned long *)(UART_BASE + 0x0C04))
/*UART通道3FIFO控制寄存器*/
#define	UFCON3			(*(volatile unsigned long *)(UART_BASE + 0x0C08))
/*UART通道3调制解调器控制寄存器*/
#define	UMCON3		    	(*(volatile unsigned long *)(UART_BASE + 0x0C0C))

/*UART通道3发送/接收状态寄存器*/
#define	UTRSTAT3		(*(volatile unsigned long *)(UART_BASE + 0x0C10))
/*UART通道3接收错误状态寄存器*/
#define	UERSTAT3		(*(volatile unsigned long *)(UART_BASE + 0x0C14))
/*UART通道3FIFO状态寄存器*/
#define	UFSTAT3			(*(volatile unsigned long *)(UART_BASE + 0x0C18))
/*UART通道3调制解调器状态寄存器*/
#define	UMSTAT3			(*(volatile unsigned long *)(UART_BASE + 0x0C1C))

/*UART通道3发送缓冲寄存器*/
#define	UTXH3			(*(volatile unsigned long *)(UART_BASE + 0x0C20))
/*UART通道3接收缓冲寄存器*/
#define	URXH3			(*(volatile unsigned long *)(UART_BASE + 0x0C24))
/*UART通道3波特率分频寄存器*/
#define	UBRDIV3			(*(volatile unsigned long *)(UART_BASE + 0x0C28))
/*UART通道3分频插槽寄存器*/
#define	UDIVSLOT3		(*(volatile unsigned long *)(UART_BASE + 0x0C2C))
/*UART通道3中断处理寄存器*/
#define	UINTP3			(*(volatile unsigned long *)(UART_BASE + 0x0C30))
/*UART通道3中断源处理寄存器*/
#define	UINTSP3			(*(volatile unsigned long *)(UART_BASE + 0x0C34))
/*UART通道3中断屏蔽寄存器*/
#define	UINTM3			(*(volatile unsigned long *)(UART_BASE + 0x0C38))





/*=======================================================
**	特殊功能寄存器地址
========================================================*/

#define	SFR_BASE			(0X7E000000)

/*****************************************************************
**	系统控制器PLL
******************************************************************/
//#define	PLL_BASE		(SFR_BASE+0X0F000)

#define	APLL_LOCK		(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x0000))
#define	MPLL_LOCK		(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x0004))
#define	EPLL_LOCK		(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x0008))

#define	APLL_CON		(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x000C))
#define	MPLL_CON		(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x0010))
#define	EPLL_CON0		(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x0014))
#define	EPLL_CON1		(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x0018))


#define   OTHERS   			(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x0900))

/*****************************************************************
**	时钟发生器
******************************************************************/
//#define	CLK_BASE		(SFR_BASE+0X0F000)

#define	CLK_SRC			(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x001C))
#define	CLK_DIV0		(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x0020))
#define	CLK_DIV1		(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x0024))
#define	CLK_DIV2		(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x0028))
#define	CLK_OUT			(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x002C))
#define	HCLK_GATE		(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x0030))
#define	PCLK_GATE		(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x0034))
#define	SCLK_GATE		(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x0038))

/**************************************************************
**AHB总线控制
****************************************************************/
//#define	AHB_CON			(SFR_BASE+0X0F000)
#define	AHB_CON0		(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x0100))
#define	AHB_CON1		(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x0104))
#define	AHB_CON2		(*(volatile unsigned long *)((SFR_BASE+0X0F000) + 0x0108))




/****************************************************************
**            DRAM控制状态寄存器
**
*****************************************************************/

/*-----------------------------------------------------*/
/*存储器构造寄存器*/
#define 	MEM_SYS_CFG	(*(volatile unsigned long *)0x7E00F120)


/*===============================================*/

/*以下2个是    读    */
/*  16位DRAM控制状态寄存器     复位值:0XAB0(1010 1011 0000)*/
#define	P0MEMSTAT		(*(volatile unsigned long *)0x7E000000)

/*  32位DRAM控制状态寄存器     复位值:0XAB0(1010 1011 0100)*/
#define	P1MEMSTAT		(*(volatile unsigned long *)0x7E001000)


/*以下2个是    写  */
/*  16位DRAM控制命令寄存器     */
#define	P0MEMCCMD		(*(volatile unsigned long *)0x7E000004)

/*  32位DRAM控制命令寄存器     */
#define	P1MEMCCMD		(*(volatile unsigned long *)0x7E001004)


/*以下2个是    写  */
/*  16位DRAM控制直接命令寄存器     */
#define	P0DIRECTCMD	(*(volatile unsigned long *)0x7E000008)

/*  32位DRAM控制直接命令寄存器     */
#define	P1DIRECTCMD	(*(volatile unsigned long *)0x7E001008)


/*  16位DRAM控制存储配置寄存器     复位值:0x0100 0020*/
#define	P0MEMCFG		(*(volatile unsigned long *)0x7E00000C)

/*  32位DRAM控制存储配置寄存器     复位值:0x0100 0020*/
#define	P1MEMCFG		(*(volatile unsigned long *)0x7E00100C)


/*  16位DRAM控制刷新周期寄存器     复位值:0xA60 (1010 0110 0000)*/
#define	P0REFRESH		(*(volatile unsigned long *)0x7E000010)

/*  32位DRAM控制刷新周期寄存器     复位值:0xA60 (1010 0110 0000)*/
#define	P1REFRESH		(*(volatile unsigned long *)0x7E001010)


/*  16位DRAM控制CAS等待时间寄存器     复位值:0x06(0110)*/
#define	P0CASLAT		(*(volatile unsigned long *)0x7E000014)

/*  32位DRAM控制CAS等待时间寄存器     复位值:0x06(0110 )*/
#define	P1CASLAT		(*(volatile unsigned long *)0x7E001014)


/*  16位DRAM控制t_DQSS 寄存器     复位值:0x01(0001)*/
#define	P0T_DQSS		(*(volatile unsigned long *)0x7E000018)

/*  32位DRAM控制t_DQSS寄存器     复位值:0x01(0001 )*/
#define	P1T_DQSS		(*(volatile unsigned long *)0x7E001018)


/*  16位DRAM控制t_MRD 寄存器     复位值:0x02(0010)*/
#define	P0T_MRD			(*(volatile unsigned long *)0x7E00001C)

/*  32位DRAM控制t_MRD寄存器     复位值:0x02(0010 )*/
#define	P1T_MRD			(*(volatile unsigned long *)0x7E00101C)


/*  16位DRAM控制t_RAS 寄存器     复位值:0x07(0111)*/
#define	P0T_RAS			(*(volatile unsigned long *)0x7E000020)

/*  32位DRAM控制t_RAS寄存器     复位值:0x07(0111 )*/
#define	P1T_RAS			(*(volatile unsigned long *)0x7E001020)


/*  16位DRAM控制t_RC寄存器     复位值:0x0B(1011)*/
#define	P0T_RC			(*(volatile unsigned long *)0x7E000024)

/*  32位DRAM控制t_RC寄存器     复位值:0x0B(1011 )*/
#define	P1T_RC			(*(volatile unsigned long *)0x7E001024)


/*  16位DRAM控制t_RCD寄存器     复位值:0x1D(0001 1101)*/
#define	P0T_RCD			(*(volatile unsigned long *)0x7E000028)

/*  32位DRAM控制t_RCD寄存器     复位值:0x1D(0001 1101 )*/
#define	P1T_RCD			(*(volatile unsigned long *)0x7E001028)


/*  16位DRAM控制t_RFC寄存器     复位值:0x212*/
#define	P0T_RFC			(*(volatile unsigned long *)0x7E00002C)

/*  32位DRAM控制t_RFC寄存器     复位值:0x212*/
#define	P1T_RFC			(*(volatile unsigned long *)0x7E00102C)


/*  16位DRAM控制t_RP寄存器     复位值:0x1D(0001 1101)*/
#define	P0T_RP			(*(volatile unsigned long *)0x7E000030)

/*  32位DRAM控制t_RP寄存器     复位值:0x1D(0001 1101 )*/
#define	P1T_RP			(*(volatile unsigned long *)0x7E001030)


/*  16位DRAM控制t_RRD寄存器     复位值:0x02*/
#define	P0T_RRD			(*(volatile unsigned long *)0x7E000034)

/*  32位DRAM控制t_RRD寄存器     复位值:0x02*/
#define	P1T_RRD			(*(volatile unsigned long *)0x7E001034)


/*  16位DRAM控制t_WR寄存器     复位值:0x03*/
#define	P0T_WR			(*(volatile unsigned long *)0x7E000038)

/*  32位DRAM控制t_WR寄存器     复位值:0x03*/
#define	P1T_WR			(*(volatile unsigned long *)0x7E001038)


/*  16位DRAM控制t_WTR寄存器     复位值:0x02*/
#define	P0T_WTR		(*(volatile unsigned long *)0x7E00003C)

/*  32位DRAM控制t_WTR寄存器     复位值:0x02*/
#define	P1T_WTR		(*(volatile unsigned long *)0x7E00103C)

/*  16位DRAM控制t_XP寄存器     复位值:0x01*/
#define	P0T_XP			(*(volatile unsigned long *)0x7E000040)

/*  32位DRAM控制t_XP寄存器     复位值:0x01*/
#define	P1T_XP			(*(volatile unsigned long *)0x7E001040)


/*  16位DRAM控制t_XSR寄存器     复位值:0x0A(0000 1010)*/
#define	P0T_XSR			(*(volatile unsigned long *)0x7E000044)

/*  32位DRAM控制t_XSR寄存器     复位值:0x0A(0000 1010 )*/
#define	P1T_XSR			(*(volatile unsigned long *)0x7E001044)


/*  16位DRAM控制t_ESR寄存器     复位值:0x14(0001 0100)*/
#define	P0T_ESR			(*(volatile unsigned long *)0x7E000048)

/*  32位DRAM控制t_ESR寄存器     复位值:0x14(0001 0100 )*/
#define	P1T_ESR			(*(volatile unsigned long *)0x7E001048)



/*---------------------------------------------------------*/
/*	存储配置2寄存器*/

/*  16位DRAM控制t_ESR寄存器     复位值:0x0B00(0000 1011 0000 0000)*/
#define	P0MEMCFG2		(*(volatile unsigned long *)0x7E00004C)

/*  32位DRAM控制t_ESR寄存器     复位值:0x0B00(0000 1011 0000 0000)*/
#define	P1MEMCFG2		(*(volatile unsigned long *)0x7E00104C)


/*---------------------------------------------------------*/
/*	CHIP_N_CFG寄存器*/

/*  16位DRAM控制CHIP_<n>_CFG寄存器     复位值:0x0FF00*/
#define	P0_chip_0_cfg		(*(volatile unsigned long *)0x7E000200)

/* 16位DRAM控制CHIP_<n>_CFG寄存器     复位值:0x0FF00*/
#define	P0_chip_1_cfg		(*(volatile unsigned long *)0x7E000204)

/*  32位DRAM控制CHIP_<n>_CFG寄存器     复位值:0x0FF00*/
#define	P1_chip_0_cfg		(*(volatile unsigned long *)0x7E001200)

/*  32位DRAM控制CHIP_<n>_CFG寄存器     复位值:0x0FF00*/
#define	P1_chip_1_cfg		(*(volatile unsigned long *)0x7E001204)


/*---------------------------------------------------------*/
/*	用户身份寄存器*/

/*  16位DRAM控制身份用户寄存器     复位值:0x00*/
#define	P0_user_stat		(*(volatile unsigned long *)0x7E000300)

/*  32位DRAM控制身份用户寄存器     复位值:0x00*/
#define	P1_user_stat		(*(volatile unsigned long *)0x7E001300)


/*=====================================================*/
/****************************************************************
**         SROM控制寄存器
*****************************************************************/

/*SROM总线宽度和等待控制寄存器       复位值:0x0000 000x*/
#define	SROM_BW		(*(volatile unsigned long *)0x70000000)

/*=====SROM页寄存器       复位值:0x000F 0000====*/
/* SROM Bank0 控制寄存器*/
#define	SROM_BC0		(*(volatile unsigned long *)0x70000004)
/* SROM Bank1 控制寄存器*/
#define	SROM_BC1		(*(volatile unsigned long *)0x70000008)
/* SROM Bank2 控制寄存器*/
#define	SROM_BC2		(*(volatile unsigned long *)0x7000000C)
/* SROM Bank3 控制寄存器*/
#define	SROM_BC3		(*(volatile unsigned long *)0x70000010)
/* SROM Bank4 控制寄存器*/
#define	SROM_BC4		(*(volatile unsigned long *)0x70000014)
/* SROM Bank5 控制寄存器*/
#define	SROM_BC5		(*(volatile unsigned long *)0x70000018)


/*=====================================================*/
/****************************************************************
**         ONENAND控制寄存器
*****************************************************************/


/* ONENAND控制寄存器 基地址定义*/
#define	BANK0_BASE		(0x70100000)

/*Bank0 内存设备配置寄存器     复位值:0x0000*/
#define	MEM_CFG0		(*(volatile unsigned long *)(BANK0_BASE+0X0000) )

/*Bank0 脉冲长度寄存器    复位值:0x0000*/
#define	BURST_LEN0		(*(volatile unsigned long *)(BANK0_BASE+0X0010) )

/*Bank0 内存复位寄存器   复位值:0x0000*/
#define	MEM_RESET0		(*(volatile unsigned long *)(BANK0_BASE+0X0020) )

/*Bank0 中断错误状态寄存器  复位值:0x0000*/
#define	INT_ERR_STAT0 	(*(volatile unsigned long *)(BANK0_BASE+0X0030) )

/*Bank0 中断错误屏蔽寄存器  复位值:0x0000*/
#define	INT_ERR_MASK0 	(*(volatile unsigned long *)(BANK0_BASE+0X0040) )

/*Bank0 中断错误确认寄存器  复位值:0x0000*/
#define	INT_ERR_ACK0 	(*(volatile unsigned long *)(BANK0_BASE+0X0050) )

/*Bank0 ECC 错误状态寄存器     复位值:0x0000*/
#define	ECC_ERR_STAT0 	(*(volatile unsigned long *)(BANK0_BASE+0X0060) )

/*Bank0 制造商 ID 寄存器             复位值:0x0000*/
#define	MANUFACT_ID0  	(*(volatile unsigned long *)(BANK0_BASE+0X0070) )

/*Bank0 设备 ID 寄存器	          复位值:0x0000*/
#define	DEVICE_ID0	  	(*(volatile unsigned long *)(BANK0_BASE+0X0080) )

/*Bank0 数据缓冲大小寄存器	          复位值:0x0000*/
#define	DATA_BUF_SIZE0 	 (*(volatile unsigned long *)(BANK0_BASE+0X0090) )

/*Bank0 引导缓冲大小寄存器          复位值:0x0000*/
#define	BOOT_BUF_SIZE0 	 (*(volatile unsigned long *)(BANK0_BASE+0X00A0) )

/*Bank0 缓冲数量寄存器		          复位值:0x0000*/
#define	BUF_AMOUNT0 	 (*(volatile unsigned long *)(BANK0_BASE+0X00B0) )

/*Bank0 技术寄存器			          复位值:0x0000*/
#define	TECH0 		 	 (*(volatile unsigned long *)(BANK0_BASE+0X00C0) )

/*Bank0 FBA 宽度寄存器			     复位值:0x000A*/
#define	FBA_WIDTH0 		 (*(volatile unsigned long *)(BANK0_BASE+0X00D0) )

/*Bank0 FPA 宽度寄存器			     复位值:0x0006*/
#define	FPA_WIDTH0 		 (*(volatile unsigned long *)(BANK0_BASE+0X00E0) )

/*Bank0 FSA 宽度寄存器			     复位值:0x0002*/
#define	FSA_WIDTH0 		 (*(volatile unsigned long *)(BANK0_BASE+0X00F0) )

/*Bank0 修正寄存器				     复位值:0x0002*/
#define	REVISION0 		 (*(volatile unsigned long *)(BANK0_BASE+0X0100) )

/*Bank0 Dataram0 编码寄存器			     复位值:0x0002*/
#define	DATARAM00 		 (*(volatile unsigned long *)(BANK0_BASE+0X0110) )

/*Bank0 Dataram1 编码寄存器			     复位值:0x0003*/
#define	DATARAM10 		 (*(volatile unsigned long *)(BANK0_BASE+0X0120) )

/*Bank0 同步模式寄存器。			     复位值:0x0000*/
#define	SYNC_MODE0 		 (*(volatile unsigned long *)(BANK0_BASE+0X0130) )

/*Bank0 传输大小寄存器。    		     复位值:0x0000*/
#define	TRANS_SPARE0  	 (*(volatile unsigned long *)(BANK0_BASE+0X0140) )

/*Bank0 每块锁位寄存器。     		     复位值:0x0000*/
#define	LOCK_BIT0	  	 (*(volatile unsigned long *)(BANK0_BASE+0X0150) )

/*Bank0 DBS_DFS 宽度寄存器。   		     复位值:0x0000*/
#define	DBS_DFS_WIDTH0	  (*(volatile unsigned long *)(BANK0_BASE+0X0160) )

/*Bank0 页计数寄存器。		   		     复位值:0x0000*/
#define	PAGE_CNT0		  (*(volatile unsigned long *)(BANK0_BASE+0X0170) )

/*Bank0 错误页地址寄存器。	   	  复位值:0x0000*/
#define	ERR_PAGE_ADDR0	 (*(volatile unsigned long *)(BANK0_BASE+0X0180) )

/*Bank0 脉冲读延迟寄存器。	   	  复位值:0x0006*/
#define	BURST_RD_LAT0 	 (*(volatile unsigned long *)(BANK0_BASE+0X0190) )

/*Bank0 中断引脚使能寄存器。    	  复位值:0x0000*/
#define	INT_PIN_ENABLE0 	 (*(volatile unsigned long *)(BANK0_BASE+0X01A0) )

/*Bank0 中断监控周期计数寄存器。    	  复位值:0x01F4*/
#define	INT_MON_CYC0  	 (*(volatile unsigned long *)(BANK0_BASE+0X01B0) )

/*Bank0 地址时钟寄存器。    	  复位值:0x0003*/
#define	ACC_CLOCK0	  	 (*(volatile unsigned long *)(BANK0_BASE+0X01C0) )

/*Bank0 缓慢读通道寄存器。   	  复位值:0x0000*/
#define	SLOW_RD_PATH0	  (*(volatile unsigned long *)(BANK0_BASE+0X01D0) )

/*Bank0 错误块地址寄存器。    	  复位值:0x0000*/
#define	ERR_BLK_ADDR0 	  (*(volatile unsigned long *)(BANK0_BASE+0X01E0) )

/*Bank0 Flash 版本 ID 寄存器。    	  复位值:0x0000*/
#define	FLASH_VER_ID0  	  (*(volatile unsigned long *)(BANK0_BASE+0X01F0) )





/* ONENAND控制寄存器 基地址定义*/
#define	BANK1_BASE		(0x70180000)

/*Bank1 内存设备配置寄存器     复位值:0x0000*/
#define	MEM_CFG1		(*(volatile unsigned long *)(BANK1_BASE+0X0000) )

/*Bank1脉冲长度寄存器    复位值:0x0000*/
#define	BURST_LEN1		(*(volatile unsigned long *)(BANK1_BASE+0X0010) )

/*Bank1 内存复位寄存器   复位值:0x0000*/
#define	MEM_RESET1		(*(volatile unsigned long *)(BANK1_BASE+0X0020) )

/*Bank1 中断错误状态寄存器  复位值:0x0000*/
#define	INT_ERR_STAT1 	(*(volatile unsigned long *)(BANK1_BASE+0X0030) )

/*Bank1 中断错误屏蔽寄存器  复位值:0x0000*/
#define	INT_ERR_MASK1 	(*(volatile unsigned long *)(BANK1_BASE+0X0040) )

/*Bank1 中断错误确认寄存器  复位值:0x0000*/
#define	INT_ERR_ACK1 	(*(volatile unsigned long *)(BANK1_BASE+0X0050) )

/*Bank1 ECC 错误状态寄存器     复位值:0x0000*/
#define	ECC_ERR_STAT1 	(*(volatile unsigned long *)(BANK1_BASE+0X0060) )

/*Bank1 制造商 ID 寄存器             复位值:0x0000*/
#define	MANUFACT_ID1  	(*(volatile unsigned long *)(BANK1_BASE+0X0070) )

/*Bank1 设备 ID 寄存器	          复位值:0x0000*/
#define	DEVICE_ID1	  	(*(volatile unsigned long *)(BANK1_BASE+0X0080) )

/*Bank1 数据缓冲大小寄存器	          复位值:0x0000*/
#define	DATA_BUF_SIZE1 	 (*(volatile unsigned long *)(BANK1_BASE+0X0090) )

/*Bank1 引导缓冲大小寄存器          复位值:0x0000*/
#define	BOOT_BUF_SIZE1 	 (*(volatile unsigned long *)(BANK1_BASE+0X00A0) )

/*Bank1 缓冲数量寄存器		          复位值:0x0000*/
#define	BUF_AMOUNT1	 (*(volatile unsigned long *)(BANK1_BASE+0X00B0) )

/*Bank1 技术寄存器			          复位值:0x0000*/
#define	TECH1 		 	 (*(volatile unsigned long *)(BANK1_BASE+0X00C0) )

/*Bank1 FBA 宽度寄存器			     复位值:0x000A*/
#define	FBA_WIDTH1 		 (*(volatile unsigned long *)(BANK1_BASE+0X00D0) )

/*Bank1 FPA 宽度寄存器			     复位值:0x0006*/
#define	FPA_WIDTH1 		 (*(volatile unsigned long *)(BANK1_BASE+0X00E0) )

/*Bank1 FSA 宽度寄存器			     复位值:0x0002*/
#define	FSA_WIDTH1 		 (*(volatile unsigned long *)(BANK1_BASE+0X00F0) )

/*Bank1 修正寄存器				     复位值:0x0002*/
#define	REVISION1 		 (*(volatile unsigned long *)(BANK1_BASE+0X0100) )

/*Bank1 Dataram0 编码寄存器			     复位值:0x0002*/
#define	DATARAM01 		 (*(volatile unsigned long *)(BANK1_BASE+0X0110) )

/*Bank1 Dataram1 编码寄存器			     复位值:0x0003*/
#define	DATARAM11		 (*(volatile unsigned long *)(BANK1_BASE+0X0120) )

/*Bank1 同步模式寄存器。			     复位值:0x0000*/
#define	SYNC_MODE1 		 (*(volatile unsigned long *)(BANK1_BASE+0X0130) )

/*Bank1 传输大小寄存器。    		     复位值:0x0000*/
#define	TRANS_SPARE1  	 (*(volatile unsigned long *)(BANK1_BASE+0X0140) )

/*Bank1 每块锁位寄存器。     		     复位值:0x0000*/
#define	LOCK_BIT1	  	 (*(volatile unsigned long *)(BANK1_BASE+0X0150) )

/*Bank1 DBS_DFS 宽度寄存器。   		     复位值:0x0000*/
#define	DBS_DFS_WIDTH1	  (*(volatile unsigned long *)(BANK1_BASE+0X0160) )

/*Bank1 页计数寄存器。		   		     复位值:0x0000*/
#define	PAGE_CNT1		  (*(volatile unsigned long *)(BANK1_BASE+0X0170) )

/*Bank1 错误页地址寄存器。	   	  复位值:0x0000*/
#define	ERR_PAGE_ADDR1	 (*(volatile unsigned long *)(BANK1_BASE+0X0180) )

/*Bank1 脉冲读延迟寄存器。	   	  复位值:0x0006*/
#define	BURST_RD_LAT1 	 (*(volatile unsigned long *)(BANK1_BASE+0X0190) )

/*Bank1 中断引脚使能寄存器。    	  复位值:0x0000*/
#define	INT_PIN_ENABLE1 	 (*(volatile unsigned long *)(BANK1_BASE+0X01A0) )

/*Bank1 中断监控周期计数寄存器。    	  复位值:0x01F4*/
#define	INT_MON_CYC1  	 (*(volatile unsigned long *)(BANK1_BASE+0X01B0) )

/*Bank1 地址时钟寄存器。    	  复位值:0x0003*/
#define	ACC_CLOCK1	  	 (*(volatile unsigned long *)(BANK1_BASE+0X01C0) )

/*Bank1 缓慢读通道寄存器。   	  复位值:0x0000*/
#define	SLOW_RD_PATH1	  (*(volatile unsigned long *)(BANK1_BASE+0X01D0) )

/*Bank1错误块地址寄存器。    	  复位值:0x0000*/
#define	ERR_BLK_ADDR1 	  (*(volatile unsigned long *)(BANK1_BASE+0X01E0) )

/*Bank1 Flash 版本 ID 寄存器。    	  复位值:0x0000*/
#define	FLASH_VER_ID1  	  (*(volatile unsigned long *)(BANK1_BASE+0X01F0) )






/*=====================================================*/
/****************************************************************
**         NAND  FLASH   控制寄存器
*****************************************************************/
/*  NAND  FLASH   控制寄存器 基地址定义*/
#define	NAND_BASE		(0x70200000)

/*NAND FLASH 配置寄存器   复位值:0x0000100X*/
#define	NFCONF		(*(volatile unsigned long *)(NAND_BASE+0X0000) )

/*NAND FLASH 控制寄存器   复位值:0x000100C6*/
#define	NFCONT		(*(volatile unsigned long *)(NAND_BASE+0X0004) )

/*NAND FLASH 命令设置寄存器   复位值:0x00 */
#define	NFCMMD 		(*(volatile unsigned long *)(NAND_BASE+0X0008) )

/*NAND FLASH 地址设置寄存器   复位值:0x0000XX00 */
#define	NFADDR 		(*(volatile unsigned long *)(NAND_BASE+0X000C) )

/*NAND FLASH 数据寄存器   复位值:0xXXXX */
#define	NFDATA  		(*(volatile unsigned long *)(NAND_BASE+0X0010) )


/*NAND Flash ECC 第一个和第二个寄存器用于
主数据区读取    复位值:0x00000000 */
#define	NFMECCD0 	(*(volatile unsigned long *)(NAND_BASE+0X0014) )

/* NAND Flash ECC 第三个和第四个寄存器用于
主数据区读取    复位值:0x00000000 */
#define	NFMECCD1  	(*(volatile unsigned long *)(NAND_BASE+0X0018) )

/*NAND Flash ECC（错误纠正码）寄存
器用于备用区数据的读取复位值:0x00000000 */
#define	NFSECCD  	(*(volatile unsigned long *)(NAND_BASE+0X001C) )


/*NAND Flash 可编程起始块地址复位值:0x00000000 */
#define	NFSBLK 	(*(volatile unsigned long *)(NAND_BASE+0X0020) )

/* NAND Flash 可编程结束块地址 
Nand Flash 可以在开始和结束地址间编程 
当Soft lock或Lock-tight使能，且开始和结束地址有相同值时
整个 NAND Flash 区域将被锁住 复位值:0x00000000 */
#define	NFEBLK  	(*(volatile unsigned long *)(NAND_BASE+0X0024) )


/*NAND Flash 操作状态寄存器   复位值:0x0080001D */
#define	NFSTAT 	(*(volatile unsigned long *)(NAND_BASE+0X0028) )


/*NAND Flash ECC 错误状态寄存器用于 I/O [7:0]
   复位值:0x007FFFFA */
#define	NFECCERR0 	(*(volatile unsigned long *)(NAND_BASE+0X002C) )

/* NAND Flash ECC 错误状态寄存器用于 I/O [7:0]
  复位值:0x007FFFFA */
#define	NFECCERR1  	(*(volatile unsigned long *)(NAND_BASE+0X0030) )


/*SLC 或 MLC NAND Flash ECC 状态寄存器
   复位值:0xXXXXXX  */
#define	NFMECC0 	(*(volatile unsigned long *)(NAND_BASE+0X0034) )

/* MLC NAND Flash ECC 状态寄存器
  复位值:0xXXXXXX  */
#define	NFMECC1  	(*(volatile unsigned long *)(NAND_BASE+0X0038) )


/*NAND Flash ECC 寄存器用于I/O [7:0]
  复位值:0xXXXXXX  */
#define	NFSECC 	  	(*(volatile unsigned long *)(NAND_BASE+0X003C) )


/*NAND Flash 4 位ECC 错误模式寄存器用于数据[7:0]
  复位值:0xXXXXXX  */
#define	NFMLCBITPT 	 (*(volatile unsigned long *)(NAND_BASE+0X0040) )



/*****************************************************************/
#endif
