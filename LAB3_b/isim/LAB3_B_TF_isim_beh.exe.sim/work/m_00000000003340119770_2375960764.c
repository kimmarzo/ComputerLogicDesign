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
static const char *ng0 = "C:/Users/Kim Marzo/Desktop/CS_S19/CECS201/LAB3_b/LAB3_B_TF.v";
static unsigned int ng1[] = {270U, 0U};
static unsigned int ng2[] = {336U, 0U};
static unsigned int ng3[] = {218U, 0U};
static unsigned int ng4[] = {476U, 0U};
static unsigned int ng5[] = {392U, 0U};
static unsigned int ng6[] = {810U, 0U};
static unsigned int ng7[] = {956U, 0U};
static unsigned int ng8[] = {740U, 0U};
static unsigned int ng9[] = {734U, 0U};
static unsigned int ng10[] = {562U, 0U};
static unsigned int ng11[] = {512U, 0U};



static void Initial_47_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t1 = (t0 + 1720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);

LAB4:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 4);
    t5 = (t0 + 1012);
    xsi_vlogvar_assign_value(t5, t2, 5, 0, 4);
    t6 = (t0 + 920);
    xsi_vlogvar_assign_value(t6, t2, 9, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1620);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 4);
    t5 = (t0 + 1012);
    xsi_vlogvar_assign_value(t5, t2, 5, 0, 4);
    t6 = (t0 + 920);
    xsi_vlogvar_assign_value(t6, t2, 9, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1620);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 4);
    t5 = (t0 + 1012);
    xsi_vlogvar_assign_value(t5, t2, 5, 0, 4);
    t6 = (t0 + 920);
    xsi_vlogvar_assign_value(t6, t2, 9, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1620);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 4);
    t5 = (t0 + 1012);
    xsi_vlogvar_assign_value(t5, t2, 5, 0, 4);
    t6 = (t0 + 920);
    xsi_vlogvar_assign_value(t6, t2, 9, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1620);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 4);
    t5 = (t0 + 1012);
    xsi_vlogvar_assign_value(t5, t2, 5, 0, 4);
    t6 = (t0 + 920);
    xsi_vlogvar_assign_value(t6, t2, 9, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1620);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 4);
    t5 = (t0 + 1012);
    xsi_vlogvar_assign_value(t5, t2, 5, 0, 4);
    t6 = (t0 + 920);
    xsi_vlogvar_assign_value(t6, t2, 9, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1620);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 4);
    t5 = (t0 + 1012);
    xsi_vlogvar_assign_value(t5, t2, 5, 0, 4);
    t6 = (t0 + 920);
    xsi_vlogvar_assign_value(t6, t2, 9, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1620);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 4);
    t5 = (t0 + 1012);
    xsi_vlogvar_assign_value(t5, t2, 5, 0, 4);
    t6 = (t0 + 920);
    xsi_vlogvar_assign_value(t6, t2, 9, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1620);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 4);
    t5 = (t0 + 1012);
    xsi_vlogvar_assign_value(t5, t2, 5, 0, 4);
    t6 = (t0 + 920);
    xsi_vlogvar_assign_value(t6, t2, 9, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1620);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 4);
    t5 = (t0 + 1012);
    xsi_vlogvar_assign_value(t5, t2, 5, 0, 4);
    t6 = (t0 + 920);
    xsi_vlogvar_assign_value(t6, t2, 9, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1620);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 4);
    t5 = (t0 + 1012);
    xsi_vlogvar_assign_value(t5, t2, 5, 0, 4);
    t6 = (t0 + 920);
    xsi_vlogvar_assign_value(t6, t2, 9, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1620);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(60, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_00000000003340119770_2375960764_init()
{
	static char *pe[] = {(void *)Initial_47_0};
	xsi_register_didat("work_m_00000000003340119770_2375960764", "isim/LAB3_B_TF_isim_beh.exe.sim/work/m_00000000003340119770_2375960764.didat");
	xsi_register_executes(pe);
}
