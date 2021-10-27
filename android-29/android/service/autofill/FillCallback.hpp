#pragma once

#ifndef ANDROID_SERVICE_AUTOFILL_FILLCALLBACK
#define ANDROID_SERVICE_AUTOFILL_FILLCALLBACK

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::service::autofill
{
	class FillResponse;
}

namespace __jni_impl::android::service::autofill
{
	class FillCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onFailure(jstring arg0);
		void onFailure(const QString &arg0);
		void onSuccess(__jni_impl::android::service::autofill::FillResponse arg0);
	};
} // namespace __jni_impl::android::service::autofill

#include "FillResponse.hpp"

namespace __jni_impl::android::service::autofill
{
	// Fields
	
	// Constructors
	void FillCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.FillCallback",
			"(V)V");
	}
	
	// Methods
	void FillCallback::onFailure(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onFailure",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void FillCallback::onFailure(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"onFailure",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void FillCallback::onSuccess(__jni_impl::android::service::autofill::FillResponse arg0)
	{
		__thiz.callMethod<void>(
			"onSuccess",
			"(Landroid/service/autofill/FillResponse;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::service::autofill

namespace android::service::autofill
{
	class FillCallback : public __jni_impl::android::service::autofill::FillCallback
	{
	public:
		FillCallback(QAndroidJniObject obj) { __thiz = obj; }
		FillCallback()
		{
			__constructor();
		}
	};
} // namespace android::service::autofill

#endif // ANDROID_SERVICE_AUTOFILL_FILLCALLBACK

