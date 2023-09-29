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
#ifndef _LINUX_GUNYAH
#define _LINUX_GUNYAH
#include <linux/types.h>
#include <linux/ioctl.h>
#include <linux/virtio_types.h>
#define GH_IOCTL_TYPE 0xB2
#define GH_VM_FW_NAME_MAX 16
struct gh_fw_name {
  char name[GH_VM_FW_NAME_MAX];
};
#define VBE_ASSIGN_IOEVENTFD 1
#define VBE_DEASSIGN_IOEVENTFD 2
#define VBE_ASSIGN_IRQFD 1
#define VBE_DEASSIGN_IRQFD 2
#define EVENT_NEW_BUFFER 1
#define EVENT_RESET_RQST 2
#define EVENT_INTERRUPT_ACK 4
#define EVENT_DRIVER_OK 8
#define EVENT_DRIVER_FAILED 0x10
#define EVENT_MODULE_EXIT 0x20
#define EVENT_VM_EXIT 0x40
#define EVENT_APP_EXIT 0x100
#define GH_VM_EXIT_REASON_UNKNOWN 0
#define GH_VM_EXIT_REASON_SHUTDOWN 1
#define GH_VM_EXIT_REASON_RESTART 2
#define GH_VM_EXIT_REASON_PANIC 3
#define GH_VM_EXIT_REASON_NSWD 4
#define GH_VM_EXIT_REASON_HYP_ERROR 5
#define GH_VM_EXIT_REASON_ASYNC_EXT_ABORT 6
#define GH_VM_EXIT_REASON_FORCE_STOPPED 7
#define GH_VM_EXIT_REASONS_MAX 8
#define GH_CREATE_VM _IO(GH_IOCTL_TYPE, 0x01)
#define GH_CREATE_VCPU _IO(GH_IOCTL_TYPE, 0x40)
#define GH_VM_SET_FW_NAME _IOW(GH_IOCTL_TYPE, 0x41, struct gh_fw_name)
#define GH_VM_GET_FW_NAME _IOR(GH_IOCTL_TYPE, 0x42, struct gh_fw_name)
#define GH_VM_GET_VCPU_COUNT _IO(GH_IOCTL_TYPE, 0x43)
#define GH_GET_SHARED_MEMORY_SIZE _IOR(GH_IOCTL_TYPE, 0x61, __u64)
#define GH_IOEVENTFD _IOW(GH_IOCTL_TYPE, 0x62, struct virtio_eventfd)
#define GH_IRQFD _IOW(GH_IOCTL_TYPE, 0x63, struct virtio_irqfd)
#define GH_WAIT_FOR_EVENT _IOWR(GH_IOCTL_TYPE, 0x64, struct virtio_event)
#define GH_SET_DEVICE_FEATURES _IOW(GH_IOCTL_TYPE, 0x65, struct virtio_dev_features)
#define GH_SET_QUEUE_NUM_MAX _IOW(GH_IOCTL_TYPE, 0x66, struct virtio_queue_max)
#define GH_SET_DEVICE_CONFIG_DATA _IOW(GH_IOCTL_TYPE, 0x67, struct virtio_config_data)
#define GH_GET_DRIVER_CONFIG_DATA _IOWR(GH_IOCTL_TYPE, 0x68, struct virtio_config_data)
#define GH_GET_QUEUE_INFO _IOWR(GH_IOCTL_TYPE, 0x69, struct virtio_queue_info)
#define GH_GET_DRIVER_FEATURES _IOWR(GH_IOCTL_TYPE, 0x6a, struct virtio_driver_features)
#define GH_ACK_DRIVER_OK _IOWR(GH_IOCTL_TYPE, 0x6b, __u32)
#define GH_ACK_RESET _IOW(GH_IOCTL_TYPE, 0x6d, struct virtio_ack_reset)
#define GH_VCPU_RUN _IO(GH_IOCTL_TYPE, 0x80)
struct virtio_ack_reset {
  __u32 label;
  __u32 reserved;
};
struct virtio_driver_features {
  __u32 label;
  __u32 reserved;
  __u32 features_sel;
  __u32 features;
};
struct virtio_queue_info {
  __u32 label;
  __u32 queue_sel;
  __u32 queue_num;
  __u32 queue_ready;
  __u64 queue_desc;
  __u64 queue_driver;
  __u64 queue_device;
};
struct virtio_config_data {
  __u32 label;
  __u32 config_size;
  __u64 config_data;
};
struct virtio_dev_features {
  __u32 label;
  __u32 reserved;
  __u32 features_sel;
  __u32 features;
};
struct virtio_queue_max {
  __u32 label;
  __u32 reserved;
  __u32 queue_sel;
  __u32 queue_num_max;
};
struct virtio_event {
  __u32 label;
  __u32 event;
  __u32 event_data;
  __u32 reserved;
};
struct virtio_eventfd {
  __u32 label;
  __u32 flags;
  __u32 queue_num;
  __s32 fd;
};
struct virtio_irqfd {
  __u32 label;
  __u32 flags;
  __s32 fd;
  __u32 reserved;
};
#endif
