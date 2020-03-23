#pragma once

#ifndef ANDROID_APP_ADMIN_DELEGATEDADMINRECEIVER
#define ANDROID_APP_ADMIN_DELEGATEDADMINRECEIVER

#include "../../content/BroadcastReceiver.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::app::admin
{
	class DelegatedAdminReceiver : public __jni_impl::android::content::BroadcastReceiver
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onReceive(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1);
		QAndroidJniObject onChoosePrivateKeyAlias(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, jint arg2, __jni_impl::android::net::Uri arg3, jstring arg4);
		void onNetworkLogsAvailable(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, jlong arg2, jint arg3);
	};
} // namespace __jni_impl::android::app::admin

#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"
#include "../../net/Uri.hpp"

namespace __jni_impl::android::app::admin
{
	// Fields
	
	// Constructors
	void DelegatedAdminReceiver::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.admin.DelegatedAdminReceiver",
			"()V");
	}
	
	// Methods
	void DelegatedAdminReceiver::onReceive(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1)
	{
		__thiz.callMethod<void>(
			"onReceive",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject DelegatedAdminReceiver::onChoosePrivateKeyAlias(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, jint arg2, __jni_impl::android::net::Uri arg3, jstring arg4)
	{
		return __thiz.callObjectMethod(
			"onChoosePrivateKeyAlias",
			"(Landroid/content/Context;Landroid/content/Intent;ILandroid/net/Uri;Ljava/lang/String;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4);
	}
	void DelegatedAdminReceiver::onNetworkLogsAvailable(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, jlong arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onNetworkLogsAvailable",
			"(Landroid/content/Context;Landroid/content/Intent;JI)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
} // namespace __jni_impl::android::app::admin

namespace android::app::admin
{
	class DelegatedAdminReceiver : public __jni_impl::android::app::admin::DelegatedAdminReceiver
	{
	public:
		DelegatedAdminReceiver(QAndroidJniObject obj) { __thiz = obj; }
		DelegatedAdminReceiver()
		{
			__constructor();
		}
	};
} // namespace android::app::admin

#endif // ANDROID_APP_ADMIN_DELEGATEDADMINRECEIVER

