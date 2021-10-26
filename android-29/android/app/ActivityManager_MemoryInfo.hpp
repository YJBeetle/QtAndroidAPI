#pragma once

#ifndef ANDROID_APP_ACTIVITYMANAGER_MEMORYINFO
#define ANDROID_APP_ACTIVITYMANAGER_MEMORYINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::app
{
	class ActivityManager_MemoryInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		jlong availMem();
		jboolean lowMemory();
		jlong threshold();
		jlong totalMem();
		
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
	QAndroidJniObject ActivityManager_MemoryInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.ActivityManager$MemoryInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jlong ActivityManager_MemoryInfo::availMem()
	{
		return __thiz.getField<jlong>(
			"availMem"
		);
	}
	jboolean ActivityManager_MemoryInfo::lowMemory()
	{
		return __thiz.getField<jboolean>(
			"lowMemory"
		);
	}
	jlong ActivityManager_MemoryInfo::threshold()
	{
		return __thiz.getField<jlong>(
			"threshold"
		);
	}
	jlong ActivityManager_MemoryInfo::totalMem()
	{
		return __thiz.getField<jlong>(
			"totalMem"
		);
	}
	
	// Constructors
	void ActivityManager_MemoryInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.ActivityManager$MemoryInfo",
			"()V"
		);
	}
	
	// Methods
	void ActivityManager_MemoryInfo::readFromParcel(__jni_impl::android::os::Parcel arg0)
	{
		__thiz.callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	jint ActivityManager_MemoryInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ActivityManager_MemoryInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class ActivityManager_MemoryInfo : public __jni_impl::android::app::ActivityManager_MemoryInfo
	{
	public:
		ActivityManager_MemoryInfo(QAndroidJniObject obj) { __thiz = obj; }
		ActivityManager_MemoryInfo()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_ACTIVITYMANAGER_MEMORYINFO

