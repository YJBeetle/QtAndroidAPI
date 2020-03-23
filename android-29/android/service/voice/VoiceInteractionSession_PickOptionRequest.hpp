#pragma once

#ifndef ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_PICKOPTIONREQUEST
#define ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_PICKOPTIONREQUEST

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
	class VoiceInteractionSession_PickOptionRequest : public __jni_impl::android::service::voice::VoiceInteractionSession_Request
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getVoicePrompt();
		QAndroidJniObject getPrompt();
		QAndroidJniObject getOptions();
		void sendPickOptionResult(jarray arg0, __jni_impl::android::os::Bundle arg1);
		void sendIntermediatePickOptionResult(jarray arg0, __jni_impl::android::os::Bundle arg1);
	};
} // namespace __jni_impl::android::service::voice

#include "../../app/VoiceInteractor_Prompt.hpp"
#include "../../os/Bundle.hpp"

namespace __jni_impl::android::service::voice
{
	// Fields
	
	// Constructors
	void VoiceInteractionSession_PickOptionRequest::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.voice.VoiceInteractionSession$PickOptionRequest",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject VoiceInteractionSession_PickOptionRequest::getVoicePrompt()
	{
		return __thiz.callObjectMethod(
			"getVoicePrompt",
			"()Landroid/app/VoiceInteractor$Prompt;");
	}
	QAndroidJniObject VoiceInteractionSession_PickOptionRequest::getPrompt()
	{
		return __thiz.callObjectMethod(
			"getPrompt",
			"()Ljava/lang/CharSequence;");
	}
	QAndroidJniObject VoiceInteractionSession_PickOptionRequest::getOptions()
	{
		return __thiz.callObjectMethod(
			"getOptions",
			"()[Landroid/app/VoiceInteractor$PickOptionRequest$Option;");
	}
	void VoiceInteractionSession_PickOptionRequest::sendPickOptionResult(jarray arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"sendPickOptionResult",
			"([Landroid/app/VoiceInteractor$PickOptionRequest$Option;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void VoiceInteractionSession_PickOptionRequest::sendIntermediatePickOptionResult(jarray arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"sendIntermediatePickOptionResult",
			"([Landroid/app/VoiceInteractor$PickOptionRequest$Option;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object());
	}
} // namespace __jni_impl::android::service::voice

namespace android::service::voice
{
	class VoiceInteractionSession_PickOptionRequest : public __jni_impl::android::service::voice::VoiceInteractionSession_PickOptionRequest
	{
	public:
		VoiceInteractionSession_PickOptionRequest(QAndroidJniObject obj) { __thiz = obj; }
		VoiceInteractionSession_PickOptionRequest()
		{
			__constructor();
		}
	};
} // namespace android::service::voice

#endif // ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_PICKOPTIONREQUEST

