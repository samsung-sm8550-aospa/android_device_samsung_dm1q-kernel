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
#ifndef _LINUX_QTI_VIRTIO_MEM_H
#define _LINUX_QTI_VIRTIO_MEM_H
#include <linux/ioctl.h>
#include <linux/types.h>
#define QTI_VIRTIO_MEM_IOC_MAGIC 'M'
#define QTI_VIRTIO_MEM_IOC_MAX_NAME_LEN 128
struct qti_virtio_mem_ioc_hint_create_arg {
  char name[QTI_VIRTIO_MEM_IOC_MAX_NAME_LEN];
  __s64 size;
  __u32 fd;
  __u32 reserved0;
  __u64 reserved1;
};
#define QTI_VIRTIO_MEM_IOC_HINT_CREATE _IOWR(QTI_VIRTIO_MEM_IOC_MAGIC, 0, struct qti_virtio_mem_ioc_hint_create_arg)
#endif
