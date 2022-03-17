#pragma once

#include "../../java/lang/Exception.def.hpp"
#include "../../JString.hpp"
#include "./BadParcelableException.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	inline BadParcelableException::BadParcelableException(java::lang::Exception arg0)
		: android::util::AndroidRuntimeException(
			"android.os.BadParcelableException",
			"(Ljava/lang/Exception;)V",
			arg0.object()
		) {}
	inline BadParcelableException::BadParcelableException(JString arg0)
		: android::util::AndroidRuntimeException(
			"android.os.BadParcelableException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::os

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../util/AndroidRuntimeException.hpp"

