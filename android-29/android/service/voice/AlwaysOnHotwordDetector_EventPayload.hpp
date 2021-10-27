#pragma once

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
		jbyteArray getTriggerAudio();
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
			"()Landroid/media/AudioFormat;"
		);
	}
	jbyteArray AlwaysOnHotwordDetector_EventPayload::getTriggerAudio()
	{
		return __thiz.callObjectMethod(
			"getTriggerAudio",
			"()[B"
		).object<jbyteArray>();
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

