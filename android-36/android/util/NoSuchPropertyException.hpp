#pragma once

#include "../../JString.hpp"
#include "./NoSuchPropertyException.def.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	inline NoSuchPropertyException::NoSuchPropertyException(JString arg0)
		: java::lang::RuntimeException(
			"android.util.NoSuchPropertyException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::util

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::util;
#endif
