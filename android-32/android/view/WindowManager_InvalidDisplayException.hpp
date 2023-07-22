#pragma once

#include "../../JString.hpp"
#include "./WindowManager_InvalidDisplayException.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	inline WindowManager_InvalidDisplayException::WindowManager_InvalidDisplayException()
		: java::lang::RuntimeException(
			"android.view.WindowManager$InvalidDisplayException",
			"()V"
		) {}
	inline WindowManager_InvalidDisplayException::WindowManager_InvalidDisplayException(JString arg0)
		: java::lang::RuntimeException(
			"android.view.WindowManager$InvalidDisplayException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::view

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
