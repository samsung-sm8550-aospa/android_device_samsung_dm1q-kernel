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
#ifndef _UAPI_MSM_AUDIO_SBC_H
#define _UAPI_MSM_AUDIO_SBC_H
#include <audio/linux/msm_audio.h>
#include <linux/types.h>
#define AUDIO_SET_SBC_ENC_CONFIG _IOW(AUDIO_IOCTL_MAGIC, (AUDIO_MAX_COMMON_IOCTL_NUM + 0), struct msm_audio_sbc_enc_config)
#define AUDIO_GET_SBC_ENC_CONFIG _IOR(AUDIO_IOCTL_MAGIC, (AUDIO_MAX_COMMON_IOCTL_NUM + 1), struct msm_audio_sbc_enc_config)
#define AUDIO_SBC_BA_LOUDNESS 0x0
#define AUDIO_SBC_BA_SNR 0x1
#define AUDIO_SBC_MODE_MONO 0x0
#define AUDIO_SBC_MODE_DUAL 0x1
#define AUDIO_SBC_MODE_STEREO 0x2
#define AUDIO_SBC_MODE_JSTEREO 0x3
#define AUDIO_SBC_BANDS_8 0x1
#define AUDIO_SBC_BLOCKS_4 0x0
#define AUDIO_SBC_BLOCKS_8 0x1
#define AUDIO_SBC_BLOCKS_12 0x2
#define AUDIO_SBC_BLOCKS_16 0x3
struct msm_audio_sbc_enc_config {
  __u32 channels;
  __u32 sample_rate;
  __u32 bit_allocation;
  __u32 number_of_subbands;
  __u32 number_of_blocks;
  __u32 bit_rate;
  __u32 mode;
};
#endif
