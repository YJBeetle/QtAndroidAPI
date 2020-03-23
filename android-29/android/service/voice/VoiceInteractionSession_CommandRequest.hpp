#pragma once

#ifndef ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_COMMANDREQUEST
#define ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_COMMANDREQUEST

#include "VoiceInteractionSession_Request.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::service::voice
{
	class VoiceInteractionSession_CommandRequest : public __jni_impl::android::service::voice::VoiceInteractionSession_Request
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void sendResult(__jni_impl::android::os::Bundle arg0);
		void sendIntermediateResult(__jni_impl::android::os::Bundle arg0);
		QAndroidJniObject getCommand();
	};
} // namespace __jni_impl::android::service::voice

#include "../../os/Bundle.hpp"

namespace __jni_impl::android::service::voice
{
	// Fields
	
	// Constructors
	void VoiceInteractionSession_CommandRequest::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.voice.VoiceInteractionSession$CommandRequest",
			"(V)V");
	}
	
	// Methods
	void VoiceInteractionSession_CommandRequest::sendResult(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"sendResult",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object());
	}
	void VoiceInteractionSession_CommandRequest::sendIntermediateResult(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"sendIntermediateResult",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject VoiceInteractionSession_CommandRequest::getCommand()
	{
		return __thiz.callObjectMethod(
			"getCommand",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::android::service::voice

namespace android::service::voice
{
	class VoiceInteractionSession_CommandRequest : public __jni_impl::android::service::voice::VoiceInteractionSession_CommandRequest
	{
	public:
		VoiceInteractionSession_CommandRequest(QAndroidJniObject obj) { __thiz = obj; }
		VoiceInteractionSession_CommandRequest()
		{
			__constructor();
		}
	};
} // namespace android::service::voice

#endif // ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_COMMANDREQUEST

