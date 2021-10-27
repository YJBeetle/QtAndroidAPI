#include "../../os/Parcel.hpp"
#include "./ExternalStorageStats.hpp"

namespace android::app::usage
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
	
	ExternalStorageStats::ExternalStorageStats(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint ExternalStorageStats::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
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
	jlong ExternalStorageStats::getImageBytes()
	{
		return __thiz.callMethod<jlong>(
			"getImageBytes",
			"()J"
		);
	}
	jlong ExternalStorageStats::getTotalBytes()
	{
		return __thiz.callMethod<jlong>(
			"getTotalBytes",
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
	void ExternalStorageStats::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app::usage

