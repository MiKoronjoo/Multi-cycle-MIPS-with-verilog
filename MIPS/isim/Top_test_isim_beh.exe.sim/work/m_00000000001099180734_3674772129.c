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
static const char *ng0 = "C:/Users/Markazi.co/Desktop/Computer Architecture/verilog/MIPS/RegisterFile.v";
static int ng1[] = {0, 0};
static int ng2[] = {32, 0};
static int ng3[] = {1, 0};
static int ng4[] = {3, 0};



static void Initial_31_0(char *t0)
{
    char t11[8];
    char t12[8];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    int t24;
    char *t25;
    unsigned int t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;

LAB0:    xsi_set_current_line(31, ng0);

LAB2:    xsi_set_current_line(32, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 6);
    xsi_set_current_line(33, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t1 + 4);
    t3 = *((unsigned int *)t2);
    t4 = (~(t3));
    t5 = *((unsigned int *)t1);
    t6 = (t5 & t4);
    t7 = (t0 + 6948);
    *((int *)t7) = t6;

LAB3:    t8 = (t0 + 6948);
    if (*((int *)t8) > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB6:    xsi_set_current_line(35, ng0);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 2728);
    t13 = (t0 + 2728);
    t14 = (t13 + 72U);
    t15 = *((char **)t14);
    t16 = (t0 + 2728);
    t17 = (t16 + 64U);
    t18 = *((char **)t17);
    t19 = (t0 + 3048);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    xsi_vlog_generic_convert_array_indices(t11, t12, t15, t18, 2, 1, t21, 6, 2);
    t22 = (t11 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (!(t23));
    t25 = (t12 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 3048);
    t2 = (t1 + 56U);
    t7 = *((char **)t2);
    t8 = ((char*)((ng3)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t7, 6, t8, 32);
    t9 = (t0 + 3048);
    xsi_vlogvar_assign_value(t9, t11, 0, 0, 6);
    t1 = (t0 + 6948);
    t6 = *((int *)t1);
    *((int *)t1) = (t6 - 1);
    goto LAB3;

LAB7:    t29 = *((unsigned int *)t11);
    t30 = *((unsigned int *)t12);
    t31 = (t29 - t30);
    t32 = (t31 + 1);
    xsi_vlogvar_assign_value(t10, t9, 0, *((unsigned int *)t12), t32);
    goto LAB8;

}

static void Always_41_1(char *t0)
{
    char t6[8];
    char t7[8];
    char t52[8];
    char t53[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    int t15;
    char *t16;
    unsigned int t17;
    int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
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
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned int t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;

LAB0:    t1 = (t0 + 4216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 5032);
    *((int *)t2) = 1;
    t3 = (t0 + 4248);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 6);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    t4 = (t0 + 2728);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t6 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t2);
    t20 = (t14 ^ t17);
    t21 = *((unsigned int *)t4);
    t24 = *((unsigned int *)t5);
    t25 = (t21 ^ t24);
    t26 = (t20 | t25);
    t27 = *((unsigned int *)t4);
    t28 = *((unsigned int *)t5);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB11;

LAB8:    if (t29 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t6) = 1;

LAB11:    t9 = (t6 + 4);
    t32 = *((unsigned int *)t9);
    t33 = (~(t32));
    t34 = *((unsigned int *)t6);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB12;

LAB13:
LAB14:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t2);
    t20 = (t14 ^ t17);
    t21 = *((unsigned int *)t4);
    t24 = *((unsigned int *)t5);
    t25 = (t21 ^ t24);
    t26 = (t20 | t25);
    t27 = *((unsigned int *)t4);
    t28 = *((unsigned int *)t5);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB25;

LAB22:    if (t29 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t6) = 1;

LAB25:    t9 = (t6 + 4);
    t32 = *((unsigned int *)t9);
    t33 = (~(t32));
    t34 = *((unsigned int *)t6);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB26;

LAB27:
LAB28:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t14 = *((unsigned int *)t2);
    t17 = (~(t14));
    t20 = *((unsigned int *)t3);
    t21 = (t20 & t17);
    t24 = (t21 != 0);
    if (t24 > 0)
        goto LAB36;

LAB37:
LAB38:    goto LAB2;

LAB6:    t20 = *((unsigned int *)t6);
    t21 = *((unsigned int *)t7);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t7), t23);
    goto LAB7;

LAB10:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB11;

LAB12:    xsi_set_current_line(47, ng0);

LAB15:    xsi_set_current_line(48, ng0);
    t10 = ((char*)((ng2)));
    t11 = (t10 + 4);
    t37 = *((unsigned int *)t11);
    t38 = (~(t37));
    t39 = *((unsigned int *)t10);
    t15 = (t39 & t38);
    t12 = (t0 + 6952);
    *((int *)t12) = t15;

LAB16:    t13 = (t0 + 6952);
    if (*((int *)t13) > 0)
        goto LAB17;

LAB18:    goto LAB14;

LAB17:    xsi_set_current_line(49, ng0);

LAB19:    xsi_set_current_line(50, ng0);
    t16 = (t0 + 2728);
    t40 = (t16 + 56U);
    t41 = *((char **)t40);
    t42 = (t0 + 2728);
    t43 = (t42 + 72U);
    t44 = *((char **)t43);
    t45 = (t0 + 2728);
    t46 = (t45 + 64U);
    t47 = *((char **)t46);
    t48 = (t0 + 3048);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    xsi_vlog_generic_get_array_select_value(t7, 32, t41, t44, t47, 2, 1, t50, 6, 2);
    t51 = (t0 + 2888);
    t54 = (t0 + 2888);
    t55 = (t54 + 72U);
    t56 = *((char **)t55);
    t57 = (t0 + 2888);
    t58 = (t57 + 64U);
    t59 = *((char **)t58);
    t60 = (t0 + 3048);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    xsi_vlog_generic_convert_array_indices(t52, t53, t56, t59, 2, 1, t62, 6, 2);
    t63 = (t52 + 4);
    t64 = *((unsigned int *)t63);
    t18 = (!(t64));
    t65 = (t53 + 4);
    t66 = *((unsigned int *)t65);
    t19 = (!(t66));
    t22 = (t18 && t19);
    if (t22 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 6, t5, 32);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 6);
    t2 = (t0 + 6952);
    t15 = *((int *)t2);
    *((int *)t2) = (t15 - 1);
    goto LAB16;

LAB20:    t67 = *((unsigned int *)t52);
    t68 = *((unsigned int *)t53);
    t23 = (t67 - t68);
    t69 = (t23 + 1);
    xsi_vlogvar_assign_value(t51, t7, 0, *((unsigned int *)t53), t69);
    goto LAB21;

LAB24:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(56, ng0);

LAB29:    xsi_set_current_line(57, ng0);
    t10 = ((char*)((ng2)));
    t11 = (t10 + 4);
    t37 = *((unsigned int *)t11);
    t38 = (~(t37));
    t39 = *((unsigned int *)t10);
    t15 = (t39 & t38);
    t12 = (t0 + 6956);
    *((int *)t12) = t15;

LAB30:    t13 = (t0 + 6956);
    if (*((int *)t13) > 0)
        goto LAB31;

LAB32:    goto LAB28;

LAB31:    xsi_set_current_line(58, ng0);

LAB33:    xsi_set_current_line(59, ng0);
    t16 = (t0 + 2888);
    t40 = (t16 + 56U);
    t41 = *((char **)t40);
    t42 = (t0 + 2888);
    t43 = (t42 + 72U);
    t44 = *((char **)t43);
    t45 = (t0 + 2888);
    t46 = (t45 + 64U);
    t47 = *((char **)t46);
    t48 = (t0 + 3048);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    xsi_vlog_generic_get_array_select_value(t7, 32, t41, t44, t47, 2, 1, t50, 6, 2);
    t51 = (t0 + 2728);
    t54 = (t0 + 2728);
    t55 = (t54 + 72U);
    t56 = *((char **)t55);
    t57 = (t0 + 2728);
    t58 = (t57 + 64U);
    t59 = *((char **)t58);
    t60 = (t0 + 3048);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    xsi_vlog_generic_convert_array_indices(t52, t53, t56, t59, 2, 1, t62, 6, 2);
    t63 = (t52 + 4);
    t64 = *((unsigned int *)t63);
    t18 = (!(t64));
    t65 = (t53 + 4);
    t66 = *((unsigned int *)t65);
    t19 = (!(t66));
    t22 = (t18 && t19);
    if (t22 == 1)
        goto LAB34;

LAB35:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 6, t5, 32);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 6);
    t2 = (t0 + 6956);
    t15 = *((int *)t2);
    *((int *)t2) = (t15 - 1);
    goto LAB30;

LAB34:    t67 = *((unsigned int *)t52);
    t68 = *((unsigned int *)t53);
    t23 = (t67 - t68);
    t69 = (t23 + 1);
    xsi_vlogvar_assign_value(t51, t7, 0, *((unsigned int *)t53), t69);
    goto LAB35;

LAB36:    xsi_set_current_line(65, ng0);

LAB39:    xsi_set_current_line(66, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t8 = (t5 + 4);
    t9 = (t4 + 4);
    t25 = *((unsigned int *)t5);
    t26 = *((unsigned int *)t4);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t8);
    t29 = *((unsigned int *)t9);
    t30 = (t28 ^ t29);
    t31 = (t27 | t30);
    t32 = *((unsigned int *)t8);
    t33 = *((unsigned int *)t9);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB41;

LAB40:    if (t34 != 0)
        goto LAB42;

LAB43:    t11 = (t6 + 4);
    t37 = *((unsigned int *)t11);
    t38 = (~(t37));
    t39 = *((unsigned int *)t6);
    t64 = (t39 & t38);
    t66 = (t64 != 0);
    if (t66 > 0)
        goto LAB44;

LAB45:
LAB46:    goto LAB38;

LAB41:    *((unsigned int *)t6) = 1;
    goto LAB43;

LAB42:    t10 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB43;

LAB44:    xsi_set_current_line(67, ng0);

LAB47:    xsi_set_current_line(68, ng0);
    t12 = (t0 + 2008U);
    t13 = *((char **)t12);
    t12 = (t0 + 2728);
    t16 = (t0 + 2728);
    t40 = (t16 + 72U);
    t41 = *((char **)t40);
    t42 = (t0 + 2728);
    t43 = (t42 + 64U);
    t44 = *((char **)t43);
    t45 = (t0 + 1848U);
    t46 = *((char **)t45);
    xsi_vlog_generic_convert_array_indices(t7, t52, t41, t44, 2, 1, t46, 5, 2);
    t45 = (t7 + 4);
    t67 = *((unsigned int *)t45);
    t15 = (!(t67));
    t47 = (t52 + 4);
    t68 = *((unsigned int *)t47);
    t18 = (!(t68));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB48;

LAB49:    goto LAB46;

LAB48:    t70 = *((unsigned int *)t7);
    t71 = *((unsigned int *)t52);
    t22 = (t70 - t71);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t12, t13, 0, *((unsigned int *)t52), t23);
    goto LAB49;

}

static void Cont_73_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t36[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;

LAB0:    t1 = (t0 + 4464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1528U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB5;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t45 = *((unsigned int *)t4);
    t46 = (~(t45));
    t47 = *((unsigned int *)t29);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t43, 8);

LAB20:    t49 = (t0 + 5144);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    memcpy(t53, t3, 8);
    xsi_driver_vfirst_trans(t49, 0, 31);
    t54 = (t0 + 5048);
    *((int *)t54) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t6) = 1;
    goto LAB7;

LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 2728);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t37 = (t0 + 2728);
    t38 = (t37 + 72U);
    t39 = *((char **)t38);
    t40 = (t0 + 2728);
    t41 = (t40 + 64U);
    t42 = *((char **)t41);
    t43 = (t0 + 1528U);
    t44 = *((char **)t43);
    xsi_vlog_generic_get_array_select_value(t36, 32, t35, t39, t42, 2, 1, t44, 5, 2);
    goto LAB13;

LAB14:    t43 = ((char*)((ng1)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t36, 32, t43, 32);
    goto LAB20;

LAB18:    memcpy(t3, t36, 8);
    goto LAB20;

}

static void Cont_74_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t36[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;

LAB0:    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1688U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB5;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t45 = *((unsigned int *)t4);
    t46 = (~(t45));
    t47 = *((unsigned int *)t29);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t43, 8);

LAB20:    t49 = (t0 + 5208);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    memcpy(t53, t3, 8);
    xsi_driver_vfirst_trans(t49, 0, 31);
    t54 = (t0 + 5064);
    *((int *)t54) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t6) = 1;
    goto LAB7;

LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 2728);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t37 = (t0 + 2728);
    t38 = (t37 + 72U);
    t39 = *((char **)t38);
    t40 = (t0 + 2728);
    t41 = (t40 + 64U);
    t42 = *((char **)t41);
    t43 = (t0 + 1688U);
    t44 = *((char **)t43);
    xsi_vlog_generic_get_array_select_value(t36, 32, t35, t39, t42, 2, 1, t44, 5, 2);
    goto LAB13;

LAB14:    t43 = ((char*)((ng1)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t36, 32, t43, 32);
    goto LAB20;

LAB18:    memcpy(t3, t36, 8);
    goto LAB20;

}


extern void work_m_00000000001099180734_3674772129_init()
{
	static char *pe[] = {(void *)Initial_31_0,(void *)Always_41_1,(void *)Cont_73_2,(void *)Cont_74_3};
	xsi_register_didat("work_m_00000000001099180734_3674772129", "isim/Top_test_isim_beh.exe.sim/work/m_00000000001099180734_3674772129.didat");
	xsi_register_executes(pe);
}
