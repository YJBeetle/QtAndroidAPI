#pragma once

#ifndef ANDROID_SERVICE_VOICE_ALWAYSONHOTWORDDETECTOR_CALLBACK
#define ANDROID_SERVICE_VOICE_ALWAYSONHOTWORDDETECTOR_CALLBACK

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::service::voice
{
	class AlwaysOnHotwordDetector_EventPayload;
}

namespace __jni_impl::android::service::voice
{
	class AlwaysOnHotwordDetector_Callback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onError();
		void onAvailabilityChanged(jint arg0);
		void onDetected(__jni_impl::android::service::voice::AlwaysOnHotwordDetector_EventPayload arg0);
		void onRecognitionPaused();
		void onRecognitionResumed();
	};
} // namespace __jni_impl::android::service::voice

#include "AlwaysOnHotwordDetector_EventPayload.hpp"

namespace __jni_impl::android::service::voice
{
	// Fields
	
	// Constructors
	void AlwaysOnHotwordDetector_Callback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.voice.AlwaysOnHotwordDetector$Callback",
			"()V"
		);
	}
	
	// Methods
	void AlwaysOnHotwordDetector_Callback::onError()
	{
		__thiz.callMethod<void>(
			"onError",
			"()V"
		);
	}
	void AlwaysOnHotwordDetector_Callback::onAvailabilityChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onAvailabilityChanged",
			"(I)V",
			arg0
		);
	}
	void AlwaysOnHotwordDetector_Callback::onDetected(__jni_impl::android::service::voice::AlwaysOnHotwordDetector_EventPayload arg0)
	{
		__thiz.callMethod<void>(
			"onDetected",
			"(Landroid/service/voice/AlwaysOnHotwordDetector$EventPayload;)V",
			arg0.__jniObject().object()
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
} // namespace __jni_impl::android::service::voice

namespace android::service::voice
{
	class AlwaysOnHotwordDetector_Callback : public __jni_impl::android::service::voice::AlwaysOnHotwordDetector_Callback
	{
	public:
		AlwaysOnHotwordDetector_Callback(QAndroidJniObject obj) { __thiz = obj; }
		AlwaysOnHotwordDetector_Callback()
		{
			__constructor();
		}
	};
} // namespace android::service::voice

#endif // ANDROID_SERVICE_VOICE_ALWAYSONHOTWORDDETECTOR_CALLBACK

