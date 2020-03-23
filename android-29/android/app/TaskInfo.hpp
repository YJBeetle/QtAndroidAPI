#pragma once

#ifndef ANDROID_APP_TASKINFO
#define ANDROID_APP_TASKINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::app
{
	class ActivityManager_TaskDescription;
}

namespace __jni_impl::android::app
{
	class TaskInfo : public __JniBaseClass
	{
	public:
		// Fields
		QAndroidJniObject baseActivity();
		QAndroidJniObject baseIntent();
		jboolean isRunning();
		jint numActivities();
		QAndroidJniObject origActivity();
		QAndroidJniObject taskDescription();
		jint taskId();
		QAndroidJniObject topActivity();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
	};
} // namespace __jni_impl::android::app

#include "../content/ComponentName.hpp"
#include "../content/Intent.hpp"
#include "ActivityManager_TaskDescription.hpp"

namespace __jni_impl::android::app
{
	// Fields
	QAndroidJniObject TaskInfo::baseActivity()
	{
		return __thiz.getObjectField(
			"baseActivity",
			"Landroid/content/ComponentName;");
	}
	QAndroidJniObject TaskInfo::baseIntent()
	{
		return __thiz.getObjectField(
			"baseIntent",
			"Landroid/content/Intent;");
	}
	jboolean TaskInfo::isRunning()
	{
		return __thiz.getField<jboolean>(
			"isRunning");
	}
	jint TaskInfo::numActivities()
	{
		return __thiz.getField<jint>(
			"numActivities");
	}
	QAndroidJniObject TaskInfo::origActivity()
	{
		return __thiz.getObjectField(
			"origActivity",
			"Landroid/content/ComponentName;");
	}
	QAndroidJniObject TaskInfo::taskDescription()
	{
		return __thiz.getObjectField(
			"taskDescription",
			"Landroid/app/ActivityManager$TaskDescription;");
	}
	jint TaskInfo::taskId()
	{
		return __thiz.getField<jint>(
			"taskId");
	}
	QAndroidJniObject TaskInfo::topActivity()
	{
		return __thiz.getObjectField(
			"topActivity",
			"Landroid/content/ComponentName;");
	}
	
	// Constructors
	void TaskInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.TaskInfo",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject TaskInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class TaskInfo : public __jni_impl::android::app::TaskInfo
	{
	public:
		TaskInfo(QAndroidJniObject obj) { __thiz = obj; }
		TaskInfo()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_TASKINFO

