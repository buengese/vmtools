#include <linux/ioctl.h>
#include <linux/types.h>

#ifdef __cplusplus
extern "C" {
#endif

#define VMREAD_IOCTL_MAGIC 0x42
#define VMREAD_IOCTL_MAPVMMEM _IOWR(VMREAD_IOCTL_MAGIC, 0, ProcessData)

#ifdef __cplusplus
}
#endif

#endif
