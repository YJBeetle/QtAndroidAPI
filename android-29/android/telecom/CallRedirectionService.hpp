#pragma once

#ifndef ANDROID_TELECOM_CALLREDIRECTIONSERVICE
#define ANDROID_TELECOM_CALLREDIRECTIONSERVICE

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::telecom
{
	class PhoneAccountHandle;
}

namespace __jni_impl::android::telecom
{
	class CallRedirectionService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		static jstring SERVICE_INTERFACE();
		
		// Constructors
		void __constructor();
		
		// Methods
		void cancelCall();
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
		void onPlaceCall(__jni_impl::android::net::Uri arg0, __jni_impl::android::telecom::PhoneAccountHandle arg1, jboolean arg2);
		jboolean onUnbind(__jni_impl::android::content::Intent arg0);
		void placeCallUnmodified();
		void redirectCall(__jni_impl::android::net::Uri arg0, __jni_impl::android::telecom::PhoneAccountHandle arg1, jboolean arg2);
	};
} // namespace __jni_impl::android::telecom

#include "../content/Intent.hpp"
#include "../net/Uri.hpp"
#include "PhoneAccountHandle.hpp"

namespace __jni_impl::android::telecom
{
	// Fields
	jstring CallRedirectionService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.CallRedirectionService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void CallRedirectionService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telecom.CallRedirectionService",
			"()V"
		);
	}
	
	// Methods
	void CallRedirectionService::cancelCall()
	{
		__thiz.callMethod<void>(
			"cancelCall",
			"()V"
		);
	}
	QAndroidJniObject CallRedirectionService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	void CallRedirectionService::onPlaceCall(__jni_impl::android::net::Uri arg0, __jni_impl::android::telecom::PhoneAccountHandle arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"onPlaceCall",
			"(Landroid/net/Uri;Landroid/telecom/PhoneAccountHandle;Z)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jboolean CallRedirectionService::onUnbind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onUnbind",
			"(Landroid/content/Intent;)Z",
			arg0.__jniObject().object()
		);
	}
	void CallRedirectionService::placeCallUnmodified()
	{
		__thiz.callMethod<void>(
			"placeCallUnmodified",
			"()V"
		);
	}
	void CallRedirectionService::redirectCall(__jni_impl::android::net::Uri arg0, __jni_impl::android::telecom::PhoneAccountHandle arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"redirectCall",
			"(Landroid/net/Uri;Landroid/telecom/PhoneAccountHandle;Z)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
} // namespace __jni_impl::android::telecom

namespace android::telecom
{
	class CallRedirectionService : public __jni_impl::android::telecom::CallRedirectionService
	{
	public:
		CallRedirectionService(QAndroidJniObject obj) { __thiz = obj; }
		CallRedirectionService()
		{
			__constructor();
		}
	};
} // namespace android::telecom

#endif // ANDROID_TELECOM_CALLREDIRECTIONSERVICE

