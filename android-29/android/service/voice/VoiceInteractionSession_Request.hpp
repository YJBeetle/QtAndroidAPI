#pragma once

#ifndef ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_REQUEST
#define ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_REQUEST

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::service::voice
{
	class VoiceInteractionSession_Request : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		jboolean isActive();
		void cancel();
		QAndroidJniObject getExtras();
		QAndroidJniObject getCallingPackage();
		jint getCallingUid();
	};
} // namespace __jni_impl::android::service::voice

#include "../../os/Bundle.hpp"

namespace __jni_impl::android::service::voice
{
	// Fields
	
	// Constructors
	void VoiceInteractionSession_Request::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.voice.VoiceInteractionSession$Request",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject VoiceInteractionSession_Request::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jboolean VoiceInteractionSession_Request::isActive()
	{
		return __thiz.callMethod<jboolean>(
			"isActive",
			"()Z");
	}
	void VoiceInteractionSession_Request::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V");
	}
	QAndroidJniObject VoiceInteractionSession_Request::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;");
	}
	QAndroidJniObject VoiceInteractionSession_Request::getCallingPackage()
	{
		return __thiz.callObjectMethod(
			"getCallingPackage",
			"()Ljava/lang/String;");
	}
	jint VoiceInteractionSession_Request::getCallingUid()
	{
		return __thiz.callMethod<jint>(
			"getCallingUid",
			"()I");
	}
} // namespace __jni_impl::android::service::voice

namespace android::service::voice
{
	class VoiceInteractionSession_Request : public __jni_impl::android::service::voice::VoiceInteractionSession_Request
	{
	public:
		VoiceInteractionSession_Request(QAndroidJniObject obj) { __thiz = obj; }
		VoiceInteractionSession_Request()
		{
			__constructor();
		}
	};
} // namespace android::service::voice

#endif // ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_REQUEST

