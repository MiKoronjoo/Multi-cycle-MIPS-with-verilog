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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Markazi.co/Desktop/Computer Architecture/verilog/MIPS/ControlUnit.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {3, 0};
static unsigned int ng5[] = {20U, 0U};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {43U, 0U};
static unsigned int ng8[] = {2U, 0U};
static unsigned int ng9[] = {35U, 0U};
static unsigned int ng10[] = {6U, 0U};
static unsigned int ng11[] = {4U, 0U};
static unsigned int ng12[] = {8U, 0U};
static unsigned int ng13[] = {9U, 0U};
static unsigned int ng14[] = {11U, 0U};
static int ng15[] = {2, 0};
static unsigned int ng16[] = {5U, 0U};
static unsigned int ng17[] = {3U, 0U};
static unsigned int ng18[] = {7U, 0U};
static unsigned int ng19[] = {10U, 0U};



static void Initial_60_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(60, ng0);

LAB2:    xsi_set_current_line(61, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 7688);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);
    xsi_set_current_line(62, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 7848);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 7208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_66_1(char *t0)
{
    char t11[8];
    char t30[8];
    char t48[8];
    char t80[8];
    char t108[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    int t72;
    int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    int t132;
    int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    char *t147;

LAB0:    t1 = (t0 + 9016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 9336);
    *((int *)t2) = 1;
    t3 = (t0 + 9048);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(67, ng0);

LAB5:    xsi_set_current_line(68, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 7208);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 7688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB2;

LAB7:    xsi_set_current_line(72, ng0);

LAB32:    xsi_set_current_line(73, ng0);
    t7 = (t0 + 7848);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t12 = (t9 + 4);
    t13 = (t10 + 4);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB36;

LAB33:    if (t23 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t11) = 1;

LAB36:    t27 = (t0 + 4088U);
    t28 = *((char **)t27);
    t27 = (t0 + 4248U);
    t29 = *((char **)t27);
    t27 = (t0 + 4408U);
    t31 = *((char **)t27);
    memset(t30, 0, 8);
    t27 = (t31 + 4);
    t32 = *((unsigned int *)t27);
    t33 = (~(t32));
    t34 = *((unsigned int *)t31);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB40;

LAB38:    if (*((unsigned int *)t27) == 0)
        goto LAB37;

LAB39:    t37 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t37) = 1;

LAB40:    t38 = (t30 + 4);
    t39 = (t31 + 4);
    t40 = *((unsigned int *)t31);
    t41 = (~(t40));
    *((unsigned int *)t30) = t41;
    *((unsigned int *)t38) = 0;
    if (*((unsigned int *)t39) != 0)
        goto LAB42;

LAB41:    t46 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t46 & 1U);
    t47 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t47 & 1U);
    t49 = *((unsigned int *)t29);
    t50 = *((unsigned int *)t30);
    t51 = (t49 & t50);
    *((unsigned int *)t48) = t51;
    t52 = (t29 + 4);
    t53 = (t30 + 4);
    t54 = (t48 + 4);
    t55 = *((unsigned int *)t52);
    t56 = *((unsigned int *)t53);
    t57 = (t55 | t56);
    *((unsigned int *)t54) = t57;
    t58 = *((unsigned int *)t54);
    t59 = (t58 != 0);
    if (t59 == 1)
        goto LAB43;

LAB44:
LAB45:    t81 = *((unsigned int *)t28);
    t82 = *((unsigned int *)t48);
    t83 = (t81 | t82);
    *((unsigned int *)t80) = t83;
    t84 = (t28 + 4);
    t85 = (t48 + 4);
    t86 = (t80 + 4);
    t87 = *((unsigned int *)t84);
    t88 = *((unsigned int *)t85);
    t89 = (t87 | t88);
    *((unsigned int *)t86) = t89;
    t90 = *((unsigned int *)t86);
    t91 = (t90 != 0);
    if (t91 == 1)
        goto LAB46;

LAB47:
LAB48:    t109 = *((unsigned int *)t11);
    t110 = *((unsigned int *)t80);
    t111 = (t109 & t110);
    *((unsigned int *)t108) = t111;
    t112 = (t11 + 4);
    t113 = (t80 + 4);
    t114 = (t108 + 4);
    t115 = *((unsigned int *)t112);
    t116 = *((unsigned int *)t113);
    t117 = (t115 | t116);
    *((unsigned int *)t114) = t117;
    t118 = *((unsigned int *)t114);
    t119 = (t118 != 0);
    if (t119 == 1)
        goto LAB49;

LAB50:
LAB51:    t140 = (t108 + 4);
    t141 = *((unsigned int *)t140);
    t142 = (~(t141));
    t143 = *((unsigned int *)t108);
    t144 = (t143 & t142);
    t145 = (t144 != 0);
    if (t145 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(83, ng0);

LAB74:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 7848);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng3)));
    memset(t11, 0, 8);
    t8 = (t5 + 4);
    t9 = (t7 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t8);
    t22 = *((unsigned int *)t9);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB78;

LAB75:    if (t23 != 0)
        goto LAB77;

LAB76:    *((unsigned int *)t11) = 1;

LAB78:    t12 = (t0 + 3928U);
    t13 = *((char **)t12);
    t12 = ((char*)((ng1)));
    memset(t30, 0, 8);
    t26 = (t13 + 4);
    t27 = (t12 + 4);
    t32 = *((unsigned int *)t13);
    t33 = *((unsigned int *)t12);
    t34 = (t32 ^ t33);
    t35 = *((unsigned int *)t26);
    t36 = *((unsigned int *)t27);
    t40 = (t35 ^ t36);
    t41 = (t34 | t40);
    t42 = *((unsigned int *)t26);
    t43 = *((unsigned int *)t27);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB82;

LAB79:    if (t44 != 0)
        goto LAB81;

LAB80:    *((unsigned int *)t30) = 1;

LAB82:    t29 = (t0 + 3928U);
    t31 = *((char **)t29);
    t29 = ((char*)((ng5)));
    memset(t48, 0, 8);
    t37 = (t31 + 4);
    t38 = (t29 + 4);
    t47 = *((unsigned int *)t31);
    t49 = *((unsigned int *)t29);
    t50 = (t47 ^ t49);
    t51 = *((unsigned int *)t37);
    t55 = *((unsigned int *)t38);
    t56 = (t51 ^ t55);
    t57 = (t50 | t56);
    t58 = *((unsigned int *)t37);
    t59 = *((unsigned int *)t38);
    t60 = (t58 | t59);
    t61 = (~(t60));
    t64 = (t57 & t61);
    if (t64 != 0)
        goto LAB86;

LAB83:    if (t60 != 0)
        goto LAB85;

LAB84:    *((unsigned int *)t48) = 1;

LAB86:    t65 = *((unsigned int *)t30);
    t66 = *((unsigned int *)t48);
    t67 = (t65 | t66);
    *((unsigned int *)t80) = t67;
    t52 = (t30 + 4);
    t53 = (t48 + 4);
    t54 = (t80 + 4);
    t68 = *((unsigned int *)t52);
    t69 = *((unsigned int *)t53);
    t70 = (t68 | t69);
    *((unsigned int *)t54) = t70;
    t71 = *((unsigned int *)t54);
    t74 = (t71 != 0);
    if (t74 == 1)
        goto LAB87;

LAB88:
LAB89:    t91 = *((unsigned int *)t11);
    t92 = *((unsigned int *)t80);
    t93 = (t91 & t92);
    *((unsigned int *)t108) = t93;
    t84 = (t11 + 4);
    t85 = (t80 + 4);
    t86 = (t108 + 4);
    t96 = *((unsigned int *)t84);
    t97 = *((unsigned int *)t85);
    t98 = (t96 | t97);
    *((unsigned int *)t86) = t98;
    t100 = *((unsigned int *)t86);
    t101 = (t100 != 0);
    if (t101 == 1)
        goto LAB90;

LAB91:
LAB92:    t112 = (t108 + 4);
    t125 = *((unsigned int *)t112);
    t126 = (~(t125));
    t127 = *((unsigned int *)t108);
    t128 = (t127 & t126);
    t129 = (t128 != 0);
    if (t129 > 0)
        goto LAB93;

LAB94:    xsi_set_current_line(102, ng0);

LAB97:    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5128);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 7688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB95:
LAB54:    goto LAB31;

LAB9:    xsi_set_current_line(119, ng0);

LAB98:    xsi_set_current_line(120, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 5768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5128);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 4568U);
    t3 = *((char **)t2);

LAB99:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB100;

LAB101:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB102;

LAB103:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB104;

LAB105:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB106;

LAB107:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB108;

LAB109:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB110;

LAB111:
LAB112:    goto LAB31;

LAB11:    xsi_set_current_line(155, ng0);

LAB119:    xsi_set_current_line(156, ng0);
    t5 = ((char*)((ng3)));
    t7 = (t0 + 5768);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng15)));
    t5 = (t0 + 6888);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 2);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 5128);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 2);
    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 5928);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 4568U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t11, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t8);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t8);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB123;

LAB120:    if (t23 != 0)
        goto LAB122;

LAB121:    *((unsigned int *)t11) = 1;

LAB123:    t10 = (t11 + 4);
    t32 = *((unsigned int *)t10);
    t33 = (~(t32));
    t34 = *((unsigned int *)t11);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB124;

LAB125:
LAB126:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 4568U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t11, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t8);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t8);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB131;

LAB128:    if (t23 != 0)
        goto LAB130;

LAB129:    *((unsigned int *)t11) = 1;

LAB131:    t10 = (t11 + 4);
    t32 = *((unsigned int *)t10);
    t33 = (~(t32));
    t34 = *((unsigned int *)t11);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB132;

LAB133:
LAB134:    goto LAB31;

LAB13:    xsi_set_current_line(164, ng0);

LAB136:    xsi_set_current_line(165, ng0);
    t5 = ((char*)((ng3)));
    t7 = (t0 + 5608);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng11)));
    t5 = (t0 + 7688);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 4);
    goto LAB31;

LAB15:    xsi_set_current_line(169, ng0);

LAB137:    xsi_set_current_line(170, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 5448);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 5288);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(172, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 6568);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 7688);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 4);
    goto LAB31;

LAB17:    xsi_set_current_line(176, ng0);

LAB138:    xsi_set_current_line(177, ng0);
    t5 = ((char*)((ng3)));
    t7 = (t0 + 5608);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 6088);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 7688);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 4);
    goto LAB31;

LAB19:    xsi_set_current_line(182, ng0);

LAB139:    xsi_set_current_line(183, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 5928);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 5768);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 6888);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 2);
    xsi_set_current_line(186, ng0);
    t2 = ((char*)((ng15)));
    t5 = (t0 + 5128);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 2);
    xsi_set_current_line(187, ng0);
    t2 = ((char*)((ng18)));
    t5 = (t0 + 7688);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 4);
    goto LAB31;

LAB21:    xsi_set_current_line(190, ng0);

LAB140:    xsi_set_current_line(191, ng0);
    t5 = ((char*)((ng3)));
    t7 = (t0 + 5448);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 5288);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 6568);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(194, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 7688);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 4);
    goto LAB31;

LAB23:    xsi_set_current_line(197, ng0);

LAB141:    xsi_set_current_line(198, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 5928);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    xsi_set_current_line(199, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 5768);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 6888);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 2);
    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 5128);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 2);
    xsi_set_current_line(202, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 7048);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 2);
    xsi_set_current_line(203, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 6408);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(204, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 7688);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 4);
    goto LAB31;

LAB25:    xsi_set_current_line(207, ng0);

LAB142:    xsi_set_current_line(208, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 5928);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    xsi_set_current_line(209, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 5768);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(210, ng0);
    t2 = ((char*)((ng15)));
    t5 = (t0 + 6888);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 2);
    xsi_set_current_line(211, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 5128);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 2);
    xsi_set_current_line(212, ng0);
    t2 = ((char*)((ng19)));
    t5 = (t0 + 7688);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 4);
    goto LAB31;

LAB27:    xsi_set_current_line(215, ng0);

LAB143:    xsi_set_current_line(216, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 5448);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    xsi_set_current_line(217, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 5288);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(218, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 6568);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(219, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 7688);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 4);
    goto LAB31;

LAB29:    xsi_set_current_line(222, ng0);

LAB144:    xsi_set_current_line(223, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 5928);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    xsi_set_current_line(224, ng0);
    t2 = ((char*)((ng15)));
    t5 = (t0 + 7048);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 2);
    xsi_set_current_line(225, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 6248);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(226, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 7688);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 4);
    goto LAB31;

LAB35:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB36;

LAB37:    *((unsigned int *)t30) = 1;
    goto LAB40;

LAB42:    t42 = *((unsigned int *)t30);
    t43 = *((unsigned int *)t39);
    *((unsigned int *)t30) = (t42 | t43);
    t44 = *((unsigned int *)t38);
    t45 = *((unsigned int *)t39);
    *((unsigned int *)t38) = (t44 | t45);
    goto LAB41;

LAB43:    t60 = *((unsigned int *)t48);
    t61 = *((unsigned int *)t54);
    *((unsigned int *)t48) = (t60 | t61);
    t62 = (t29 + 4);
    t63 = (t30 + 4);
    t64 = *((unsigned int *)t29);
    t65 = (~(t64));
    t66 = *((unsigned int *)t62);
    t67 = (~(t66));
    t68 = *((unsigned int *)t30);
    t69 = (~(t68));
    t70 = *((unsigned int *)t63);
    t71 = (~(t70));
    t72 = (t65 & t67);
    t73 = (t69 & t71);
    t74 = (~(t72));
    t75 = (~(t73));
    t76 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t76 & t74);
    t77 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t77 & t75);
    t78 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t78 & t74);
    t79 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t79 & t75);
    goto LAB45;

LAB46:    t92 = *((unsigned int *)t80);
    t93 = *((unsigned int *)t86);
    *((unsigned int *)t80) = (t92 | t93);
    t94 = (t28 + 4);
    t95 = (t48 + 4);
    t96 = *((unsigned int *)t94);
    t97 = (~(t96));
    t98 = *((unsigned int *)t28);
    t99 = (t98 & t97);
    t100 = *((unsigned int *)t95);
    t101 = (~(t100));
    t102 = *((unsigned int *)t48);
    t103 = (t102 & t101);
    t104 = (~(t99));
    t105 = (~(t103));
    t106 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t106 & t104);
    t107 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t107 & t105);
    goto LAB48;

LAB49:    t120 = *((unsigned int *)t108);
    t121 = *((unsigned int *)t114);
    *((unsigned int *)t108) = (t120 | t121);
    t122 = (t11 + 4);
    t123 = (t80 + 4);
    t124 = *((unsigned int *)t11);
    t125 = (~(t124));
    t126 = *((unsigned int *)t122);
    t127 = (~(t126));
    t128 = *((unsigned int *)t80);
    t129 = (~(t128));
    t130 = *((unsigned int *)t123);
    t131 = (~(t130));
    t132 = (t125 & t127);
    t133 = (t129 & t131);
    t134 = (~(t132));
    t135 = (~(t133));
    t136 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t136 & t134);
    t137 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t137 & t135);
    t138 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t138 & t134);
    t139 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t139 & t135);
    goto LAB51;

LAB52:    xsi_set_current_line(74, ng0);

LAB55:    xsi_set_current_line(75, ng0);
    t146 = ((char*)((ng3)));
    t147 = (t0 + 7368);
    xsi_vlogvar_assign_value(t147, t146, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 4248U);
    t3 = *((char **)t2);
    t2 = (t0 + 4408U);
    t5 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t5 + 4);
    t14 = *((unsigned int *)t2);
    t15 = (~(t14));
    t16 = *((unsigned int *)t5);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB59;

LAB57:    if (*((unsigned int *)t2) == 0)
        goto LAB56;

LAB58:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;

LAB59:    t8 = (t11 + 4);
    t9 = (t5 + 4);
    t19 = *((unsigned int *)t5);
    t20 = (~(t19));
    *((unsigned int *)t11) = t20;
    *((unsigned int *)t8) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB61;

LAB60:    t25 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t25 & 1U);
    t32 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t32 & 1U);
    t33 = *((unsigned int *)t3);
    t34 = *((unsigned int *)t11);
    t35 = (t33 & t34);
    *((unsigned int *)t30) = t35;
    t10 = (t3 + 4);
    t12 = (t11 + 4);
    t13 = (t30 + 4);
    t36 = *((unsigned int *)t10);
    t40 = *((unsigned int *)t12);
    t41 = (t36 | t40);
    *((unsigned int *)t13) = t41;
    t42 = *((unsigned int *)t13);
    t43 = (t42 != 0);
    if (t43 == 1)
        goto LAB62;

LAB63:
LAB64:    t28 = (t0 + 4088U);
    t29 = *((char **)t28);
    memset(t48, 0, 8);
    t28 = (t29 + 4);
    t66 = *((unsigned int *)t28);
    t67 = (~(t66));
    t68 = *((unsigned int *)t29);
    t69 = (t68 & t67);
    t70 = (t69 & 1U);
    if (t70 != 0)
        goto LAB68;

LAB66:    if (*((unsigned int *)t28) == 0)
        goto LAB65;

LAB67:    t31 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t31) = 1;

LAB68:    t37 = (t48 + 4);
    t38 = (t29 + 4);
    t71 = *((unsigned int *)t29);
    t74 = (~(t71));
    *((unsigned int *)t48) = t74;
    *((unsigned int *)t37) = 0;
    if (*((unsigned int *)t38) != 0)
        goto LAB70;

LAB69:    t79 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t79 & 1U);
    t81 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t81 & 1U);
    t82 = *((unsigned int *)t30);
    t83 = *((unsigned int *)t48);
    t87 = (t82 & t83);
    *((unsigned int *)t80) = t87;
    t39 = (t30 + 4);
    t52 = (t48 + 4);
    t53 = (t80 + 4);
    t88 = *((unsigned int *)t39);
    t89 = *((unsigned int *)t52);
    t90 = (t88 | t89);
    *((unsigned int *)t53) = t90;
    t91 = *((unsigned int *)t53);
    t92 = (t91 != 0);
    if (t92 == 1)
        goto LAB71;

LAB72:
LAB73:    t63 = (t0 + 7528);
    xsi_vlogvar_assign_value(t63, t80, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB54;

LAB56:    *((unsigned int *)t11) = 1;
    goto LAB59;

LAB61:    t21 = *((unsigned int *)t11);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t11) = (t21 | t22);
    t23 = *((unsigned int *)t8);
    t24 = *((unsigned int *)t9);
    *((unsigned int *)t8) = (t23 | t24);
    goto LAB60;

LAB62:    t44 = *((unsigned int *)t30);
    t45 = *((unsigned int *)t13);
    *((unsigned int *)t30) = (t44 | t45);
    t26 = (t3 + 4);
    t27 = (t11 + 4);
    t46 = *((unsigned int *)t3);
    t47 = (~(t46));
    t49 = *((unsigned int *)t26);
    t50 = (~(t49));
    t51 = *((unsigned int *)t11);
    t55 = (~(t51));
    t56 = *((unsigned int *)t27);
    t57 = (~(t56));
    t6 = (t47 & t50);
    t72 = (t55 & t57);
    t58 = (~(t6));
    t59 = (~(t72));
    t60 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t60 & t58);
    t61 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t61 & t59);
    t64 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t64 & t58);
    t65 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t65 & t59);
    goto LAB64;

LAB65:    *((unsigned int *)t48) = 1;
    goto LAB68;

LAB70:    t75 = *((unsigned int *)t48);
    t76 = *((unsigned int *)t38);
    *((unsigned int *)t48) = (t75 | t76);
    t77 = *((unsigned int *)t37);
    t78 = *((unsigned int *)t38);
    *((unsigned int *)t37) = (t77 | t78);
    goto LAB69;

LAB71:    t93 = *((unsigned int *)t80);
    t96 = *((unsigned int *)t53);
    *((unsigned int *)t80) = (t93 | t96);
    t54 = (t30 + 4);
    t62 = (t48 + 4);
    t97 = *((unsigned int *)t30);
    t98 = (~(t97));
    t100 = *((unsigned int *)t54);
    t101 = (~(t100));
    t102 = *((unsigned int *)t48);
    t104 = (~(t102));
    t105 = *((unsigned int *)t62);
    t106 = (~(t105));
    t73 = (t98 & t101);
    t99 = (t104 & t106);
    t107 = (~(t73));
    t109 = (~(t99));
    t110 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t110 & t107);
    t111 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t111 & t109);
    t115 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t115 & t107);
    t116 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t116 & t109);
    goto LAB73;

LAB77:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB78;

LAB81:    t28 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB82;

LAB85:    t39 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB86;

LAB87:    t75 = *((unsigned int *)t80);
    t76 = *((unsigned int *)t54);
    *((unsigned int *)t80) = (t75 | t76);
    t62 = (t30 + 4);
    t63 = (t48 + 4);
    t77 = *((unsigned int *)t62);
    t78 = (~(t77));
    t79 = *((unsigned int *)t30);
    t6 = (t79 & t78);
    t81 = *((unsigned int *)t63);
    t82 = (~(t81));
    t83 = *((unsigned int *)t48);
    t72 = (t83 & t82);
    t87 = (~(t6));
    t88 = (~(t72));
    t89 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t89 & t87);
    t90 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t90 & t88);
    goto LAB89;

LAB90:    t102 = *((unsigned int *)t108);
    t104 = *((unsigned int *)t86);
    *((unsigned int *)t108) = (t102 | t104);
    t94 = (t11 + 4);
    t95 = (t80 + 4);
    t105 = *((unsigned int *)t11);
    t106 = (~(t105));
    t107 = *((unsigned int *)t94);
    t109 = (~(t107));
    t110 = *((unsigned int *)t80);
    t111 = (~(t110));
    t115 = *((unsigned int *)t95);
    t116 = (~(t115));
    t73 = (t106 & t109);
    t99 = (t111 & t116);
    t117 = (~(t73));
    t118 = (~(t99));
    t119 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t119 & t117);
    t120 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t120 & t118);
    t121 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t121 & t117);
    t124 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t124 & t118);
    goto LAB92;

LAB93:    xsi_set_current_line(85, ng0);

LAB96:    xsi_set_current_line(86, ng0);
    t113 = ((char*)((ng2)));
    t114 = (t0 + 7048);
    xsi_vlogvar_assign_value(t114, t113, 0, 0, 2);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5128);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 7688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB95;

LAB100:    xsi_set_current_line(128, ng0);

LAB113:    xsi_set_current_line(129, ng0);
    t5 = ((char*)((ng8)));
    t7 = (t0 + 7688);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 4);
    goto LAB112;

LAB102:    xsi_set_current_line(132, ng0);

LAB114:    xsi_set_current_line(133, ng0);
    t5 = ((char*)((ng8)));
    t7 = (t0 + 7688);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 4);
    goto LAB112;

LAB104:    xsi_set_current_line(136, ng0);

LAB115:    xsi_set_current_line(137, ng0);
    t5 = ((char*)((ng10)));
    t7 = (t0 + 7688);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 4);
    goto LAB112;

LAB106:    xsi_set_current_line(140, ng0);

LAB116:    xsi_set_current_line(141, ng0);
    t5 = ((char*)((ng12)));
    t7 = (t0 + 7688);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 4);
    goto LAB112;

LAB108:    xsi_set_current_line(144, ng0);

LAB117:    xsi_set_current_line(145, ng0);
    t5 = ((char*)((ng13)));
    t7 = (t0 + 7688);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 4);
    goto LAB112;

LAB110:    xsi_set_current_line(148, ng0);

LAB118:    xsi_set_current_line(149, ng0);
    t5 = ((char*)((ng14)));
    t7 = (t0 + 7688);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 4);
    goto LAB112;

LAB122:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB123;

LAB124:    xsi_set_current_line(160, ng0);

LAB127:    xsi_set_current_line(160, ng0);
    t12 = ((char*)((ng16)));
    t13 = (t0 + 7688);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 4);
    goto LAB126;

LAB130:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB131;

LAB132:    xsi_set_current_line(161, ng0);

LAB135:    xsi_set_current_line(161, ng0);
    t12 = ((char*)((ng17)));
    t13 = (t0 + 7688);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 4);
    goto LAB134;

}


extern void work_m_00000000004216205713_1938225339_init()
{
	static char *pe[] = {(void *)Initial_60_0,(void *)Always_66_1};
	xsi_register_didat("work_m_00000000004216205713_1938225339", "isim/Top_test_isim_beh.exe.sim/work/m_00000000004216205713_1938225339.didat");
	xsi_register_executes(pe);
}
