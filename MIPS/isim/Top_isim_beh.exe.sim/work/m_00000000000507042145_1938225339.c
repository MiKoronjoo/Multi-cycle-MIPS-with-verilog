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
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {3, 0};
static unsigned int ng6[] = {43U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {35U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {4U, 0U};
static unsigned int ng11[] = {8U, 0U};
static unsigned int ng12[] = {9U, 0U};
static unsigned int ng13[] = {11U, 0U};
static int ng14[] = {2, 0};
static unsigned int ng15[] = {5U, 0U};
static unsigned int ng16[] = {3U, 0U};
static unsigned int ng17[] = {7U, 0U};
static unsigned int ng18[] = {10U, 0U};



static void Initial_56_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(56, ng0);

LAB2:    xsi_set_current_line(57, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 6568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);

LAB1:    return;
}

static void Always_60_1(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
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
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 7736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 8056);
    *((int *)t2) = 1;
    t3 = (t0 + 7768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(61, ng0);

LAB5:    xsi_set_current_line(63, ng0);
    t4 = (t0 + 6568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng16)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng18)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB2;

LAB7:    xsi_set_current_line(65, ng0);

LAB32:    xsi_set_current_line(66, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 5928);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5128);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB31;

LAB9:    xsi_set_current_line(80, ng0);

LAB33:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5128);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3928U);
    t3 = *((char **)t2);

LAB34:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t8 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t8 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t8 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t8 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t8 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t8 == 1)
        goto LAB45;

LAB46:
LAB47:    goto LAB31;

LAB11:    xsi_set_current_line(116, ng0);

LAB54:    xsi_set_current_line(117, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 5128);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng14)));
    t4 = (t0 + 6248);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 4488);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 5288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 3928U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t2 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB58;

LAB55:    if (t21 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t11) = 1;

LAB58:    t10 = (t11 + 4);
    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB59;

LAB60:
LAB61:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 3928U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t2 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB66;

LAB63:    if (t21 != 0)
        goto LAB65;

LAB64:    *((unsigned int *)t11) = 1;

LAB66:    t10 = (t11 + 4);
    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB67;

LAB68:
LAB69:    goto LAB31;

LAB13:    xsi_set_current_line(125, ng0);

LAB71:    xsi_set_current_line(126, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 4968);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng10)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    goto LAB31;

LAB15:    xsi_set_current_line(130, ng0);

LAB72:    xsi_set_current_line(131, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 4808);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 4648);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 5928);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    goto LAB31;

LAB17:    xsi_set_current_line(137, ng0);

LAB73:    xsi_set_current_line(138, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 4968);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 5448);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    goto LAB31;

LAB19:    xsi_set_current_line(143, ng0);

LAB74:    xsi_set_current_line(144, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 5288);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 5128);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 6248);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng14)));
    t4 = (t0 + 4488);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng17)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    goto LAB31;

LAB21:    xsi_set_current_line(151, ng0);

LAB75:    xsi_set_current_line(152, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 4808);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 4648);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 5928);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    goto LAB31;

LAB23:    xsi_set_current_line(158, ng0);

LAB76:    xsi_set_current_line(159, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 5288);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 5128);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 6248);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 4488);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 6408);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 5768);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    goto LAB31;

LAB25:    xsi_set_current_line(168, ng0);

LAB77:    xsi_set_current_line(169, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 5288);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 5128);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng14)));
    t4 = (t0 + 6248);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(172, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 4488);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng18)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    goto LAB31;

LAB27:    xsi_set_current_line(176, ng0);

LAB78:    xsi_set_current_line(177, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 4808);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 4648);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 5928);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    goto LAB31;

LAB29:    xsi_set_current_line(183, ng0);

LAB79:    xsi_set_current_line(184, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 5288);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng14)));
    t4 = (t0 + 6408);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(186, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 5608);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(187, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    goto LAB31;

LAB35:    xsi_set_current_line(89, ng0);

LAB48:    xsi_set_current_line(90, ng0);
    t4 = ((char*)((ng7)));
    t5 = (t0 + 6568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB47;

LAB37:    xsi_set_current_line(93, ng0);

LAB49:    xsi_set_current_line(94, ng0);
    t4 = ((char*)((ng7)));
    t5 = (t0 + 6568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB47;

LAB39:    xsi_set_current_line(97, ng0);

LAB50:    xsi_set_current_line(98, ng0);
    t4 = ((char*)((ng9)));
    t5 = (t0 + 6568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB47;

LAB41:    xsi_set_current_line(101, ng0);

LAB51:    xsi_set_current_line(102, ng0);
    t4 = ((char*)((ng11)));
    t5 = (t0 + 6568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB47;

LAB43:    xsi_set_current_line(105, ng0);

LAB52:    xsi_set_current_line(106, ng0);
    t4 = ((char*)((ng12)));
    t5 = (t0 + 6568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB47;

LAB45:    xsi_set_current_line(109, ng0);

LAB53:    xsi_set_current_line(110, ng0);
    t4 = ((char*)((ng13)));
    t5 = (t0 + 6568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB47;

LAB57:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB58;

LAB59:    xsi_set_current_line(121, ng0);

LAB62:    xsi_set_current_line(121, ng0);
    t29 = ((char*)((ng15)));
    t30 = (t0 + 6568);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 4);
    goto LAB61;

LAB65:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB66;

LAB67:    xsi_set_current_line(122, ng0);

LAB70:    xsi_set_current_line(122, ng0);
    t29 = ((char*)((ng16)));
    t30 = (t0 + 6568);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 4);
    goto LAB69;

}


extern void work_m_00000000000507042145_1938225339_init()
{
	static char *pe[] = {(void *)Initial_56_0,(void *)Always_60_1};
	xsi_register_didat("work_m_00000000000507042145_1938225339", "isim/Top_isim_beh.exe.sim/work/m_00000000000507042145_1938225339.didat");
	xsi_register_executes(pe);
}
