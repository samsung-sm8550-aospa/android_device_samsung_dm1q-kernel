/*
 * This file is auto-generated. Modifications will be lost.
 *
 * See https://android.googlesource.com/platform/bionic/+/master/libc/kernel/
 * for more information.
 */
#ifndef __VOICE_PARAMS_H__
#define __VOICE_PARAMS_H__
#include <linux/types.h>
enum voice_lch_mode {
  VOICE_LCH_START = 1,
  VOICE_LCH_STOP
};
#define SNDRV_VOICE_IOCTL_LCH _IOW('U', 0x00, enum voice_lch_mode)
#endif
