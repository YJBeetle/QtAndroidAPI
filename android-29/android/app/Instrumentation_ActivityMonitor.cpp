#include "./Activity.hpp"
#include "./Instrumentation_ActivityResult.hpp"
#include "../content/Intent.hpp"
#include "../content/IntentFilter.hpp"
#include "./Instrumentation_ActivityMonitor.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	Instrumentation_ActivityMonitor::Instrumentation_ActivityMonitor(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Instrumentation_ActivityMonitor::Instrumentation_ActivityMonitor()
		: __JniBaseClass(
			"android.app.Instrumentation$ActivityMonitor",
			"()V"
		) {}
	Instrumentation_ActivityMonitor::Instrumentation_ActivityMonitor(android::content::IntentFilter arg0, android::app::Instrumentation_ActivityResult arg1, jboolean arg2)
		: __JniBaseClass(
			"android.app.Instrumentation$ActivityMonitor",
			"(Landroid/content/IntentFilter;Landroid/app/Instrumentation$ActivityResult;Z)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	Instrumentation_ActivityMonitor::Instrumentation_ActivityMonitor(jstring arg0, android::app::Instrumentation_ActivityResult arg1, jboolean arg2)
		: __JniBaseClass(
			"android.app.Instrumentation$ActivityMonitor",
			"(Ljava/lang/String;Landroid/app/Instrumentation$ActivityResult;Z)V",
			arg0,
			arg1.object(),
			arg2
		) {}
	
	// Methods
	QAndroidJniObject Instrumentation_ActivityMonitor::getFilter()
	{
		return callObjectMethod(
			"getFilter",
			"()Landroid/content/IntentFilter;"
		);
	}
	jint Instrumentation_ActivityMonitor::getHits()
	{
		return callMethod<jint>(
			"getHits",
			"()I"
		);
	}
	QAndroidJniObject Instrumentation_ActivityMonitor::getLastActivity()
	{
		return callObjectMethod(
			"getLastActivity",
			"()Landroid/app/Activity;"
		);
	}
	QAndroidJniObject Instrumentation_ActivityMonitor::getResult()
	{
		return callObjectMethod(
			"getResult",
			"()Landroid/app/Instrumentation$ActivityResult;"
		);
	}
	jboolean Instrumentation_ActivityMonitor::isBlocking()
	{
		return callMethod<jboolean>(
			"isBlocking",
			"()Z"
		);
	}
	QAndroidJniObject Instrumentation_ActivityMonitor::onStartActivity(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onStartActivity",
			"(Landroid/content/Intent;)Landroid/app/Instrumentation$ActivityResult;",
			arg0.object()
		);
	}
	QAndroidJniObject Instrumentation_ActivityMonitor::waitForActivity()
	{
		return callObjectMethod(
			"waitForActivity",
			"()Landroid/app/Activity;"
		);
	}
	QAndroidJniObject Instrumentation_ActivityMonitor::waitForActivityWithTimeout(jlong arg0)
	{
		return callObjectMethod(
			"waitForActivityWithTimeout",
			"(J)Landroid/app/Activity;",
			arg0
		);
	}
} // namespace android::app
