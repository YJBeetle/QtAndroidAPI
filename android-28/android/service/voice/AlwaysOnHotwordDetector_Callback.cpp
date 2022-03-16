#include "./AlwaysOnHotwordDetector_EventPayload.hpp"
#include "./AlwaysOnHotwordDetector_Callback.hpp"

namespace android::service::voice
{
	// Fields
	
	// Constructors
	AlwaysOnHotwordDetector_Callback::AlwaysOnHotwordDetector_Callback()
		: JObject(
			"android.service.voice.AlwaysOnHotwordDetector$Callback",
			"()V"
		) {}
	
	// Methods
	void AlwaysOnHotwordDetector_Callback::onAvailabilityChanged(jint arg0) const
	{
		callMethod<void>(
			"onAvailabilityChanged",
			"(I)V",
			arg0
		);
	}
	void AlwaysOnHotwordDetector_Callback::onDetected(android::service::voice::AlwaysOnHotwordDetector_EventPayload arg0) const
	{
		callMethod<void>(
			"onDetected",
			"(Landroid/service/voice/AlwaysOnHotwordDetector$EventPayload;)V",
			arg0.object()
		);
	}
	void AlwaysOnHotwordDetector_Callback::onError() const
	{
		callMethod<void>(
			"onError",
			"()V"
		);
	}
	void AlwaysOnHotwordDetector_Callback::onRecognitionPaused() const
	{
		callMethod<void>(
			"onRecognitionPaused",
			"()V"
		);
	}
	void AlwaysOnHotwordDetector_Callback::onRecognitionResumed() const
	{
		callMethod<void>(
			"onRecognitionResumed",
			"()V"
		);
	}
} // namespace android::service::voice

