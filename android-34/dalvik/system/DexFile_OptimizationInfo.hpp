#pragma once

#include "./DexFile_OptimizationInfo.def.hpp"

namespace dalvik::system
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean DexFile_OptimizationInfo::isFullyCompiled() const
	{
		return callMethod<jboolean>(
			"isFullyCompiled",
			"()Z"
		);
	}
	inline jboolean DexFile_OptimizationInfo::isOptimized() const
	{
		return callMethod<jboolean>(
			"isOptimized",
			"()Z"
		);
	}
	inline jboolean DexFile_OptimizationInfo::isVerified() const
	{
		return callMethod<jboolean>(
			"isVerified",
			"()Z"
		);
	}
} // namespace dalvik::system

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace dalvik::system;
#endif
