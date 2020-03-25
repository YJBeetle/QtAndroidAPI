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
		static QAndroidJniObject SERVICE_INTERFACE();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
		jboolean onUnbind(__jni_impl::android::content::Intent arg0);
		void placeCallUnmodified();
		void onPlaceCall(__jni_impl::android::net::Uri arg0, __jni_impl::android::telecom::PhoneAccountHandle arg1, jboolean arg2);
		void redirectCall(__jni_impl::android::net::Uri arg0, __jni_impl::android::telecom::PhoneAccountHandle arg1, jboolean arg2);
		void cancelCall();
	};
} // namespace __jni_impl::android::telecom

#include "../content/Intent.hpp"
#include "../net/Uri.hpp"
#include "PhoneAccountHandle.hpp"

namespace __jni_impl::android::telecom
{
	// Fields
	QAndroidJniObject CallRedirectionService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.CallRedirectionService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void CallRedirectionService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telecom.CallRedirectionService",
			"()V");
	}
	
	// Methods
	QAndroidJniObject CallRedirectionService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object());
	}
	jboolean CallRedirectionService::onUnbind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onUnbind",
			"(Landroid/content/Intent;)Z",
			arg0.__jniObject().object());
	}
	void CallRedirectionService::placeCallUnmodified()
	{
		__thiz.callMethod<void>(
			"placeCallUnmodified",
			"()V");
	}
	void CallRedirectionService::onPlaceCall(__jni_impl::android::net::Uri arg0, __jni_impl::android::telecom::PhoneAccountHandle arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"onPlaceCall",
			"(Landroid/net/Uri;Landroid/telecom/PhoneAccountHandle;Z)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void CallRedirectionService::redirectCall(__jni_impl::android::net::Uri arg0, __jni_impl::android::telecom::PhoneAccountHandle arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"redirectCall",
			"(Landroid/net/Uri;Landroid/telecom/PhoneAccountHandle;Z)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void CallRedirectionService::cancelCall()
	{
		__thiz.callMethod<void>(
			"cancelCall",
			"()V");
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

