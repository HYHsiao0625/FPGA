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
static const char *ng0 = "/home/yuan/Desktop/fgpa/button/button.v";
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {2, 0};
static int ng5[] = {3, 0};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {8U, 0U};
static unsigned int ng9[] = {9U, 0U};
static unsigned int ng10[] = {0U, 0U};



static void Always_42_0(char *t0)
{
    char t4[8];
    char t13[8];
    char t14[8];
    char t34[8];
    char t35[8];
    char t55[8];
    char t56[8];
    char t76[8];
    char t77[8];
    char t102[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
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
    char *t33;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    int t45;
    char *t46;
    unsigned int t47;
    int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    int t52;
    int t53;
    char *t54;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    int t66;
    char *t67;
    unsigned int t68;
    int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    int t73;
    int t74;
    char *t75;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t86;
    int t87;
    char *t88;
    unsigned int t89;
    int t90;
    int t91;
    unsigned int t92;
    unsigned int t93;
    int t94;
    int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;

LAB0:    t1 = (t0 + 3960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 5272);
    *((int *)t2) = 1;
    t3 = (t0 + 3992);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    t5 = (t0 + 1208U);
    t7 = *((char **)t5);
    t5 = (t0 + 1368U);
    t8 = *((char **)t5);
    t5 = (t0 + 1528U);
    t9 = *((char **)t5);
    xsi_vlogtype_concat(t4, 4, 4, 4U, t9, 1, t8, 1, t7, 1, t6, 1);

LAB6:    t5 = ((char*)((ng1)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t10 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng6)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t10 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng7)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t10 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng8)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t10 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t10 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3048);
    t5 = (t0 + 3048);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3048);
    t9 = (t8 + 64U);
    t11 = *((char **)t9);
    t12 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t13, t14, t7, t11, 2, 1, t12, 32, 1);
    t15 = (t13 + 4);
    t23 = *((unsigned int *)t15);
    t10 = (!(t23));
    t16 = (t14 + 4);
    t26 = *((unsigned int *)t16);
    t24 = (!(t26));
    t27 = (t10 && t24);
    if (t27 == 1)
        goto LAB75;

LAB76:    t17 = (t0 + 3048);
    t18 = (t0 + 3048);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 3048);
    t22 = (t21 + 64U);
    t25 = *((char **)t22);
    t33 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t34, t35, t20, t25, 2, 1, t33, 32, 1);
    t36 = (t34 + 4);
    t44 = *((unsigned int *)t36);
    t32 = (!(t44));
    t37 = (t35 + 4);
    t47 = *((unsigned int *)t37);
    t45 = (!(t47));
    t48 = (t32 && t45);
    if (t48 == 1)
        goto LAB77;

LAB78:    t38 = (t0 + 3048);
    t39 = (t0 + 3048);
    t40 = (t39 + 72U);
    t41 = *((char **)t40);
    t42 = (t0 + 3048);
    t43 = (t42 + 64U);
    t46 = *((char **)t43);
    t54 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t55, t56, t41, t46, 2, 1, t54, 32, 1);
    t57 = (t55 + 4);
    t65 = *((unsigned int *)t57);
    t53 = (!(t65));
    t58 = (t56 + 4);
    t68 = *((unsigned int *)t58);
    t66 = (!(t68));
    t69 = (t53 && t66);
    if (t69 == 1)
        goto LAB79;

LAB80:    t59 = (t0 + 3048);
    t60 = (t0 + 3048);
    t61 = (t60 + 72U);
    t62 = *((char **)t61);
    t63 = (t0 + 3048);
    t64 = (t63 + 64U);
    t67 = *((char **)t64);
    t75 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t76, t77, t62, t67, 2, 1, t75, 32, 1);
    t78 = (t76 + 4);
    t86 = *((unsigned int *)t78);
    t74 = (!(t86));
    t79 = (t77 + 4);
    t89 = *((unsigned int *)t79);
    t87 = (!(t89));
    t90 = (t74 && t87);
    if (t90 == 1)
        goto LAB81;

LAB82:
LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(44, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3048);
    t15 = (t0 + 3048);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 3048);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t13, t14, t17, t20, 2, 1, t21, 32, 1);
    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (!(t23));
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB20;

LAB21:    t33 = (t0 + 3048);
    t36 = (t0 + 3048);
    t37 = (t36 + 72U);
    t38 = *((char **)t37);
    t39 = (t0 + 3048);
    t40 = (t39 + 64U);
    t41 = *((char **)t40);
    t42 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t34, t35, t38, t41, 2, 1, t42, 32, 1);
    t43 = (t34 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (!(t44));
    t46 = (t35 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (!(t47));
    t49 = (t45 && t48);
    if (t49 == 1)
        goto LAB22;

LAB23:    t54 = (t0 + 3048);
    t57 = (t0 + 3048);
    t58 = (t57 + 72U);
    t59 = *((char **)t58);
    t60 = (t0 + 3048);
    t61 = (t60 + 64U);
    t62 = *((char **)t61);
    t63 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t55, t56, t59, t62, 2, 1, t63, 32, 1);
    t64 = (t55 + 4);
    t65 = *((unsigned int *)t64);
    t66 = (!(t65));
    t67 = (t56 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (!(t68));
    t70 = (t66 && t69);
    if (t70 == 1)
        goto LAB24;

LAB25:    t75 = (t0 + 3048);
    t78 = (t0 + 3048);
    t79 = (t78 + 72U);
    t80 = *((char **)t79);
    t81 = (t0 + 3048);
    t82 = (t81 + 64U);
    t83 = *((char **)t82);
    t84 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t76, t77, t80, t83, 2, 1, t84, 32, 1);
    t85 = (t76 + 4);
    t86 = *((unsigned int *)t85);
    t87 = (!(t86));
    t88 = (t77 + 4);
    t89 = *((unsigned int *)t88);
    t90 = (!(t89));
    t91 = (t87 && t90);
    if (t91 == 1)
        goto LAB26;

LAB27:    goto LAB19;

LAB9:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 3048);
    t6 = (t0 + 3048);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3048);
    t11 = (t9 + 64U);
    t12 = *((char **)t11);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t13, t14, t8, t12, 2, 1, t15, 32, 1);
    t16 = (t13 + 4);
    t23 = *((unsigned int *)t16);
    t24 = (!(t23));
    t17 = (t14 + 4);
    t26 = *((unsigned int *)t17);
    t27 = (!(t26));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB28;

LAB29:    t18 = (t0 + 3048);
    t19 = (t0 + 3048);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 3048);
    t25 = (t22 + 64U);
    t33 = *((char **)t25);
    t36 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t34, t35, t21, t33, 2, 1, t36, 32, 1);
    t37 = (t34 + 4);
    t44 = *((unsigned int *)t37);
    t45 = (!(t44));
    t38 = (t35 + 4);
    t47 = *((unsigned int *)t38);
    t48 = (!(t47));
    t49 = (t45 && t48);
    if (t49 == 1)
        goto LAB30;

LAB31:    t39 = (t0 + 3048);
    t40 = (t0 + 3048);
    t41 = (t40 + 72U);
    t42 = *((char **)t41);
    t43 = (t0 + 3048);
    t46 = (t43 + 64U);
    t54 = *((char **)t46);
    t57 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t55, t56, t42, t54, 2, 1, t57, 32, 1);
    t58 = (t55 + 4);
    t65 = *((unsigned int *)t58);
    t66 = (!(t65));
    t59 = (t56 + 4);
    t68 = *((unsigned int *)t59);
    t69 = (!(t68));
    t70 = (t66 && t69);
    if (t70 == 1)
        goto LAB32;

LAB33:    t60 = (t0 + 3048);
    t61 = (t0 + 3048);
    t62 = (t61 + 72U);
    t63 = *((char **)t62);
    t64 = (t0 + 3048);
    t67 = (t64 + 64U);
    t75 = *((char **)t67);
    t78 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t76, t77, t63, t75, 2, 1, t78, 32, 1);
    t79 = (t76 + 4);
    t86 = *((unsigned int *)t79);
    t87 = (!(t86));
    t80 = (t77 + 4);
    t89 = *((unsigned int *)t80);
    t90 = (!(t89));
    t91 = (t87 && t90);
    if (t91 == 1)
        goto LAB34;

LAB35:    goto LAB19;

LAB11:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 3048);
    t6 = (t0 + 3048);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3048);
    t11 = (t9 + 64U);
    t12 = *((char **)t11);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t13, t14, t8, t12, 2, 1, t15, 32, 1);
    t16 = (t13 + 4);
    t23 = *((unsigned int *)t16);
    t24 = (!(t23));
    t17 = (t14 + 4);
    t26 = *((unsigned int *)t17);
    t27 = (!(t26));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB36;

LAB37:    t18 = (t0 + 3048);
    t19 = (t0 + 3048);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 3048);
    t25 = (t22 + 64U);
    t33 = *((char **)t25);
    t36 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t34, t35, t21, t33, 2, 1, t36, 32, 1);
    t37 = (t34 + 4);
    t44 = *((unsigned int *)t37);
    t45 = (!(t44));
    t38 = (t35 + 4);
    t47 = *((unsigned int *)t38);
    t48 = (!(t47));
    t49 = (t45 && t48);
    if (t49 == 1)
        goto LAB38;

LAB39:    t39 = (t0 + 3048);
    t40 = (t0 + 3048);
    t41 = (t40 + 72U);
    t42 = *((char **)t41);
    t43 = (t0 + 3048);
    t46 = (t43 + 64U);
    t54 = *((char **)t46);
    t57 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t55, t56, t42, t54, 2, 1, t57, 32, 1);
    t58 = (t55 + 4);
    t65 = *((unsigned int *)t58);
    t66 = (!(t65));
    t59 = (t56 + 4);
    t68 = *((unsigned int *)t59);
    t69 = (!(t68));
    t70 = (t66 && t69);
    if (t70 == 1)
        goto LAB40;

LAB41:    t60 = (t0 + 3048);
    t61 = (t0 + 3048);
    t62 = (t61 + 72U);
    t63 = *((char **)t62);
    t64 = (t0 + 3048);
    t67 = (t64 + 64U);
    t75 = *((char **)t67);
    t78 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t76, t77, t63, t75, 2, 1, t78, 32, 1);
    t79 = (t76 + 4);
    t86 = *((unsigned int *)t79);
    t87 = (!(t86));
    t80 = (t77 + 4);
    t89 = *((unsigned int *)t80);
    t90 = (!(t89));
    t91 = (t87 && t90);
    if (t91 == 1)
        goto LAB42;

LAB43:    goto LAB19;

LAB13:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 3048);
    t6 = (t0 + 3048);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3048);
    t11 = (t9 + 64U);
    t12 = *((char **)t11);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t13, t14, t8, t12, 2, 1, t15, 32, 1);
    t16 = (t13 + 4);
    t23 = *((unsigned int *)t16);
    t24 = (!(t23));
    t17 = (t14 + 4);
    t26 = *((unsigned int *)t17);
    t27 = (!(t26));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB44;

LAB45:    t18 = (t0 + 3048);
    t19 = (t0 + 3048);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 3048);
    t25 = (t22 + 64U);
    t33 = *((char **)t25);
    t36 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t34, t35, t21, t33, 2, 1, t36, 32, 1);
    t37 = (t34 + 4);
    t44 = *((unsigned int *)t37);
    t45 = (!(t44));
    t38 = (t35 + 4);
    t47 = *((unsigned int *)t38);
    t48 = (!(t47));
    t49 = (t45 && t48);
    if (t49 == 1)
        goto LAB46;

LAB47:    t39 = (t0 + 3048);
    t40 = (t0 + 3048);
    t41 = (t40 + 72U);
    t42 = *((char **)t41);
    t43 = (t0 + 3048);
    t46 = (t43 + 64U);
    t54 = *((char **)t46);
    t57 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t55, t56, t42, t54, 2, 1, t57, 32, 1);
    t58 = (t55 + 4);
    t65 = *((unsigned int *)t58);
    t66 = (!(t65));
    t59 = (t56 + 4);
    t68 = *((unsigned int *)t59);
    t69 = (!(t68));
    t70 = (t66 && t69);
    if (t70 == 1)
        goto LAB48;

LAB49:    t60 = (t0 + 3048);
    t61 = (t0 + 3048);
    t62 = (t61 + 72U);
    t63 = *((char **)t62);
    t64 = (t0 + 3048);
    t67 = (t64 + 64U);
    t75 = *((char **)t67);
    t78 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t76, t77, t63, t75, 2, 1, t78, 32, 1);
    t79 = (t76 + 4);
    t86 = *((unsigned int *)t79);
    t87 = (!(t86));
    t80 = (t77 + 4);
    t89 = *((unsigned int *)t80);
    t90 = (!(t89));
    t91 = (t87 && t90);
    if (t91 == 1)
        goto LAB50;

LAB51:    goto LAB19;

LAB15:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 2648U);
    t5 = *((char **)t3);
    memset(t13, 0, 8);
    t3 = (t5 + 4);
    t23 = *((unsigned int *)t3);
    t26 = (~(t23));
    t29 = *((unsigned int *)t5);
    t30 = (t29 & t26);
    t44 = (t30 & 1U);
    if (t44 != 0)
        goto LAB55;

LAB53:    if (*((unsigned int *)t3) == 0)
        goto LAB52;

LAB54:    t6 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t6) = 1;

LAB55:    t7 = (t13 + 4);
    t47 = *((unsigned int *)t7);
    t50 = (~(t47));
    t51 = *((unsigned int *)t13);
    t65 = (t51 & t50);
    t68 = (t65 != 0);
    if (t68 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3048);
    t5 = (t0 + 3048);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3048);
    t9 = (t8 + 64U);
    t11 = *((char **)t9);
    t12 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t13, t14, t7, t11, 2, 1, t12, 32, 1);
    t15 = (t13 + 4);
    t23 = *((unsigned int *)t15);
    t10 = (!(t23));
    t16 = (t14 + 4);
    t26 = *((unsigned int *)t16);
    t24 = (!(t26));
    t27 = (t10 && t24);
    if (t27 == 1)
        goto LAB67;

LAB68:    t17 = (t0 + 3048);
    t18 = (t0 + 3048);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 3048);
    t22 = (t21 + 64U);
    t25 = *((char **)t22);
    t33 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t34, t35, t20, t25, 2, 1, t33, 32, 1);
    t36 = (t34 + 4);
    t44 = *((unsigned int *)t36);
    t32 = (!(t44));
    t37 = (t35 + 4);
    t47 = *((unsigned int *)t37);
    t45 = (!(t47));
    t48 = (t32 && t45);
    if (t48 == 1)
        goto LAB69;

LAB70:    t38 = (t0 + 3048);
    t39 = (t0 + 3048);
    t40 = (t39 + 72U);
    t41 = *((char **)t40);
    t42 = (t0 + 3048);
    t43 = (t42 + 64U);
    t46 = *((char **)t43);
    t54 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t55, t56, t41, t46, 2, 1, t54, 32, 1);
    t57 = (t55 + 4);
    t65 = *((unsigned int *)t57);
    t53 = (!(t65));
    t58 = (t56 + 4);
    t68 = *((unsigned int *)t58);
    t66 = (!(t68));
    t69 = (t53 && t66);
    if (t69 == 1)
        goto LAB71;

LAB72:    t59 = (t0 + 3048);
    t60 = (t0 + 3048);
    t61 = (t60 + 72U);
    t62 = *((char **)t61);
    t63 = (t0 + 3048);
    t64 = (t63 + 64U);
    t67 = *((char **)t64);
    t75 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t76, t77, t62, t67, 2, 1, t75, 32, 1);
    t78 = (t76 + 4);
    t86 = *((unsigned int *)t78);
    t74 = (!(t86));
    t79 = (t77 + 4);
    t89 = *((unsigned int *)t79);
    t87 = (!(t89));
    t90 = (t74 && t87);
    if (t90 == 1)
        goto LAB73;

LAB74:
LAB58:    goto LAB19;

LAB20:    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t14);
    t31 = (t29 - t30);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, *((unsigned int *)t14), t32, 0LL);
    goto LAB21;

LAB22:    t50 = *((unsigned int *)t34);
    t51 = *((unsigned int *)t35);
    t52 = (t50 - t51);
    t53 = (t52 + 1);
    xsi_vlogvar_wait_assign_value(t33, t11, 1, *((unsigned int *)t35), t53, 0LL);
    goto LAB23;

LAB24:    t71 = *((unsigned int *)t55);
    t72 = *((unsigned int *)t56);
    t73 = (t71 - t72);
    t74 = (t73 + 1);
    xsi_vlogvar_wait_assign_value(t54, t11, 2, *((unsigned int *)t56), t74, 0LL);
    goto LAB25;

LAB26:    t92 = *((unsigned int *)t76);
    t93 = *((unsigned int *)t77);
    t94 = (t92 - t93);
    t95 = (t94 + 1);
    xsi_vlogvar_wait_assign_value(t75, t11, 3, *((unsigned int *)t77), t95, 0LL);
    goto LAB27;

LAB28:    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t14);
    t31 = (t29 - t30);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, *((unsigned int *)t14), t32, 0LL);
    goto LAB29;

LAB30:    t50 = *((unsigned int *)t34);
    t51 = *((unsigned int *)t35);
    t52 = (t50 - t51);
    t53 = (t52 + 1);
    xsi_vlogvar_wait_assign_value(t18, t3, 1, *((unsigned int *)t35), t53, 0LL);
    goto LAB31;

LAB32:    t71 = *((unsigned int *)t55);
    t72 = *((unsigned int *)t56);
    t73 = (t71 - t72);
    t74 = (t73 + 1);
    xsi_vlogvar_wait_assign_value(t39, t3, 2, *((unsigned int *)t56), t74, 0LL);
    goto LAB33;

LAB34:    t92 = *((unsigned int *)t76);
    t93 = *((unsigned int *)t77);
    t94 = (t92 - t93);
    t95 = (t94 + 1);
    xsi_vlogvar_wait_assign_value(t60, t3, 3, *((unsigned int *)t77), t95, 0LL);
    goto LAB35;

LAB36:    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t14);
    t31 = (t29 - t30);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, *((unsigned int *)t14), t32, 0LL);
    goto LAB37;

LAB38:    t50 = *((unsigned int *)t34);
    t51 = *((unsigned int *)t35);
    t52 = (t50 - t51);
    t53 = (t52 + 1);
    xsi_vlogvar_wait_assign_value(t18, t3, 1, *((unsigned int *)t35), t53, 0LL);
    goto LAB39;

LAB40:    t71 = *((unsigned int *)t55);
    t72 = *((unsigned int *)t56);
    t73 = (t71 - t72);
    t74 = (t73 + 1);
    xsi_vlogvar_wait_assign_value(t39, t3, 2, *((unsigned int *)t56), t74, 0LL);
    goto LAB41;

LAB42:    t92 = *((unsigned int *)t76);
    t93 = *((unsigned int *)t77);
    t94 = (t92 - t93);
    t95 = (t94 + 1);
    xsi_vlogvar_wait_assign_value(t60, t3, 3, *((unsigned int *)t77), t95, 0LL);
    goto LAB43;

LAB44:    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t14);
    t31 = (t29 - t30);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, *((unsigned int *)t14), t32, 0LL);
    goto LAB45;

LAB46:    t50 = *((unsigned int *)t34);
    t51 = *((unsigned int *)t35);
    t52 = (t50 - t51);
    t53 = (t52 + 1);
    xsi_vlogvar_wait_assign_value(t18, t3, 1, *((unsigned int *)t35), t53, 0LL);
    goto LAB47;

LAB48:    t71 = *((unsigned int *)t55);
    t72 = *((unsigned int *)t56);
    t73 = (t71 - t72);
    t74 = (t73 + 1);
    xsi_vlogvar_wait_assign_value(t39, t3, 2, *((unsigned int *)t56), t74, 0LL);
    goto LAB49;

LAB50:    t92 = *((unsigned int *)t76);
    t93 = *((unsigned int *)t77);
    t94 = (t92 - t93);
    t95 = (t94 + 1);
    xsi_vlogvar_wait_assign_value(t60, t3, 3, *((unsigned int *)t77), t95, 0LL);
    goto LAB51;

LAB52:    *((unsigned int *)t13) = 1;
    goto LAB55;

LAB56:    xsi_set_current_line(50, ng0);
    t8 = ((char*)((ng9)));
    t9 = (t0 + 3048);
    t11 = (t0 + 3048);
    t12 = (t11 + 72U);
    t15 = *((char **)t12);
    t16 = (t0 + 3048);
    t17 = (t16 + 64U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t14, t34, t15, t18, 2, 1, t19, 32, 1);
    t20 = (t14 + 4);
    t71 = *((unsigned int *)t20);
    t24 = (!(t71));
    t21 = (t34 + 4);
    t72 = *((unsigned int *)t21);
    t27 = (!(t72));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB59;

LAB60:    t22 = (t0 + 3048);
    t25 = (t0 + 3048);
    t33 = (t25 + 72U);
    t36 = *((char **)t33);
    t37 = (t0 + 3048);
    t38 = (t37 + 64U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t35, t55, t36, t39, 2, 1, t40, 32, 1);
    t41 = (t35 + 4);
    t92 = *((unsigned int *)t41);
    t45 = (!(t92));
    t42 = (t55 + 4);
    t93 = *((unsigned int *)t42);
    t48 = (!(t93));
    t49 = (t45 && t48);
    if (t49 == 1)
        goto LAB61;

LAB62:    t43 = (t0 + 3048);
    t46 = (t0 + 3048);
    t54 = (t46 + 72U);
    t57 = *((char **)t54);
    t58 = (t0 + 3048);
    t59 = (t58 + 64U);
    t60 = *((char **)t59);
    t61 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t56, t76, t57, t60, 2, 1, t61, 32, 1);
    t62 = (t56 + 4);
    t98 = *((unsigned int *)t62);
    t66 = (!(t98));
    t63 = (t76 + 4);
    t99 = *((unsigned int *)t63);
    t69 = (!(t99));
    t70 = (t66 && t69);
    if (t70 == 1)
        goto LAB63;

LAB64:    t64 = (t0 + 3048);
    t67 = (t0 + 3048);
    t75 = (t67 + 72U);
    t78 = *((char **)t75);
    t79 = (t0 + 3048);
    t80 = (t79 + 64U);
    t81 = *((char **)t80);
    t82 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t77, t102, t78, t81, 2, 1, t82, 32, 1);
    t83 = (t77 + 4);
    t103 = *((unsigned int *)t83);
    t87 = (!(t103));
    t84 = (t102 + 4);
    t104 = *((unsigned int *)t84);
    t90 = (!(t104));
    t91 = (t87 && t90);
    if (t91 == 1)
        goto LAB65;

LAB66:    goto LAB58;

LAB59:    t86 = *((unsigned int *)t14);
    t89 = *((unsigned int *)t34);
    t31 = (t86 - t89);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t9, t8, 0, *((unsigned int *)t34), t32, 0LL);
    goto LAB60;

LAB61:    t96 = *((unsigned int *)t35);
    t97 = *((unsigned int *)t55);
    t52 = (t96 - t97);
    t53 = (t52 + 1);
    xsi_vlogvar_wait_assign_value(t22, t8, 1, *((unsigned int *)t55), t53, 0LL);
    goto LAB62;

LAB63:    t100 = *((unsigned int *)t56);
    t101 = *((unsigned int *)t76);
    t73 = (t100 - t101);
    t74 = (t73 + 1);
    xsi_vlogvar_wait_assign_value(t43, t8, 2, *((unsigned int *)t76), t74, 0LL);
    goto LAB64;

LAB65:    t105 = *((unsigned int *)t77);
    t106 = *((unsigned int *)t102);
    t94 = (t105 - t106);
    t95 = (t94 + 1);
    xsi_vlogvar_wait_assign_value(t64, t8, 3, *((unsigned int *)t102), t95, 0LL);
    goto LAB66;

LAB67:    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t14);
    t28 = (t29 - t30);
    t31 = (t28 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t14), t31, 0LL);
    goto LAB68;

LAB69:    t50 = *((unsigned int *)t34);
    t51 = *((unsigned int *)t35);
    t49 = (t50 - t51);
    t52 = (t49 + 1);
    xsi_vlogvar_wait_assign_value(t17, t2, 1, *((unsigned int *)t35), t52, 0LL);
    goto LAB70;

LAB71:    t71 = *((unsigned int *)t55);
    t72 = *((unsigned int *)t56);
    t70 = (t71 - t72);
    t73 = (t70 + 1);
    xsi_vlogvar_wait_assign_value(t38, t2, 2, *((unsigned int *)t56), t73, 0LL);
    goto LAB72;

LAB73:    t92 = *((unsigned int *)t76);
    t93 = *((unsigned int *)t77);
    t91 = (t92 - t93);
    t94 = (t91 + 1);
    xsi_vlogvar_wait_assign_value(t59, t2, 3, *((unsigned int *)t77), t94, 0LL);
    goto LAB74;

LAB75:    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t14);
    t28 = (t29 - t30);
    t31 = (t28 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t14), t31, 0LL);
    goto LAB76;

LAB77:    t50 = *((unsigned int *)t34);
    t51 = *((unsigned int *)t35);
    t49 = (t50 - t51);
    t52 = (t49 + 1);
    xsi_vlogvar_wait_assign_value(t17, t2, 1, *((unsigned int *)t35), t52, 0LL);
    goto LAB78;

LAB79:    t71 = *((unsigned int *)t55);
    t72 = *((unsigned int *)t56);
    t70 = (t71 - t72);
    t73 = (t70 + 1);
    xsi_vlogvar_wait_assign_value(t38, t2, 2, *((unsigned int *)t56), t73, 0LL);
    goto LAB80;

LAB81:    t92 = *((unsigned int *)t76);
    t93 = *((unsigned int *)t77);
    t91 = (t92 - t93);
    t94 = (t91 + 1);
    xsi_vlogvar_wait_assign_value(t59, t2, 3, *((unsigned int *)t77), t94, 0LL);
    goto LAB82;

}

static void Cont_57_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 4208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3048);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3048);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t5, 1, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 5416);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t17, 0, 8);
    t18 = 1U;
    t19 = t18;
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t5);
    t18 = (t18 & t21);
    t22 = *((unsigned int *)t20);
    t19 = (t19 & t22);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 | t18);
    t25 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t25 | t19);
    xsi_driver_vfirst_trans(t13, 0, 0);
    t26 = (t0 + 5288);
    *((int *)t26) = 1;

LAB1:    return;
}

static void Cont_58_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 4456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3048);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3048);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t5, 1, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 5480);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t17, 0, 8);
    t18 = 1U;
    t19 = t18;
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t5);
    t18 = (t18 & t21);
    t22 = *((unsigned int *)t20);
    t19 = (t19 & t22);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 | t18);
    t25 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t25 | t19);
    xsi_driver_vfirst_trans(t13, 0, 0);
    t26 = (t0 + 5304);
    *((int *)t26) = 1;

LAB1:    return;
}

static void Cont_59_3(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 4704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3048);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3048);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t5, 1, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 5544);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t17, 0, 8);
    t18 = 1U;
    t19 = t18;
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t5);
    t18 = (t18 & t21);
    t22 = *((unsigned int *)t20);
    t19 = (t19 & t22);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 | t18);
    t25 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t25 | t19);
    xsi_driver_vfirst_trans(t13, 0, 0);
    t26 = (t0 + 5320);
    *((int *)t26) = 1;

LAB1:    return;
}

static void Cont_60_4(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 4952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3048);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3048);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t5, 1, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 5608);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t17, 0, 8);
    t18 = 1U;
    t19 = t18;
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t5);
    t18 = (t18 & t21);
    t22 = *((unsigned int *)t20);
    t19 = (t19 & t22);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 | t18);
    t25 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t25 | t19);
    xsi_driver_vfirst_trans(t13, 0, 0);
    t26 = (t0 + 5336);
    *((int *)t26) = 1;

LAB1:    return;
}


extern void work_m_10046832164771291090_1570631299_init()
{
	static char *pe[] = {(void *)Always_42_0,(void *)Cont_57_1,(void *)Cont_58_2,(void *)Cont_59_3,(void *)Cont_60_4};
	xsi_register_didat("work_m_10046832164771291090_1570631299", "isim/button_tb_isim_beh.exe.sim/work/m_10046832164771291090_1570631299.didat");
	xsi_register_executes(pe);
}
