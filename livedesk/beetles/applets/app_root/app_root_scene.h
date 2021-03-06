/*
**************************************************************************************************************
*											         ePDK
*						            the Easy Portable/Player Develop Kits
*									           desktop system
*
*						        	 (c) Copyright 2007-2010, ANDY, China
*											 All Rights Reserved
*
* File    		: app_root_win_scene.h
* By      		: Bayden
* Func		: app_root applets plugin interface define
* Version	: v1.0
* ============================================================================================================
* 2010-9-28 17:11:20  andy.zhang  create this file, implements the fundemental interface;
**************************************************************************************************************
*/

/**********************************************************************************************************************/


typedef struct __dv_sub_res
{
	load_bmp_res_t 	bmp_subset_singal[6];
	load_bmp_res_t  bmp_subset_vol[6];
//	load_bmp_res_t  cam_play_pause[2];
	load_bmp_res_t	rec_cam_bmp[2];			//0: rec, 1: cam
	load_bmp_res_t	rec_status_bmp;
	load_bmp_res_t  sd_card_status[2];		// 0:no, 1:yes
//	load_bmp_res_t	set_logo;
} *dv_sub_res, __dv_sub_res;

#define APP_ROOT_CHECK_MEM_INFO_ID   0x33
#define APP_ROOT_CHECK_MEM_INFO_TIMER_ID 100
#define ID_ROOT_SETTIN_CMMD  6

#define SUPPORT_TV_OUT

H_WIN app_root_wincreate(Activity *activity);

dv_sub_res dv_get_sub_res(void);


