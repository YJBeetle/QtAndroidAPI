#pragma once

#include "./AlwaysOnHotwordDetector_EventPayload.def.hpp"
#include "./AlwaysOnHotwordDetector_Callback.def.hpp"

namespace android::service::voice
{
	// Fields
	
	// Constructors
	inline AlwaysOnHotwordDetector_Callback::AlwaysOnHotwordDetector_Callback()
		: JObject(
			"android.service.voice.AlwaysOnHotwordDetector$Callback",
			"()V"
		) {}
	
	// Methods
	inline void AlwaysOnHotwordDetector_Callback::onAvailabilityChanged(jint arg0) const
	{
		callMethod<void>(
			"onAvailabilityChanged",
			"(I)V",
			arg0
		);
	}
	inline void AlwaysOnHotwordDetector_Callback::onDetected(android::service::voice::AlwaysOnHotwordDetector_EventPayload arg0) const
	{
		callMethod<void>(
			"onDetected",
			"(Landroid/service/voice/AlwaysOnHotwordDetector$EventPayload;)V",
			arg0.object()
		);
	}
	inline void AlwaysOnHotwordDetector_Callback::onError() const
	{
		callMethod<void>(
			"onError",
			"()V"
		);
	}
	inline void AlwaysOnHotwordDetector_Callback::onRecognitionPaused() const
	{
		callMethod<void>(
			"onRecognitionPaused",
			"()V"
		);
	}
	inline void AlwaysOnHotwordDetector_Callback::onRecognitionResumed() const
	{
		callMethod<void>(
			"onRecognitionResumed",
			"()V"
		);
	}
} // namespace android::service::voice

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::voice;
#endif
