#pragma once

#ifndef ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_ACTIVITYID
#define ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_ACTIVITYID

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::service::voice
{
	class VoiceInteractionSession_ActivityId : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
	};
} // namespace __jni_impl::android::service::voice


namespace __jni_impl::android::service::voice
{
	// Fields
	
	// Constructors
	void VoiceInteractionSession_ActivityId::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.voice.VoiceInteractionSession$ActivityId",
			"(V)V");
	}
	
	// Methods
	jboolean VoiceInteractionSession_ActivityId::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint VoiceInteractionSession_ActivityId::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace __jni_impl::android::service::voice

namespace android::service::voice
{
	class VoiceInteractionSession_ActivityId : public __jni_impl::android::service::voice::VoiceInteractionSession_ActivityId
	{
	public:
		VoiceInteractionSession_ActivityId(QAndroidJniObject obj) { __thiz = obj; }
		VoiceInteractionSession_ActivityId()
		{
			__constructor();
		}
	};
} // namespace android::service::voice

#endif // ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_ACTIVITYID

