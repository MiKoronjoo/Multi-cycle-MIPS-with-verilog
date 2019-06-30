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
static int ng3[] = {2, 0};
static unsigned int ng4[] = {100U, 0U};
static int ng5[] = {3, 0};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {43U, 0U};
static unsigned int ng9[] = {2U, 0U};
static unsigned int ng10[] = {35U, 0U};
static unsigned int ng11[] = {6U, 0U};
static unsigned int ng12[] = {4U, 0U};
static unsigned int ng13[] = {8U, 0U};
static unsigned int ng14[] = {9U, 0U};
static unsigned int ng15[] = {11U, 0U};
static unsigned int ng16[] = {5U, 0U};
static unsigned int ng17[] = {3U, 0U};
static unsigned int ng18[] = {7U, 0U};
static unsigned int ng19[] = {10U, 0U};



static void Initial_56_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(56, ng0);

LAB2:    xsi_set_current_line(57, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 7048);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);

LAB1:    return;
}

static void Always_60_1(char *t0)
{
    char t9[8];
    char t24[8];
    char t42[8];
    char t58[8];
    char t85[8];
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
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    int t109;
    int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    char *t124;

LAB0:    t1 = (t0 + 8216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 8536);
    *((int *)t2) = 1;
    t3 = (t0 + 8248);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(61, ng0);

LAB5:    xsi_set_current_line(62, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 4808);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 7048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB2;

LAB7:    xsi_set_current_line(66, ng0);

LAB32:    xsi_set_current_line(67, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 6408);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3928U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB36;

LAB33:    if (t19 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t9) = 1;

LAB36:    t22 = (t0 + 3768U);
    t23 = *((char **)t22);
    t22 = ((char*)((ng1)));
    memset(t24, 0, 8);
    t25 = (t23 + 4);
    t26 = (t22 + 4);
    t27 = *((unsigned int *)t23);
    t28 = *((unsigned int *)t22);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t25);
    t31 = *((unsigned int *)t26);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t26);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB40;

LAB37:    if (t36 != 0)
        goto LAB39;

LAB38:    *((unsigned int *)t24) = 1;

LAB40:    t40 = (t0 + 3768U);
    t41 = *((char **)t40);
    t40 = ((char*)((ng4)));
    memset(t42, 0, 8);
    t43 = (t41 + 4);
    t44 = (t40 + 4);
    t45 = *((unsigned int *)t41);
    t46 = *((unsigned int *)t40);
    t47 = (t45 ^ t46);
    t48 = *((unsigned int *)t43);
    t49 = *((unsigned int *)t44);
    t50 = (t48 ^ t49);
    t51 = (t47 | t50);
    t52 = *((unsigned int *)t43);
    t53 = *((unsigned int *)t44);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB44;

LAB41:    if (t54 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t42) = 1;

LAB44:    t59 = *((unsigned int *)t24);
    t60 = *((unsigned int *)t42);
    t61 = (t59 | t60);
    *((unsigned int *)t58) = t61;
    t62 = (t24 + 4);
    t63 = (t42 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB45;

LAB46:
LAB47:    t86 = *((unsigned int *)t9);
    t87 = *((unsigned int *)t58);
    t88 = (t86 & t87);
    *((unsigned int *)t85) = t88;
    t89 = (t9 + 4);
    t90 = (t58 + 4);
    t91 = (t85 + 4);
    t92 = *((unsigned int *)t89);
    t93 = *((unsigned int *)t90);
    t94 = (t92 | t93);
    *((unsigned int *)t91) = t94;
    t95 = *((unsigned int *)t91);
    t96 = (t95 != 0);
    if (t96 == 1)
        goto LAB48;

LAB49:
LAB50:    t117 = (t85 + 4);
    t118 = *((unsigned int *)t117);
    t119 = (~(t118));
    t120 = *((unsigned int *)t85);
    t121 = (t120 & t119);
    t122 = (t121 != 0);
    if (t122 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(77, ng0);

LAB55:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 4088U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB59;

LAB56:    if (t19 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t9) = 1;

LAB59:    t22 = (t0 + 3928U);
    t23 = *((char **)t22);
    t22 = ((char*)((ng3)));
    memset(t24, 0, 8);
    t25 = (t23 + 4);
    t26 = (t22 + 4);
    t27 = *((unsigned int *)t23);
    t28 = *((unsigned int *)t22);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t25);
    t31 = *((unsigned int *)t26);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t26);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB63;

LAB60:    if (t36 != 0)
        goto LAB62;

LAB61:    *((unsigned int *)t24) = 1;

LAB63:    t45 = *((unsigned int *)t9);
    t46 = *((unsigned int *)t24);
    t47 = (t45 & t46);
    *((unsigned int *)t42) = t47;
    t40 = (t9 + 4);
    t41 = (t24 + 4);
    t43 = (t42 + 4);
    t48 = *((unsigned int *)t40);
    t49 = *((unsigned int *)t41);
    t50 = (t48 | t49);
    *((unsigned int *)t43) = t50;
    t51 = *((unsigned int *)t43);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB64;

LAB65:
LAB66:    t62 = (t42 + 4);
    t76 = *((unsigned int *)t62);
    t77 = (~(t76));
    t78 = *((unsigned int *)t42);
    t79 = (t78 & t77);
    t81 = (t79 != 0);
    if (t81 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(85, ng0);

LAB71:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB69:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB53:    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 7048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB31;

LAB9:    xsi_set_current_line(99, ng0);

LAB72:    xsi_set_current_line(100, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 5608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 4248U);
    t3 = *((char **)t2);

LAB73:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB74;

LAB75:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB76;

LAB77:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB78;

LAB79:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB80;

LAB81:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB82;

LAB83:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB84;

LAB85:
LAB86:    goto LAB31;

LAB11:    xsi_set_current_line(135, ng0);

LAB93:    xsi_set_current_line(136, ng0);
    t5 = ((char*)((ng6)));
    t7 = (t0 + 5608);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 6728);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 2);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 4968);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 2);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 5768);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(140, ng0);
    t2 = (t0 + 4248U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t9, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB97;

LAB94:    if (t19 != 0)
        goto LAB96;

LAB95:    *((unsigned int *)t9) = 1;

LAB97:    t23 = (t9 + 4);
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t9);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB98;

LAB99:
LAB100:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 4248U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng10)));
    memset(t9, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB105;

LAB102:    if (t19 != 0)
        goto LAB104;

LAB103:    *((unsigned int *)t9) = 1;

LAB105:    t23 = (t9 + 4);
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t9);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB106;

LAB107:
LAB108:    goto LAB31;

LAB13:    xsi_set_current_line(144, ng0);

LAB110:    xsi_set_current_line(145, ng0);
    t5 = ((char*)((ng6)));
    t7 = (t0 + 5448);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng12)));
    t5 = (t0 + 7048);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 4);
    goto LAB31;

LAB15:    xsi_set_current_line(149, ng0);

LAB111:    xsi_set_current_line(150, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 5288);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng6)));
    t5 = (t0 + 5128);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng6)));
    t5 = (t0 + 6408);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 7048);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 4);
    goto LAB31;

LAB17:    xsi_set_current_line(156, ng0);

LAB112:    xsi_set_current_line(157, ng0);
    t5 = ((char*)((ng6)));
    t7 = (t0 + 5448);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng6)));
    t5 = (t0 + 5928);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 7048);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 4);
    goto LAB31;

LAB19:    xsi_set_current_line(162, ng0);

LAB113:    xsi_set_current_line(163, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 5768);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng6)));
    t5 = (t0 + 5608);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 6728);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 2);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4968);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 2);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng18)));
    t5 = (t0 + 7048);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 4);
    goto LAB31;

LAB21:    xsi_set_current_line(170, ng0);

LAB114:    xsi_set_current_line(171, ng0);
    t5 = ((char*)((ng6)));
    t7 = (t0 + 5288);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    xsi_set_current_line(172, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 5128);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng6)));
    t5 = (t0 + 6408);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 7048);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 4);
    goto LAB31;

LAB23:    xsi_set_current_line(177, ng0);

LAB115:    xsi_set_current_line(178, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 5768);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng6)));
    t5 = (t0 + 5608);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 6728);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 2);
    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng6)));
    t5 = (t0 + 4968);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 2);
    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng6)));
    t5 = (t0 + 6888);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 2);
    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng6)));
    t5 = (t0 + 6248);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 7048);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 4);
    goto LAB31;

LAB25:    xsi_set_current_line(187, ng0);

LAB116:    xsi_set_current_line(188, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 5768);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng6)));
    t5 = (t0 + 5608);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 6728);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 2);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 4968);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 2);
    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng19)));
    t5 = (t0 + 7048);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 4);
    goto LAB31;

LAB27:    xsi_set_current_line(195, ng0);

LAB117:    xsi_set_current_line(196, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 5288);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    xsi_set_current_line(197, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 5128);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng6)));
    t5 = (t0 + 6408);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(199, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 7048);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 4);
    goto LAB31;

LAB29:    xsi_set_current_line(202, ng0);

LAB118:    xsi_set_current_line(203, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 5768);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    xsi_set_current_line(204, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 6888);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 2);
    xsi_set_current_line(205, ng0);
    t2 = ((char*)((ng6)));
    t5 = (t0 + 6088);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(206, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 7048);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 4);
    goto LAB31;

LAB35:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB36;

LAB39:    t39 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB40;

LAB43:    t57 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB44;

LAB45:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t24 + 4);
    t73 = (t42 + 4);
    t74 = *((unsigned int *)t72);
    t75 = (~(t74));
    t76 = *((unsigned int *)t24);
    t6 = (t76 & t75);
    t77 = *((unsigned int *)t73);
    t78 = (~(t77));
    t79 = *((unsigned int *)t42);
    t80 = (t79 & t78);
    t81 = (~(t6));
    t82 = (~(t80));
    t83 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t83 & t81);
    t84 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t84 & t82);
    goto LAB47;

LAB48:    t97 = *((unsigned int *)t85);
    t98 = *((unsigned int *)t91);
    *((unsigned int *)t85) = (t97 | t98);
    t99 = (t9 + 4);
    t100 = (t58 + 4);
    t101 = *((unsigned int *)t9);
    t102 = (~(t101));
    t103 = *((unsigned int *)t99);
    t104 = (~(t103));
    t105 = *((unsigned int *)t58);
    t106 = (~(t105));
    t107 = *((unsigned int *)t100);
    t108 = (~(t107));
    t109 = (t102 & t104);
    t110 = (t106 & t108);
    t111 = (~(t109));
    t112 = (~(t110));
    t113 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t113 & t111);
    t114 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t114 & t112);
    t115 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t115 & t111);
    t116 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t116 & t112);
    goto LAB50;

LAB51:    xsi_set_current_line(71, ng0);

LAB54:    xsi_set_current_line(72, ng0);
    t123 = ((char*)((ng5)));
    t124 = (t0 + 4808);
    xsi_vlogvar_assign_value(t124, t123, 0, 0, 2);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB53;

LAB58:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB59;

LAB62:    t39 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB63;

LAB64:    t53 = *((unsigned int *)t42);
    t54 = *((unsigned int *)t43);
    *((unsigned int *)t42) = (t53 | t54);
    t44 = (t9 + 4);
    t57 = (t24 + 4);
    t55 = *((unsigned int *)t9);
    t56 = (~(t55));
    t59 = *((unsigned int *)t44);
    t60 = (~(t59));
    t61 = *((unsigned int *)t24);
    t65 = (~(t61));
    t66 = *((unsigned int *)t57);
    t67 = (~(t66));
    t6 = (t56 & t60);
    t80 = (t65 & t67);
    t68 = (~(t6));
    t69 = (~(t80));
    t70 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t70 & t68);
    t71 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t71 & t69);
    t74 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t74 & t68);
    t75 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t75 & t69);
    goto LAB66;

LAB67:    xsi_set_current_line(79, ng0);

LAB70:    xsi_set_current_line(80, ng0);
    t63 = ((char*)((ng5)));
    t64 = (t0 + 6888);
    xsi_vlogvar_assign_value(t64, t63, 0, 0, 2);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB69;

LAB74:    xsi_set_current_line(108, ng0);

LAB87:    xsi_set_current_line(109, ng0);
    t5 = ((char*)((ng9)));
    t7 = (t0 + 7048);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 4);
    goto LAB86;

LAB76:    xsi_set_current_line(112, ng0);

LAB88:    xsi_set_current_line(113, ng0);
    t5 = ((char*)((ng9)));
    t7 = (t0 + 7048);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 4);
    goto LAB86;

LAB78:    xsi_set_current_line(116, ng0);

LAB89:    xsi_set_current_line(117, ng0);
    t5 = ((char*)((ng11)));
    t7 = (t0 + 7048);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 4);
    goto LAB86;

LAB80:    xsi_set_current_line(120, ng0);

LAB90:    xsi_set_current_line(121, ng0);
    t5 = ((char*)((ng13)));
    t7 = (t0 + 7048);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 4);
    goto LAB86;

LAB82:    xsi_set_current_line(124, ng0);

LAB91:    xsi_set_current_line(125, ng0);
    t5 = ((char*)((ng14)));
    t7 = (t0 + 7048);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 4);
    goto LAB86;

LAB84:    xsi_set_current_line(128, ng0);

LAB92:    xsi_set_current_line(129, ng0);
    t5 = ((char*)((ng15)));
    t7 = (t0 + 7048);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 4);
    goto LAB86;

LAB96:    t22 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB97;

LAB98:    xsi_set_current_line(140, ng0);

LAB101:    xsi_set_current_line(140, ng0);
    t25 = ((char*)((ng16)));
    t26 = (t0 + 7048);
    xsi_vlogvar_assign_value(t26, t25, 0, 0, 4);
    goto LAB100;

LAB104:    t22 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB105;

LAB106:    xsi_set_current_line(141, ng0);

LAB109:    xsi_set_current_line(141, ng0);
    t25 = ((char*)((ng17)));
    t26 = (t0 + 7048);
    xsi_vlogvar_assign_value(t26, t25, 0, 0, 4);
    goto LAB108;

}


extern void work_m_00000000001018571225_1938225339_init()
{
	static char *pe[] = {(void *)Initial_56_0,(void *)Always_60_1};
	xsi_register_didat("work_m_00000000001018571225_1938225339", "isim/Top_test_isim_beh.exe.sim/work/m_00000000001018571225_1938225339.didat");
	xsi_register_executes(pe);
}
