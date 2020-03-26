#pragma once

#ifndef ANDROID_APP_USAGE_EXTERNALSTORAGESTATS
#define ANDROID_APP_USAGE_EXTERNALSTORAGESTATS

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::app::usage
{
	class ExternalStorageStats : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jlong getTotalBytes();
		jlong getAppBytes();
		jlong getAudioBytes();
		jlong getVideoBytes();
		jlong getImageBytes();
	};
} // namespace __jni_impl::android::app::usage

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::app::usage
{
	// Fields
	QAndroidJniObject ExternalStorageStats::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.usage.ExternalStorageStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void ExternalStorageStats::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.usage.ExternalStorageStats",
			"(V)V");
	}
	
	// Methods
	jint ExternalStorageStats::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ExternalStorageStats::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jlong ExternalStorageStats::getTotalBytes()
	{
		return __thiz.callMethod<jlong>(
			"getTotalBytes",
			"()J"
		);
	}
	jlong ExternalStorageStats::getAppBytes()
	{
		return __thiz.callMethod<jlong>(
			"getAppBytes",
			"()J"
		);
	}
	jlong ExternalStorageStats::getAudioBytes()
	{
		return __thiz.callMethod<jlong>(
			"getAudioBytes",
			"()J"
		);
	}
	jlong ExternalStorageStats::getVideoBytes()
	{
		return __thiz.callMethod<jlong>(
			"getVideoBytes",
			"()J"
		);
	}
	jlong ExternalStorageStats::getImageBytes()
	{
		return __thiz.callMethod<jlong>(
			"getImageBytes",
			"()J"
		);
	}
} // namespace __jni_impl::android::app::usage

namespace android::app::usage
{
	class ExternalStorageStats : public __jni_impl::android::app::usage::ExternalStorageStats
	{
	public:
		ExternalStorageStats(QAndroidJniObject obj) { __thiz = obj; }
		ExternalStorageStats()
		{
			__constructor();
		}
	};
} // namespace android::app::usage

#endif // ANDROID_APP_USAGE_EXTERNALSTORAGESTATS

