#pragma once

#ifndef ANDROID_SERVICE_AUTOFILL_AUTOFILLSERVICE
#define ANDROID_SERVICE_AUTOFILL_AUTOFILLSERVICE

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::os
{
	class CancellationSignal;
}
namespace __jni_impl::android::service::autofill
{
	class FillCallback;
}
namespace __jni_impl::android::service::autofill
{
	class FillEventHistory;
}
namespace __jni_impl::android::service::autofill
{
	class FillRequest;
}
namespace __jni_impl::android::service::autofill
{
	class SaveCallback;
}
namespace __jni_impl::android::service::autofill
{
	class SaveRequest;
}

namespace __jni_impl::android::service::autofill
{
	class AutofillService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		static jstring SERVICE_INTERFACE();
		static jstring SERVICE_META_DATA();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getFillEventHistory();
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
		void onConnected();
		void onCreate();
		void onDisconnected();
		void onFillRequest(__jni_impl::android::service::autofill::FillRequest arg0, __jni_impl::android::os::CancellationSignal arg1, __jni_impl::android::service::autofill::FillCallback arg2);
		void onSaveRequest(__jni_impl::android::service::autofill::SaveRequest arg0, __jni_impl::android::service::autofill::SaveCallback arg1);
	};
} // namespace __jni_impl::android::service::autofill

#include "../../content/Intent.hpp"
#include "../../os/CancellationSignal.hpp"
#include "FillCallback.hpp"
#include "FillEventHistory.hpp"
#include "FillRequest.hpp"
#include "SaveCallback.hpp"
#include "SaveRequest.hpp"

namespace __jni_impl::android::service::autofill
{
	// Fields
	jstring AutofillService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.autofill.AutofillService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AutofillService::SERVICE_META_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.autofill.AutofillService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void AutofillService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.AutofillService",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject AutofillService::getFillEventHistory()
	{
		return __thiz.callObjectMethod(
			"getFillEventHistory",
			"()Landroid/service/autofill/FillEventHistory;"
		);
	}
	QAndroidJniObject AutofillService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	void AutofillService::onConnected()
	{
		__thiz.callMethod<void>(
			"onConnected",
			"()V"
		);
	}
	void AutofillService::onCreate()
	{
		__thiz.callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	void AutofillService::onDisconnected()
	{
		__thiz.callMethod<void>(
			"onDisconnected",
			"()V"
		);
	}
	void AutofillService::onFillRequest(__jni_impl::android::service::autofill::FillRequest arg0, __jni_impl::android::os::CancellationSignal arg1, __jni_impl::android::service::autofill::FillCallback arg2)
	{
		__thiz.callMethod<void>(
			"onFillRequest",
			"(Landroid/service/autofill/FillRequest;Landroid/os/CancellationSignal;Landroid/service/autofill/FillCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void AutofillService::onSaveRequest(__jni_impl::android::service::autofill::SaveRequest arg0, __jni_impl::android::service::autofill::SaveCallback arg1)
	{
		__thiz.callMethod<void>(
			"onSaveRequest",
			"(Landroid/service/autofill/SaveRequest;Landroid/service/autofill/SaveCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::service::autofill

namespace android::service::autofill
{
	class AutofillService : public __jni_impl::android::service::autofill::AutofillService
	{
	public:
		AutofillService(QAndroidJniObject obj) { __thiz = obj; }
		AutofillService()
		{
			__constructor();
		}
	};
} // namespace android::service::autofill

#endif // ANDROID_SERVICE_AUTOFILL_AUTOFILLSERVICE

