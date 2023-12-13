#pragma once

#ifdef RX_PLATFORM_WINDOWS
	#ifdef RX_BUILD_DLL
		#define RENDRX_API __declspec(dllexport)
	#else
		#define RENDRX_API __declspec(dllimport)
	#endif
#else
	#error RENDRX ONLY SUPPORTS WINDOWS!
#endif