#pragma once

#ifndef ANDROID_APP_ACTIVITYMANAGER_RECENTTASKINFO
#define ANDROID_APP_ACTIVITYMANAGER_RECENTTASKINFO

#include "../../__JniBaseClass.hpp"
#include "TaskInfo.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::app
{
	class ActivityManager_RecentTaskInfo : public __jni_impl::android::app::TaskInfo
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		jint affiliatedTaskId();
		QAndroidJniObject description();
		jint id();
		jint persistentId();
		
		// Constructors
		void __constructor();
		
		// Methods
		void readFromParcel(__jni_impl::android::os::Parcel arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::app

#include "../os/Parcel.hpp"

namespace __jni_impl::android::app
{
	// Fields
	QAndroidJniObject ActivityManager_RecentTaskInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.ActivityManager$RecentTaskInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint ActivityManager_RecentTaskInfo::affiliatedTaskId()
	{
		return __thiz.getField<jint>(
			"affiliatedTaskId");
	}
	QAndroidJniObject ActivityManager_RecentTaskInfo::description()
	{
		return __thiz.getObjectField(
			"description",
			"Ljava/lang/CharSequence;");
	}
	jint ActivityManager_RecentTaskInfo::id()
	{
		return __thiz.getField<jint>(
			"id");
	}
	jint ActivityManager_RecentTaskInfo::persistentId()
	{
		return __thiz.getField<jint>(
			"persistentId");
	}
	
	// Constructors
	void ActivityManager_RecentTaskInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.ActivityManager$RecentTaskInfo",
			"()V");
	}
	
	// Methods
	void ActivityManager_RecentTaskInfo::readFromParcel(__jni_impl::android::os::Parcel arg0)
	{
		__thiz.callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	jint ActivityManager_RecentTaskInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void ActivityManager_RecentTaskInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class ActivityManager_RecentTaskInfo : public __jni_impl::android::app::ActivityManager_RecentTaskInfo
	{
	public:
		ActivityManager_RecentTaskInfo(QAndroidJniObject obj) { __thiz = obj; }
		ActivityManager_RecentTaskInfo()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_ACTIVITYMANAGER_RECENTTASKINFO

