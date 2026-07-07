#pragma once

#include "./ZipPathValidator.def.hpp"

namespace dalvik::system
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void ZipPathValidator::clearCallback()
	{
		callStaticMethod<void>(
			"dalvik.system.ZipPathValidator",
			"clearCallback",
			"()V"
		);
	}
	inline void ZipPathValidator::setCallback(JObject arg0)
	{
		callStaticMethod<void>(
			"dalvik.system.ZipPathValidator",
			"setCallback",
			"(Ldalvik/system/ZipPathValidator$Callback;)V",
			arg0.object()
		);
	}
} // namespace dalvik::system

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace dalvik::system;
#endif
