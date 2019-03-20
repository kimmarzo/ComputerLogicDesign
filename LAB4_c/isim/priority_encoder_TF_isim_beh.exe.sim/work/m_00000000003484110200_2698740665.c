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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Kim Marzo/Desktop/LAB4_c/priority_encoder_TF.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {2, 0};
static int ng5[] = {3, 0};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {5U, 0U};
static unsigned int ng11[] = {6U, 0U};
static unsigned int ng12[] = {7U, 0U};
static unsigned int ng13[] = {8U, 0U};
static unsigned int ng14[] = {9U, 0U};
static unsigned int ng15[] = {10U, 0U};
static unsigned int ng16[] = {11U, 0U};
static unsigned int ng17[] = {12U, 0U};
static unsigned int ng18[] = {13U, 0U};
static unsigned int ng19[] = {14U, 0U};
static unsigned int ng20[] = {15U, 0U};



static void Initial_41_0(char *t0)
{
    char t4[8];
    char t13[8];
    char t22[8];
    char t31[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    int t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    int t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    int t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    int t38;

LAB0:    t1 = (t0 + 1444U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);

LAB4:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 920);
    t5 = (t0 + 920);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t4, t7, 2, t8, 32, 1);
    t9 = (t4 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB5;

LAB6:    t12 = (t0 + 920);
    t14 = (t0 + 920);
    t15 = (t14 + 44U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t13, t16, 2, t17, 32, 1);
    t18 = (t13 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB7;

LAB8:    t21 = (t0 + 920);
    t23 = (t0 + 920);
    t24 = (t23 + 44U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t22, t25, 2, t26, 32, 1);
    t27 = (t22 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    if (t29 == 1)
        goto LAB9;

LAB10:    t30 = (t0 + 920);
    t32 = (t0 + 920);
    t33 = (t32 + 44U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t31, t34, 2, t35, 32, 1);
    t36 = (t31 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (!(t37));
    if (t38 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB13;

LAB1:    return;
LAB5:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t4), 1);
    goto LAB6;

LAB7:    xsi_vlogvar_assign_value(t12, t2, 1, *((unsigned int *)t13), 1);
    goto LAB8;

LAB9:    xsi_vlogvar_assign_value(t21, t2, 2, *((unsigned int *)t22), 1);
    goto LAB10;

LAB11:    xsi_vlogvar_assign_value(t30, t2, 3, *((unsigned int *)t31), 1);
    goto LAB12;

LAB13:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 920);
    t5 = (t0 + 920);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t4, t7, 2, t8, 32, 1);
    t9 = (t4 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB14;

LAB15:    t12 = (t0 + 920);
    t14 = (t0 + 920);
    t15 = (t14 + 44U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t13, t16, 2, t17, 32, 1);
    t18 = (t13 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB16;

LAB17:    t21 = (t0 + 920);
    t23 = (t0 + 920);
    t24 = (t23 + 44U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t22, t25, 2, t26, 32, 1);
    t27 = (t22 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    if (t29 == 1)
        goto LAB18;

LAB19:    t30 = (t0 + 920);
    t32 = (t0 + 920);
    t33 = (t32 + 44U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t31, t34, 2, t35, 32, 1);
    t36 = (t31 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (!(t37));
    if (t38 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB14:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t4), 1);
    goto LAB15;

LAB16:    xsi_vlogvar_assign_value(t12, t2, 1, *((unsigned int *)t13), 1);
    goto LAB17;

LAB18:    xsi_vlogvar_assign_value(t21, t2, 2, *((unsigned int *)t22), 1);
    goto LAB19;

LAB20:    xsi_vlogvar_assign_value(t30, t2, 3, *((unsigned int *)t31), 1);
    goto LAB21;

LAB22:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 920);
    t5 = (t0 + 920);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t4, t7, 2, t8, 32, 1);
    t9 = (t4 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB23;

LAB24:    t12 = (t0 + 920);
    t14 = (t0 + 920);
    t15 = (t14 + 44U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t13, t16, 2, t17, 32, 1);
    t18 = (t13 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB25;

LAB26:    t21 = (t0 + 920);
    t23 = (t0 + 920);
    t24 = (t23 + 44U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t22, t25, 2, t26, 32, 1);
    t27 = (t22 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    if (t29 == 1)
        goto LAB27;

LAB28:    t30 = (t0 + 920);
    t32 = (t0 + 920);
    t33 = (t32 + 44U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t31, t34, 2, t35, 32, 1);
    t36 = (t31 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (!(t37));
    if (t38 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB23:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t4), 1);
    goto LAB24;

LAB25:    xsi_vlogvar_assign_value(t12, t2, 1, *((unsigned int *)t13), 1);
    goto LAB26;

LAB27:    xsi_vlogvar_assign_value(t21, t2, 2, *((unsigned int *)t22), 1);
    goto LAB28;

LAB29:    xsi_vlogvar_assign_value(t30, t2, 3, *((unsigned int *)t31), 1);
    goto LAB30;

LAB31:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 920);
    t5 = (t0 + 920);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t4, t7, 2, t8, 32, 1);
    t9 = (t4 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB32;

LAB33:    t12 = (t0 + 920);
    t14 = (t0 + 920);
    t15 = (t14 + 44U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t13, t16, 2, t17, 32, 1);
    t18 = (t13 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB34;

LAB35:    t21 = (t0 + 920);
    t23 = (t0 + 920);
    t24 = (t23 + 44U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t22, t25, 2, t26, 32, 1);
    t27 = (t22 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    if (t29 == 1)
        goto LAB36;

LAB37:    t30 = (t0 + 920);
    t32 = (t0 + 920);
    t33 = (t32 + 44U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t31, t34, 2, t35, 32, 1);
    t36 = (t31 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (!(t37));
    if (t38 == 1)
        goto LAB38;

LAB39:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB32:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t4), 1);
    goto LAB33;

LAB34:    xsi_vlogvar_assign_value(t12, t2, 1, *((unsigned int *)t13), 1);
    goto LAB35;

LAB36:    xsi_vlogvar_assign_value(t21, t2, 2, *((unsigned int *)t22), 1);
    goto LAB37;

LAB38:    xsi_vlogvar_assign_value(t30, t2, 3, *((unsigned int *)t31), 1);
    goto LAB39;

LAB40:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 920);
    t5 = (t0 + 920);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t4, t7, 2, t8, 32, 1);
    t9 = (t4 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB41;

LAB42:    t12 = (t0 + 920);
    t14 = (t0 + 920);
    t15 = (t14 + 44U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t13, t16, 2, t17, 32, 1);
    t18 = (t13 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB43;

LAB44:    t21 = (t0 + 920);
    t23 = (t0 + 920);
    t24 = (t23 + 44U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t22, t25, 2, t26, 32, 1);
    t27 = (t22 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    if (t29 == 1)
        goto LAB45;

LAB46:    t30 = (t0 + 920);
    t32 = (t0 + 920);
    t33 = (t32 + 44U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t31, t34, 2, t35, 32, 1);
    t36 = (t31 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (!(t37));
    if (t38 == 1)
        goto LAB47;

LAB48:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB41:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t4), 1);
    goto LAB42;

LAB43:    xsi_vlogvar_assign_value(t12, t2, 1, *((unsigned int *)t13), 1);
    goto LAB44;

LAB45:    xsi_vlogvar_assign_value(t21, t2, 2, *((unsigned int *)t22), 1);
    goto LAB46;

LAB47:    xsi_vlogvar_assign_value(t30, t2, 3, *((unsigned int *)t31), 1);
    goto LAB48;

LAB49:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 920);
    t5 = (t0 + 920);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t4, t7, 2, t8, 32, 1);
    t9 = (t4 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB50;

LAB51:    t12 = (t0 + 920);
    t14 = (t0 + 920);
    t15 = (t14 + 44U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t13, t16, 2, t17, 32, 1);
    t18 = (t13 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB52;

LAB53:    t21 = (t0 + 920);
    t23 = (t0 + 920);
    t24 = (t23 + 44U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t22, t25, 2, t26, 32, 1);
    t27 = (t22 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    if (t29 == 1)
        goto LAB54;

LAB55:    t30 = (t0 + 920);
    t32 = (t0 + 920);
    t33 = (t32 + 44U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t31, t34, 2, t35, 32, 1);
    t36 = (t31 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (!(t37));
    if (t38 == 1)
        goto LAB56;

LAB57:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB58;
    goto LAB1;

LAB50:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t4), 1);
    goto LAB51;

LAB52:    xsi_vlogvar_assign_value(t12, t2, 1, *((unsigned int *)t13), 1);
    goto LAB53;

LAB54:    xsi_vlogvar_assign_value(t21, t2, 2, *((unsigned int *)t22), 1);
    goto LAB55;

LAB56:    xsi_vlogvar_assign_value(t30, t2, 3, *((unsigned int *)t31), 1);
    goto LAB57;

LAB58:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 920);
    t5 = (t0 + 920);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t4, t7, 2, t8, 32, 1);
    t9 = (t4 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB59;

LAB60:    t12 = (t0 + 920);
    t14 = (t0 + 920);
    t15 = (t14 + 44U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t13, t16, 2, t17, 32, 1);
    t18 = (t13 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB61;

LAB62:    t21 = (t0 + 920);
    t23 = (t0 + 920);
    t24 = (t23 + 44U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t22, t25, 2, t26, 32, 1);
    t27 = (t22 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    if (t29 == 1)
        goto LAB63;

LAB64:    t30 = (t0 + 920);
    t32 = (t0 + 920);
    t33 = (t32 + 44U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t31, t34, 2, t35, 32, 1);
    t36 = (t31 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (!(t37));
    if (t38 == 1)
        goto LAB65;

LAB66:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB67;
    goto LAB1;

LAB59:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t4), 1);
    goto LAB60;

LAB61:    xsi_vlogvar_assign_value(t12, t2, 1, *((unsigned int *)t13), 1);
    goto LAB62;

LAB63:    xsi_vlogvar_assign_value(t21, t2, 2, *((unsigned int *)t22), 1);
    goto LAB64;

LAB65:    xsi_vlogvar_assign_value(t30, t2, 3, *((unsigned int *)t31), 1);
    goto LAB66;

LAB67:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 920);
    t5 = (t0 + 920);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t4, t7, 2, t8, 32, 1);
    t9 = (t4 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB68;

LAB69:    t12 = (t0 + 920);
    t14 = (t0 + 920);
    t15 = (t14 + 44U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t13, t16, 2, t17, 32, 1);
    t18 = (t13 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB70;

LAB71:    t21 = (t0 + 920);
    t23 = (t0 + 920);
    t24 = (t23 + 44U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t22, t25, 2, t26, 32, 1);
    t27 = (t22 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    if (t29 == 1)
        goto LAB72;

LAB73:    t30 = (t0 + 920);
    t32 = (t0 + 920);
    t33 = (t32 + 44U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t31, t34, 2, t35, 32, 1);
    t36 = (t31 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (!(t37));
    if (t38 == 1)
        goto LAB74;

LAB75:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB76;
    goto LAB1;

LAB68:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t4), 1);
    goto LAB69;

LAB70:    xsi_vlogvar_assign_value(t12, t2, 1, *((unsigned int *)t13), 1);
    goto LAB71;

LAB72:    xsi_vlogvar_assign_value(t21, t2, 2, *((unsigned int *)t22), 1);
    goto LAB73;

LAB74:    xsi_vlogvar_assign_value(t30, t2, 3, *((unsigned int *)t31), 1);
    goto LAB75;

LAB76:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 920);
    t5 = (t0 + 920);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t4, t7, 2, t8, 32, 1);
    t9 = (t4 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB77;

LAB78:    t12 = (t0 + 920);
    t14 = (t0 + 920);
    t15 = (t14 + 44U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t13, t16, 2, t17, 32, 1);
    t18 = (t13 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB79;

LAB80:    t21 = (t0 + 920);
    t23 = (t0 + 920);
    t24 = (t23 + 44U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t22, t25, 2, t26, 32, 1);
    t27 = (t22 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    if (t29 == 1)
        goto LAB81;

LAB82:    t30 = (t0 + 920);
    t32 = (t0 + 920);
    t33 = (t32 + 44U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t31, t34, 2, t35, 32, 1);
    t36 = (t31 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (!(t37));
    if (t38 == 1)
        goto LAB83;

LAB84:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB85;
    goto LAB1;

LAB77:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t4), 1);
    goto LAB78;

LAB79:    xsi_vlogvar_assign_value(t12, t2, 1, *((unsigned int *)t13), 1);
    goto LAB80;

LAB81:    xsi_vlogvar_assign_value(t21, t2, 2, *((unsigned int *)t22), 1);
    goto LAB82;

LAB83:    xsi_vlogvar_assign_value(t30, t2, 3, *((unsigned int *)t31), 1);
    goto LAB84;

LAB85:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 920);
    t5 = (t0 + 920);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t4, t7, 2, t8, 32, 1);
    t9 = (t4 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB86;

LAB87:    t12 = (t0 + 920);
    t14 = (t0 + 920);
    t15 = (t14 + 44U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t13, t16, 2, t17, 32, 1);
    t18 = (t13 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB88;

LAB89:    t21 = (t0 + 920);
    t23 = (t0 + 920);
    t24 = (t23 + 44U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t22, t25, 2, t26, 32, 1);
    t27 = (t22 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    if (t29 == 1)
        goto LAB90;

LAB91:    t30 = (t0 + 920);
    t32 = (t0 + 920);
    t33 = (t32 + 44U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t31, t34, 2, t35, 32, 1);
    t36 = (t31 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (!(t37));
    if (t38 == 1)
        goto LAB92;

LAB93:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB94;
    goto LAB1;

LAB86:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t4), 1);
    goto LAB87;

LAB88:    xsi_vlogvar_assign_value(t12, t2, 1, *((unsigned int *)t13), 1);
    goto LAB89;

LAB90:    xsi_vlogvar_assign_value(t21, t2, 2, *((unsigned int *)t22), 1);
    goto LAB91;

LAB92:    xsi_vlogvar_assign_value(t30, t2, 3, *((unsigned int *)t31), 1);
    goto LAB93;

LAB94:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 920);
    t5 = (t0 + 920);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t4, t7, 2, t8, 32, 1);
    t9 = (t4 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB95;

LAB96:    t12 = (t0 + 920);
    t14 = (t0 + 920);
    t15 = (t14 + 44U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t13, t16, 2, t17, 32, 1);
    t18 = (t13 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB97;

LAB98:    t21 = (t0 + 920);
    t23 = (t0 + 920);
    t24 = (t23 + 44U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t22, t25, 2, t26, 32, 1);
    t27 = (t22 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    if (t29 == 1)
        goto LAB99;

LAB100:    t30 = (t0 + 920);
    t32 = (t0 + 920);
    t33 = (t32 + 44U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t31, t34, 2, t35, 32, 1);
    t36 = (t31 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (!(t37));
    if (t38 == 1)
        goto LAB101;

LAB102:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB103;
    goto LAB1;

LAB95:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t4), 1);
    goto LAB96;

LAB97:    xsi_vlogvar_assign_value(t12, t2, 1, *((unsigned int *)t13), 1);
    goto LAB98;

LAB99:    xsi_vlogvar_assign_value(t21, t2, 2, *((unsigned int *)t22), 1);
    goto LAB100;

LAB101:    xsi_vlogvar_assign_value(t30, t2, 3, *((unsigned int *)t31), 1);
    goto LAB102;

LAB103:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 920);
    t5 = (t0 + 920);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t4, t7, 2, t8, 32, 1);
    t9 = (t4 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB104;

LAB105:    t12 = (t0 + 920);
    t14 = (t0 + 920);
    t15 = (t14 + 44U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t13, t16, 2, t17, 32, 1);
    t18 = (t13 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB106;

LAB107:    t21 = (t0 + 920);
    t23 = (t0 + 920);
    t24 = (t23 + 44U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t22, t25, 2, t26, 32, 1);
    t27 = (t22 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    if (t29 == 1)
        goto LAB108;

LAB109:    t30 = (t0 + 920);
    t32 = (t0 + 920);
    t33 = (t32 + 44U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t31, t34, 2, t35, 32, 1);
    t36 = (t31 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (!(t37));
    if (t38 == 1)
        goto LAB110;

LAB111:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB112;
    goto LAB1;

LAB104:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t4), 1);
    goto LAB105;

LAB106:    xsi_vlogvar_assign_value(t12, t2, 1, *((unsigned int *)t13), 1);
    goto LAB107;

LAB108:    xsi_vlogvar_assign_value(t21, t2, 2, *((unsigned int *)t22), 1);
    goto LAB109;

LAB110:    xsi_vlogvar_assign_value(t30, t2, 3, *((unsigned int *)t31), 1);
    goto LAB111;

LAB112:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 920);
    t5 = (t0 + 920);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t4, t7, 2, t8, 32, 1);
    t9 = (t4 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB113;

LAB114:    t12 = (t0 + 920);
    t14 = (t0 + 920);
    t15 = (t14 + 44U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t13, t16, 2, t17, 32, 1);
    t18 = (t13 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB115;

LAB116:    t21 = (t0 + 920);
    t23 = (t0 + 920);
    t24 = (t23 + 44U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t22, t25, 2, t26, 32, 1);
    t27 = (t22 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    if (t29 == 1)
        goto LAB117;

LAB118:    t30 = (t0 + 920);
    t32 = (t0 + 920);
    t33 = (t32 + 44U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t31, t34, 2, t35, 32, 1);
    t36 = (t31 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (!(t37));
    if (t38 == 1)
        goto LAB119;

LAB120:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB121;
    goto LAB1;

LAB113:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t4), 1);
    goto LAB114;

LAB115:    xsi_vlogvar_assign_value(t12, t2, 1, *((unsigned int *)t13), 1);
    goto LAB116;

LAB117:    xsi_vlogvar_assign_value(t21, t2, 2, *((unsigned int *)t22), 1);
    goto LAB118;

LAB119:    xsi_vlogvar_assign_value(t30, t2, 3, *((unsigned int *)t31), 1);
    goto LAB120;

LAB121:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 920);
    t5 = (t0 + 920);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t4, t7, 2, t8, 32, 1);
    t9 = (t4 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB122;

LAB123:    t12 = (t0 + 920);
    t14 = (t0 + 920);
    t15 = (t14 + 44U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t13, t16, 2, t17, 32, 1);
    t18 = (t13 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB124;

LAB125:    t21 = (t0 + 920);
    t23 = (t0 + 920);
    t24 = (t23 + 44U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t22, t25, 2, t26, 32, 1);
    t27 = (t22 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    if (t29 == 1)
        goto LAB126;

LAB127:    t30 = (t0 + 920);
    t32 = (t0 + 920);
    t33 = (t32 + 44U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t31, t34, 2, t35, 32, 1);
    t36 = (t31 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (!(t37));
    if (t38 == 1)
        goto LAB128;

LAB129:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB130;
    goto LAB1;

LAB122:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t4), 1);
    goto LAB123;

LAB124:    xsi_vlogvar_assign_value(t12, t2, 1, *((unsigned int *)t13), 1);
    goto LAB125;

LAB126:    xsi_vlogvar_assign_value(t21, t2, 2, *((unsigned int *)t22), 1);
    goto LAB127;

LAB128:    xsi_vlogvar_assign_value(t30, t2, 3, *((unsigned int *)t31), 1);
    goto LAB129;

LAB130:    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 920);
    t5 = (t0 + 920);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t4, t7, 2, t8, 32, 1);
    t9 = (t4 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB131;

LAB132:    t12 = (t0 + 920);
    t14 = (t0 + 920);
    t15 = (t14 + 44U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t13, t16, 2, t17, 32, 1);
    t18 = (t13 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB133;

LAB134:    t21 = (t0 + 920);
    t23 = (t0 + 920);
    t24 = (t23 + 44U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t22, t25, 2, t26, 32, 1);
    t27 = (t22 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    if (t29 == 1)
        goto LAB135;

LAB136:    t30 = (t0 + 920);
    t32 = (t0 + 920);
    t33 = (t32 + 44U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t31, t34, 2, t35, 32, 1);
    t36 = (t31 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (!(t37));
    if (t38 == 1)
        goto LAB137;

LAB138:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB139;
    goto LAB1;

LAB131:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t4), 1);
    goto LAB132;

LAB133:    xsi_vlogvar_assign_value(t12, t2, 1, *((unsigned int *)t13), 1);
    goto LAB134;

LAB135:    xsi_vlogvar_assign_value(t21, t2, 2, *((unsigned int *)t22), 1);
    goto LAB136;

LAB137:    xsi_vlogvar_assign_value(t30, t2, 3, *((unsigned int *)t31), 1);
    goto LAB138;

LAB139:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 920);
    t5 = (t0 + 920);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t4, t7, 2, t8, 32, 1);
    t9 = (t4 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB140;

LAB141:    t12 = (t0 + 920);
    t14 = (t0 + 920);
    t15 = (t14 + 44U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t13, t16, 2, t17, 32, 1);
    t18 = (t13 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB142;

LAB143:    t21 = (t0 + 920);
    t23 = (t0 + 920);
    t24 = (t23 + 44U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t22, t25, 2, t26, 32, 1);
    t27 = (t22 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    if (t29 == 1)
        goto LAB144;

LAB145:    t30 = (t0 + 920);
    t32 = (t0 + 920);
    t33 = (t32 + 44U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t31, t34, 2, t35, 32, 1);
    t36 = (t31 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (!(t37));
    if (t38 == 1)
        goto LAB146;

LAB147:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB148;
    goto LAB1;

LAB140:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t4), 1);
    goto LAB141;

LAB142:    xsi_vlogvar_assign_value(t12, t2, 1, *((unsigned int *)t13), 1);
    goto LAB143;

LAB144:    xsi_vlogvar_assign_value(t21, t2, 2, *((unsigned int *)t22), 1);
    goto LAB145;

LAB146:    xsi_vlogvar_assign_value(t30, t2, 3, *((unsigned int *)t31), 1);
    goto LAB147;

LAB148:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 920);
    t5 = (t0 + 920);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t4, t7, 2, t8, 32, 1);
    t9 = (t4 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB149;

LAB150:    t12 = (t0 + 920);
    t14 = (t0 + 920);
    t15 = (t14 + 44U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t13, t16, 2, t17, 32, 1);
    t18 = (t13 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB151;

LAB152:    t21 = (t0 + 920);
    t23 = (t0 + 920);
    t24 = (t23 + 44U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t22, t25, 2, t26, 32, 1);
    t27 = (t22 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    if (t29 == 1)
        goto LAB153;

LAB154:    t30 = (t0 + 920);
    t32 = (t0 + 920);
    t33 = (t32 + 44U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t31, t34, 2, t35, 32, 1);
    t36 = (t31 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (!(t37));
    if (t38 == 1)
        goto LAB155;

LAB156:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB157;
    goto LAB1;

LAB149:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t4), 1);
    goto LAB150;

LAB151:    xsi_vlogvar_assign_value(t12, t2, 1, *((unsigned int *)t13), 1);
    goto LAB152;

LAB153:    xsi_vlogvar_assign_value(t21, t2, 2, *((unsigned int *)t22), 1);
    goto LAB154;

LAB155:    xsi_vlogvar_assign_value(t30, t2, 3, *((unsigned int *)t31), 1);
    goto LAB156;

LAB157:    xsi_set_current_line(61, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_00000000003484110200_2698740665_init()
{
	static char *pe[] = {(void *)Initial_41_0};
	xsi_register_didat("work_m_00000000003484110200_2698740665", "isim/priority_encoder_TF_isim_beh.exe.sim/work/m_00000000003484110200_2698740665.didat");
	xsi_register_executes(pe);
}
