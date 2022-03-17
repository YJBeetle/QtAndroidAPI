#pragma once

#include "../../JString.hpp"
#include "./WindowManager_BadTokenException.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	inline WindowManager_BadTokenException::WindowManager_BadTokenException()
		: java::lang::RuntimeException(
			"android.view.WindowManager$BadTokenException",
			"()V"
		) {}
	inline WindowManager_BadTokenException::WindowManager_BadTokenException(JString arg0)
		: java::lang::RuntimeException(
			"android.view.WindowManager$BadTokenException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::view

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"

