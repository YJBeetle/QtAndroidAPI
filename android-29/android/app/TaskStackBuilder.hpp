#pragma once

#include "../../JArray.hpp"
#include "./Activity.def.hpp"
#include "./PendingIntent.def.hpp"
#include "../content/ComponentName.def.hpp"
#include "../content/Context.def.hpp"
#include "../content/Intent.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../../JClass.hpp"
#include "./TaskStackBuilder.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::app::TaskStackBuilder TaskStackBuilder::create(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.app.TaskStackBuilder",
			"create",
			"(Landroid/content/Context;)Landroid/app/TaskStackBuilder;",
			arg0.object()
		);
	}
	inline android::app::TaskStackBuilder TaskStackBuilder::addNextIntent(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"addNextIntent",
			"(Landroid/content/Intent;)Landroid/app/TaskStackBuilder;",
			arg0.object()
		);
	}
	inline android::app::TaskStackBuilder TaskStackBuilder::addNextIntentWithParentStack(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"addNextIntentWithParentStack",
			"(Landroid/content/Intent;)Landroid/app/TaskStackBuilder;",
			arg0.object()
		);
	}
	inline android::app::TaskStackBuilder TaskStackBuilder::addParentStack(android::app::Activity arg0) const
	{
		return callObjectMethod(
			"addParentStack",
			"(Landroid/app/Activity;)Landroid/app/TaskStackBuilder;",
			arg0.object()
		);
	}
	inline android::app::TaskStackBuilder TaskStackBuilder::addParentStack(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"addParentStack",
			"(Landroid/content/ComponentName;)Landroid/app/TaskStackBuilder;",
			arg0.object()
		);
	}
	inline android::app::TaskStackBuilder TaskStackBuilder::addParentStack(JClass arg0) const
	{
		return callObjectMethod(
			"addParentStack",
			"(Ljava/lang/Class;)Landroid/app/TaskStackBuilder;",
			arg0.object<jclass>()
		);
	}
	inline android::content::Intent TaskStackBuilder::editIntentAt(jint arg0) const
	{
		return callObjectMethod(
			"editIntentAt",
			"(I)Landroid/content/Intent;",
			arg0
		);
	}
	inline jint TaskStackBuilder::getIntentCount() const
	{
		return callMethod<jint>(
			"getIntentCount",
			"()I"
		);
	}
	inline JArray TaskStackBuilder::getIntents() const
	{
		return callObjectMethod(
			"getIntents",
			"()[Landroid/content/Intent;"
		);
	}
	inline android::app::PendingIntent TaskStackBuilder::getPendingIntent(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getPendingIntent",
			"(II)Landroid/app/PendingIntent;",
			arg0,
			arg1
		);
	}
	inline android::app::PendingIntent TaskStackBuilder::getPendingIntent(jint arg0, jint arg1, android::os::Bundle arg2) const
	{
		return callObjectMethod(
			"getPendingIntent",
			"(IILandroid/os/Bundle;)Landroid/app/PendingIntent;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void TaskStackBuilder::startActivities() const
	{
		callMethod<void>(
			"startActivities",
			"()V"
		);
	}
	inline void TaskStackBuilder::startActivities(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"startActivities",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
} // namespace android::app

// Base class headers

