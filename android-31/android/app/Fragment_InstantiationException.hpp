#pragma once

#include "../../java/lang/Exception.def.hpp"
#include "../../JString.hpp"
#include "./Fragment_InstantiationException.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline Fragment_InstantiationException::Fragment_InstantiationException(JString arg0, java::lang::Exception arg1)
		: android::util::AndroidRuntimeException(
			"android.app.Fragment$InstantiationException",
			"(Ljava/lang/String;Ljava/lang/Exception;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
} // namespace android::app

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../util/AndroidRuntimeException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
