#pragma once

#ifndef ANDROID_APP_VOICEINTERACTOR_PICKOPTIONREQUEST
#define ANDROID_APP_VOICEINTERACTOR_PICKOPTIONREQUEST

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
	class VoiceInteractor_PickOptionRequest : public __jni_impl::android::app::VoiceInteractor_Request
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::app::VoiceInteractor_Prompt arg0, jarray arg1, __jni_impl::android::os::Bundle arg2);
		
		// Methods
		void onPickOptionResult(jboolean arg0, jarray arg1, __jni_impl::android::os::Bundle arg2);
	};
} // namespace __jni_impl::android::app

#include "VoiceInteractor_Prompt.hpp"
#include "../os/Bundle.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void VoiceInteractor_PickOptionRequest::__constructor(__jni_impl::android::app::VoiceInteractor_Prompt arg0, jarray arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.VoiceInteractor$PickOptionRequest",
			"(Landroid/app/VoiceInteractor$Prompt;[Landroid/app/VoiceInteractor$PickOptionRequest$Option;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	
	// Methods
	void VoiceInteractor_PickOptionRequest::onPickOptionResult(jboolean arg0, jarray arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"onPickOptionResult",
			"(Z[Landroid/app/VoiceInteractor$PickOptionRequest$Option;Landroid/os/Bundle;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class VoiceInteractor_PickOptionRequest : public __jni_impl::android::app::VoiceInteractor_PickOptionRequest
	{
	public:
		VoiceInteractor_PickOptionRequest(QAndroidJniObject obj) { __thiz = obj; }
		VoiceInteractor_PickOptionRequest(__jni_impl::android::app::VoiceInteractor_Prompt arg0, jarray arg1, __jni_impl::android::os::Bundle arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_VOICEINTERACTOR_PICKOPTIONREQUEST

