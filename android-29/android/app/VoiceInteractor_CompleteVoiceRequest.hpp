#pragma once

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
	class VoiceInteractor_CompleteVoiceRequest : public __jni_impl::android::app::VoiceInteractor_Request
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::app::VoiceInteractor_Prompt arg0, __jni_impl::android::os::Bundle arg1);
		
		// Methods
		void onCompleteResult(__jni_impl::android::os::Bundle arg0);
	};
} // namespace __jni_impl::android::app

#include "VoiceInteractor_Prompt.hpp"
#include "../os/Bundle.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void VoiceInteractor_CompleteVoiceRequest::__constructor(__jni_impl::android::app::VoiceInteractor_Prompt arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.VoiceInteractor$CompleteVoiceRequest",
			"(Landroid/app/VoiceInteractor$Prompt;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void VoiceInteractor_CompleteVoiceRequest::onCompleteResult(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"onCompleteResult",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class VoiceInteractor_CompleteVoiceRequest : public __jni_impl::android::app::VoiceInteractor_CompleteVoiceRequest
	{
	public:
		VoiceInteractor_CompleteVoiceRequest(QAndroidJniObject obj) { __thiz = obj; }
		VoiceInteractor_CompleteVoiceRequest(__jni_impl::android::app::VoiceInteractor_Prompt arg0, __jni_impl::android::os::Bundle arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::app

