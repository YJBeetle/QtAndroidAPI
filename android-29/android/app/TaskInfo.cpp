#include "./ActivityManager_TaskDescription.hpp"
#include "../content/ComponentName.hpp"
#include "../content/Intent.hpp"
#include "./TaskInfo.hpp"

namespace android::app
{
	// Fields
	QAndroidJniObject TaskInfo::baseActivity()
	{
		return getObjectField(
			"baseActivity",
			"Landroid/content/ComponentName;"
		);
	}
	QAndroidJniObject TaskInfo::baseIntent()
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
	QAndroidJniObject TaskInfo::origActivity()
	{
		return getObjectField(
			"origActivity",
			"Landroid/content/ComponentName;"
		);
	}
	QAndroidJniObject TaskInfo::taskDescription()
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
	QAndroidJniObject TaskInfo::topActivity()
	{
		return getObjectField(
			"topActivity",
			"Landroid/content/ComponentName;"
		);
	}
	
	// QAndroidJniObject forward
	TaskInfo::TaskInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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

