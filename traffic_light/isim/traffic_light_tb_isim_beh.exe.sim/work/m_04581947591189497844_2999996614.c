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
static const char *ng0 = "/home/yuan/Desktop/FPGA/traffic_light/traffic_light.v";
static int ng1[] = {0, 0};
static int ng2[] = {10, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {2U, 0U};
static int ng6[] = {1, 0};
static int ng7[] = {2, 0};
static int ng8[] = {3, 0};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {4U, 0U};
static unsigned int ng11[] = {5U, 0U};
static unsigned int ng12[] = {9U, 0U};
static unsigned int ng13[] = {8U, 0U};
static unsigned int ng14[] = {6U, 0U};
static unsigned int ng15[] = {7U, 0U};
static unsigned int ng16[] = {10U, 0U};
static unsigned int ng17[] = {15U, 0U};



static void Always_40_0(char *t0)
{
    char t13[8];
    char t34[8];
    char t42[8];
    char t50[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
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
    int t30;
    char *t31;
    int t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    int t40;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    int t48;
    char *t49;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    int t56;

LAB0:    t1 = (t0 + 3640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 4952);
    *((int *)t2) = 1;
    t3 = (t0 + 3672);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB12;

LAB9:    if (t18 != 0)
        goto LAB11;

LAB10:    *((unsigned int *)t13) = 1;

LAB12:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 4, t4, 4, t5, 4);
    t11 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 4, 0LL);

LAB15:
LAB8:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB16:    t5 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t30 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng3)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng10)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng11)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng14)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng15)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng13)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng12)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng16)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB37;

LAB38:
LAB40:
LAB39:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2568);
    t5 = (t0 + 2568);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t21 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t13, t12, 2, t21, 32, 1);
    t22 = (t13 + 4);
    t6 = *((unsigned int *)t22);
    t30 = (!(t6));
    if (t30 == 1)
        goto LAB196;

LAB197:    t28 = (t0 + 2568);
    t29 = (t0 + 2568);
    t31 = (t29 + 72U);
    t33 = *((char **)t31);
    t35 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t34, t33, 2, t35, 32, 1);
    t36 = (t34 + 4);
    t7 = *((unsigned int *)t36);
    t32 = (!(t7));
    if (t32 == 1)
        goto LAB198;

LAB199:    t37 = (t0 + 2568);
    t38 = (t0 + 2568);
    t39 = (t38 + 72U);
    t41 = *((char **)t39);
    t43 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t42, t41, 2, t43, 32, 1);
    t44 = (t42 + 4);
    t8 = *((unsigned int *)t44);
    t40 = (!(t8));
    if (t40 == 1)
        goto LAB200;

LAB201:    t45 = (t0 + 2568);
    t46 = (t0 + 2568);
    t47 = (t46 + 72U);
    t49 = *((char **)t47);
    t51 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t50, t49, 2, t51, 32, 1);
    t52 = (t50 + 4);
    t9 = *((unsigned int *)t52);
    t48 = (!(t9));
    if (t48 == 1)
        goto LAB202;

LAB203:
LAB41:    goto LAB2;

LAB6:    xsi_set_current_line(42, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    goto LAB8;

LAB11:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(44, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 4, 0LL);
    goto LAB15;

LAB17:    xsi_set_current_line(48, ng0);
    t11 = ((char*)((ng5)));
    t12 = (t0 + 2568);
    t21 = (t0 + 2568);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t13, t28, 2, t29, 32, 1);
    t31 = (t13 + 4);
    t6 = *((unsigned int *)t31);
    t32 = (!(t6));
    if (t32 == 1)
        goto LAB42;

LAB43:    t33 = (t0 + 2568);
    t35 = (t0 + 2568);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t34, t37, 2, t38, 32, 1);
    t39 = (t34 + 4);
    t7 = *((unsigned int *)t39);
    t40 = (!(t7));
    if (t40 == 1)
        goto LAB44;

LAB45:    t41 = (t0 + 2568);
    t43 = (t0 + 2568);
    t44 = (t43 + 72U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t42, t45, 2, t46, 32, 1);
    t47 = (t42 + 4);
    t8 = *((unsigned int *)t47);
    t48 = (!(t8));
    if (t48 == 1)
        goto LAB46;

LAB47:    t49 = (t0 + 2568);
    t51 = (t0 + 2568);
    t52 = (t51 + 72U);
    t53 = *((char **)t52);
    t54 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t50, t53, 2, t54, 32, 1);
    t55 = (t50 + 4);
    t9 = *((unsigned int *)t55);
    t56 = (!(t9));
    if (t56 == 1)
        goto LAB48;

LAB49:    goto LAB41;

LAB19:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 2568);
    t11 = (t0 + 2568);
    t12 = (t11 + 72U);
    t21 = *((char **)t12);
    t22 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t13, t21, 2, t22, 32, 1);
    t28 = (t13 + 4);
    t6 = *((unsigned int *)t28);
    t32 = (!(t6));
    if (t32 == 1)
        goto LAB50;

LAB51:    t29 = (t0 + 2568);
    t31 = (t0 + 2568);
    t33 = (t31 + 72U);
    t35 = *((char **)t33);
    t36 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t34, t35, 2, t36, 32, 1);
    t37 = (t34 + 4);
    t7 = *((unsigned int *)t37);
    t40 = (!(t7));
    if (t40 == 1)
        goto LAB52;

LAB53:    t38 = (t0 + 2568);
    t39 = (t0 + 2568);
    t41 = (t39 + 72U);
    t43 = *((char **)t41);
    t44 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t42, t43, 2, t44, 32, 1);
    t45 = (t42 + 4);
    t8 = *((unsigned int *)t45);
    t48 = (!(t8));
    if (t48 == 1)
        goto LAB54;

LAB55:    t46 = (t0 + 2568);
    t47 = (t0 + 2568);
    t49 = (t47 + 72U);
    t51 = *((char **)t49);
    t52 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t50, t51, 2, t52, 32, 1);
    t53 = (t50 + 4);
    t9 = *((unsigned int *)t53);
    t56 = (!(t9));
    if (t56 == 1)
        goto LAB56;

LAB57:    goto LAB41;

LAB21:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 2568);
    t11 = (t0 + 2568);
    t12 = (t11 + 72U);
    t21 = *((char **)t12);
    t22 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t13, t21, 2, t22, 32, 1);
    t28 = (t13 + 4);
    t6 = *((unsigned int *)t28);
    t32 = (!(t6));
    if (t32 == 1)
        goto LAB58;

LAB59:    t29 = (t0 + 2568);
    t31 = (t0 + 2568);
    t33 = (t31 + 72U);
    t35 = *((char **)t33);
    t36 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t34, t35, 2, t36, 32, 1);
    t37 = (t34 + 4);
    t7 = *((unsigned int *)t37);
    t40 = (!(t7));
    if (t40 == 1)
        goto LAB60;

LAB61:    t38 = (t0 + 2568);
    t39 = (t0 + 2568);
    t41 = (t39 + 72U);
    t43 = *((char **)t41);
    t44 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t42, t43, 2, t44, 32, 1);
    t45 = (t42 + 4);
    t8 = *((unsigned int *)t45);
    t48 = (!(t8));
    if (t48 == 1)
        goto LAB62;

LAB63:    t46 = (t0 + 2568);
    t47 = (t0 + 2568);
    t49 = (t47 + 72U);
    t51 = *((char **)t49);
    t52 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t50, t51, 2, t52, 32, 1);
    t53 = (t50 + 4);
    t9 = *((unsigned int *)t53);
    t56 = (!(t9));
    if (t56 == 1)
        goto LAB64;

LAB65:    goto LAB41;

LAB23:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 2568);
    t11 = (t0 + 2568);
    t12 = (t11 + 72U);
    t21 = *((char **)t12);
    t22 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t13, t21, 2, t22, 32, 1);
    t28 = (t13 + 4);
    t6 = *((unsigned int *)t28);
    t32 = (!(t6));
    if (t32 == 1)
        goto LAB66;

LAB67:    t29 = (t0 + 2568);
    t31 = (t0 + 2568);
    t33 = (t31 + 72U);
    t35 = *((char **)t33);
    t36 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t34, t35, 2, t36, 32, 1);
    t37 = (t34 + 4);
    t7 = *((unsigned int *)t37);
    t40 = (!(t7));
    if (t40 == 1)
        goto LAB68;

LAB69:    t38 = (t0 + 2568);
    t39 = (t0 + 2568);
    t41 = (t39 + 72U);
    t43 = *((char **)t41);
    t44 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t42, t43, 2, t44, 32, 1);
    t45 = (t42 + 4);
    t8 = *((unsigned int *)t45);
    t48 = (!(t8));
    if (t48 == 1)
        goto LAB70;

LAB71:    t46 = (t0 + 2568);
    t47 = (t0 + 2568);
    t49 = (t47 + 72U);
    t51 = *((char **)t49);
    t52 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t50, t51, 2, t52, 32, 1);
    t53 = (t50 + 4);
    t9 = *((unsigned int *)t53);
    t56 = (!(t9));
    if (t56 == 1)
        goto LAB72;

LAB73:    goto LAB41;

LAB25:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 2568);
    t11 = (t0 + 2568);
    t12 = (t11 + 72U);
    t21 = *((char **)t12);
    t22 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t13, t21, 2, t22, 32, 1);
    t28 = (t13 + 4);
    t6 = *((unsigned int *)t28);
    t32 = (!(t6));
    if (t32 == 1)
        goto LAB74;

LAB75:    t29 = (t0 + 2568);
    t31 = (t0 + 2568);
    t33 = (t31 + 72U);
    t35 = *((char **)t33);
    t36 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t34, t35, 2, t36, 32, 1);
    t37 = (t34 + 4);
    t7 = *((unsigned int *)t37);
    t40 = (!(t7));
    if (t40 == 1)
        goto LAB76;

LAB77:    t38 = (t0 + 2568);
    t39 = (t0 + 2568);
    t41 = (t39 + 72U);
    t43 = *((char **)t41);
    t44 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t42, t43, 2, t44, 32, 1);
    t45 = (t42 + 4);
    t8 = *((unsigned int *)t45);
    t48 = (!(t8));
    if (t48 == 1)
        goto LAB78;

LAB79:    t46 = (t0 + 2568);
    t47 = (t0 + 2568);
    t49 = (t47 + 72U);
    t51 = *((char **)t49);
    t52 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t50, t51, 2, t52, 32, 1);
    t53 = (t50 + 4);
    t9 = *((unsigned int *)t53);
    t56 = (!(t9));
    if (t56 == 1)
        goto LAB80;

LAB81:    goto LAB41;

LAB27:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB82;

LAB83:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 2568);
    t5 = (t0 + 2568);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t21 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t13, t12, 2, t21, 32, 1);
    t22 = (t13 + 4);
    t6 = *((unsigned int *)t22);
    t30 = (!(t6));
    if (t30 == 1)
        goto LAB93;

LAB94:    t28 = (t0 + 2568);
    t29 = (t0 + 2568);
    t31 = (t29 + 72U);
    t33 = *((char **)t31);
    t35 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t34, t33, 2, t35, 32, 1);
    t36 = (t34 + 4);
    t7 = *((unsigned int *)t36);
    t32 = (!(t7));
    if (t32 == 1)
        goto LAB95;

LAB96:    t37 = (t0 + 2568);
    t38 = (t0 + 2568);
    t39 = (t38 + 72U);
    t41 = *((char **)t39);
    t43 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t42, t41, 2, t43, 32, 1);
    t44 = (t42 + 4);
    t8 = *((unsigned int *)t44);
    t40 = (!(t8));
    if (t40 == 1)
        goto LAB97;

LAB98:    t45 = (t0 + 2568);
    t46 = (t0 + 2568);
    t47 = (t46 + 72U);
    t49 = *((char **)t47);
    t51 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t50, t49, 2, t51, 32, 1);
    t52 = (t50 + 4);
    t9 = *((unsigned int *)t52);
    t48 = (!(t9));
    if (t48 == 1)
        goto LAB99;

LAB100:
LAB84:    goto LAB41;

LAB29:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB101;

LAB102:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 2568);
    t5 = (t0 + 2568);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t21 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t13, t12, 2, t21, 32, 1);
    t22 = (t13 + 4);
    t6 = *((unsigned int *)t22);
    t30 = (!(t6));
    if (t30 == 1)
        goto LAB112;

LAB113:    t28 = (t0 + 2568);
    t29 = (t0 + 2568);
    t31 = (t29 + 72U);
    t33 = *((char **)t31);
    t35 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t34, t33, 2, t35, 32, 1);
    t36 = (t34 + 4);
    t7 = *((unsigned int *)t36);
    t32 = (!(t7));
    if (t32 == 1)
        goto LAB114;

LAB115:    t37 = (t0 + 2568);
    t38 = (t0 + 2568);
    t39 = (t38 + 72U);
    t41 = *((char **)t39);
    t43 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t42, t41, 2, t43, 32, 1);
    t44 = (t42 + 4);
    t8 = *((unsigned int *)t44);
    t40 = (!(t8));
    if (t40 == 1)
        goto LAB116;

LAB117:    t45 = (t0 + 2568);
    t46 = (t0 + 2568);
    t47 = (t46 + 72U);
    t49 = *((char **)t47);
    t51 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t50, t49, 2, t51, 32, 1);
    t52 = (t50 + 4);
    t9 = *((unsigned int *)t52);
    t48 = (!(t9));
    if (t48 == 1)
        goto LAB118;

LAB119:
LAB103:    goto LAB41;

LAB31:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB120;

LAB121:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 2568);
    t5 = (t0 + 2568);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t21 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t13, t12, 2, t21, 32, 1);
    t22 = (t13 + 4);
    t6 = *((unsigned int *)t22);
    t30 = (!(t6));
    if (t30 == 1)
        goto LAB131;

LAB132:    t28 = (t0 + 2568);
    t29 = (t0 + 2568);
    t31 = (t29 + 72U);
    t33 = *((char **)t31);
    t35 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t34, t33, 2, t35, 32, 1);
    t36 = (t34 + 4);
    t7 = *((unsigned int *)t36);
    t32 = (!(t7));
    if (t32 == 1)
        goto LAB133;

LAB134:    t37 = (t0 + 2568);
    t38 = (t0 + 2568);
    t39 = (t38 + 72U);
    t41 = *((char **)t39);
    t43 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t42, t41, 2, t43, 32, 1);
    t44 = (t42 + 4);
    t8 = *((unsigned int *)t44);
    t40 = (!(t8));
    if (t40 == 1)
        goto LAB135;

LAB136:    t45 = (t0 + 2568);
    t46 = (t0 + 2568);
    t47 = (t46 + 72U);
    t49 = *((char **)t47);
    t51 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t50, t49, 2, t51, 32, 1);
    t52 = (t50 + 4);
    t9 = *((unsigned int *)t52);
    t48 = (!(t9));
    if (t48 == 1)
        goto LAB137;

LAB138:
LAB122:    goto LAB41;

LAB33:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB139;

LAB140:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 2568);
    t5 = (t0 + 2568);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t21 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t13, t12, 2, t21, 32, 1);
    t22 = (t13 + 4);
    t6 = *((unsigned int *)t22);
    t30 = (!(t6));
    if (t30 == 1)
        goto LAB150;

LAB151:    t28 = (t0 + 2568);
    t29 = (t0 + 2568);
    t31 = (t29 + 72U);
    t33 = *((char **)t31);
    t35 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t34, t33, 2, t35, 32, 1);
    t36 = (t34 + 4);
    t7 = *((unsigned int *)t36);
    t32 = (!(t7));
    if (t32 == 1)
        goto LAB152;

LAB153:    t37 = (t0 + 2568);
    t38 = (t0 + 2568);
    t39 = (t38 + 72U);
    t41 = *((char **)t39);
    t43 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t42, t41, 2, t43, 32, 1);
    t44 = (t42 + 4);
    t8 = *((unsigned int *)t44);
    t40 = (!(t8));
    if (t40 == 1)
        goto LAB154;

LAB155:    t45 = (t0 + 2568);
    t46 = (t0 + 2568);
    t47 = (t46 + 72U);
    t49 = *((char **)t47);
    t51 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t50, t49, 2, t51, 32, 1);
    t52 = (t50 + 4);
    t9 = *((unsigned int *)t52);
    t48 = (!(t9));
    if (t48 == 1)
        goto LAB156;

LAB157:
LAB141:    goto LAB41;

LAB35:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB158;

LAB159:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 2568);
    t5 = (t0 + 2568);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t21 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t13, t12, 2, t21, 32, 1);
    t22 = (t13 + 4);
    t6 = *((unsigned int *)t22);
    t30 = (!(t6));
    if (t30 == 1)
        goto LAB169;

LAB170:    t28 = (t0 + 2568);
    t29 = (t0 + 2568);
    t31 = (t29 + 72U);
    t33 = *((char **)t31);
    t35 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t34, t33, 2, t35, 32, 1);
    t36 = (t34 + 4);
    t7 = *((unsigned int *)t36);
    t32 = (!(t7));
    if (t32 == 1)
        goto LAB171;

LAB172:    t37 = (t0 + 2568);
    t38 = (t0 + 2568);
    t39 = (t38 + 72U);
    t41 = *((char **)t39);
    t43 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t42, t41, 2, t43, 32, 1);
    t44 = (t42 + 4);
    t8 = *((unsigned int *)t44);
    t40 = (!(t8));
    if (t40 == 1)
        goto LAB173;

LAB174:    t45 = (t0 + 2568);
    t46 = (t0 + 2568);
    t47 = (t46 + 72U);
    t49 = *((char **)t47);
    t51 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t50, t49, 2, t51, 32, 1);
    t52 = (t50 + 4);
    t9 = *((unsigned int *)t52);
    t48 = (!(t9));
    if (t48 == 1)
        goto LAB175;

LAB176:
LAB160:    goto LAB41;

LAB37:    xsi_set_current_line(79, ng0);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB177;

LAB178:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 2568);
    t5 = (t0 + 2568);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t21 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t13, t12, 2, t21, 32, 1);
    t22 = (t13 + 4);
    t6 = *((unsigned int *)t22);
    t30 = (!(t6));
    if (t30 == 1)
        goto LAB188;

LAB189:    t28 = (t0 + 2568);
    t29 = (t0 + 2568);
    t31 = (t29 + 72U);
    t33 = *((char **)t31);
    t35 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t34, t33, 2, t35, 32, 1);
    t36 = (t34 + 4);
    t7 = *((unsigned int *)t36);
    t32 = (!(t7));
    if (t32 == 1)
        goto LAB190;

LAB191:    t37 = (t0 + 2568);
    t38 = (t0 + 2568);
    t39 = (t38 + 72U);
    t41 = *((char **)t39);
    t43 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t42, t41, 2, t43, 32, 1);
    t44 = (t42 + 4);
    t8 = *((unsigned int *)t44);
    t40 = (!(t8));
    if (t40 == 1)
        goto LAB192;

LAB193:    t45 = (t0 + 2568);
    t46 = (t0 + 2568);
    t47 = (t46 + 72U);
    t49 = *((char **)t47);
    t51 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t50, t49, 2, t51, 32, 1);
    t52 = (t50 + 4);
    t9 = *((unsigned int *)t52);
    t48 = (!(t9));
    if (t48 == 1)
        goto LAB194;

LAB195:
LAB179:    goto LAB41;

LAB42:    xsi_vlogvar_wait_assign_value(t12, t11, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB43;

LAB44:    xsi_vlogvar_wait_assign_value(t33, t11, 1, *((unsigned int *)t34), 1, 0LL);
    goto LAB45;

LAB46:    xsi_vlogvar_wait_assign_value(t41, t11, 2, *((unsigned int *)t42), 1, 0LL);
    goto LAB47;

LAB48:    xsi_vlogvar_wait_assign_value(t49, t11, 3, *((unsigned int *)t50), 1, 0LL);
    goto LAB49;

LAB50:    xsi_vlogvar_wait_assign_value(t5, t3, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB51;

LAB52:    xsi_vlogvar_wait_assign_value(t29, t3, 1, *((unsigned int *)t34), 1, 0LL);
    goto LAB53;

LAB54:    xsi_vlogvar_wait_assign_value(t38, t3, 2, *((unsigned int *)t42), 1, 0LL);
    goto LAB55;

LAB56:    xsi_vlogvar_wait_assign_value(t46, t3, 3, *((unsigned int *)t50), 1, 0LL);
    goto LAB57;

LAB58:    xsi_vlogvar_wait_assign_value(t5, t3, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB59;

LAB60:    xsi_vlogvar_wait_assign_value(t29, t3, 1, *((unsigned int *)t34), 1, 0LL);
    goto LAB61;

LAB62:    xsi_vlogvar_wait_assign_value(t38, t3, 2, *((unsigned int *)t42), 1, 0LL);
    goto LAB63;

LAB64:    xsi_vlogvar_wait_assign_value(t46, t3, 3, *((unsigned int *)t50), 1, 0LL);
    goto LAB65;

LAB66:    xsi_vlogvar_wait_assign_value(t5, t3, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB67;

LAB68:    xsi_vlogvar_wait_assign_value(t29, t3, 1, *((unsigned int *)t34), 1, 0LL);
    goto LAB69;

LAB70:    xsi_vlogvar_wait_assign_value(t38, t3, 2, *((unsigned int *)t42), 1, 0LL);
    goto LAB71;

LAB72:    xsi_vlogvar_wait_assign_value(t46, t3, 3, *((unsigned int *)t50), 1, 0LL);
    goto LAB73;

LAB74:    xsi_vlogvar_wait_assign_value(t5, t3, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB75;

LAB76:    xsi_vlogvar_wait_assign_value(t29, t3, 1, *((unsigned int *)t34), 1, 0LL);
    goto LAB77;

LAB78:    xsi_vlogvar_wait_assign_value(t38, t3, 2, *((unsigned int *)t42), 1, 0LL);
    goto LAB79;

LAB80:    xsi_vlogvar_wait_assign_value(t46, t3, 3, *((unsigned int *)t50), 1, 0LL);
    goto LAB81;

LAB82:    xsi_set_current_line(55, ng0);
    t11 = ((char*)((ng12)));
    t12 = (t0 + 2568);
    t21 = (t0 + 2568);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t13, t28, 2, t29, 32, 1);
    t31 = (t13 + 4);
    t14 = *((unsigned int *)t31);
    t32 = (!(t14));
    if (t32 == 1)
        goto LAB85;

LAB86:    t33 = (t0 + 2568);
    t35 = (t0 + 2568);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t34, t37, 2, t38, 32, 1);
    t39 = (t34 + 4);
    t15 = *((unsigned int *)t39);
    t40 = (!(t15));
    if (t40 == 1)
        goto LAB87;

LAB88:    t41 = (t0 + 2568);
    t43 = (t0 + 2568);
    t44 = (t43 + 72U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t42, t45, 2, t46, 32, 1);
    t47 = (t42 + 4);
    t16 = *((unsigned int *)t47);
    t48 = (!(t16));
    if (t48 == 1)
        goto LAB89;

LAB90:    t49 = (t0 + 2568);
    t51 = (t0 + 2568);
    t52 = (t51 + 72U);
    t53 = *((char **)t52);
    t54 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t50, t53, 2, t54, 32, 1);
    t55 = (t50 + 4);
    t17 = *((unsigned int *)t55);
    t56 = (!(t17));
    if (t56 == 1)
        goto LAB91;

LAB92:    goto LAB84;

LAB85:    xsi_vlogvar_wait_assign_value(t12, t11, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB86;

LAB87:    xsi_vlogvar_wait_assign_value(t33, t11, 1, *((unsigned int *)t34), 1, 0LL);
    goto LAB88;

LAB89:    xsi_vlogvar_wait_assign_value(t41, t11, 2, *((unsigned int *)t42), 1, 0LL);
    goto LAB90;

LAB91:    xsi_vlogvar_wait_assign_value(t49, t11, 3, *((unsigned int *)t50), 1, 0LL);
    goto LAB92;

LAB93:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB94;

LAB95:    xsi_vlogvar_wait_assign_value(t28, t2, 1, *((unsigned int *)t34), 1, 0LL);
    goto LAB96;

LAB97:    xsi_vlogvar_wait_assign_value(t37, t2, 2, *((unsigned int *)t42), 1, 0LL);
    goto LAB98;

LAB99:    xsi_vlogvar_wait_assign_value(t45, t2, 3, *((unsigned int *)t50), 1, 0LL);
    goto LAB100;

LAB101:    xsi_set_current_line(60, ng0);
    t11 = ((char*)((ng12)));
    t12 = (t0 + 2568);
    t21 = (t0 + 2568);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t13, t28, 2, t29, 32, 1);
    t31 = (t13 + 4);
    t14 = *((unsigned int *)t31);
    t32 = (!(t14));
    if (t32 == 1)
        goto LAB104;

LAB105:    t33 = (t0 + 2568);
    t35 = (t0 + 2568);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t34, t37, 2, t38, 32, 1);
    t39 = (t34 + 4);
    t15 = *((unsigned int *)t39);
    t40 = (!(t15));
    if (t40 == 1)
        goto LAB106;

LAB107:    t41 = (t0 + 2568);
    t43 = (t0 + 2568);
    t44 = (t43 + 72U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t42, t45, 2, t46, 32, 1);
    t47 = (t42 + 4);
    t16 = *((unsigned int *)t47);
    t48 = (!(t16));
    if (t48 == 1)
        goto LAB108;

LAB109:    t49 = (t0 + 2568);
    t51 = (t0 + 2568);
    t52 = (t51 + 72U);
    t53 = *((char **)t52);
    t54 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t50, t53, 2, t54, 32, 1);
    t55 = (t50 + 4);
    t17 = *((unsigned int *)t55);
    t56 = (!(t17));
    if (t56 == 1)
        goto LAB110;

LAB111:    goto LAB103;

LAB104:    xsi_vlogvar_wait_assign_value(t12, t11, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB105;

LAB106:    xsi_vlogvar_wait_assign_value(t33, t11, 1, *((unsigned int *)t34), 1, 0LL);
    goto LAB107;

LAB108:    xsi_vlogvar_wait_assign_value(t41, t11, 2, *((unsigned int *)t42), 1, 0LL);
    goto LAB109;

LAB110:    xsi_vlogvar_wait_assign_value(t49, t11, 3, *((unsigned int *)t50), 1, 0LL);
    goto LAB111;

LAB112:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB113;

LAB114:    xsi_vlogvar_wait_assign_value(t28, t2, 1, *((unsigned int *)t34), 1, 0LL);
    goto LAB115;

LAB116:    xsi_vlogvar_wait_assign_value(t37, t2, 2, *((unsigned int *)t42), 1, 0LL);
    goto LAB117;

LAB118:    xsi_vlogvar_wait_assign_value(t45, t2, 3, *((unsigned int *)t50), 1, 0LL);
    goto LAB119;

LAB120:    xsi_set_current_line(65, ng0);
    t11 = ((char*)((ng12)));
    t12 = (t0 + 2568);
    t21 = (t0 + 2568);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t13, t28, 2, t29, 32, 1);
    t31 = (t13 + 4);
    t14 = *((unsigned int *)t31);
    t32 = (!(t14));
    if (t32 == 1)
        goto LAB123;

LAB124:    t33 = (t0 + 2568);
    t35 = (t0 + 2568);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t34, t37, 2, t38, 32, 1);
    t39 = (t34 + 4);
    t15 = *((unsigned int *)t39);
    t40 = (!(t15));
    if (t40 == 1)
        goto LAB125;

LAB126:    t41 = (t0 + 2568);
    t43 = (t0 + 2568);
    t44 = (t43 + 72U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t42, t45, 2, t46, 32, 1);
    t47 = (t42 + 4);
    t16 = *((unsigned int *)t47);
    t48 = (!(t16));
    if (t48 == 1)
        goto LAB127;

LAB128:    t49 = (t0 + 2568);
    t51 = (t0 + 2568);
    t52 = (t51 + 72U);
    t53 = *((char **)t52);
    t54 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t50, t53, 2, t54, 32, 1);
    t55 = (t50 + 4);
    t17 = *((unsigned int *)t55);
    t56 = (!(t17));
    if (t56 == 1)
        goto LAB129;

LAB130:    goto LAB122;

LAB123:    xsi_vlogvar_wait_assign_value(t12, t11, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB124;

LAB125:    xsi_vlogvar_wait_assign_value(t33, t11, 1, *((unsigned int *)t34), 1, 0LL);
    goto LAB126;

LAB127:    xsi_vlogvar_wait_assign_value(t41, t11, 2, *((unsigned int *)t42), 1, 0LL);
    goto LAB128;

LAB129:    xsi_vlogvar_wait_assign_value(t49, t11, 3, *((unsigned int *)t50), 1, 0LL);
    goto LAB130;

LAB131:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB132;

LAB133:    xsi_vlogvar_wait_assign_value(t28, t2, 1, *((unsigned int *)t34), 1, 0LL);
    goto LAB134;

LAB135:    xsi_vlogvar_wait_assign_value(t37, t2, 2, *((unsigned int *)t42), 1, 0LL);
    goto LAB136;

LAB137:    xsi_vlogvar_wait_assign_value(t45, t2, 3, *((unsigned int *)t50), 1, 0LL);
    goto LAB138;

LAB139:    xsi_set_current_line(70, ng0);
    t11 = ((char*)((ng12)));
    t12 = (t0 + 2568);
    t21 = (t0 + 2568);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t13, t28, 2, t29, 32, 1);
    t31 = (t13 + 4);
    t14 = *((unsigned int *)t31);
    t32 = (!(t14));
    if (t32 == 1)
        goto LAB142;

LAB143:    t33 = (t0 + 2568);
    t35 = (t0 + 2568);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t34, t37, 2, t38, 32, 1);
    t39 = (t34 + 4);
    t15 = *((unsigned int *)t39);
    t40 = (!(t15));
    if (t40 == 1)
        goto LAB144;

LAB145:    t41 = (t0 + 2568);
    t43 = (t0 + 2568);
    t44 = (t43 + 72U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t42, t45, 2, t46, 32, 1);
    t47 = (t42 + 4);
    t16 = *((unsigned int *)t47);
    t48 = (!(t16));
    if (t48 == 1)
        goto LAB146;

LAB147:    t49 = (t0 + 2568);
    t51 = (t0 + 2568);
    t52 = (t51 + 72U);
    t53 = *((char **)t52);
    t54 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t50, t53, 2, t54, 32, 1);
    t55 = (t50 + 4);
    t17 = *((unsigned int *)t55);
    t56 = (!(t17));
    if (t56 == 1)
        goto LAB148;

LAB149:    goto LAB141;

LAB142:    xsi_vlogvar_wait_assign_value(t12, t11, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB143;

LAB144:    xsi_vlogvar_wait_assign_value(t33, t11, 1, *((unsigned int *)t34), 1, 0LL);
    goto LAB145;

LAB146:    xsi_vlogvar_wait_assign_value(t41, t11, 2, *((unsigned int *)t42), 1, 0LL);
    goto LAB147;

LAB148:    xsi_vlogvar_wait_assign_value(t49, t11, 3, *((unsigned int *)t50), 1, 0LL);
    goto LAB149;

LAB150:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB151;

LAB152:    xsi_vlogvar_wait_assign_value(t28, t2, 1, *((unsigned int *)t34), 1, 0LL);
    goto LAB153;

LAB154:    xsi_vlogvar_wait_assign_value(t37, t2, 2, *((unsigned int *)t42), 1, 0LL);
    goto LAB155;

LAB156:    xsi_vlogvar_wait_assign_value(t45, t2, 3, *((unsigned int *)t50), 1, 0LL);
    goto LAB157;

LAB158:    xsi_set_current_line(75, ng0);
    t11 = ((char*)((ng12)));
    t12 = (t0 + 2568);
    t21 = (t0 + 2568);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t13, t28, 2, t29, 32, 1);
    t31 = (t13 + 4);
    t14 = *((unsigned int *)t31);
    t32 = (!(t14));
    if (t32 == 1)
        goto LAB161;

LAB162:    t33 = (t0 + 2568);
    t35 = (t0 + 2568);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t34, t37, 2, t38, 32, 1);
    t39 = (t34 + 4);
    t15 = *((unsigned int *)t39);
    t40 = (!(t15));
    if (t40 == 1)
        goto LAB163;

LAB164:    t41 = (t0 + 2568);
    t43 = (t0 + 2568);
    t44 = (t43 + 72U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t42, t45, 2, t46, 32, 1);
    t47 = (t42 + 4);
    t16 = *((unsigned int *)t47);
    t48 = (!(t16));
    if (t48 == 1)
        goto LAB165;

LAB166:    t49 = (t0 + 2568);
    t51 = (t0 + 2568);
    t52 = (t51 + 72U);
    t53 = *((char **)t52);
    t54 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t50, t53, 2, t54, 32, 1);
    t55 = (t50 + 4);
    t17 = *((unsigned int *)t55);
    t56 = (!(t17));
    if (t56 == 1)
        goto LAB167;

LAB168:    goto LAB160;

LAB161:    xsi_vlogvar_wait_assign_value(t12, t11, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB162;

LAB163:    xsi_vlogvar_wait_assign_value(t33, t11, 1, *((unsigned int *)t34), 1, 0LL);
    goto LAB164;

LAB165:    xsi_vlogvar_wait_assign_value(t41, t11, 2, *((unsigned int *)t42), 1, 0LL);
    goto LAB166;

LAB167:    xsi_vlogvar_wait_assign_value(t49, t11, 3, *((unsigned int *)t50), 1, 0LL);
    goto LAB168;

LAB169:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB170;

LAB171:    xsi_vlogvar_wait_assign_value(t28, t2, 1, *((unsigned int *)t34), 1, 0LL);
    goto LAB172;

LAB173:    xsi_vlogvar_wait_assign_value(t37, t2, 2, *((unsigned int *)t42), 1, 0LL);
    goto LAB174;

LAB175:    xsi_vlogvar_wait_assign_value(t45, t2, 3, *((unsigned int *)t50), 1, 0LL);
    goto LAB176;

LAB177:    xsi_set_current_line(80, ng0);
    t11 = ((char*)((ng12)));
    t12 = (t0 + 2568);
    t21 = (t0 + 2568);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t13, t28, 2, t29, 32, 1);
    t31 = (t13 + 4);
    t14 = *((unsigned int *)t31);
    t32 = (!(t14));
    if (t32 == 1)
        goto LAB180;

LAB181:    t33 = (t0 + 2568);
    t35 = (t0 + 2568);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t34, t37, 2, t38, 32, 1);
    t39 = (t34 + 4);
    t15 = *((unsigned int *)t39);
    t40 = (!(t15));
    if (t40 == 1)
        goto LAB182;

LAB183:    t41 = (t0 + 2568);
    t43 = (t0 + 2568);
    t44 = (t43 + 72U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t42, t45, 2, t46, 32, 1);
    t47 = (t42 + 4);
    t16 = *((unsigned int *)t47);
    t48 = (!(t16));
    if (t48 == 1)
        goto LAB184;

LAB185:    t49 = (t0 + 2568);
    t51 = (t0 + 2568);
    t52 = (t51 + 72U);
    t53 = *((char **)t52);
    t54 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t50, t53, 2, t54, 32, 1);
    t55 = (t50 + 4);
    t17 = *((unsigned int *)t55);
    t56 = (!(t17));
    if (t56 == 1)
        goto LAB186;

LAB187:    goto LAB179;

LAB180:    xsi_vlogvar_wait_assign_value(t12, t11, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB181;

LAB182:    xsi_vlogvar_wait_assign_value(t33, t11, 1, *((unsigned int *)t34), 1, 0LL);
    goto LAB183;

LAB184:    xsi_vlogvar_wait_assign_value(t41, t11, 2, *((unsigned int *)t42), 1, 0LL);
    goto LAB185;

LAB186:    xsi_vlogvar_wait_assign_value(t49, t11, 3, *((unsigned int *)t50), 1, 0LL);
    goto LAB187;

LAB188:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB189;

LAB190:    xsi_vlogvar_wait_assign_value(t28, t2, 1, *((unsigned int *)t34), 1, 0LL);
    goto LAB191;

LAB192:    xsi_vlogvar_wait_assign_value(t37, t2, 2, *((unsigned int *)t42), 1, 0LL);
    goto LAB193;

LAB194:    xsi_vlogvar_wait_assign_value(t45, t2, 3, *((unsigned int *)t50), 1, 0LL);
    goto LAB195;

LAB196:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB197;

LAB198:    xsi_vlogvar_wait_assign_value(t28, t2, 1, *((unsigned int *)t34), 1, 0LL);
    goto LAB199;

LAB200:    xsi_vlogvar_wait_assign_value(t37, t2, 2, *((unsigned int *)t42), 1, 0LL);
    goto LAB201;

LAB202:    xsi_vlogvar_wait_assign_value(t45, t2, 3, *((unsigned int *)t50), 1, 0LL);
    goto LAB203;

}

static void Cont_86_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
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
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 3888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 5096);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 4968);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_87_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
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
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 4136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 2);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 5160);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 4984);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_88_3(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
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
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 4384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 5224);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 5000);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_89_4(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
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
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 4632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 5288);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 5016);
    *((int *)t27) = 1;

LAB1:    return;
}


extern void work_m_04581947591189497844_2999996614_init()
{
	static char *pe[] = {(void *)Always_40_0,(void *)Cont_86_1,(void *)Cont_87_2,(void *)Cont_88_3,(void *)Cont_89_4};
	xsi_register_didat("work_m_04581947591189497844_2999996614", "isim/traffic_light_tb_isim_beh.exe.sim/work/m_04581947591189497844_2999996614.didat");
	xsi_register_executes(pe);
}
