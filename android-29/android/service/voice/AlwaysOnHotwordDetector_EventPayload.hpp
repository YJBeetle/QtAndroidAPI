#pragma once

#ifndef ANDROID_SERVICE_VOICE_ALWAYSONHOTWORDDETECTOR_EVENTPAYLOAD
#define ANDROID_SERVICE_VOICE_ALWAYSONHOTWORDDETECTOR_EVENTPAYLOAD

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class AudioFormat;
}

namespace __jni_impl::android::service::voice
{
	class AlwaysOnHotwordDetector_EventPayload : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getCaptureAudioFormat();
		QAndroidJniObject getTriggerAudio();
	};
} // namespace __jni_impl::android::service::voice

#include "../../media/AudioFormat.hpp"

namespace __jni_impl::android::service::voice
{
	// Fields
	
	// Constructors
	void AlwaysOnHotwordDetector_EventPayload::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.voice.AlwaysOnHotwordDetector$EventPayload",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject AlwaysOnHotwordDetector_EventPayload::getCaptureAudioFormat()
	{
		return __thiz.callObjectMethod(
			"getCaptureAudioFormat",
			"()Landroid/media/AudioFormat;");
	}
	QAndroidJniObject AlwaysOnHotwordDetector_EventPayload::getTriggerAudio()
	{
		return __thiz.callObjectMethod(
			"getTriggerAudio",
			"()[B");
	}
} // namespace __jni_impl::android::service::voice

namespace android::service::voice
{
	class AlwaysOnHotwordDetector_EventPayload : public __jni_impl::android::service::voice::AlwaysOnHotwordDetector_EventPayload
	{
	public:
		AlwaysOnHotwordDetector_EventPayload(QAndroidJniObject obj) { __thiz = obj; }
		AlwaysOnHotwordDetector_EventPayload()
		{
			__constructor();
		}
	};
} // namespace android::service::voice

#endif // ANDROID_SERVICE_VOICE_ALWAYSONHOTWORDDETECTOR_EVENTPAYLOAD

