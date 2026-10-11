/* sys/fileport.h — stub for building outside Apple's private SDK.
 * These symbols live in libsystem_kernel (private API); we only need the
 * declarations to satisfy the compiler.
 */
#ifndef _SYS_FILEPORT_H_
#define _SYS_FILEPORT_H_

#include <mach/mach.h>

typedef mach_port_t fileport_t;
#define FILEPORT_NULL ((fileport_t)0)

#ifdef __cplusplus
extern "C" {
#endif

extern int fileport_makeport(int fd, fileport_t *portp);
extern int fileport_makefd(fileport_t port);

#ifdef __cplusplus
}
#endif

#endif /* _SYS_FILEPORT_H_ */
