// Platform Windows x64
#if defined(_WIN64)

	#define DS_PLATFORM_WINDOWS_64
	#define DS_PLATFORM_NAME "windows"

// Platform Windows x32
#elif defined(_WIN32)

	#define DS_PLATFORM_WINDOWS_32
	#define DS_PLATFORM_NAME "windows"

// Platform Windows CygWin
#elif defined(__CYGWIN__) && !defined(_WIN32)
	#define DS_PLATFORM_CYGWIN
	#define DS_PLATFORM_NAME "windows"

// Platform: Android
#elif defined(__ANDROID__)
	#define DS_PLATFORM_ANDROID
	#define DS_PLATFORM_NAME "android"

// Platform: Linux
#elif defined(__linux__)
	#define DS_PLATFORM_LINUX
	#define DS_PLATFORM_NAME "linux"

// Platform Unix
#elif defined(unix) || !defined(__APPLE__) && defined(__MACH__)
	#include <sys/param.h>
	#if defined(BSD)
		#define DS_PLATFORM_BSD
		#define DS_PLATFORM_NAME "bsd"
	#endif

// Platform: HP-UX
#elif defined(_hpux)
	#define DS_PLATFORM_HPUX
	#define DS_PLATFORM_NAME "hp-ux"

// Platform: IBM AIX
#elif defined(_AIX)
	#define BS_PLATFORM_AIX
	#define DS_PLATFORM_NAME "aix"

// Platform: MacOS X
#elif defined(__APPLE__) && defined(__MACH__)
	#include <TargetConditionals.h>
	#if TARGET_IPHONE_SIMULATOR == 1 || TARGET_OS_IPHONE == 1
		#define DS_PLATFORM_IOS
		#define DS_PLATFORM_NAME "ios"
	#elif TARGET_OS_MAC == 1
		#define DS_PLATFORM_OSX
		#define DS_PLATFORM_NAME "osx"
	#endif

// Platform: Oracle Solaris
#elif defined(__sun) && defined(__SVR4)
	#define DS_PLATFORM_SOLARIS
	#define DS_PLATFORM_NAME "solaris"

// Platform: Unknown
#else
	#define DS_PLATFORM_UNKNOWN
	#define DS_PLATFORM_NAME NULL

#endif

namespace Destiny {

	const char* GetPlatformName() { return (DS_PLATFORM_NAME == NULL) ? "" : DS_PLATFORM_NAME; }
	
}