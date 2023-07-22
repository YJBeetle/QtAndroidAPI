#pragma once

#include "../../java/lang/Exception.def.hpp"
#include "../../JString.hpp"
#include "./IntentSender_SendIntentException.def.hpp"

namespace android::content
{
	// Fields
	
	// Constructors
	inline IntentSender_SendIntentException::IntentSender_SendIntentException()
		: android::util::AndroidException(
			"android.content.IntentSender$SendIntentException",
			"()V"
		) {}
	inline IntentSender_SendIntentException::IntentSender_SendIntentException(java::lang::Exception arg0)
		: android::util::AndroidException(
			"android.content.IntentSender$SendIntentException",
			"(Ljava/lang/Exception;)V",
			arg0.object()
		) {}
	inline IntentSender_SendIntentException::IntentSender_SendIntentException(JString arg0)
		: android::util::AndroidException(
			"android.content.IntentSender$SendIntentException",
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
