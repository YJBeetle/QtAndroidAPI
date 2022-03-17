#pragma once

#include "../../JString.hpp"
#include "./ParcelFormatException.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	inline ParcelFormatException::ParcelFormatException()
		: java::lang::RuntimeException(
			"android.os.ParcelFormatException",
			"()V"
		) {}
	inline ParcelFormatException::ParcelFormatException(JString arg0)
		: java::lang::RuntimeException(
			"android.os.ParcelFormatException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::os

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
