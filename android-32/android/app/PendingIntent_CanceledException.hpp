#pragma once

#include "../../java/lang/Exception.def.hpp"
#include "../../JString.hpp"
#include "./PendingIntent_CanceledException.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline PendingIntent_CanceledException::PendingIntent_CanceledException()
		: android::util::AndroidException(
			"android.app.PendingIntent$CanceledException",
			"()V"
		) {}
	inline PendingIntent_CanceledException::PendingIntent_CanceledException(java::lang::Exception arg0)
		: android::util::AndroidException(
			"android.app.PendingIntent$CanceledException",
			"(Ljava/lang/Exception;)V",
			arg0.object()
		) {}
	inline PendingIntent_CanceledException::PendingIntent_CanceledException(JString arg0)
		: android::util::AndroidException(
			"android.app.PendingIntent$CanceledException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::app

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../util/AndroidException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
