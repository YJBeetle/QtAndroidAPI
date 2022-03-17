#pragma once

#include "../../JString.hpp"
#include "./ActivityNotFoundException.def.hpp"

namespace android::content
{
	// Fields
	
	// Constructors
	inline ActivityNotFoundException::ActivityNotFoundException()
		: java::lang::RuntimeException(
			"android.content.ActivityNotFoundException",
			"()V"
		) {}
	inline ActivityNotFoundException::ActivityNotFoundException(JString arg0)
		: java::lang::RuntimeException(
			"android.content.ActivityNotFoundException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::content

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"

