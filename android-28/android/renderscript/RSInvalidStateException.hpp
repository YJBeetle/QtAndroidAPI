#pragma once

#include "../../JString.hpp"
#include "./RSInvalidStateException.def.hpp"

namespace android::renderscript
{
	// Fields
	
	// Constructors
	inline RSInvalidStateException::RSInvalidStateException(JString arg0)
		: android::renderscript::RSRuntimeException(
			"android.renderscript.RSInvalidStateException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::renderscript

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "./RSRuntimeException.hpp"

