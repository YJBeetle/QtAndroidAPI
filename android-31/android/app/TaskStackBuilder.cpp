#include "./Activity.hpp"
#include "./PendingIntent.hpp"
#include "../content/ComponentName.hpp"
#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../os/Bundle.hpp"
#include "./TaskStackBuilder.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	TaskStackBuilder::TaskStackBuilder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::app::TaskStackBuilder TaskStackBuilder::create(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.app.TaskStackBuilder",
			"create",
			"(Landroid/content/Context;)Landroid/app/TaskStackBuilder;",
			arg0.object()
		);
	}
	android::app::TaskStackBuilder TaskStackBuilder::addNextIntent(android::content::Intent arg0)
	{
		return callObjectMethod(
			"addNextIntent",
			"(Landroid/content/Intent;)Landroid/app/TaskStackBuilder;",
			arg0.object()
		);
	}
	android::app::TaskStackBuilder TaskStackBuilder::addNextIntentWithParentStack(android::content::Intent arg0)
	{
		return callObjectMethod(
			"addNextIntentWithParentStack",
			"(Landroid/content/Intent;)Landroid/app/TaskStackBuilder;",
			arg0.object()
		);
	}
	android::app::TaskStackBuilder TaskStackBuilder::addParentStack(android::app::Activity arg0)
	{
		return callObjectMethod(
			"addParentStack",
			"(Landroid/app/Activity;)Landroid/app/TaskStackBuilder;",
			arg0.object()
		);
	}
	android::app::TaskStackBuilder TaskStackBuilder::addParentStack(android::content::ComponentName arg0)
	{
		return callObjectMethod(
			"addParentStack",
			"(Landroid/content/ComponentName;)Landroid/app/TaskStackBuilder;",
			arg0.object()
		);
	}
	android::app::TaskStackBuilder TaskStackBuilder::addParentStack(jclass arg0)
	{
		return callObjectMethod(
			"addParentStack",
			"(Ljava/lang/Class;)Landroid/app/TaskStackBuilder;",
			arg0
		);
	}
	android::content::Intent TaskStackBuilder::editIntentAt(jint arg0)
	{
		return callObjectMethod(
			"editIntentAt",
			"(I)Landroid/content/Intent;",
			arg0
		);
	}
	jint TaskStackBuilder::getIntentCount()
	{
		return callMethod<jint>(
			"getIntentCount",
			"()I"
		);
	}
	jarray TaskStackBuilder::getIntents()
	{
		return callObjectMethod(
			"getIntents",
			"()[Landroid/content/Intent;"
		).object<jarray>();
	}
	android::app::PendingIntent TaskStackBuilder::getPendingIntent(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"getPendingIntent",
			"(II)Landroid/app/PendingIntent;",
			arg0,
			arg1
		);
	}
	android::app::PendingIntent TaskStackBuilder::getPendingIntent(jint arg0, jint arg1, android::os::Bundle arg2)
	{
		return callObjectMethod(
			"getPendingIntent",
			"(IILandroid/os/Bundle;)Landroid/app/PendingIntent;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void TaskStackBuilder::startActivities()
	{
		callMethod<void>(
			"startActivities",
			"()V"
		);
	}
	void TaskStackBuilder::startActivities(android::os::Bundle arg0)
	{
		callMethod<void>(
			"startActivities",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
} // namespace android::app

