#pragma once

#include "../../JString.hpp"
#include "./IntentFilter_MalformedMimeTypeException.def.hpp"

namespace android::content
{
	// Fields
	
	// Constructors
	inline IntentFilter_MalformedMimeTypeException::IntentFilter_MalformedMimeTypeException()
		: android::util::AndroidException(
			"android.content.IntentFilter$MalformedMimeTypeException",
			"()V"
		) {}
	inline IntentFilter_MalformedMimeTypeException::IntentFilter_MalformedMimeTypeException(JString arg0)
		: android::util::AndroidException(
			"android.content.IntentFilter$MalformedMimeTypeException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::content

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../util/AndroidException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content;
#endif
