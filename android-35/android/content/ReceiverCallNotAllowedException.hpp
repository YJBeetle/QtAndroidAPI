#pragma once

#include "../../JString.hpp"
#include "./ReceiverCallNotAllowedException.def.hpp"

namespace android::content
{
	// Fields
	
	// Constructors
	inline ReceiverCallNotAllowedException::ReceiverCallNotAllowedException(JString arg0)
		: android::util::AndroidRuntimeException(
			"android.content.ReceiverCallNotAllowedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::content

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../util/AndroidRuntimeException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content;
#endif
