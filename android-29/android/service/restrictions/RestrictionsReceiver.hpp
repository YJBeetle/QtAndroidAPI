#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../content/BroadcastReceiver.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::os
{
	class PersistableBundle;
}

namespace __jni_impl::android::service::restrictions
{
	class RestrictionsReceiver : public __jni_impl::android::content::BroadcastReceiver
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onReceive(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1);
		void onRequestPermission(__jni_impl::android::content::Context arg0, jstring arg1, jstring arg2, jstring arg3, __jni_impl::android::os::PersistableBundle arg4);
		void onRequestPermission(__jni_impl::android::content::Context arg0, const QString &arg1, const QString &arg2, const QString &arg3, __jni_impl::android::os::PersistableBundle arg4);
	};
} // namespace __jni_impl::android::service::restrictions

#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"
#include "../../os/PersistableBundle.hpp"

namespace __jni_impl::android::service::restrictions
{
	// Fields
	
	// Constructors
	void RestrictionsReceiver::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.restrictions.RestrictionsReceiver",
			"()V"
		);
	}
	
	// Methods
	void RestrictionsReceiver::onReceive(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1)
	{
		__thiz.callMethod<void>(
			"onReceive",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RestrictionsReceiver::onRequestPermission(__jni_impl::android::content::Context arg0, jstring arg1, jstring arg2, jstring arg3, __jni_impl::android::os::PersistableBundle arg4)
	{
		__thiz.callMethod<void>(
			"onRequestPermission",
			"(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/os/PersistableBundle;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	void RestrictionsReceiver::onRequestPermission(__jni_impl::android::content::Context arg0, const QString &arg1, const QString &arg2, const QString &arg3, __jni_impl::android::os::PersistableBundle arg4)
	{
		__thiz.callMethod<void>(
			"onRequestPermission",
			"(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/os/PersistableBundle;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			QAndroidJniObject::fromString(arg3).object<jstring>(),
			arg4.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::service::restrictions

namespace android::service::restrictions
{
	class RestrictionsReceiver : public __jni_impl::android::service::restrictions::RestrictionsReceiver
	{
	public:
		RestrictionsReceiver(QAndroidJniObject obj) { __thiz = obj; }
		RestrictionsReceiver()
		{
			__constructor();
		}
	};
} // namespace android::service::restrictions

