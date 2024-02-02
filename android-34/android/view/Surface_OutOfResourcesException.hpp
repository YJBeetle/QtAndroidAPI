#pragma once

#include "../../JString.hpp"
#include "./Surface_OutOfResourcesException.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	inline Surface_OutOfResourcesException::Surface_OutOfResourcesException()
		: java::lang::RuntimeException(
			"android.view.Surface$OutOfResourcesException",
			"()V"
		) {}
	inline Surface_OutOfResourcesException::Surface_OutOfResourcesException(JString arg0)
		: java::lang::RuntimeException(
			"android.view.Surface$OutOfResourcesException",
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
