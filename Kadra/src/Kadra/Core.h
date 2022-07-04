#pragma once

#ifdef KD_PLATFORM_WINDOWS
	#ifdef KD_BUILD_DLL
		#define KADRA_API __declspec(dllexport)
	#else
		#define KADRA_API __declspec(dllimport)
	#endif // KD_BUILD_DLL
#else
	#error Kadra only supports Windows
#endif // KD_PLATFORM_WINDOWS
