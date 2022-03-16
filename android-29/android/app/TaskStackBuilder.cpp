#include "../../JArray.hpp"
#include "./Activity.hpp"
#include "./PendingIntent.hpp"
#include "../content/ComponentName.hpp"
#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../os/Bundle.hpp"
#include "../../JClass.hpp"
#include "./TaskStackBuilder.hpp"

namespace android::app
{
	// Fields
	
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
	android::app::TaskStackBuilder TaskStackBuilder::addNextIntent(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"addNextIntent",
			"(Landroid/content/Intent;)Landroid/app/TaskStackBuilder;",
			arg0.object()
		);
	}
	android::app::TaskStackBuilder TaskStackBuilder::addNextIntentWithParentStack(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"addNextIntentWithParentStack",
			"(Landroid/content/Intent;)Landroid/app/TaskStackBuilder;",
			arg0.object()
		);
	}
	android::app::TaskStackBuilder TaskStackBuilder::addParentStack(android::app::Activity arg0) const
	{
		return callObjectMethod(
			"addParentStack",
			"(Landroid/app/Activity;)Landroid/app/TaskStackBuilder;",
			arg0.object()
		);
	}
	android::app::TaskStackBuilder TaskStackBuilder::addParentStack(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"addParentStack",
			"(Landroid/content/ComponentName;)Landroid/app/TaskStackBuilder;",
			arg0.object()
		);
	}
	android::app::TaskStackBuilder TaskStackBuilder::addParentStack(JClass arg0) const
	{
		return callObjectMethod(
			"addParentStack",
			"(Ljava/lang/Class;)Landroid/app/TaskStackBuilder;",
			arg0.object<jclass>()
		);
	}
	android::content::Intent TaskStackBuilder::editIntentAt(jint arg0) const
	{
		return callObjectMethod(
			"editIntentAt",
			"(I)Landroid/content/Intent;",
			arg0
		);
	}
	jint TaskStackBuilder::getIntentCount() const
	{
		return callMethod<jint>(
			"getIntentCount",
			"()I"
		);
	}
	JArray TaskStackBuilder::getIntents() const
	{
		return callObjectMethod(
			"getIntents",
			"()[Landroid/content/Intent;"
		);
	}
	android::app::PendingIntent TaskStackBuilder::getPendingIntent(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getPendingIntent",
			"(II)Landroid/app/PendingIntent;",
			arg0,
			arg1
		);
	}
	android::app::PendingIntent TaskStackBuilder::getPendingIntent(jint arg0, jint arg1, android::os::Bundle arg2) const
	{
		return callObjectMethod(
			"getPendingIntent",
			"(IILandroid/os/Bundle;)Landroid/app/PendingIntent;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void TaskStackBuilder::startActivities() const
	{
		callMethod<void>(
			"startActivities",
			"()V"
		);
	}
	void TaskStackBuilder::startActivities(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"startActivities",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
} // namespace android::app

