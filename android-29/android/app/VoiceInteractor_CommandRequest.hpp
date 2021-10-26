#pragma once

#ifndef ANDROID_APP_VOICEINTERACTOR_COMMANDREQUEST
#define ANDROID_APP_VOICEINTERACTOR_COMMANDREQUEST

#include "../../__JniBaseClass.hpp"
#include "VoiceInteractor_Request.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::app
{
	class VoiceInteractor_CommandRequest : public __jni_impl::android::app::VoiceInteractor_Request
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, __jni_impl::android::os::Bundle arg1);
		void __constructor(const QString &arg0, __jni_impl::android::os::Bundle arg1);
		
		// Methods
		void onCommandResult(jboolean arg0, __jni_impl::android::os::Bundle arg1);
	};
} // namespace __jni_impl::android::app

#include "../os/Bundle.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void VoiceInteractor_CommandRequest::__constructor(jstring arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.VoiceInteractor$CommandRequest",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void VoiceInteractor_CommandRequest::__constructor(const QString &arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.VoiceInteractor$CommandRequest",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void VoiceInteractor_CommandRequest::onCommandResult(jboolean arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onCommandResult",
			"(ZLandroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class VoiceInteractor_CommandRequest : public __jni_impl::android::app::VoiceInteractor_CommandRequest
	{
	public:
		VoiceInteractor_CommandRequest(QAndroidJniObject obj) { __thiz = obj; }
		VoiceInteractor_CommandRequest(jstring arg0, __jni_impl::android::os::Bundle arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_VOICEINTERACTOR_COMMANDREQUEST

