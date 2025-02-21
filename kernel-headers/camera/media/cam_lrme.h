/*
 * This file is auto-generated. Modifications will be lost.
 *
 * See https://android.googlesource.com/platform/bionic/+/master/libc/kernel/
 * for more information.
 */
#ifndef __UAPI_CAM_LRME_H__
#define __UAPI_CAM_LRME_H__
#include <media/cam_defs.h>
enum CAM_LRME_IO_TYPE {
  CAM_LRME_IO_TYPE_TAR,
  CAM_LRME_IO_TYPE_REF,
  CAM_LRME_IO_TYPE_RES,
  CAM_LRME_IO_TYPE_DS2,
};
#define CAM_LRME_INPUT_PORT_TYPE_TAR (1 << 0)
#define CAM_LRME_INPUT_PORT_TYPE_REF (1 << 1)
#define CAM_LRME_OUTPUT_PORT_TYPE_DS2 (1 << 0)
#define CAM_LRME_OUTPUT_PORT_TYPE_RES (1 << 1)
#define CAM_LRME_DEV_MAX 1
struct cam_lrme_hw_version {
  __u32 gen;
  __u32 rev;
  __u32 step;
};
struct cam_lrme_dev_cap {
  struct cam_lrme_hw_version clc_hw_version;
  struct cam_lrme_hw_version bus_rd_hw_version;
  struct cam_lrme_hw_version bus_wr_hw_version;
  struct cam_lrme_hw_version top_hw_version;
  struct cam_lrme_hw_version top_titan_version;
};
struct cam_lrme_query_cap_cmd {
  struct cam_iommu_handle device_iommu;
  struct cam_iommu_handle cdm_iommu;
  __u32 num_devices;
  struct cam_lrme_dev_cap dev_caps[CAM_LRME_DEV_MAX];
};
struct cam_lrme_soc_info {
  __u64 clock_rate;
  __u64 bandwidth;
  __u64 reserved[4];
};
struct cam_lrme_acquire_args {
  struct cam_lrme_soc_info lrme_soc_info;
};
#endif
