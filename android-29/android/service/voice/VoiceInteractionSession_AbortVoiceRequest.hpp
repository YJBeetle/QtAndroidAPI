#pragma once

#ifndef ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_ABORTVOICEREQUEST
#define ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_ABORTVOICEREQUEST

#include "../../../__JniBaseClass.hpp"
#include "VoiceInteractionSession_Request.hpp"

namespace __jni_impl::android::app
{
	class VoiceInteractor_Prompt;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::service::voice
{
	class VoiceInteractionSession_AbortVoiceRequest : public __jni_impl::android::service::voice::VoiceInteractionSession_Request
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getMessage();
		QAndroidJniObject getVoicePrompt();
		void sendAbortResult(__jni_impl::android::os::Bundle arg0);
	};
} // namespace __jni_impl::android::service::voice

#include "../../app/VoiceInteractor_Prompt.hpp"
#include "../../os/Bundle.hpp"

namespace __jni_impl::android::service::voice
{
	// Fields
	
	// Constructors
	void VoiceInteractionSession_AbortVoiceRequest::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.voice.VoiceInteractionSession$AbortVoiceRequest",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject VoiceInteractionSession_AbortVoiceRequest::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/CharSequence;");
	}
	QAndroidJniObject VoiceInteractionSession_AbortVoiceRequest::getVoicePrompt()
	{
		return __thiz.callObjectMethod(
			"getVoicePrompt",
			"()Landroid/app/VoiceInteractor$Prompt;");
	}
	void VoiceInteractionSession_AbortVoiceRequest::sendAbortResult(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"sendAbortResult",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::service::voice

namespace android::service::voice
{
	class VoiceInteractionSession_AbortVoiceRequest : public __jni_impl::android::service::voice::VoiceInteractionSession_AbortVoiceRequest
	{
	public:
		VoiceInteractionSession_AbortVoiceRequest(QAndroidJniObject obj) { __thiz = obj; }
		VoiceInteractionSession_AbortVoiceRequest()
		{
			__constructor();
		}
	};
} // namespace android::service::voice

#endif // ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_ABORTVOICEREQUEST

