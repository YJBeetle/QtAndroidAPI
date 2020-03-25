#pragma once

#ifndef ANDROID_APP_ACTIVITYMANAGER_RUNNINGTASKINFO
#define ANDROID_APP_ACTIVITYMANAGER_RUNNINGTASKINFO

#include "../../__JniBaseClass.hpp"
#include "TaskInfo.hpp"

namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::app
{
	class ActivityManager_RunningTaskInfo : public __jni_impl::android::app::TaskInfo
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		QAndroidJniObject description();
		jint id();
		jint numRunning();
		QAndroidJniObject thumbnail();
		
		// Constructors
		void __constructor();
		
		// Methods
		void readFromParcel(__jni_impl::android::os::Parcel arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::app

#include "../graphics/Bitmap.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::app
{
	// Fields
	QAndroidJniObject ActivityManager_RunningTaskInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.ActivityManager$RunningTaskInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	QAndroidJniObject ActivityManager_RunningTaskInfo::description()
	{
		return __thiz.getObjectField(
			"description",
			"Ljava/lang/CharSequence;");
	}
	jint ActivityManager_RunningTaskInfo::id()
	{
		return __thiz.getField<jint>(
			"id");
	}
	jint ActivityManager_RunningTaskInfo::numRunning()
	{
		return __thiz.getField<jint>(
			"numRunning");
	}
	QAndroidJniObject ActivityManager_RunningTaskInfo::thumbnail()
	{
		return __thiz.getObjectField(
			"thumbnail",
			"Landroid/graphics/Bitmap;");
	}
	
	// Constructors
	void ActivityManager_RunningTaskInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.ActivityManager$RunningTaskInfo",
			"()V");
	}
	
	// Methods
	void ActivityManager_RunningTaskInfo::readFromParcel(__jni_impl::android::os::Parcel arg0)
	{
		__thiz.callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	jint ActivityManager_RunningTaskInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void ActivityManager_RunningTaskInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class ActivityManager_RunningTaskInfo : public __jni_impl::android::app::ActivityManager_RunningTaskInfo
	{
	public:
		ActivityManager_RunningTaskInfo(QAndroidJniObject obj) { __thiz = obj; }
		ActivityManager_RunningTaskInfo()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_ACTIVITYMANAGER_RUNNINGTASKINFO

