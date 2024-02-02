#pragma once

#include "./DexFile_OptimizationInfo.def.hpp"
#include "./ApplicationRuntime.def.hpp"

namespace dalvik::system
{
	// Fields
	
	// Constructors
	
	// Methods
	inline dalvik::system::DexFile_OptimizationInfo ApplicationRuntime::getBaseApkOptimizationInfo()
	{
		return callStaticObjectMethod(
			"dalvik.system.ApplicationRuntime",
			"getBaseApkOptimizationInfo",
			"()Ldalvik/system/DexFile$OptimizationInfo;"
		);
	}
} // namespace dalvik::system

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace dalvik::system;
#endif
