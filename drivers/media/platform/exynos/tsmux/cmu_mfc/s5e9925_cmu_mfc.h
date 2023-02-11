/*
 * copyright (c) 2021 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 *
 * Core file for Samsung EXYNOS TSMUX driver
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef EXYNOS1000_CMU_MFC_H
#define EXYNOS1000_CMU_MFC_H

/* CMU_MFC_SFR is for debugging */

#define TSMUX_CMU_MFC_DESC(_sfr_name, _base_pa, _offset) {	\
	.sfr_name = _sfr_name,	\
	.base_pa = _base_pa,	\
	.offset = _offset,	\
}

struct tsmux_cmu_mfc_sfr {
	char *sfr_name;
	phys_addr_t base_pa;
	u32 offset;
};

struct tsmux_cmu_mfc_sfr tsmux_cmu_mfc_sfr_list[] = {
    TSMUX_CMU_MFC_DESC("CLK_CON_DIV_DIV_CLK_MFC0_NOCP", 0x18600000, 0x1800),
    TSMUX_CMU_MFC_DESC("PLL_CON0_MUX_CLKCMU_MFC0_MFC0_USER", 0x18600000, 0x0600),
    TSMUX_CMU_MFC_DESC("PLL_CON0_MUX_CLKCMU_MFC0_WFD_USER", 0x18600000, 0x0610),
    TSMUX_CMU_MFC_DESC("QCH_CON_D_TZPC_MFC0_QCH", 0x18600000, 0x304c),
    TSMUX_CMU_MFC_DESC("QCH_CON_LH_AST_MI_OTF0_MFC1MFC0_QCH", 0x18600000, 0x3050),
    TSMUX_CMU_MFC_DESC("QCH_CON_LH_AST_MI_OTF1_MFC1MFC0_QCH", 0x18600000, 0x3054),
    TSMUX_CMU_MFC_DESC("QCH_CON_LH_AST_MI_OTF2_MFC1MFC0_QCH", 0x18600000, 0x3058),
    TSMUX_CMU_MFC_DESC("QCH_CON_LH_AST_MI_OTF3_MFC1MFC0_QCH", 0x18600000, 0x305c),
    TSMUX_CMU_MFC_DESC("QCH_CON_LH_AST_SI_OTF0_MFC0MFC1_QCH", 0x18600000, 0x3060),
    TSMUX_CMU_MFC_DESC("QCH_CON_LH_AST_SI_OTF1_MFC0MFC1_QCH", 0x18600000, 0x3064),
    TSMUX_CMU_MFC_DESC("QCH_CON_LH_AST_SI_OTF2_MFC0MFC1_QCH", 0x18600000, 0x3068),
    TSMUX_CMU_MFC_DESC("QCH_CON_LH_AST_SI_OTF3_MFC0MFC1_QCH", 0x18600000, 0x306c),
    TSMUX_CMU_MFC_DESC("QCH_CON_LH_ATB_MFC0_QCH_MI", 0x18600000, 0x3070),
    TSMUX_CMU_MFC_DESC("QCH_CON_LH_ATB_MFC0_QCH_SI", 0x18600000, 0x3074),
    TSMUX_CMU_MFC_DESC("QCH_CON_LH_AXI_SI_D0_MFC0_QCH", 0x18600000, 0x3078),
    TSMUX_CMU_MFC_DESC("QCH_CON_LH_AXI_SI_D1_MFC0_QCH", 0x18600000, 0x307c),
    TSMUX_CMU_MFC_DESC("QCH_CON_MFC0_CMU_MFC0_QCH", 0x18600000, 0x3080),
    TSMUX_CMU_MFC_DESC("QCH_CON_MFC0_QCH", 0x18600000, 0x3084),
    TSMUX_CMU_MFC_DESC("QCH_CON_MFC0_QCH_VOTF", 0x18600000, 0x3088),
    TSMUX_CMU_MFC_DESC("QCH_CON_PPMU_MFC0D0_QCH", 0x18600000, 0x308c),
    TSMUX_CMU_MFC_DESC("QCH_CON_PPMU_MFC0D1_QCH", 0x18600000, 0x3090),
    TSMUX_CMU_MFC_DESC("QCH_CON_PPMU_WFD_QCH", 0x18600000, 0x3094),
    TSMUX_CMU_MFC_DESC("QCH_CON_RSTNSYNC_CLK_MFC0_NOCD_LH_AST_MI_OTF0_MFC0_SW_RESET_QCH", 0x18600000, 0x3098),
    TSMUX_CMU_MFC_DESC("QCH_CON_RSTNSYNC_CLK_MFC0_NOCD_LH_AST_MI_OTF1_MFC0_SW_RESET_QCH", 0x18600000, 0x309c),
    TSMUX_CMU_MFC_DESC("QCH_CON_RSTNSYNC_CLK_MFC0_NOCD_LH_AST_MI_OTF2_MFC0_SW_RESET_QCH", 0x18600000, 0x30a0),
    TSMUX_CMU_MFC_DESC("QCH_CON_RSTNSYNC_CLK_MFC0_NOCD_LH_AST_MI_OTF3_MFC0_SW_RESET_QCH", 0x18600000, 0x30a4),
    TSMUX_CMU_MFC_DESC("QCH_CON_RSTNSYNC_CLK_MFC0_NOCD_LH_AST_SI_OTF0_MFC0_SW_RESET_QCH", 0x18600000, 0x30a8),
    TSMUX_CMU_MFC_DESC("QCH_CON_RSTNSYNC_CLK_MFC0_NOCD_LH_AST_SI_OTF1_MFC0_SW_RESET_QCH", 0x18600000, 0x30ac),
    TSMUX_CMU_MFC_DESC("QCH_CON_RSTNSYNC_CLK_MFC0_NOCD_LH_AST_SI_OTF2_MFC0_SW_RESET_QCH", 0x18600000, 0x30b0),
    TSMUX_CMU_MFC_DESC("QCH_CON_RSTNSYNC_CLK_MFC0_NOCD_LH_AST_SI_OTF3_MFC0_SW_RESET_QCH", 0x18600000, 0x30b4),
    TSMUX_CMU_MFC_DESC("QCH_CON_RSTNSYNC_CLK_MFC0_NOCD_LH_ATB_MFC0_MI_SW_RESET_QCH", 0x18600000, 0x30b8),
    TSMUX_CMU_MFC_DESC("QCH_CON_RSTNSYNC_CLK_MFC0_NOCD_LH_ATB_MFC0_SI_SW_RESET_QCH", 0x18600000, 0x30bc),
    TSMUX_CMU_MFC_DESC("QCH_CON_RSTNSYNC_CLK_MFC0_NOCD_MFC0_SW_RESET_QCH", 0x18600000, 0x30c0),
    TSMUX_CMU_MFC_DESC("QCH_CON_RSTNSYNC_CLK_MFC0_NOCD_WFD_SW_RESET_QCH", 0x18600000, 0x30c4),
    TSMUX_CMU_MFC_DESC("QCH_CON_SIU_G_PPMU_MFC0_QCH", 0x18600000, 0x30c8),
    TSMUX_CMU_MFC_DESC("QCH_CON_SLH_ASTL_SI_G_PPMU_MFC0_QCH", 0x18600000, 0x30cc),
    TSMUX_CMU_MFC_DESC("QCH_CON_SLH_AXI_MI_P_MFC0_QCH", 0x18600000, 0x30d0),
    TSMUX_CMU_MFC_DESC("QCH_CON_SYSMMU_MFC0D0_QCH_S1", 0x18600000, 0x30d4),
    TSMUX_CMU_MFC_DESC("QCH_CON_SYSMMU_MFC0D0_QCH_S2", 0x18600000, 0x30d8),
    TSMUX_CMU_MFC_DESC("QCH_CON_SYSMMU_MFC0D1_QCH_S1", 0x18600000, 0x30dc),
    TSMUX_CMU_MFC_DESC("QCH_CON_SYSMMU_MFC0D1_QCH_S2", 0x18600000, 0x30e0),
    TSMUX_CMU_MFC_DESC("QCH_CON_SYSREG_MFC0_QCH", 0x18600000, 0x30e4),
    TSMUX_CMU_MFC_DESC("QCH_CON_VGEN_LITE_MFC0_QCH", 0x18600000, 0x30e8),
    TSMUX_CMU_MFC_DESC("QCH_CON_WFD_QCH", 0x18600000, 0x30f0),
    TSMUX_CMU_MFC_DESC("MFC0_CMU_MFC0_CONTROLLER_OPTION", 0x18600000, 0x0800),
};

u32 tsmux_cmu_mfc_sfr_list_size = ARRAY_SIZE(tsmux_cmu_mfc_sfr_list);

#endif
