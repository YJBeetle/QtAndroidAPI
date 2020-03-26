#pragma once

#ifndef ANDROID_APP_VOICEINTERACTOR_ABORTVOICEREQUEST
#define ANDROID_APP_VOICEINTERACTOR_ABORTVOICEREQUEST

#include "../../__JniBaseClass.hpp"
#include "VoiceInteractor_Request.hpp"

namespace __jni_impl::android::app
{
	class VoiceInteractor_Prompt;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::app
{
	class VoiceInteractor_AbortVoiceRequest : public __jni_impl::android::app::VoiceInteractor_Request
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::app::VoiceInteractor_Prompt arg0, __jni_impl::android::os::Bundle arg1);
		
		// Methods
		void onAbortResult(__jni_impl::android::os::Bundle arg0);
	};
} // namespace __jni_impl::android::app

#include "VoiceInteractor_Prompt.hpp"
#include "../os/Bundle.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void VoiceInteractor_AbortVoiceRequest::__constructor(__jni_impl::android::app::VoiceInteractor_Prompt arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.VoiceInteractor$AbortVoiceRequest",
			"(Landroid/app/VoiceInteractor$Prompt;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	void VoiceInteractor_AbortVoiceRequest::onAbortResult(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"onAbortResult",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class VoiceInteractor_AbortVoiceRequest : public __jni_impl::android::app::VoiceInteractor_AbortVoiceRequest
	{
	public:
		VoiceInteractor_AbortVoiceRequest(QAndroidJniObject obj) { __thiz = obj; }
		VoiceInteractor_AbortVoiceRequest(__jni_impl::android::app::VoiceInteractor_Prompt arg0, __jni_impl::android::os::Bundle arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_VOICEINTERACTOR_ABORTVOICEREQUEST

