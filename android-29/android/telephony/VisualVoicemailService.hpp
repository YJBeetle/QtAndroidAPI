#pragma once

#ifndef ANDROID_TELEPHONY_VISUALVOICEMAILSERVICE
#define ANDROID_TELEPHONY_VISUALVOICEMAILSERVICE

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::telecom
{
	class PhoneAccountHandle;
}
namespace __jni_impl::android::telephony
{
	class VisualVoicemailService_VisualVoicemailTask;
}
namespace __jni_impl::android::telephony
{
	class VisualVoicemailSms;
}

namespace __jni_impl::android::telephony
{
	class VisualVoicemailService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		static jstring SERVICE_INTERFACE();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
		void onCellServiceConnected(__jni_impl::android::telephony::VisualVoicemailService_VisualVoicemailTask arg0, __jni_impl::android::telecom::PhoneAccountHandle arg1);
		void onSimRemoved(__jni_impl::android::telephony::VisualVoicemailService_VisualVoicemailTask arg0, __jni_impl::android::telecom::PhoneAccountHandle arg1);
		void onSmsReceived(__jni_impl::android::telephony::VisualVoicemailService_VisualVoicemailTask arg0, __jni_impl::android::telephony::VisualVoicemailSms arg1);
		void onStopped(__jni_impl::android::telephony::VisualVoicemailService_VisualVoicemailTask arg0);
	};
} // namespace __jni_impl::android::telephony

#include "../content/Intent.hpp"
#include "../telecom/PhoneAccountHandle.hpp"
#include "VisualVoicemailService_VisualVoicemailTask.hpp"
#include "VisualVoicemailSms.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	jstring VisualVoicemailService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.VisualVoicemailService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void VisualVoicemailService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.VisualVoicemailService",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject VisualVoicemailService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	void VisualVoicemailService::onCellServiceConnected(__jni_impl::android::telephony::VisualVoicemailService_VisualVoicemailTask arg0, __jni_impl::android::telecom::PhoneAccountHandle arg1)
	{
		__thiz.callMethod<void>(
			"onCellServiceConnected",
			"(Landroid/telephony/VisualVoicemailService$VisualVoicemailTask;Landroid/telecom/PhoneAccountHandle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void VisualVoicemailService::onSimRemoved(__jni_impl::android::telephony::VisualVoicemailService_VisualVoicemailTask arg0, __jni_impl::android::telecom::PhoneAccountHandle arg1)
	{
		__thiz.callMethod<void>(
			"onSimRemoved",
			"(Landroid/telephony/VisualVoicemailService$VisualVoicemailTask;Landroid/telecom/PhoneAccountHandle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void VisualVoicemailService::onSmsReceived(__jni_impl::android::telephony::VisualVoicemailService_VisualVoicemailTask arg0, __jni_impl::android::telephony::VisualVoicemailSms arg1)
	{
		__thiz.callMethod<void>(
			"onSmsReceived",
			"(Landroid/telephony/VisualVoicemailService$VisualVoicemailTask;Landroid/telephony/VisualVoicemailSms;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void VisualVoicemailService::onStopped(__jni_impl::android::telephony::VisualVoicemailService_VisualVoicemailTask arg0)
	{
		__thiz.callMethod<void>(
			"onStopped",
			"(Landroid/telephony/VisualVoicemailService$VisualVoicemailTask;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class VisualVoicemailService : public __jni_impl::android::telephony::VisualVoicemailService
	{
	public:
		VisualVoicemailService(QAndroidJniObject obj) { __thiz = obj; }
		VisualVoicemailService()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_VISUALVOICEMAILSERVICE

