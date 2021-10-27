#pragma once

#ifndef ANDROID_APP_USAGE_STORAGESTATS
#define ANDROID_APP_USAGE_STORAGESTATS

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::app::usage
{
	class StorageStats : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jlong getAppBytes();
		jlong getCacheBytes();
		jlong getDataBytes();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::app::usage

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::app::usage
{
	// Fields
	QAndroidJniObject StorageStats::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.usage.StorageStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void StorageStats::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.usage.StorageStats",
			"(V)V");
	}
	
	// Methods
	jint StorageStats::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jlong StorageStats::getAppBytes()
	{
		return __thiz.callMethod<jlong>(
			"getAppBytes",
			"()J"
		);
	}
	jlong StorageStats::getCacheBytes()
	{
		return __thiz.callMethod<jlong>(
			"getCacheBytes",
			"()J"
		);
	}
	jlong StorageStats::getDataBytes()
	{
		return __thiz.callMethod<jlong>(
			"getDataBytes",
			"()J"
		);
	}
	void StorageStats::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::app::usage

namespace android::app::usage
{
	class StorageStats : public __jni_impl::android::app::usage::StorageStats
	{
	public:
		StorageStats(QAndroidJniObject obj) { __thiz = obj; }
		StorageStats()
		{
			__constructor();
		}
	};
} // namespace android::app::usage

#endif // ANDROID_APP_USAGE_STORAGESTATS

