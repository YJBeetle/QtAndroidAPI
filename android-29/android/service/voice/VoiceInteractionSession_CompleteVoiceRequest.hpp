#pragma once

#ifndef ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_COMPLETEVOICEREQUEST
#define ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_COMPLETEVOICEREQUEST

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
	class VoiceInteractionSession_CompleteVoiceRequest : public __jni_impl::android::service::voice::VoiceInteractionSession_Request
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getMessage();
		QAndroidJniObject getVoicePrompt();
		void sendCompleteResult(__jni_impl::android::os::Bundle arg0);
	};
} // namespace __jni_impl::android::service::voice

#include "../../app/VoiceInteractor_Prompt.hpp"
#include "../../os/Bundle.hpp"

namespace __jni_impl::android::service::voice
{
	// Fields
	
	// Constructors
	void VoiceInteractionSession_CompleteVoiceRequest::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.voice.VoiceInteractionSession$CompleteVoiceRequest",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject VoiceInteractionSession_CompleteVoiceRequest::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/CharSequence;");
	}
	QAndroidJniObject VoiceInteractionSession_CompleteVoiceRequest::getVoicePrompt()
	{
		return __thiz.callObjectMethod(
			"getVoicePrompt",
			"()Landroid/app/VoiceInteractor$Prompt;");
	}
	void VoiceInteractionSession_CompleteVoiceRequest::sendCompleteResult(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"sendCompleteResult",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::service::voice

namespace android::service::voice
{
	class VoiceInteractionSession_CompleteVoiceRequest : public __jni_impl::android::service::voice::VoiceInteractionSession_CompleteVoiceRequest
	{
	public:
		VoiceInteractionSession_CompleteVoiceRequest(QAndroidJniObject obj) { __thiz = obj; }
		VoiceInteractionSession_CompleteVoiceRequest()
		{
			__constructor();
		}
	};
} // namespace android::service::voice

#endif // ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_COMPLETEVOICEREQUEST

