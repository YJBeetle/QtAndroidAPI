#include "./ActivityManager_TaskDescription.hpp"
#include "../content/ComponentName.hpp"
#include "../content/Intent.hpp"
#include "./TaskInfo.hpp"

namespace android::app
{
	// Fields
	android::content::ComponentName TaskInfo::baseActivity()
	{
		return getObjectField(
			"baseActivity",
			"Landroid/content/ComponentName;"
		);
	}
	android::content::Intent TaskInfo::baseIntent()
	{
		return getObjectField(
			"baseIntent",
			"Landroid/content/Intent;"
		);
	}
	jboolean TaskInfo::isRunning()
	{
		return getField<jboolean>(
			"isRunning"
		);
	}
	jint TaskInfo::numActivities()
	{
		return getField<jint>(
			"numActivities"
		);
	}
	android::content::ComponentName TaskInfo::origActivity()
	{
		return getObjectField(
			"origActivity",
			"Landroid/content/ComponentName;"
		);
	}
	android::app::ActivityManager_TaskDescription TaskInfo::taskDescription()
	{
		return getObjectField(
			"taskDescription",
			"Landroid/app/ActivityManager$TaskDescription;"
		);
	}
	jint TaskInfo::taskId()
	{
		return getField<jint>(
			"taskId"
		);
	}
	android::content::ComponentName TaskInfo::topActivity()
	{
		return getObjectField(
			"topActivity",
			"Landroid/content/ComponentName;"
		);
	}
	
	// QJniObject forward
	TaskInfo::TaskInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jstring TaskInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::app

