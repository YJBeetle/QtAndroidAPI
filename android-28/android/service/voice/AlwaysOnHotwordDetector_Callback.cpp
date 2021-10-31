#include "./AlwaysOnHotwordDetector_EventPayload.hpp"
#include "./AlwaysOnHotwordDetector_Callback.hpp"

namespace android::service::voice
{
	// Fields
	
	// QAndroidJniObject forward
	AlwaysOnHotwordDetector_Callback::AlwaysOnHotwordDetector_Callback(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AlwaysOnHotwordDetector_Callback::AlwaysOnHotwordDetector_Callback()
		: __JniBaseClass(
			"android.service.voice.AlwaysOnHotwordDetector$Callback",
			"()V"
		) {}
	
	// Methods
	void AlwaysOnHotwordDetector_Callback::onAvailabilityChanged(jint arg0)
	{
		callMethod<void>(
			"onAvailabilityChanged",
			"(I)V",
			arg0
		);
	}
	void AlwaysOnHotwordDetector_Callback::onDetected(android::service::voice::AlwaysOnHotwordDetector_EventPayload arg0)
	{
		callMethod<void>(
			"onDetected",
			"(Landroid/service/voice/AlwaysOnHotwordDetector$EventPayload;)V",
			arg0.object()
		);
	}
	void AlwaysOnHotwordDetector_Callback::onError()
	{
		callMethod<void>(
			"onError",
			"()V"
		);
	}
	void AlwaysOnHotwordDetector_Callback::onRecognitionPaused()
	{
		callMethod<void>(
			"onRecognitionPaused",
			"()V"
		);
	}
	void AlwaysOnHotwordDetector_Callback::onRecognitionResumed()
	{
		callMethod<void>(
			"onRecognitionResumed",
			"()V"
		);
	}
} // namespace android::service::voice

