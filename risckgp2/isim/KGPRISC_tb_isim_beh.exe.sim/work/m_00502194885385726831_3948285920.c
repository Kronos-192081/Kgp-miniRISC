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
static const char *ng0 = "/home/shiladitya/Documents/risckgp2/diff.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {8U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {16U, 0U};
static unsigned int ng8[] = {32U, 0U};
static unsigned int ng9[] = {5U, 0U};
static unsigned int ng10[] = {64U, 0U};
static unsigned int ng11[] = {6U, 0U};
static unsigned int ng12[] = {128U, 0U};
static unsigned int ng13[] = {7U, 0U};
static unsigned int ng14[] = {256U, 0U};
static unsigned int ng15[] = {512U, 0U};
static unsigned int ng16[] = {9U, 0U};
static unsigned int ng17[] = {1024U, 0U};
static unsigned int ng18[] = {10U, 0U};
static unsigned int ng19[] = {2048U, 0U};
static unsigned int ng20[] = {11U, 0U};
static unsigned int ng21[] = {4096U, 0U};
static unsigned int ng22[] = {12U, 0U};
static unsigned int ng23[] = {8192U, 0U};
static unsigned int ng24[] = {13U, 0U};
static unsigned int ng25[] = {16384U, 0U};
static unsigned int ng26[] = {14U, 0U};
static unsigned int ng27[] = {32768U, 0U};
static unsigned int ng28[] = {15U, 0U};
static unsigned int ng29[] = {65536U, 0U};
static unsigned int ng30[] = {131072U, 0U};
static unsigned int ng31[] = {17U, 0U};
static unsigned int ng32[] = {262144U, 0U};
static unsigned int ng33[] = {18U, 0U};
static unsigned int ng34[] = {524288U, 0U};
static unsigned int ng35[] = {19U, 0U};
static unsigned int ng36[] = {1048576U, 0U};
static unsigned int ng37[] = {20U, 0U};
static unsigned int ng38[] = {2097152U, 0U};
static unsigned int ng39[] = {21U, 0U};
static unsigned int ng40[] = {4194304U, 0U};
static unsigned int ng41[] = {22U, 0U};
static unsigned int ng42[] = {8388608U, 0U};
static unsigned int ng43[] = {23U, 0U};
static unsigned int ng44[] = {16777216U, 0U};
static unsigned int ng45[] = {24U, 0U};
static unsigned int ng46[] = {33554432U, 0U};
static unsigned int ng47[] = {25U, 0U};
static unsigned int ng48[] = {67108864U, 0U};
static unsigned int ng49[] = {26U, 0U};
static unsigned int ng50[] = {134217728U, 0U};
static unsigned int ng51[] = {27U, 0U};
static unsigned int ng52[] = {268435456U, 0U};
static unsigned int ng53[] = {28U, 0U};
static unsigned int ng54[] = {536870912U, 0U};
static unsigned int ng55[] = {29U, 0U};
static unsigned int ng56[] = {1073741824U, 0U};
static unsigned int ng57[] = {30U, 0U};
static unsigned int ng58[] = {2147483648U, 0U};
static unsigned int ng59[] = {31U, 0U};



static void Cont_11_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 3960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5648);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void Cont_13_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    t1 = (t0 + 4208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 ^ t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t18 = (t0 + 5712);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t5, 8);
    xsi_driver_vfirst_trans(t18, 0, 31);
    t23 = (t0 + 5520);
    *((int *)t23) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    goto LAB6;

}

static void Cont_14_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 4456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    *((unsigned int *)t3) = t7;
    *((unsigned int *)t2) = 0;
    if (*((unsigned int *)t5) != 0)
        goto LAB5;

LAB4:    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 4294967295U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 4294967295U);
    t14 = (t0 + 5776);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t3, 8);
    xsi_driver_vfirst_trans(t14, 0, 31);
    t19 = (t0 + 5536);
    *((int *)t19) = 1;

LAB1:    return;
LAB5:    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t5);
    *((unsigned int *)t3) = (t8 | t9);
    t10 = *((unsigned int *)t2);
    t11 = *((unsigned int *)t5);
    *((unsigned int *)t2) = (t10 | t11);
    goto LAB4;

}

static void Cont_16_3(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;

LAB0:    t1 = (t0 + 4704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 & t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t36 = (t0 + 5840);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memcpy(t40, t5, 8);
    xsi_driver_vfirst_trans(t36, 0, 31);
    t41 = (t0 + 5552);
    *((int *)t41) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = (t21 & t23);
    t29 = (t25 & t27);
    t30 = (~(t28));
    t31 = (~(t29));
    t32 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t32 & t30);
    t33 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t33 & t31);
    t34 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t34 & t30);
    t35 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t35 & t31);
    goto LAB6;

}

static void Always_18_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 4952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 5568);
    *((int *)t2) = 1;
    t3 = (t0 + 4984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(19, ng0);

LAB5:    xsi_set_current_line(20, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng21)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng23)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng25)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng27)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng29)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng30)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng32)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng34)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng36)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng38)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng40)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng42)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng44)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng46)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB57;

LAB58:    t2 = ((char*)((ng48)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB59;

LAB60:    t2 = ((char*)((ng50)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB61;

LAB62:    t2 = ((char*)((ng52)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB63;

LAB64:    t2 = ((char*)((ng54)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB65;

LAB66:    t2 = ((char*)((ng56)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB67;

LAB68:    t2 = ((char*)((ng58)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB69;

LAB70:
LAB72:
LAB71:    xsi_set_current_line(150, ng0);

LAB106:    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB73:    goto LAB2;

LAB7:    xsi_set_current_line(22, ng0);

LAB74:    xsi_set_current_line(23, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 32, 0LL);
    goto LAB73;

LAB9:    xsi_set_current_line(26, ng0);

LAB75:    xsi_set_current_line(27, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB73;

LAB11:    xsi_set_current_line(30, ng0);

LAB76:    xsi_set_current_line(31, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB73;

LAB13:    xsi_set_current_line(34, ng0);

LAB77:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB73;

LAB15:    xsi_set_current_line(38, ng0);

LAB78:    xsi_set_current_line(39, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB73;

LAB17:    xsi_set_current_line(42, ng0);

LAB79:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB73;

LAB19:    xsi_set_current_line(46, ng0);

LAB80:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB73;

LAB21:    xsi_set_current_line(50, ng0);

LAB81:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB73;

LAB23:    xsi_set_current_line(54, ng0);

LAB82:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB73;

LAB25:    xsi_set_current_line(58, ng0);

LAB83:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB73;

LAB27:    xsi_set_current_line(62, ng0);

LAB84:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB73;

LAB29:    xsi_set_current_line(66, ng0);

LAB85:    xsi_set_current_line(67, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB73;

LAB31:    xsi_set_current_line(70, ng0);

LAB86:    xsi_set_current_line(71, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB73;

LAB33:    xsi_set_current_line(74, ng0);

LAB87:    xsi_set_current_line(75, ng0);
    t3 = ((char*)((ng24)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB73;

LAB35:    xsi_set_current_line(78, ng0);

LAB88:    xsi_set_current_line(79, ng0);
    t3 = ((char*)((ng26)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB73;

LAB37:    xsi_set_current_line(82, ng0);

LAB89:    xsi_set_current_line(83, ng0);
    t3 = ((char*)((ng28)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB73;

LAB39:    xsi_set_current_line(86, ng0);

LAB90:    xsi_set_current_line(87, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB73;

LAB41:    xsi_set_current_line(90, ng0);

LAB91:    xsi_set_current_line(91, ng0);
    t3 = ((char*)((ng31)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB73;

LAB43:    xsi_set_current_line(94, ng0);

LAB92:    xsi_set_current_line(95, ng0);
    t3 = ((char*)((ng33)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB73;

LAB45:    xsi_set_current_line(98, ng0);

LAB93:    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng35)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB73;

LAB47:    xsi_set_current_line(102, ng0);

LAB94:    xsi_set_current_line(103, ng0);
    t3 = ((char*)((ng37)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB73;

LAB49:    xsi_set_current_line(106, ng0);

LAB95:    xsi_set_current_line(107, ng0);
    t3 = ((char*)((ng39)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB73;

LAB51:    xsi_set_current_line(110, ng0);

LAB96:    xsi_set_current_line(111, ng0);
    t3 = ((char*)((ng41)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB73;

LAB53:    xsi_set_current_line(114, ng0);

LAB97:    xsi_set_current_line(115, ng0);
    t3 = ((char*)((ng43)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB73;

LAB55:    xsi_set_current_line(118, ng0);

LAB98:    xsi_set_current_line(119, ng0);
    t3 = ((char*)((ng45)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB73;

LAB57:    xsi_set_current_line(122, ng0);

LAB99:    xsi_set_current_line(123, ng0);
    t3 = ((char*)((ng47)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB73;

LAB59:    xsi_set_current_line(126, ng0);

LAB100:    xsi_set_current_line(127, ng0);
    t3 = ((char*)((ng49)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB73;

LAB61:    xsi_set_current_line(130, ng0);

LAB101:    xsi_set_current_line(131, ng0);
    t3 = ((char*)((ng51)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB73;

LAB63:    xsi_set_current_line(134, ng0);

LAB102:    xsi_set_current_line(135, ng0);
    t3 = ((char*)((ng53)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB73;

LAB65:    xsi_set_current_line(138, ng0);

LAB103:    xsi_set_current_line(139, ng0);
    t3 = ((char*)((ng55)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB73;

LAB67:    xsi_set_current_line(142, ng0);

LAB104:    xsi_set_current_line(143, ng0);
    t3 = ((char*)((ng57)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB73;

LAB69:    xsi_set_current_line(146, ng0);

LAB105:    xsi_set_current_line(147, ng0);
    t3 = ((char*)((ng59)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB73;

}

static void implSig1_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 5200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng2)));
    t3 = (t0 + 5904);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}


extern void work_m_00502194885385726831_3948285920_init()
{
	static char *pe[] = {(void *)Cont_11_0,(void *)Cont_13_1,(void *)Cont_14_2,(void *)Cont_16_3,(void *)Always_18_4,(void *)implSig1_execute};
	xsi_register_didat("work_m_00502194885385726831_3948285920", "isim/KGPRISC_tb_isim_beh.exe.sim/work/m_00502194885385726831_3948285920.didat");
	xsi_register_executes(pe);
}
