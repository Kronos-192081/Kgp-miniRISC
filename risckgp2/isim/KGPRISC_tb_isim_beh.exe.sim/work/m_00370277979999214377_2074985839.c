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
static const char *ng0 = "";
static const char *ng1 = ": Instr = %b, reg4 = %d\t, reg5 = %d\t, reg8 = %d\t, reg9 = %d\t, reg10 = %d\t, reg11 = %d\t, reg12 = %d\t,reg13 = %d\t,reg15 = %d\t, reg14 = %d\t, reg16 = %d\t, reg18 = %d\t, reg20 = %d\t,reg21 = %d\t";
static int ng2[] = {4, 0};
static int ng3[] = {5, 0};
static int ng4[] = {8, 0};
static int ng5[] = {9, 0};
static int ng6[] = {10, 0};
static int ng7[] = {11, 0};
static int ng8[] = {12, 0};
static int ng9[] = {13, 0};
static int ng10[] = {15, 0};
static int ng11[] = {14, 0};
static int ng12[] = {16, 0};
static int ng13[] = {18, 0};
static int ng14[] = {20, 0};
static int ng15[] = {21, 0};
static const char *ng16 = " ";
static const char *ng17 = "/home/shiladitya/Documents/risckgp2/KGPRISC_tb.v";
static int ng18[] = {0, 0};
static int ng19[] = {1, 0};

void Monitor_45_1(char *);
void Monitor_45_1(char *);


static void Monitor_45_1_Func(char *t0)
{
    char t1[16];
    char t11[8];
    char t26[8];
    char t41[8];
    char t56[8];
    char t71[8];
    char t86[8];
    char t101[8];
    char t116[8];
    char t131[8];
    char t146[8];
    char t161[8];
    char t176[8];
    char t191[8];
    char t206[8];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t112;
    char *t113;
    char *t114;
    char *t115;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    char *t123;
    char *t124;
    char *t125;
    char *t127;
    char *t128;
    char *t129;
    char *t130;
    char *t132;
    char *t133;
    char *t134;
    char *t135;
    char *t136;
    char *t137;
    char *t138;
    char *t139;
    char *t140;
    char *t142;
    char *t143;
    char *t144;
    char *t145;
    char *t147;
    char *t148;
    char *t149;
    char *t150;
    char *t151;
    char *t152;
    char *t153;
    char *t154;
    char *t155;
    char *t157;
    char *t158;
    char *t159;
    char *t160;
    char *t162;
    char *t163;
    char *t164;
    char *t165;
    char *t166;
    char *t167;
    char *t168;
    char *t169;
    char *t170;
    char *t172;
    char *t173;
    char *t174;
    char *t175;
    char *t177;
    char *t178;
    char *t179;
    char *t180;
    char *t181;
    char *t182;
    char *t183;
    char *t184;
    char *t185;
    char *t187;
    char *t188;
    char *t189;
    char *t190;
    char *t192;
    char *t193;
    char *t194;
    char *t195;
    char *t196;
    char *t197;
    char *t198;
    char *t199;
    char *t200;
    char *t202;
    char *t203;
    char *t204;
    char *t205;
    char *t207;
    char *t208;
    char *t209;
    char *t210;
    char *t211;
    char *t212;
    char *t213;
    char *t214;
    char *t215;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(0, 0, 3, ng0, 2, t0, (char)118, t1, 64);
    t3 = (t0 + 5584);
    t4 = *((char **)t3);
    t5 = ((((char*)(t4))) + 40U);
    t6 = *((char **)t5);
    t5 = (t0 + 5616);
    t8 = *((char **)t5);
    t9 = ((((char*)(t8))) + 56U);
    t10 = *((char **)t9);
    t12 = (t0 + 5648);
    t13 = *((char **)t12);
    t14 = ((((char*)(t13))) + 72U);
    t15 = *((char **)t14);
    t16 = (t0 + 5680);
    t17 = *((char **)t16);
    t18 = ((((char*)(t17))) + 64U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t11, 32, t10, t15, t19, 2, 1, t20, 32, 1);
    t22 = (t0 + 5712);
    t23 = *((char **)t22);
    t24 = ((((char*)(t23))) + 56U);
    t25 = *((char **)t24);
    t27 = (t0 + 5744);
    t28 = *((char **)t27);
    t29 = ((((char*)(t28))) + 72U);
    t30 = *((char **)t29);
    t31 = (t0 + 5776);
    t32 = *((char **)t31);
    t33 = ((((char*)(t32))) + 64U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t26, 32, t25, t30, t34, 2, 1, t35, 32, 1);
    t37 = (t0 + 5808);
    t38 = *((char **)t37);
    t39 = ((((char*)(t38))) + 56U);
    t40 = *((char **)t39);
    t42 = (t0 + 5840);
    t43 = *((char **)t42);
    t44 = ((((char*)(t43))) + 72U);
    t45 = *((char **)t44);
    t46 = (t0 + 5872);
    t47 = *((char **)t46);
    t48 = ((((char*)(t47))) + 64U);
    t49 = *((char **)t48);
    t50 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t41, 32, t40, t45, t49, 2, 1, t50, 32, 1);
    t52 = (t0 + 5904);
    t53 = *((char **)t52);
    t54 = ((((char*)(t53))) + 56U);
    t55 = *((char **)t54);
    t57 = (t0 + 5936);
    t58 = *((char **)t57);
    t59 = ((((char*)(t58))) + 72U);
    t60 = *((char **)t59);
    t61 = (t0 + 5968);
    t62 = *((char **)t61);
    t63 = ((((char*)(t62))) + 64U);
    t64 = *((char **)t63);
    t65 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t56, 32, t55, t60, t64, 2, 1, t65, 32, 1);
    t67 = (t0 + 6000);
    t68 = *((char **)t67);
    t69 = ((((char*)(t68))) + 56U);
    t70 = *((char **)t69);
    t72 = (t0 + 6032);
    t73 = *((char **)t72);
    t74 = ((((char*)(t73))) + 72U);
    t75 = *((char **)t74);
    t76 = (t0 + 6064);
    t77 = *((char **)t76);
    t78 = ((((char*)(t77))) + 64U);
    t79 = *((char **)t78);
    t80 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t71, 32, t70, t75, t79, 2, 1, t80, 32, 1);
    t82 = (t0 + 6096);
    t83 = *((char **)t82);
    t84 = ((((char*)(t83))) + 56U);
    t85 = *((char **)t84);
    t87 = (t0 + 6128);
    t88 = *((char **)t87);
    t89 = ((((char*)(t88))) + 72U);
    t90 = *((char **)t89);
    t91 = (t0 + 6160);
    t92 = *((char **)t91);
    t93 = ((((char*)(t92))) + 64U);
    t94 = *((char **)t93);
    t95 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t86, 32, t85, t90, t94, 2, 1, t95, 32, 1);
    t97 = (t0 + 6192);
    t98 = *((char **)t97);
    t99 = ((((char*)(t98))) + 56U);
    t100 = *((char **)t99);
    t102 = (t0 + 6224);
    t103 = *((char **)t102);
    t104 = ((((char*)(t103))) + 72U);
    t105 = *((char **)t104);
    t106 = (t0 + 6256);
    t107 = *((char **)t106);
    t108 = ((((char*)(t107))) + 64U);
    t109 = *((char **)t108);
    t110 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t101, 32, t100, t105, t109, 2, 1, t110, 32, 1);
    t112 = (t0 + 6288);
    t113 = *((char **)t112);
    t114 = ((((char*)(t113))) + 56U);
    t115 = *((char **)t114);
    t117 = (t0 + 6320);
    t118 = *((char **)t117);
    t119 = ((((char*)(t118))) + 72U);
    t120 = *((char **)t119);
    t121 = (t0 + 6352);
    t122 = *((char **)t121);
    t123 = ((((char*)(t122))) + 64U);
    t124 = *((char **)t123);
    t125 = ((char*)((ng9)));
    xsi_vlog_generic_get_array_select_value(t116, 32, t115, t120, t124, 2, 1, t125, 32, 1);
    t127 = (t0 + 6384);
    t128 = *((char **)t127);
    t129 = ((((char*)(t128))) + 56U);
    t130 = *((char **)t129);
    t132 = (t0 + 6416);
    t133 = *((char **)t132);
    t134 = ((((char*)(t133))) + 72U);
    t135 = *((char **)t134);
    t136 = (t0 + 6448);
    t137 = *((char **)t136);
    t138 = ((((char*)(t137))) + 64U);
    t139 = *((char **)t138);
    t140 = ((char*)((ng10)));
    xsi_vlog_generic_get_array_select_value(t131, 32, t130, t135, t139, 2, 1, t140, 32, 1);
    t142 = (t0 + 6480);
    t143 = *((char **)t142);
    t144 = ((((char*)(t143))) + 56U);
    t145 = *((char **)t144);
    t147 = (t0 + 6512);
    t148 = *((char **)t147);
    t149 = ((((char*)(t148))) + 72U);
    t150 = *((char **)t149);
    t151 = (t0 + 6544);
    t152 = *((char **)t151);
    t153 = ((((char*)(t152))) + 64U);
    t154 = *((char **)t153);
    t155 = ((char*)((ng11)));
    xsi_vlog_generic_get_array_select_value(t146, 32, t145, t150, t154, 2, 1, t155, 32, 1);
    t157 = (t0 + 6576);
    t158 = *((char **)t157);
    t159 = ((((char*)(t158))) + 56U);
    t160 = *((char **)t159);
    t162 = (t0 + 6608);
    t163 = *((char **)t162);
    t164 = ((((char*)(t163))) + 72U);
    t165 = *((char **)t164);
    t166 = (t0 + 6640);
    t167 = *((char **)t166);
    t168 = ((((char*)(t167))) + 64U);
    t169 = *((char **)t168);
    t170 = ((char*)((ng12)));
    xsi_vlog_generic_get_array_select_value(t161, 32, t160, t165, t169, 2, 1, t170, 32, 1);
    t172 = (t0 + 6672);
    t173 = *((char **)t172);
    t174 = ((((char*)(t173))) + 56U);
    t175 = *((char **)t174);
    t177 = (t0 + 6704);
    t178 = *((char **)t177);
    t179 = ((((char*)(t178))) + 72U);
    t180 = *((char **)t179);
    t181 = (t0 + 6736);
    t182 = *((char **)t181);
    t183 = ((((char*)(t182))) + 64U);
    t184 = *((char **)t183);
    t185 = ((char*)((ng13)));
    xsi_vlog_generic_get_array_select_value(t176, 32, t175, t180, t184, 2, 1, t185, 32, 1);
    t187 = (t0 + 6768);
    t188 = *((char **)t187);
    t189 = ((((char*)(t188))) + 56U);
    t190 = *((char **)t189);
    t192 = (t0 + 6800);
    t193 = *((char **)t192);
    t194 = ((((char*)(t193))) + 72U);
    t195 = *((char **)t194);
    t196 = (t0 + 6832);
    t197 = *((char **)t196);
    t198 = ((((char*)(t197))) + 64U);
    t199 = *((char **)t198);
    t200 = ((char*)((ng14)));
    xsi_vlog_generic_get_array_select_value(t191, 32, t190, t195, t199, 2, 1, t200, 32, 1);
    t202 = (t0 + 6864);
    t203 = *((char **)t202);
    t204 = ((((char*)(t203))) + 56U);
    t205 = *((char **)t204);
    t207 = (t0 + 6896);
    t208 = *((char **)t207);
    t209 = ((((char*)(t208))) + 72U);
    t210 = *((char **)t209);
    t211 = (t0 + 6928);
    t212 = *((char **)t211);
    t213 = ((((char*)(t212))) + 64U);
    t214 = *((char **)t213);
    t215 = ((char*)((ng15)));
    xsi_vlog_generic_get_array_select_value(t206, 32, t205, t210, t214, 2, 1, t215, 32, 1);
    xsi_vlogfile_write(0, 0, 3, ng1, 16, t0, (char)118, t6, 32, (char)119, t11, 32, (char)119, t26, 32, (char)119, t41, 32, (char)119, t56, 32, (char)119, t71, 32, (char)119, t86, 32, (char)119, t101, 32, (char)119, t116, 32, (char)119, t131, 32, (char)119, t146, 32, (char)119, t161, 32, (char)119, t176, 32, (char)119, t191, 32, (char)119, t206, 32);
    xsi_vlogfile_write(1, 0, 3, ng16, 1, t0);

LAB1:    return;
}

static void Initial_44_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 2840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng17);

LAB4:    xsi_set_current_line(45, ng17);
    Monitor_45_1(t0);
    xsi_set_current_line(63, ng17);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(64, ng17);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(68, ng17);
    t2 = (t0 + 2648);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(69, ng17);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB1;

}

static void Always_74_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 3088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(74, ng17);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(74, ng17);
    t4 = (t0 + 1608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1608);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

void Monitor_45_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3144);
    t2 = (t0 + 3656);
    xsi_vlogfile_monitor((void *)Monitor_45_1_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00370277979999214377_2074985839_init()
{
	static char *pe[] = {(void *)Initial_44_0,(void *)Always_74_2,(void *)Monitor_45_1};
	xsi_register_didat("work_m_00370277979999214377_2074985839", "isim/KGPRISC_tb_isim_beh.exe.sim/work/m_00370277979999214377_2074985839.didat");
	xsi_register_executes(pe);
}
