#include "./ActivityManager_TaskDescription.hpp"
#include "../content/ComponentName.hpp"
#include "../content/Intent.hpp"
#include "./TaskInfo.hpp"

namespace android::app
{
	// Fields
	QAndroidJniObject TaskInfo::baseActivity()
	{
		return __thiz.getObjectField(
			"baseActivity",
			"Landroid/content/ComponentName;"
		);
	}
	QAndroidJniObject TaskInfo::baseIntent()
	{
		return __thiz.getObjectField(
			"baseIntent",
			"Landroid/content/Intent;"
		);
	}
	jboolean TaskInfo::isRunning()
	{
		return __thiz.getField<jboolean>(
			"isRunning"
		);
	}
	jint TaskInfo::numActivities()
	{
		return __thiz.getField<jint>(
			"numActivities"
		);
	}
	QAndroidJniObject TaskInfo::origActivity()
	{
		return __thiz.getObjectField(
			"origActivity",
			"Landroid/content/ComponentName;"
		);
	}
	QAndroidJniObject TaskInfo::taskDescription()
	{
		return __thiz.getObjectField(
			"taskDescription",
			"Landroid/app/ActivityManager$TaskDescription;"
		);
	}
	jint TaskInfo::taskId()
	{
		return __thiz.getField<jint>(
			"taskId"
		);
	}
	QAndroidJniObject TaskInfo::topActivity()
	{
		return __thiz.getObjectField(
			"topActivity",
			"Landroid/content/ComponentName;"
		);
	}
	
	TaskInfo::TaskInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring TaskInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::app

