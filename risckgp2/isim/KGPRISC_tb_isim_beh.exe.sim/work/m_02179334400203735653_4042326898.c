/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/shiladitya/Documents/risckgp2/jumpcontrol.v";
static unsigned int ng1[] = {8U, 0U};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {9U, 0U};
static unsigned int ng4[] = {10U, 0U};
static int ng5[] = {0, 0};
static unsigned int ng6[] = {11U, 0U};
static unsigned int ng7[] = {12U, 0U};
static unsigned int ng8[] = {13U, 0U};
static unsigned int ng9[] = {14U, 0U};
static unsigned int ng10[] = {15U, 0U};



static void Always_3_0(char *t0)
{
    char t9[8];
    char t18[8];
    char t27[8];
    char t35[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;

LAB0:    t1 = (t0 + 2840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(3, ng0);
    t2 = (t0 + 3160);
    *((int *)t2) = 1;
    t3 = (t0 + 2872);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(4, ng0);

LAB5:    xsi_set_current_line(5, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t4, 6);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(74, ng0);

LAB77:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(7, ng0);

LAB26:    xsi_set_current_line(8, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1928);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    goto LAB25;

LAB9:    xsi_set_current_line(11, ng0);

LAB27:    xsi_set_current_line(12, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB25;

LAB11:    xsi_set_current_line(15, ng0);

LAB28:    xsi_set_current_line(16, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t4 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t4);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t3) != 0)
        goto LAB31;

LAB32:    t8 = (t9 + 4);
    t15 = *((unsigned int *)t9);
    t16 = *((unsigned int *)t8);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB33;

LAB34:    memcpy(t35, t9, 8);

LAB35:    t67 = (t35 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (~(t68));
    t70 = *((unsigned int *)t35);
    t71 = (t70 & t69);
    t72 = (t71 != 0);
    if (t72 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(21, ng0);

LAB51:    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB49:    goto LAB25;

LAB13:    xsi_set_current_line(26, ng0);

LAB52:    xsi_set_current_line(27, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t4);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(32, ng0);

LAB57:    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB55:    goto LAB25;

LAB15:    xsi_set_current_line(37, ng0);

LAB58:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t4);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(43, ng0);

LAB63:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB61:    goto LAB25;

LAB17:    xsi_set_current_line(48, ng0);

LAB64:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB25;

LAB19:    xsi_set_current_line(52, ng0);

LAB65:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t4);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(58, ng0);

LAB70:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB68:    goto LAB25;

LAB21:    xsi_set_current_line(63, ng0);

LAB71:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t4);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB72;

LAB73:    xsi_set_current_line(69, ng0);

LAB76:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB74:    goto LAB25;

LAB29:    *((unsigned int *)t9) = 1;
    goto LAB32;

LAB31:    t7 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB32;

LAB33:    t19 = (t0 + 1368U);
    t20 = *((char **)t19);
    memset(t18, 0, 8);
    t19 = (t20 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (~(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB39;

LAB37:    if (*((unsigned int *)t19) == 0)
        goto LAB36;

LAB38:    t26 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t26) = 1;

LAB39:    memset(t27, 0, 8);
    t28 = (t18 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t18);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t28) != 0)
        goto LAB42;

LAB43:    t36 = *((unsigned int *)t9);
    t37 = *((unsigned int *)t27);
    t38 = (t36 & t37);
    *((unsigned int *)t35) = t38;
    t39 = (t9 + 4);
    t40 = (t27 + 4);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t39);
    t43 = *((unsigned int *)t40);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB44;

LAB45:
LAB46:    goto LAB35;

LAB36:    *((unsigned int *)t18) = 1;
    goto LAB39;

LAB40:    *((unsigned int *)t27) = 1;
    goto LAB43;

LAB42:    t34 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB43;

LAB44:    t47 = *((unsigned int *)t35);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t35) = (t47 | t48);
    t49 = (t9 + 4);
    t50 = (t27 + 4);
    t51 = *((unsigned int *)t9);
    t52 = (~(t51));
    t53 = *((unsigned int *)t49);
    t54 = (~(t53));
    t55 = *((unsigned int *)t27);
    t56 = (~(t55));
    t57 = *((unsigned int *)t50);
    t58 = (~(t57));
    t59 = (t52 & t54);
    t60 = (t56 & t58);
    t61 = (~(t59));
    t62 = (~(t60));
    t63 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t63 & t61);
    t64 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t64 & t62);
    t65 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t65 & t61);
    t66 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t66 & t62);
    goto LAB46;

LAB47:    xsi_set_current_line(17, ng0);

LAB50:    xsi_set_current_line(18, ng0);
    t73 = ((char*)((ng2)));
    t74 = (t0 + 1928);
    xsi_vlogvar_assign_value(t74, t73, 0, 0, 1);
    goto LAB49;

LAB53:    xsi_set_current_line(28, ng0);

LAB56:    xsi_set_current_line(29, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1928);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    goto LAB55;

LAB59:    xsi_set_current_line(39, ng0);

LAB62:    xsi_set_current_line(40, ng0);
    t7 = ((char*)((ng5)));
    t8 = (t0 + 1928);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    goto LAB61;

LAB66:    xsi_set_current_line(54, ng0);

LAB69:    xsi_set_current_line(55, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1928);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    goto LAB68;

LAB72:    xsi_set_current_line(65, ng0);

LAB75:    xsi_set_current_line(66, ng0);
    t7 = ((char*)((ng5)));
    t8 = (t0 + 1928);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    goto LAB74;

}


extern void work_m_02179334400203735653_4042326898_init()
{
	static char *pe[] = {(void *)Always_3_0};
	xsi_register_didat("work_m_02179334400203735653_4042326898", "isim/KGPRISC_tb_isim_beh.exe.sim/work/m_02179334400203735653_4042326898.didat");
	xsi_register_executes(pe);
}
