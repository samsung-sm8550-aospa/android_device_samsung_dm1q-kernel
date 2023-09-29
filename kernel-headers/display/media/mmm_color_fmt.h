/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __MMM_COLOR_FMT_INFO_H__
#define __MMM_COLOR_FMT_INFO_H__
#define INTERLACE_WIDTH_MAX 1920
#define INTERLACE_HEIGHT_MAX 1920
#define INTERLACE_MB_PER_FRAME_MAX ((1920 * 1088) / 256)
#ifndef MMM_COLOR_FMT_ALIGN
#define MMM_COLOR_FMT_ALIGN(__sz,__align) (((__align) & ((__align) - 1)) ? ((((__sz) + (__align) - 1) / (__align)) * (__align)) : (((__sz) + (__align) - 1) & (~((__align) - 1))))
#endif
#ifndef MMM_COLOR_FMT_ROUNDUP
#define MMM_COLOR_FMT_ROUNDUP(__sz,__r) (((__sz) + ((__r) - 1)) / (__r))
#endif
enum mmm_color_fmts {
  MMM_COLOR_FMT_NV12,
  MMM_COLOR_FMT_NV21,
  MMM_COLOR_FMT_NV12_UBWC,
  MMM_COLOR_FMT_NV12_BPP10_UBWC,
  MMM_COLOR_FMT_RGBA8888,
  MMM_COLOR_FMT_RGBA8888_UBWC,
  MMM_COLOR_FMT_RGBA1010102_UBWC,
  MMM_COLOR_FMT_RGB565_UBWC,
  MMM_COLOR_FMT_P010_UBWC,
  MMM_COLOR_FMT_P010,
  MMM_COLOR_FMT_P010_512,
  MMM_COLOR_FMT_NV12_512,
  MMM_COLOR_FMT_RGBA16161616F_UBWC,
};
#endif
