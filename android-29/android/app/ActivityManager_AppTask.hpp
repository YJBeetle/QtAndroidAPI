#pragma once

#ifndef ANDROID_APP_ACTIVITYMANAGER_APPTASK
#define ANDROID_APP_ACTIVITYMANAGER_APPTASK

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::app
{
	class ActivityManager_RecentTaskInfo;
}

namespace __jni_impl::android::app
{
	class ActivityManager_AppTask : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void finishAndRemoveTask();
		void startActivity(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, __jni_impl::android::os::Bundle arg2);
		QAndroidJniObject getTaskInfo();
		void moveToFront();
		void setExcludeFromRecents(jboolean arg0);
	};
} // namespace __jni_impl::android::app

#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../os/Bundle.hpp"
#include "ActivityManager_RecentTaskInfo.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void ActivityManager_AppTask::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.ActivityManager$AppTask",
			"(V)V");
	}
	
	// Methods
	void ActivityManager_AppTask::finishAndRemoveTask()
	{
		__thiz.callMethod<void>(
			"finishAndRemoveTask",
			"()V");
	}
	void ActivityManager_AppTask::startActivity(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"startActivity",
			"(Landroid/content/Context;Landroid/content/Intent;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	QAndroidJniObject ActivityManager_AppTask::getTaskInfo()
	{
		return __thiz.callObjectMethod(
			"getTaskInfo",
			"()Landroid/app/ActivityManager$RecentTaskInfo;");
	}
	void ActivityManager_AppTask::moveToFront()
	{
		__thiz.callMethod<void>(
			"moveToFront",
			"()V");
	}
	void ActivityManager_AppTask::setExcludeFromRecents(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setExcludeFromRecents",
			"(Z)V",
			arg0);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class ActivityManager_AppTask : public __jni_impl::android::app::ActivityManager_AppTask
	{
	public:
		ActivityManager_AppTask(QAndroidJniObject obj) { __thiz = obj; }
		ActivityManager_AppTask()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_ACTIVITYMANAGER_APPTASK

