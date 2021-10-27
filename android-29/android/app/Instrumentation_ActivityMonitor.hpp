#pragma once

#ifndef ANDROID_APP_INSTRUMENTATION_ACTIVITYMONITOR
#define ANDROID_APP_INSTRUMENTATION_ACTIVITYMONITOR

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class Activity;
}
namespace __jni_impl::android::app
{
	class Instrumentation_ActivityResult;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::content
{
	class IntentFilter;
}

namespace __jni_impl::android::app
{
	class Instrumentation_ActivityMonitor : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::content::IntentFilter arg0, __jni_impl::android::app::Instrumentation_ActivityResult arg1, jboolean arg2);
		void __constructor(jstring arg0, __jni_impl::android::app::Instrumentation_ActivityResult arg1, jboolean arg2);
		void __constructor(const QString &arg0, __jni_impl::android::app::Instrumentation_ActivityResult arg1, jboolean arg2);
		
		// Methods
		QAndroidJniObject getFilter();
		jint getHits();
		QAndroidJniObject getLastActivity();
		QAndroidJniObject getResult();
		jboolean isBlocking();
		QAndroidJniObject onStartActivity(__jni_impl::android::content::Intent arg0);
		QAndroidJniObject waitForActivity();
		QAndroidJniObject waitForActivityWithTimeout(jlong arg0);
	};
} // namespace __jni_impl::android::app

#include "Activity.hpp"
#include "Instrumentation_ActivityResult.hpp"
#include "../content/Intent.hpp"
#include "../content/IntentFilter.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void Instrumentation_ActivityMonitor::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.Instrumentation$ActivityMonitor",
			"()V"
		);
	}
	void Instrumentation_ActivityMonitor::__constructor(__jni_impl::android::content::IntentFilter arg0, __jni_impl::android::app::Instrumentation_ActivityResult arg1, jboolean arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.Instrumentation$ActivityMonitor",
			"(Landroid/content/IntentFilter;Landroid/app/Instrumentation$ActivityResult;Z)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void Instrumentation_ActivityMonitor::__constructor(jstring arg0, __jni_impl::android::app::Instrumentation_ActivityResult arg1, jboolean arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.Instrumentation$ActivityMonitor",
			"(Ljava/lang/String;Landroid/app/Instrumentation$ActivityResult;Z)V",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	void Instrumentation_ActivityMonitor::__constructor(const QString &arg0, __jni_impl::android::app::Instrumentation_ActivityResult arg1, jboolean arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.Instrumentation$ActivityMonitor",
			"(Ljava/lang/String;Landroid/app/Instrumentation$ActivityResult;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	
	// Methods
	QAndroidJniObject Instrumentation_ActivityMonitor::getFilter()
	{
		return __thiz.callObjectMethod(
			"getFilter",
			"()Landroid/content/IntentFilter;"
		);
	}
	jint Instrumentation_ActivityMonitor::getHits()
	{
		return __thiz.callMethod<jint>(
			"getHits",
			"()I"
		);
	}
	QAndroidJniObject Instrumentation_ActivityMonitor::getLastActivity()
	{
		return __thiz.callObjectMethod(
			"getLastActivity",
			"()Landroid/app/Activity;"
		);
	}
	QAndroidJniObject Instrumentation_ActivityMonitor::getResult()
	{
		return __thiz.callObjectMethod(
			"getResult",
			"()Landroid/app/Instrumentation$ActivityResult;"
		);
	}
	jboolean Instrumentation_ActivityMonitor::isBlocking()
	{
		return __thiz.callMethod<jboolean>(
			"isBlocking",
			"()Z"
		);
	}
	QAndroidJniObject Instrumentation_ActivityMonitor::onStartActivity(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onStartActivity",
			"(Landroid/content/Intent;)Landroid/app/Instrumentation$ActivityResult;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Instrumentation_ActivityMonitor::waitForActivity()
	{
		return __thiz.callObjectMethod(
			"waitForActivity",
			"()Landroid/app/Activity;"
		);
	}
	QAndroidJniObject Instrumentation_ActivityMonitor::waitForActivityWithTimeout(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"waitForActivityWithTimeout",
			"(J)Landroid/app/Activity;",
			arg0
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class Instrumentation_ActivityMonitor : public __jni_impl::android::app::Instrumentation_ActivityMonitor
	{
	public:
		Instrumentation_ActivityMonitor(QAndroidJniObject obj) { __thiz = obj; }
		Instrumentation_ActivityMonitor()
		{
			__constructor();
		}
		Instrumentation_ActivityMonitor(__jni_impl::android::content::IntentFilter arg0, __jni_impl::android::app::Instrumentation_ActivityResult arg1, jboolean arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		Instrumentation_ActivityMonitor(jstring arg0, __jni_impl::android::app::Instrumentation_ActivityResult arg1, jboolean arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_INSTRUMENTATION_ACTIVITYMONITOR

