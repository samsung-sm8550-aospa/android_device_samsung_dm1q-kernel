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
#ifndef _UAPI_MSM_AUDIO_APE_H
#define _UAPI_MSM_AUDIO_APE_H
#include <linux/types.h>
#define AUDIO_GET_APE_CONFIG _IOR(AUDIO_IOCTL_MAGIC, (AUDIO_MAX_COMMON_IOCTL_NUM + 0), struct msm_audio_ape_config)
#define AUDIO_SET_APE_CONFIG _IOW(AUDIO_IOCTL_MAGIC, (AUDIO_MAX_COMMON_IOCTL_NUM + 1), struct msm_audio_ape_config)
struct msm_audio_ape_config {
  __u16 compatibleVersion;
  __u16 compressionLevel;
  __u32 formatFlags;
  __u32 blocksPerFrame;
  __u32 finalFrameBlocks;
  __u32 totalFrames;
  __u16 bitsPerSample;
  __u16 numChannels;
  __u32 sampleRate;
  __u32 seekTablePresent;
};
#endif
