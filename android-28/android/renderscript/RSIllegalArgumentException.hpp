#pragma once

#include "../../JString.hpp"
#include "./RSIllegalArgumentException.def.hpp"

namespace android::renderscript
{
	// Fields
	
	// Constructors
	inline RSIllegalArgumentException::RSIllegalArgumentException(JString arg0)
		: android::renderscript::RSRuntimeException(
			"android.renderscript.RSIllegalArgumentException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::renderscript

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "./RSRuntimeException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::renderscript;
#endif
