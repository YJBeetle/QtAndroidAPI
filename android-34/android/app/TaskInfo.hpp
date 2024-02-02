#pragma once

#include "./ActivityManager_TaskDescription.def.hpp"
#include "../content/ComponentName.def.hpp"
#include "../content/Intent.def.hpp"
#include "../../JString.hpp"
#include "./TaskInfo.def.hpp"

namespace android::app
{
	// Fields
	inline android::content::ComponentName TaskInfo::baseActivity()
	{
		return getObjectField(
			"baseActivity",
			"Landroid/content/ComponentName;"
		);
	}
	inline android::content::Intent TaskInfo::baseIntent()
	{
		return getObjectField(
			"baseIntent",
			"Landroid/content/Intent;"
		);
	}
	inline jboolean TaskInfo::isRunning()
	{
		return getField<jboolean>(
			"isRunning"
		);
	}
	inline jint TaskInfo::numActivities()
	{
		return getField<jint>(
			"numActivities"
		);
	}
	inline android::content::ComponentName TaskInfo::origActivity()
	{
		return getObjectField(
			"origActivity",
			"Landroid/content/ComponentName;"
		);
	}
	inline android::app::ActivityManager_TaskDescription TaskInfo::taskDescription()
	{
		return getObjectField(
			"taskDescription",
			"Landroid/app/ActivityManager$TaskDescription;"
		);
	}
	inline jint TaskInfo::taskId()
	{
		return getField<jint>(
			"taskId"
		);
	}
	inline android::content::ComponentName TaskInfo::topActivity()
	{
		return getObjectField(
			"topActivity",
			"Landroid/content/ComponentName;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean TaskInfo::isVisible() const
	{
		return callMethod<jboolean>(
			"isVisible",
			"()Z"
		);
	}
	inline JString TaskInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
