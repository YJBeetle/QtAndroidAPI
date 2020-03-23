#pragma once

#ifndef ANDROID_TELEPHONY_VISUALVOICEMAILSERVICE_VISUALVOICEMAILTASK
#define ANDROID_TELEPHONY_VISUALVOICEMAILSERVICE_VISUALVOICEMAILTASK

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Messenger;
}

namespace __jni_impl::android::telephony
{
	class VisualVoicemailService_VisualVoicemailTask : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		void finish();
	};
} // namespace __jni_impl::android::telephony

#include "../os/Messenger.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	
	// Constructors
	void VisualVoicemailService_VisualVoicemailTask::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.VisualVoicemailService$VisualVoicemailTask",
			"(V)V");
	}
	
	// Methods
	jboolean VisualVoicemailService_VisualVoicemailTask::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint VisualVoicemailService_VisualVoicemailTask::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	void VisualVoicemailService_VisualVoicemailTask::finish()
	{
		__thiz.callMethod<void>(
			"finish",
			"()V");
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class VisualVoicemailService_VisualVoicemailTask : public __jni_impl::android::telephony::VisualVoicemailService_VisualVoicemailTask
	{
	public:
		VisualVoicemailService_VisualVoicemailTask(QAndroidJniObject obj) { __thiz = obj; }
		VisualVoicemailService_VisualVoicemailTask()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_VISUALVOICEMAILSERVICE_VISUALVOICEMAILTASK

