#pragma once

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "./Service.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}

namespace __jni_impl::android::app
{
	class IntentService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
		void onCreate();
		void onDestroy();
		void onStart(__jni_impl::android::content::Intent arg0, jint arg1);
		jint onStartCommand(__jni_impl::android::content::Intent arg0, jint arg1, jint arg2);
		void setIntentRedelivery(jboolean arg0);
	};
} // namespace __jni_impl::android::app

#include "../content/Intent.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void IntentService::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.IntentService",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void IntentService::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.IntentService",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject IntentService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	void IntentService::onCreate()
	{
		__thiz.callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	void IntentService::onDestroy()
	{
		__thiz.callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	void IntentService::onStart(__jni_impl::android::content::Intent arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onStart",
			"(Landroid/content/Intent;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint IntentService::onStartCommand(__jni_impl::android::content::Intent arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"onStartCommand",
			"(Landroid/content/Intent;II)I",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void IntentService::setIntentRedelivery(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setIntentRedelivery",
			"(Z)V",
			arg0
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class IntentService : public __jni_impl::android::app::IntentService
	{
	public:
		IntentService(QAndroidJniObject obj) { __thiz = obj; }
		IntentService(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::app

