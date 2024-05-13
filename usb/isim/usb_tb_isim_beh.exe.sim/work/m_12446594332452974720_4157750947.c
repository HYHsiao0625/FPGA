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
static const char *ng0 = "/home/yuan/Desktop/FPGA/usb/usb.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {9U, 0U};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {0, 0};
static int ng6[] = {8, 0};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {8U, 0U};
static unsigned int ng11[] = {5U, 0U};
static unsigned int ng12[] = {6U, 0U};
static unsigned int ng13[] = {7U, 0U};
static unsigned int ng14[] = {15U, 0U};
static int ng15[] = {6, 0};
static unsigned int ng16[] = {10U, 0U};
static unsigned int ng17[] = {11U, 0U};
static unsigned int ng18[] = {12U, 0U};
static unsigned int ng19[] = {13U, 0U};
static unsigned int ng20[] = {14U, 0U};



static void Always_43_0(char *t0)
{
    char t13[8];
    char t28[8];
    char t38[8];
    char t54[8];
    char t62[8];
    char t102[8];
    char t111[8];
    char t127[8];
    char t135[8];
    char t173[8];
    char t187[8];
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
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    int t86;
    int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    char *t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    char *t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    char *t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    char *t169;
    char *t170;
    char *t171;
    char *t172;
    char *t174;
    char *t175;
    char *t176;
    char *t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    char *t183;
    char *t184;
    char *t185;
    char *t186;
    char *t188;
    char *t189;

LAB0:    t1 = (t0 + 4120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 4688);
    *((int *)t2) = 1;
    t3 = (t0 + 4152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB13;

LAB10:    if (t18 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t13) = 1;

LAB13:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(53, ng0);

LAB18:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB16:
LAB8:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
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
        goto LAB22;

LAB19:    if (t18 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t13) = 1;

LAB22:    memset(t28, 0, 8);
    t27 = (t13 + 4);
    t21 = *((unsigned int *)t27);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t27) != 0)
        goto LAB25;

LAB26:    t30 = (t28 + 4);
    t31 = *((unsigned int *)t28);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB27;

LAB28:    memcpy(t62, t28, 8);

LAB29:    t94 = (t62 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t62);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
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
        goto LAB48;

LAB45:    if (t18 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t13) = 1;

LAB48:    memset(t28, 0, 8);
    t27 = (t13 + 4);
    t21 = *((unsigned int *)t27);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t27) != 0)
        goto LAB51;

LAB52:    t30 = (t28 + 4);
    t31 = *((unsigned int *)t28);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB53;

LAB54:    memcpy(t62, t28, 8);

LAB55:    t94 = (t62 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t62);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB67;

LAB68:
LAB69:
LAB43:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
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
        goto LAB74;

LAB71:    if (t18 != 0)
        goto LAB73;

LAB72:    *((unsigned int *)t13) = 1;

LAB74:    memset(t28, 0, 8);
    t27 = (t13 + 4);
    t21 = *((unsigned int *)t27);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t27) != 0)
        goto LAB77;

LAB78:    t30 = (t28 + 4);
    t31 = *((unsigned int *)t28);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB79;

LAB80:    memcpy(t62, t28, 8);

LAB81:    memset(t102, 0, 8);
    t94 = (t62 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t62);
    t98 = (t97 & t96);
    t99 = (t98 & 1U);
    if (t99 != 0)
        goto LAB93;

LAB94:    if (*((unsigned int *)t94) != 0)
        goto LAB95;

LAB96:    t101 = (t102 + 4);
    t103 = *((unsigned int *)t102);
    t104 = (!(t103));
    t105 = *((unsigned int *)t101);
    t106 = (t104 || t105);
    if (t106 > 0)
        goto LAB97;

LAB98:    memcpy(t135, t102, 8);

LAB99:    t163 = (t135 + 4);
    t164 = *((unsigned int *)t163);
    t165 = (~(t164));
    t166 = *((unsigned int *)t135);
    t167 = (t166 & t165);
    t168 = (t167 != 0);
    if (t168 > 0)
        goto LAB111;

LAB112:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t12 = (t5 + 4);
    t26 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t26);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t26);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB156;

LAB153:    if (t18 != 0)
        goto LAB155;

LAB154:    *((unsigned int *)t13) = 1;

LAB156:    memset(t28, 0, 8);
    t29 = (t13 + 4);
    t21 = *((unsigned int *)t29);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB157;

LAB158:    if (*((unsigned int *)t29) != 0)
        goto LAB159;

LAB160:    t34 = (t28 + 4);
    t31 = *((unsigned int *)t28);
    t32 = *((unsigned int *)t34);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB161;

LAB162:    memcpy(t62, t28, 8);

LAB163:    memset(t102, 0, 8);
    t100 = (t62 + 4);
    t95 = *((unsigned int *)t100);
    t96 = (~(t95));
    t97 = *((unsigned int *)t62);
    t98 = (t97 & t96);
    t99 = (t98 & 1U);
    if (t99 != 0)
        goto LAB175;

LAB176:    if (*((unsigned int *)t100) != 0)
        goto LAB177;

LAB178:    t107 = (t102 + 4);
    t103 = *((unsigned int *)t102);
    t104 = (!(t103));
    t105 = *((unsigned int *)t107);
    t106 = (t104 || t105);
    if (t106 > 0)
        goto LAB179;

LAB180:    memcpy(t135, t102, 8);

LAB181:    t169 = (t135 + 4);
    t164 = *((unsigned int *)t169);
    t165 = (~(t164));
    t166 = *((unsigned int *)t135);
    t167 = (t166 & t165);
    t168 = (t167 != 0);
    if (t168 > 0)
        goto LAB193;

LAB194:
LAB195:
LAB113:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t11 = *((char **)t3);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t11);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB231;

LAB232:
LAB233:    goto LAB2;

LAB6:    xsi_set_current_line(44, ng0);

LAB9:    xsi_set_current_line(45, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB8;

LAB12:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(50, ng0);

LAB17:    xsi_set_current_line(51, ng0);
    t26 = ((char*)((ng3)));
    t27 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 1, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB16;

LAB21:    t26 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB22;

LAB23:    *((unsigned int *)t28) = 1;
    goto LAB26;

LAB25:    t29 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB26;

LAB27:    t34 = (t0 + 2888);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng5)));
    memset(t38, 0, 8);
    t39 = (t36 + 4);
    t40 = (t37 + 4);
    t41 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t37);
    t43 = (t41 ^ t42);
    t44 = *((unsigned int *)t39);
    t45 = *((unsigned int *)t40);
    t46 = (t44 ^ t45);
    t47 = (t43 | t46);
    t48 = *((unsigned int *)t39);
    t49 = *((unsigned int *)t40);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB33;

LAB30:    if (t50 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t38) = 1;

LAB33:    memset(t54, 0, 8);
    t55 = (t38 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t38);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t55) != 0)
        goto LAB36;

LAB37:    t63 = *((unsigned int *)t28);
    t64 = *((unsigned int *)t54);
    t65 = (t63 & t64);
    *((unsigned int *)t62) = t65;
    t66 = (t28 + 4);
    t67 = (t54 + 4);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB38;

LAB39:
LAB40:    goto LAB29;

LAB32:    t53 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB33;

LAB34:    *((unsigned int *)t54) = 1;
    goto LAB37;

LAB36:    t61 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB37;

LAB38:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    t76 = (t28 + 4);
    t77 = (t54 + 4);
    t78 = *((unsigned int *)t28);
    t79 = (~(t78));
    t80 = *((unsigned int *)t76);
    t81 = (~(t80));
    t82 = *((unsigned int *)t54);
    t83 = (~(t82));
    t84 = *((unsigned int *)t77);
    t85 = (~(t84));
    t86 = (t79 & t81);
    t87 = (t83 & t85);
    t88 = (~(t86));
    t89 = (~(t87));
    t90 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t90 & t88);
    t91 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t91 & t89);
    t92 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t92 & t88);
    t93 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t93 & t89);
    goto LAB40;

LAB41:    xsi_set_current_line(58, ng0);

LAB44:    xsi_set_current_line(59, ng0);
    t100 = ((char*)((ng3)));
    t101 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t101, t100, 0, 0, 1, 0LL);
    goto LAB43;

LAB47:    t26 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB48;

LAB49:    *((unsigned int *)t28) = 1;
    goto LAB52;

LAB51:    t29 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB52;

LAB53:    t34 = (t0 + 2888);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng5)));
    memset(t38, 0, 8);
    t39 = (t36 + 4);
    t40 = (t37 + 4);
    t41 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t37);
    t43 = (t41 ^ t42);
    t44 = *((unsigned int *)t39);
    t45 = *((unsigned int *)t40);
    t46 = (t44 ^ t45);
    t47 = (t43 | t46);
    t48 = *((unsigned int *)t39);
    t49 = *((unsigned int *)t40);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB59;

LAB56:    if (t50 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t38) = 1;

LAB59:    memset(t54, 0, 8);
    t55 = (t38 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t38);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t55) != 0)
        goto LAB62;

LAB63:    t63 = *((unsigned int *)t28);
    t64 = *((unsigned int *)t54);
    t65 = (t63 & t64);
    *((unsigned int *)t62) = t65;
    t66 = (t28 + 4);
    t67 = (t54 + 4);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB64;

LAB65:
LAB66:    goto LAB55;

LAB58:    t53 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB59;

LAB60:    *((unsigned int *)t54) = 1;
    goto LAB63;

LAB62:    t61 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB63;

LAB64:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    t76 = (t28 + 4);
    t77 = (t54 + 4);
    t78 = *((unsigned int *)t28);
    t79 = (~(t78));
    t80 = *((unsigned int *)t76);
    t81 = (~(t80));
    t82 = *((unsigned int *)t54);
    t83 = (~(t82));
    t84 = *((unsigned int *)t77);
    t85 = (~(t84));
    t86 = (t79 & t81);
    t87 = (t83 & t85);
    t88 = (~(t86));
    t89 = (~(t87));
    t90 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t90 & t88);
    t91 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t91 & t89);
    t92 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t92 & t88);
    t93 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t93 & t89);
    goto LAB66;

LAB67:    xsi_set_current_line(60, ng0);

LAB70:    xsi_set_current_line(61, ng0);
    t100 = ((char*)((ng3)));
    t101 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t101, t100, 0, 0, 1, 0LL);
    goto LAB69;

LAB73:    t26 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB74;

LAB75:    *((unsigned int *)t28) = 1;
    goto LAB78;

LAB77:    t29 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB78;

LAB79:    t34 = (t0 + 2888);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng4)));
    memset(t38, 0, 8);
    t39 = (t36 + 4);
    t40 = (t37 + 4);
    t41 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t37);
    t43 = (t41 ^ t42);
    t44 = *((unsigned int *)t39);
    t45 = *((unsigned int *)t40);
    t46 = (t44 ^ t45);
    t47 = (t43 | t46);
    t48 = *((unsigned int *)t39);
    t49 = *((unsigned int *)t40);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB85;

LAB82:    if (t50 != 0)
        goto LAB84;

LAB83:    *((unsigned int *)t38) = 1;

LAB85:    memset(t54, 0, 8);
    t55 = (t38 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t38);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB86;

LAB87:    if (*((unsigned int *)t55) != 0)
        goto LAB88;

LAB89:    t63 = *((unsigned int *)t28);
    t64 = *((unsigned int *)t54);
    t65 = (t63 & t64);
    *((unsigned int *)t62) = t65;
    t66 = (t28 + 4);
    t67 = (t54 + 4);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB90;

LAB91:
LAB92:    goto LAB81;

LAB84:    t53 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB85;

LAB86:    *((unsigned int *)t54) = 1;
    goto LAB89;

LAB88:    t61 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB89;

LAB90:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    t76 = (t28 + 4);
    t77 = (t54 + 4);
    t78 = *((unsigned int *)t28);
    t79 = (~(t78));
    t80 = *((unsigned int *)t76);
    t81 = (~(t80));
    t82 = *((unsigned int *)t54);
    t83 = (~(t82));
    t84 = *((unsigned int *)t77);
    t85 = (~(t84));
    t86 = (t79 & t81);
    t87 = (t83 & t85);
    t88 = (~(t86));
    t89 = (~(t87));
    t90 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t90 & t88);
    t91 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t91 & t89);
    t92 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t92 & t88);
    t93 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t93 & t89);
    goto LAB92;

LAB93:    *((unsigned int *)t102) = 1;
    goto LAB96;

LAB95:    t100 = (t102 + 4);
    *((unsigned int *)t102) = 1;
    *((unsigned int *)t100) = 1;
    goto LAB96;

LAB97:    t107 = (t0 + 2568);
    t108 = (t107 + 56U);
    t109 = *((char **)t108);
    t110 = ((char*)((ng1)));
    memset(t111, 0, 8);
    t112 = (t109 + 4);
    t113 = (t110 + 4);
    t114 = *((unsigned int *)t109);
    t115 = *((unsigned int *)t110);
    t116 = (t114 ^ t115);
    t117 = *((unsigned int *)t112);
    t118 = *((unsigned int *)t113);
    t119 = (t117 ^ t118);
    t120 = (t116 | t119);
    t121 = *((unsigned int *)t112);
    t122 = *((unsigned int *)t113);
    t123 = (t121 | t122);
    t124 = (~(t123));
    t125 = (t120 & t124);
    if (t125 != 0)
        goto LAB101;

LAB100:    if (t123 != 0)
        goto LAB102;

LAB103:    memset(t127, 0, 8);
    t128 = (t111 + 4);
    t129 = *((unsigned int *)t128);
    t130 = (~(t129));
    t131 = *((unsigned int *)t111);
    t132 = (t131 & t130);
    t133 = (t132 & 1U);
    if (t133 != 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t128) != 0)
        goto LAB106;

LAB107:    t136 = *((unsigned int *)t102);
    t137 = *((unsigned int *)t127);
    t138 = (t136 | t137);
    *((unsigned int *)t135) = t138;
    t139 = (t102 + 4);
    t140 = (t127 + 4);
    t141 = (t135 + 4);
    t142 = *((unsigned int *)t139);
    t143 = *((unsigned int *)t140);
    t144 = (t142 | t143);
    *((unsigned int *)t141) = t144;
    t145 = *((unsigned int *)t141);
    t146 = (t145 != 0);
    if (t146 == 1)
        goto LAB108;

LAB109:
LAB110:    goto LAB99;

LAB101:    *((unsigned int *)t111) = 1;
    goto LAB103;

LAB102:    t126 = (t111 + 4);
    *((unsigned int *)t111) = 1;
    *((unsigned int *)t126) = 1;
    goto LAB103;

LAB104:    *((unsigned int *)t127) = 1;
    goto LAB107;

LAB106:    t134 = (t127 + 4);
    *((unsigned int *)t127) = 1;
    *((unsigned int *)t134) = 1;
    goto LAB107;

LAB108:    t147 = *((unsigned int *)t135);
    t148 = *((unsigned int *)t141);
    *((unsigned int *)t135) = (t147 | t148);
    t149 = (t102 + 4);
    t150 = (t127 + 4);
    t151 = *((unsigned int *)t149);
    t152 = (~(t151));
    t153 = *((unsigned int *)t102);
    t154 = (t153 & t152);
    t155 = *((unsigned int *)t150);
    t156 = (~(t155));
    t157 = *((unsigned int *)t127);
    t158 = (t157 & t156);
    t159 = (~(t154));
    t160 = (~(t158));
    t161 = *((unsigned int *)t141);
    *((unsigned int *)t141) = (t161 & t159);
    t162 = *((unsigned int *)t141);
    *((unsigned int *)t141) = (t162 & t160);
    goto LAB110;

LAB111:    xsi_set_current_line(64, ng0);

LAB114:    xsi_set_current_line(65, ng0);
    t169 = (t0 + 2568);
    t170 = (t169 + 56U);
    t171 = *((char **)t170);
    t172 = ((char*)((ng6)));
    memset(t173, 0, 8);
    t174 = (t171 + 4);
    if (*((unsigned int *)t174) != 0)
        goto LAB116;

LAB115:    t175 = (t172 + 4);
    if (*((unsigned int *)t175) != 0)
        goto LAB116;

LAB119:    if (*((unsigned int *)t171) < *((unsigned int *)t172))
        goto LAB117;

LAB118:    t177 = (t173 + 4);
    t178 = *((unsigned int *)t177);
    t179 = (~(t178));
    t180 = *((unsigned int *)t173);
    t181 = (t180 & t179);
    t182 = (t181 != 0);
    if (t182 > 0)
        goto LAB120;

LAB121:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
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
        goto LAB126;

LAB123:    if (t18 != 0)
        goto LAB125;

LAB124:    *((unsigned int *)t13) = 1;

LAB126:    t27 = (t13 + 4);
    t21 = *((unsigned int *)t27);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB127;

LAB128:
LAB129:
LAB122:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB131:    t5 = ((char*)((ng1)));
    t86 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t86 == 1)
        goto LAB132;

LAB133:    t2 = ((char*)((ng3)));
    t86 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t86 == 1)
        goto LAB134;

LAB135:    t2 = ((char*)((ng7)));
    t86 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t86 == 1)
        goto LAB136;

LAB137:    t2 = ((char*)((ng8)));
    t86 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t86 == 1)
        goto LAB138;

LAB139:    t2 = ((char*)((ng9)));
    t86 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t86 == 1)
        goto LAB140;

LAB141:    t2 = ((char*)((ng11)));
    t86 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t86 == 1)
        goto LAB142;

LAB143:    t2 = ((char*)((ng12)));
    t86 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t86 == 1)
        goto LAB144;

LAB145:    t2 = ((char*)((ng13)));
    t86 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t86 == 1)
        goto LAB146;

LAB147:    t2 = ((char*)((ng10)));
    t86 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t86 == 1)
        goto LAB148;

LAB149:
LAB151:
LAB150:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB152:    goto LAB113;

LAB116:    t176 = (t173 + 4);
    *((unsigned int *)t173) = 1;
    *((unsigned int *)t176) = 1;
    goto LAB118;

LAB117:    *((unsigned int *)t173) = 1;
    goto LAB118;

LAB120:    xsi_set_current_line(66, ng0);
    t183 = (t0 + 2568);
    t184 = (t183 + 56U);
    t185 = *((char **)t184);
    t186 = ((char*)((ng3)));
    memset(t187, 0, 8);
    xsi_vlog_unsigned_add(t187, 4, t185, 4, t186, 4);
    t188 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t188, t187, 0, 0, 4, 0LL);
    goto LAB122;

LAB125:    t26 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB126;

LAB127:    xsi_set_current_line(67, ng0);

LAB130:    xsi_set_current_line(68, ng0);
    t29 = ((char*)((ng5)));
    t30 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 4, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB129;

LAB132:    xsi_set_current_line(73, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    goto LAB152;

LAB134:    xsi_set_current_line(74, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB152;

LAB136:    xsi_set_current_line(75, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB152;

LAB138:    xsi_set_current_line(76, ng0);
    t3 = ((char*)((ng9)));
    t5 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB152;

LAB140:    xsi_set_current_line(77, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB152;

LAB142:    xsi_set_current_line(78, ng0);
    t3 = ((char*)((ng9)));
    t5 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB152;

LAB144:    xsi_set_current_line(79, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB152;

LAB146:    xsi_set_current_line(80, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB152;

LAB148:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB152;

LAB155:    t27 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB156;

LAB157:    *((unsigned int *)t28) = 1;
    goto LAB160;

LAB159:    t30 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB160;

LAB161:    t35 = (t0 + 2888);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t39 = ((char*)((ng4)));
    memset(t38, 0, 8);
    t40 = (t37 + 4);
    t53 = (t39 + 4);
    t41 = *((unsigned int *)t37);
    t42 = *((unsigned int *)t39);
    t43 = (t41 ^ t42);
    t44 = *((unsigned int *)t40);
    t45 = *((unsigned int *)t53);
    t46 = (t44 ^ t45);
    t47 = (t43 | t46);
    t48 = *((unsigned int *)t40);
    t49 = *((unsigned int *)t53);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB167;

LAB164:    if (t50 != 0)
        goto LAB166;

LAB165:    *((unsigned int *)t38) = 1;

LAB167:    memset(t54, 0, 8);
    t61 = (t38 + 4);
    t56 = *((unsigned int *)t61);
    t57 = (~(t56));
    t58 = *((unsigned int *)t38);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB168;

LAB169:    if (*((unsigned int *)t61) != 0)
        goto LAB170;

LAB171:    t63 = *((unsigned int *)t28);
    t64 = *((unsigned int *)t54);
    t65 = (t63 & t64);
    *((unsigned int *)t62) = t65;
    t67 = (t28 + 4);
    t68 = (t54 + 4);
    t76 = (t62 + 4);
    t69 = *((unsigned int *)t67);
    t70 = *((unsigned int *)t68);
    t71 = (t69 | t70);
    *((unsigned int *)t76) = t71;
    t72 = *((unsigned int *)t76);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB172;

LAB173:
LAB174:    goto LAB163;

LAB166:    t55 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB167;

LAB168:    *((unsigned int *)t54) = 1;
    goto LAB171;

LAB170:    t66 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB171;

LAB172:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t76);
    *((unsigned int *)t62) = (t74 | t75);
    t77 = (t28 + 4);
    t94 = (t54 + 4);
    t78 = *((unsigned int *)t28);
    t79 = (~(t78));
    t80 = *((unsigned int *)t77);
    t81 = (~(t80));
    t82 = *((unsigned int *)t54);
    t83 = (~(t82));
    t84 = *((unsigned int *)t94);
    t85 = (~(t84));
    t86 = (t79 & t81);
    t87 = (t83 & t85);
    t88 = (~(t86));
    t89 = (~(t87));
    t90 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t90 & t88);
    t91 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t91 & t89);
    t92 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t92 & t88);
    t93 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t93 & t89);
    goto LAB174;

LAB175:    *((unsigned int *)t102) = 1;
    goto LAB178;

LAB177:    t101 = (t102 + 4);
    *((unsigned int *)t102) = 1;
    *((unsigned int *)t101) = 1;
    goto LAB178;

LAB179:    t108 = (t0 + 2728);
    t109 = (t108 + 56U);
    t110 = *((char **)t109);
    t112 = ((char*)((ng1)));
    memset(t111, 0, 8);
    t113 = (t110 + 4);
    t126 = (t112 + 4);
    t114 = *((unsigned int *)t110);
    t115 = *((unsigned int *)t112);
    t116 = (t114 ^ t115);
    t117 = *((unsigned int *)t113);
    t118 = *((unsigned int *)t126);
    t119 = (t117 ^ t118);
    t120 = (t116 | t119);
    t121 = *((unsigned int *)t113);
    t122 = *((unsigned int *)t126);
    t123 = (t121 | t122);
    t124 = (~(t123));
    t125 = (t120 & t124);
    if (t125 != 0)
        goto LAB183;

LAB182:    if (t123 != 0)
        goto LAB184;

LAB185:    memset(t127, 0, 8);
    t134 = (t111 + 4);
    t129 = *((unsigned int *)t134);
    t130 = (~(t129));
    t131 = *((unsigned int *)t111);
    t132 = (t131 & t130);
    t133 = (t132 & 1U);
    if (t133 != 0)
        goto LAB186;

LAB187:    if (*((unsigned int *)t134) != 0)
        goto LAB188;

LAB189:    t136 = *((unsigned int *)t102);
    t137 = *((unsigned int *)t127);
    t138 = (t136 | t137);
    *((unsigned int *)t135) = t138;
    t140 = (t102 + 4);
    t141 = (t127 + 4);
    t149 = (t135 + 4);
    t142 = *((unsigned int *)t140);
    t143 = *((unsigned int *)t141);
    t144 = (t142 | t143);
    *((unsigned int *)t149) = t144;
    t145 = *((unsigned int *)t149);
    t146 = (t145 != 0);
    if (t146 == 1)
        goto LAB190;

LAB191:
LAB192:    goto LAB181;

LAB183:    *((unsigned int *)t111) = 1;
    goto LAB185;

LAB184:    t128 = (t111 + 4);
    *((unsigned int *)t111) = 1;
    *((unsigned int *)t128) = 1;
    goto LAB185;

LAB186:    *((unsigned int *)t127) = 1;
    goto LAB189;

LAB188:    t139 = (t127 + 4);
    *((unsigned int *)t127) = 1;
    *((unsigned int *)t139) = 1;
    goto LAB189;

LAB190:    t147 = *((unsigned int *)t135);
    t148 = *((unsigned int *)t149);
    *((unsigned int *)t135) = (t147 | t148);
    t150 = (t102 + 4);
    t163 = (t127 + 4);
    t151 = *((unsigned int *)t150);
    t152 = (~(t151));
    t153 = *((unsigned int *)t102);
    t154 = (t153 & t152);
    t155 = *((unsigned int *)t163);
    t156 = (~(t155));
    t157 = *((unsigned int *)t127);
    t158 = (t157 & t156);
    t159 = (~(t154));
    t160 = (~(t158));
    t161 = *((unsigned int *)t149);
    *((unsigned int *)t149) = (t161 & t159);
    t162 = *((unsigned int *)t149);
    *((unsigned int *)t149) = (t162 & t160);
    goto LAB192;

LAB193:    xsi_set_current_line(84, ng0);

LAB196:    xsi_set_current_line(85, ng0);
    t170 = (t0 + 2728);
    t171 = (t170 + 56U);
    t172 = *((char **)t171);
    t174 = ((char*)((ng15)));
    memset(t173, 0, 8);
    t175 = (t172 + 4);
    if (*((unsigned int *)t175) != 0)
        goto LAB198;

LAB197:    t176 = (t174 + 4);
    if (*((unsigned int *)t176) != 0)
        goto LAB198;

LAB201:    if (*((unsigned int *)t172) < *((unsigned int *)t174))
        goto LAB199;

LAB200:    t183 = (t173 + 4);
    t178 = *((unsigned int *)t183);
    t179 = (~(t178));
    t180 = *((unsigned int *)t173);
    t181 = (t180 & t179);
    t182 = (t181 != 0);
    if (t182 > 0)
        goto LAB202;

LAB203:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng15)));
    memset(t13, 0, 8);
    t12 = (t5 + 4);
    t26 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t26);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t26);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB208;

LAB205:    if (t18 != 0)
        goto LAB207;

LAB206:    *((unsigned int *)t13) = 1;

LAB208:    t29 = (t13 + 4);
    t21 = *((unsigned int *)t29);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB209;

LAB210:
LAB211:
LAB204:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB213:    t11 = ((char*)((ng1)));
    t86 = xsi_vlog_unsigned_case_compare(t5, 4, t11, 4);
    if (t86 == 1)
        goto LAB214;

LAB215:    t2 = ((char*)((ng3)));
    t86 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t86 == 1)
        goto LAB216;

LAB217:    t2 = ((char*)((ng7)));
    t86 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t86 == 1)
        goto LAB218;

LAB219:    t2 = ((char*)((ng8)));
    t86 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t86 == 1)
        goto LAB220;

LAB221:    t2 = ((char*)((ng9)));
    t86 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t86 == 1)
        goto LAB222;

LAB223:    t2 = ((char*)((ng11)));
    t86 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t86 == 1)
        goto LAB224;

LAB225:    t2 = ((char*)((ng12)));
    t86 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t86 == 1)
        goto LAB226;

LAB227:
LAB229:
LAB228:    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB230:    goto LAB195;

LAB198:    t177 = (t173 + 4);
    *((unsigned int *)t173) = 1;
    *((unsigned int *)t177) = 1;
    goto LAB200;

LAB199:    *((unsigned int *)t173) = 1;
    goto LAB200;

LAB202:    xsi_set_current_line(86, ng0);
    t184 = (t0 + 2728);
    t185 = (t184 + 56U);
    t186 = *((char **)t185);
    t188 = ((char*)((ng3)));
    memset(t187, 0, 8);
    xsi_vlog_unsigned_add(t187, 4, t186, 4, t188, 4);
    t189 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t189, t187, 0, 0, 4, 0LL);
    goto LAB204;

LAB207:    t27 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB208;

LAB209:    xsi_set_current_line(87, ng0);

LAB212:    xsi_set_current_line(88, ng0);
    t30 = ((char*)((ng5)));
    t34 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t34, t30, 0, 0, 4, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB211;

LAB214:    xsi_set_current_line(92, ng0);
    t12 = ((char*)((ng1)));
    t26 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t26, t12, 0, 0, 4, 0LL);
    goto LAB230;

LAB216:    xsi_set_current_line(93, ng0);
    t3 = ((char*)((ng14)));
    t11 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 4, 0LL);
    goto LAB230;

LAB218:    xsi_set_current_line(94, ng0);
    t3 = ((char*)((ng1)));
    t11 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 4, 0LL);
    goto LAB230;

LAB220:    xsi_set_current_line(95, ng0);
    t3 = ((char*)((ng14)));
    t11 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 4, 0LL);
    goto LAB230;

LAB222:    xsi_set_current_line(96, ng0);
    t3 = ((char*)((ng1)));
    t11 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 4, 0LL);
    goto LAB230;

LAB224:    xsi_set_current_line(97, ng0);
    t3 = ((char*)((ng14)));
    t11 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 4, 0LL);
    goto LAB230;

LAB226:    xsi_set_current_line(98, ng0);
    t3 = ((char*)((ng1)));
    t11 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 4, 0LL);
    goto LAB230;

LAB231:    xsi_set_current_line(103, ng0);
    t26 = (t0 + 1208U);
    t27 = *((char **)t26);

LAB234:    t26 = ((char*)((ng1)));
    t86 = xsi_vlog_unsigned_case_compare(t27, 4, t26, 4);
    if (t86 == 1)
        goto LAB235;

LAB236:    t2 = ((char*)((ng3)));
    t86 = xsi_vlog_unsigned_case_compare(t27, 4, t2, 4);
    if (t86 == 1)
        goto LAB237;

LAB238:    t2 = ((char*)((ng7)));
    t86 = xsi_vlog_unsigned_case_compare(t27, 4, t2, 4);
    if (t86 == 1)
        goto LAB239;

LAB240:    t2 = ((char*)((ng8)));
    t86 = xsi_vlog_unsigned_case_compare(t27, 4, t2, 4);
    if (t86 == 1)
        goto LAB241;

LAB242:    t2 = ((char*)((ng9)));
    t86 = xsi_vlog_unsigned_case_compare(t27, 4, t2, 4);
    if (t86 == 1)
        goto LAB243;

LAB244:    t2 = ((char*)((ng11)));
    t86 = xsi_vlog_unsigned_case_compare(t27, 4, t2, 4);
    if (t86 == 1)
        goto LAB245;

LAB246:    t2 = ((char*)((ng12)));
    t86 = xsi_vlog_unsigned_case_compare(t27, 4, t2, 4);
    if (t86 == 1)
        goto LAB247;

LAB248:    t2 = ((char*)((ng13)));
    t86 = xsi_vlog_unsigned_case_compare(t27, 4, t2, 4);
    if (t86 == 1)
        goto LAB249;

LAB250:    t2 = ((char*)((ng10)));
    t86 = xsi_vlog_unsigned_case_compare(t27, 4, t2, 4);
    if (t86 == 1)
        goto LAB251;

LAB252:    t2 = ((char*)((ng2)));
    t86 = xsi_vlog_unsigned_case_compare(t27, 4, t2, 4);
    if (t86 == 1)
        goto LAB253;

LAB254:    t2 = ((char*)((ng16)));
    t86 = xsi_vlog_unsigned_case_compare(t27, 4, t2, 4);
    if (t86 == 1)
        goto LAB255;

LAB256:    t2 = ((char*)((ng17)));
    t86 = xsi_vlog_unsigned_case_compare(t27, 4, t2, 4);
    if (t86 == 1)
        goto LAB257;

LAB258:    t2 = ((char*)((ng18)));
    t86 = xsi_vlog_unsigned_case_compare(t27, 4, t2, 4);
    if (t86 == 1)
        goto LAB259;

LAB260:    t2 = ((char*)((ng19)));
    t86 = xsi_vlog_unsigned_case_compare(t27, 4, t2, 4);
    if (t86 == 1)
        goto LAB261;

LAB262:    t2 = ((char*)((ng20)));
    t86 = xsi_vlog_unsigned_case_compare(t27, 4, t2, 4);
    if (t86 == 1)
        goto LAB263;

LAB264:    t2 = ((char*)((ng14)));
    t86 = xsi_vlog_unsigned_case_compare(t27, 4, t2, 4);
    if (t86 == 1)
        goto LAB265;

LAB266:
LAB268:
LAB267:    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB269:    goto LAB233;

LAB235:    xsi_set_current_line(104, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 4, 0LL);
    goto LAB269;

LAB237:    xsi_set_current_line(105, ng0);
    t3 = ((char*)((ng3)));
    t11 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 4, 0LL);
    goto LAB269;

LAB239:    xsi_set_current_line(106, ng0);
    t3 = ((char*)((ng7)));
    t11 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 4, 0LL);
    goto LAB269;

LAB241:    xsi_set_current_line(107, ng0);
    t3 = ((char*)((ng8)));
    t11 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 4, 0LL);
    goto LAB269;

LAB243:    xsi_set_current_line(108, ng0);
    t3 = ((char*)((ng9)));
    t11 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 4, 0LL);
    goto LAB269;

LAB245:    xsi_set_current_line(109, ng0);
    t3 = ((char*)((ng11)));
    t11 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 4, 0LL);
    goto LAB269;

LAB247:    xsi_set_current_line(110, ng0);
    t3 = ((char*)((ng12)));
    t11 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 4, 0LL);
    goto LAB269;

LAB249:    xsi_set_current_line(111, ng0);
    t3 = ((char*)((ng13)));
    t11 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 4, 0LL);
    goto LAB269;

LAB251:    xsi_set_current_line(112, ng0);
    t3 = ((char*)((ng10)));
    t11 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 4, 0LL);
    goto LAB269;

LAB253:    xsi_set_current_line(113, ng0);
    t3 = ((char*)((ng2)));
    t11 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 4, 0LL);
    goto LAB269;

LAB255:    xsi_set_current_line(114, ng0);
    t3 = ((char*)((ng16)));
    t11 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 4, 0LL);
    goto LAB269;

LAB257:    xsi_set_current_line(115, ng0);
    t3 = ((char*)((ng17)));
    t11 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 4, 0LL);
    goto LAB269;

LAB259:    xsi_set_current_line(116, ng0);
    t3 = ((char*)((ng18)));
    t11 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 4, 0LL);
    goto LAB269;

LAB261:    xsi_set_current_line(117, ng0);
    t3 = ((char*)((ng19)));
    t11 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 4, 0LL);
    goto LAB269;

LAB263:    xsi_set_current_line(118, ng0);
    t3 = ((char*)((ng20)));
    t11 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 4, 0LL);
    goto LAB269;

LAB265:    xsi_set_current_line(119, ng0);
    t3 = ((char*)((ng14)));
    t11 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 4, 0LL);
    goto LAB269;

}

static void Cont_123_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 4368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4784);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 15U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 3);
    t18 = (t0 + 4704);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_12446594332452974720_4157750947_init()
{
	static char *pe[] = {(void *)Always_43_0,(void *)Cont_123_1};
	xsi_register_didat("work_m_12446594332452974720_4157750947", "isim/usb_tb_isim_beh.exe.sim/work/m_12446594332452974720_4157750947.didat");
	xsi_register_executes(pe);
}
