#pragma once

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
	class VoiceInteractionSession_ConfirmationRequest : public __jni_impl::android::service::voice::VoiceInteractionSession_Request
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getPrompt();
		QAndroidJniObject getVoicePrompt();
		void sendConfirmationResult(jboolean arg0, __jni_impl::android::os::Bundle arg1);
	};
} // namespace __jni_impl::android::service::voice

#include "../../app/VoiceInteractor_Prompt.hpp"
#include "../../os/Bundle.hpp"

namespace __jni_impl::android::service::voice
{
	// Fields
	
	// Constructors
	void VoiceInteractionSession_ConfirmationRequest::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.voice.VoiceInteractionSession$ConfirmationRequest",
			"(V)V");
	}
	
	// Methods
	jstring VoiceInteractionSession_ConfirmationRequest::getPrompt()
	{
		return __thiz.callObjectMethod(
			"getPrompt",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject VoiceInteractionSession_ConfirmationRequest::getVoicePrompt()
	{
		return __thiz.callObjectMethod(
			"getVoicePrompt",
			"()Landroid/app/VoiceInteractor$Prompt;"
		);
	}
	void VoiceInteractionSession_ConfirmationRequest::sendConfirmationResult(jboolean arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"sendConfirmationResult",
			"(ZLandroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::service::voice

namespace android::service::voice
{
	class VoiceInteractionSession_ConfirmationRequest : public __jni_impl::android::service::voice::VoiceInteractionSession_ConfirmationRequest
	{
	public:
		VoiceInteractionSession_ConfirmationRequest(QAndroidJniObject obj) { __thiz = obj; }
		VoiceInteractionSession_ConfirmationRequest()
		{
			__constructor();
		}
	};
} // namespace android::service::voice

