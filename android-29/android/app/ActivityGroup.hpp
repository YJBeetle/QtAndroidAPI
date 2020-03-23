#pragma once

#ifndef ANDROID_APP_ACTIVITYGROUP
#define ANDROID_APP_ACTIVITYGROUP

#include "Activity.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::app
{
	class Activity;
}
namespace __jni_impl::android::app
{
	class LocalActivityManager;
}

namespace __jni_impl::android::app
{
	class ActivityGroup : public __jni_impl::android::app::Activity
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jboolean arg0);
		
		// Methods
		QAndroidJniObject getCurrentActivity();
		QAndroidJniObject getLocalActivityManager();
	};
} // namespace __jni_impl::android::app

#include "../os/Bundle.hpp"
#include "Activity.hpp"
#include "LocalActivityManager.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void ActivityGroup::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.ActivityGroup",
			"()V");
	}
	void ActivityGroup::__constructor(jboolean arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.ActivityGroup",
			"(Z)V",
			arg0);
	}
	
	// Methods
	QAndroidJniObject ActivityGroup::getCurrentActivity()
	{
		return __thiz.callObjectMethod(
			"getCurrentActivity",
			"()Landroid/app/Activity;");
	}
	QAndroidJniObject ActivityGroup::getLocalActivityManager()
	{
		return __thiz.callObjectMethod(
			"getLocalActivityManager",
			"()Landroid/app/LocalActivityManager;");
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class ActivityGroup : public __jni_impl::android::app::ActivityGroup
	{
	public:
		ActivityGroup(QAndroidJniObject obj) { __thiz = obj; }
		ActivityGroup()
		{
			__constructor();
		}
		ActivityGroup(jboolean arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_ACTIVITYGROUP

