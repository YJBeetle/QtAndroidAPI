#pragma once

#ifndef ANDROID_APP_ACTIVITYMANAGER_PROCESSERRORSTATEINFO
#define ANDROID_APP_ACTIVITYMANAGER_PROCESSERRORSTATEINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::app
{
	class ActivityManager_ProcessErrorStateInfo : public __JniBaseClass
	{
	public:
		// Fields
		static jint CRASHED();
		static QAndroidJniObject CREATOR();
		static jint NOT_RESPONDING();
		static jint NO_ERROR();
		jint condition();
		jbyteArray crashData();
		jstring longMsg();
		jint pid();
		jstring processName();
		jstring shortMsg();
		jstring stackTrace();
		jstring tag();
		jint uid();
		
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
	jint ActivityManager_ProcessErrorStateInfo::CRASHED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$ProcessErrorStateInfo",
			"CRASHED"
		);
	}
	QAndroidJniObject ActivityManager_ProcessErrorStateInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.ActivityManager$ProcessErrorStateInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ActivityManager_ProcessErrorStateInfo::NOT_RESPONDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$ProcessErrorStateInfo",
			"NOT_RESPONDING"
		);
	}
	jint ActivityManager_ProcessErrorStateInfo::NO_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$ProcessErrorStateInfo",
			"NO_ERROR"
		);
	}
	jint ActivityManager_ProcessErrorStateInfo::condition()
	{
		return __thiz.getField<jint>(
			"condition"
		);
	}
	jbyteArray ActivityManager_ProcessErrorStateInfo::crashData()
	{
		return __thiz.getObjectField(
			"crashData",
			"[B"
		).object<jbyteArray>();
	}
	jstring ActivityManager_ProcessErrorStateInfo::longMsg()
	{
		return __thiz.getObjectField(
			"longMsg",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ActivityManager_ProcessErrorStateInfo::pid()
	{
		return __thiz.getField<jint>(
			"pid"
		);
	}
	jstring ActivityManager_ProcessErrorStateInfo::processName()
	{
		return __thiz.getObjectField(
			"processName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ActivityManager_ProcessErrorStateInfo::shortMsg()
	{
		return __thiz.getObjectField(
			"shortMsg",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ActivityManager_ProcessErrorStateInfo::stackTrace()
	{
		return __thiz.getObjectField(
			"stackTrace",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ActivityManager_ProcessErrorStateInfo::tag()
	{
		return __thiz.getObjectField(
			"tag",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ActivityManager_ProcessErrorStateInfo::uid()
	{
		return __thiz.getField<jint>(
			"uid"
		);
	}
	
	// Constructors
	void ActivityManager_ProcessErrorStateInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.ActivityManager$ProcessErrorStateInfo",
			"()V"
		);
	}
	
	// Methods
	void ActivityManager_ProcessErrorStateInfo::readFromParcel(__jni_impl::android::os::Parcel arg0)
	{
		__thiz.callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	jint ActivityManager_ProcessErrorStateInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ActivityManager_ProcessErrorStateInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class ActivityManager_ProcessErrorStateInfo : public __jni_impl::android::app::ActivityManager_ProcessErrorStateInfo
	{
	public:
		ActivityManager_ProcessErrorStateInfo(QAndroidJniObject obj) { __thiz = obj; }
		ActivityManager_ProcessErrorStateInfo()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_ACTIVITYMANAGER_PROCESSERRORSTATEINFO

