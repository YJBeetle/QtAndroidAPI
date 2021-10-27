#include "./AlwaysOnHotwordDetector_EventPayload.hpp"
#include "./AlwaysOnHotwordDetector_Callback.hpp"

namespace android::service::voice
{
	// Fields
	
	AlwaysOnHotwordDetector_Callback::AlwaysOnHotwordDetector_Callback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AlwaysOnHotwordDetector_Callback::AlwaysOnHotwordDetector_Callback()
	{
		__thiz = QAndroidJniObject(
			"android.service.voice.AlwaysOnHotwordDetector$Callback",
			"()V"
		);
	}
	
	// Methods
	void AlwaysOnHotwordDetector_Callback::onAvailabilityChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onAvailabilityChanged",
			"(I)V",
			arg0
		);
	}
	void AlwaysOnHotwordDetector_Callback::onDetected(android::service::voice::AlwaysOnHotwordDetector_EventPayload arg0)
	{
		__thiz.callMethod<void>(
			"onDetected",
			"(Landroid/service/voice/AlwaysOnHotwordDetector$EventPayload;)V",
			arg0.__jniObject().object()
		);
	}
	void AlwaysOnHotwordDetector_Callback::onError()
	{
		__thiz.callMethod<void>(
			"onError",
			"()V"
		);
	}
	void AlwaysOnHotwordDetector_Callback::onRecognitionPaused()
	{
		__thiz.callMethod<void>(
			"onRecognitionPaused",
			"()V"
		);
	}
	void AlwaysOnHotwordDetector_Callback::onRecognitionResumed()
	{
		__thiz.callMethod<void>(
			"onRecognitionResumed",
			"()V"
		);
	}
} // namespace android::service::voice

