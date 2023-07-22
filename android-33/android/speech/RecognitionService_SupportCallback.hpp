#pragma once

#include "./RecognitionSupport.def.hpp"
#include "./RecognitionService_SupportCallback.def.hpp"

namespace android::speech
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void RecognitionService_SupportCallback::onError(jint arg0) const
	{
		callMethod<void>(
			"onError",
			"(I)V",
			arg0
		);
	}
	inline void RecognitionService_SupportCallback::onSupportResult(android::speech::RecognitionSupport arg0) const
	{
		callMethod<void>(
			"onSupportResult",
			"(Landroid/speech/RecognitionSupport;)V",
			arg0.object()
		);
	}
} // namespace android::speech

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::speech;
#endif
