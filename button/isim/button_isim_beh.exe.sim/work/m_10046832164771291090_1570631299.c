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
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {2, 0};
static int ng6[] = {3, 0};



static void Always_42_0(char *t0)
{
    char t9[8];
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    int t20;
    char *t21;
    unsigned int t22;
    int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    int t28;
    char *t29;

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
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 1, t4, 1);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 1, t2, 1);
    if (t6 == 1)
        goto LAB9;

LAB10:
LAB11:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);

LAB16:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 1, t2, 1);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 1, t2, 1);
    if (t6 == 1)
        goto LAB19;

LAB20:
LAB21:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);

LAB26:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 1, t2, 1);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 1, t2, 1);
    if (t6 == 1)
        goto LAB29;

LAB30:
LAB31:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1528U);
    t7 = *((char **)t2);

LAB36:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 1, t2, 1);
    if (t6 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 1, t2, 1);
    if (t6 == 1)
        goto LAB39;

LAB40:
LAB41:    goto LAB2;

LAB7:    xsi_set_current_line(44, ng0);
    t7 = ((char*)((ng1)));
    t8 = (t0 + 3048);
    t11 = (t0 + 3048);
    t12 = (t11 + 72U);
    t13 = *((char **)t12);
    t14 = (t0 + 3048);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t9, t10, t13, t16, 2, 1, t17, 32, 1);
    t18 = (t9 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t10 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB12;

LAB13:    goto LAB11;

LAB9:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3048);
    t7 = (t0 + 3048);
    t8 = (t7 + 72U);
    t11 = *((char **)t8);
    t12 = (t0 + 3048);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t9, t10, t11, t14, 2, 1, t15, 32, 1);
    t16 = (t9 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (!(t19));
    t17 = (t10 + 4);
    t22 = *((unsigned int *)t17);
    t23 = (!(t22));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB14;

LAB15:    goto LAB11;

LAB12:    t25 = *((unsigned int *)t9);
    t26 = *((unsigned int *)t10);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, *((unsigned int *)t10), t28, 0LL);
    goto LAB13;

LAB14:    t25 = *((unsigned int *)t9);
    t26 = *((unsigned int *)t10);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, *((unsigned int *)t10), t28, 0LL);
    goto LAB15;

LAB17:    xsi_set_current_line(48, ng0);
    t4 = ((char*)((ng1)));
    t7 = (t0 + 3048);
    t8 = (t0 + 3048);
    t11 = (t8 + 72U);
    t12 = *((char **)t11);
    t13 = (t0 + 3048);
    t14 = (t13 + 64U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t9, t10, t12, t15, 2, 1, t16, 32, 1);
    t17 = (t9 + 4);
    t19 = *((unsigned int *)t17);
    t20 = (!(t19));
    t18 = (t10 + 4);
    t22 = *((unsigned int *)t18);
    t23 = (!(t22));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB22;

LAB23:    goto LAB21;

LAB19:    xsi_set_current_line(49, ng0);
    t4 = ((char*)((ng3)));
    t7 = (t0 + 3048);
    t8 = (t0 + 3048);
    t11 = (t8 + 72U);
    t12 = *((char **)t11);
    t13 = (t0 + 3048);
    t14 = (t13 + 64U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t9, t10, t12, t15, 2, 1, t16, 32, 1);
    t17 = (t9 + 4);
    t19 = *((unsigned int *)t17);
    t20 = (!(t19));
    t18 = (t10 + 4);
    t22 = *((unsigned int *)t18);
    t23 = (!(t22));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB24;

LAB25:    goto LAB21;

LAB22:    t25 = *((unsigned int *)t9);
    t26 = *((unsigned int *)t10);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, *((unsigned int *)t10), t28, 0LL);
    goto LAB23;

LAB24:    t25 = *((unsigned int *)t9);
    t26 = *((unsigned int *)t10);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, *((unsigned int *)t10), t28, 0LL);
    goto LAB25;

LAB27:    xsi_set_current_line(52, ng0);
    t7 = ((char*)((ng1)));
    t8 = (t0 + 3048);
    t11 = (t0 + 3048);
    t12 = (t11 + 72U);
    t13 = *((char **)t12);
    t14 = (t0 + 3048);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t9, t10, t13, t16, 2, 1, t17, 32, 1);
    t18 = (t9 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t10 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB32;

LAB33:    goto LAB31;

LAB29:    xsi_set_current_line(53, ng0);
    t7 = ((char*)((ng3)));
    t8 = (t0 + 3048);
    t11 = (t0 + 3048);
    t12 = (t11 + 72U);
    t13 = *((char **)t12);
    t14 = (t0 + 3048);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t9, t10, t13, t16, 2, 1, t17, 32, 1);
    t18 = (t9 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t10 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB34;

LAB35:    goto LAB31;

LAB32:    t25 = *((unsigned int *)t9);
    t26 = *((unsigned int *)t10);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, *((unsigned int *)t10), t28, 0LL);
    goto LAB33;

LAB34:    t25 = *((unsigned int *)t9);
    t26 = *((unsigned int *)t10);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, *((unsigned int *)t10), t28, 0LL);
    goto LAB35;

LAB37:    xsi_set_current_line(56, ng0);
    t8 = ((char*)((ng1)));
    t11 = (t0 + 3048);
    t12 = (t0 + 3048);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = (t0 + 3048);
    t16 = (t15 + 64U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t9, t10, t14, t17, 2, 1, t18, 32, 1);
    t21 = (t9 + 4);
    t19 = *((unsigned int *)t21);
    t20 = (!(t19));
    t29 = (t10 + 4);
    t22 = *((unsigned int *)t29);
    t23 = (!(t22));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB42;

LAB43:    goto LAB41;

LAB39:    xsi_set_current_line(57, ng0);
    t8 = ((char*)((ng3)));
    t11 = (t0 + 3048);
    t12 = (t0 + 3048);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = (t0 + 3048);
    t16 = (t15 + 64U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t9, t10, t14, t17, 2, 1, t18, 32, 1);
    t21 = (t9 + 4);
    t19 = *((unsigned int *)t21);
    t20 = (!(t19));
    t29 = (t10 + 4);
    t22 = *((unsigned int *)t29);
    t23 = (!(t22));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB44;

LAB45:    goto LAB41;

LAB42:    t25 = *((unsigned int *)t9);
    t26 = *((unsigned int *)t10);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t11, t8, 0, *((unsigned int *)t10), t28, 0LL);
    goto LAB43;

LAB44:    t25 = *((unsigned int *)t9);
    t26 = *((unsigned int *)t10);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t11, t8, 0, *((unsigned int *)t10), t28, 0LL);
    goto LAB45;

}

static void Cont_61_1(char *t0)
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

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3048);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3048);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng6)));
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

static void Cont_62_2(char *t0)
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

LAB2:    xsi_set_current_line(62, ng0);
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

static void Cont_63_3(char *t0)
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

LAB2:    xsi_set_current_line(63, ng0);
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

static void Cont_64_4(char *t0)
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

LAB2:    xsi_set_current_line(64, ng0);
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
	static char *pe[] = {(void *)Always_42_0,(void *)Cont_61_1,(void *)Cont_62_2,(void *)Cont_63_3,(void *)Cont_64_4};
	xsi_register_didat("work_m_10046832164771291090_1570631299", "isim/button_isim_beh.exe.sim/work/m_10046832164771291090_1570631299.didat");
	xsi_register_executes(pe);
}
