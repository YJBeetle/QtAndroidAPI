#pragma once

#include "../../JString.hpp"
#include "./RSRuntimeException.def.hpp"

namespace android::renderscript
{
	// Fields
	
	// Constructors
	inline RSRuntimeException::RSRuntimeException(JString arg0)
		: java::lang::RuntimeException(
			"android.renderscript.RSRuntimeException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::renderscript

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"

