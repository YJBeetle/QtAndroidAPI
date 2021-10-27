#include "./Activity.hpp"
#include "./Instrumentation_ActivityResult.hpp"
#include "../content/Intent.hpp"
#include "../content/IntentFilter.hpp"
#include "./Instrumentation_ActivityMonitor.hpp"

namespace android::app
{
	// Fields
	
	Instrumentation_ActivityMonitor::Instrumentation_ActivityMonitor(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Instrumentation_ActivityMonitor::Instrumentation_ActivityMonitor()
	{
		__thiz = QAndroidJniObject(
			"android.app.Instrumentation$ActivityMonitor",
			"()V"
		);
	}
	Instrumentation_ActivityMonitor::Instrumentation_ActivityMonitor(android::content::IntentFilter &arg0, android::app::Instrumentation_ActivityResult &arg1, jboolean &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.Instrumentation$ActivityMonitor",
			"(Landroid/content/IntentFilter;Landroid/app/Instrumentation$ActivityResult;Z)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	Instrumentation_ActivityMonitor::Instrumentation_ActivityMonitor(jstring &arg0, android::app::Instrumentation_ActivityResult &arg1, jboolean &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.Instrumentation$ActivityMonitor",
			"(Ljava/lang/String;Landroid/app/Instrumentation$ActivityResult;Z)V",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	Instrumentation_ActivityMonitor::Instrumentation_ActivityMonitor(const QString &arg0, android::app::Instrumentation_ActivityResult &arg1, jboolean &arg2)
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
	QAndroidJniObject Instrumentation_ActivityMonitor::onStartActivity(android::content::Intent arg0)
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
} // namespace android::app

