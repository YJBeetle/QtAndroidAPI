#include "../../os/Parcel.hpp"
#include "./ExternalStorageStats.hpp"

namespace android::app::usage
{
	// Fields
	__JniBaseClass ExternalStorageStats::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.usage.ExternalStorageStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	ExternalStorageStats::ExternalStorageStats(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint ExternalStorageStats::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jlong ExternalStorageStats::getAppBytes()
	{
		return callMethod<jlong>(
			"getAppBytes",
			"()J"
		);
	}
	jlong ExternalStorageStats::getAudioBytes()
	{
		return callMethod<jlong>(
			"getAudioBytes",
			"()J"
		);
	}
	jlong ExternalStorageStats::getImageBytes()
	{
		return callMethod<jlong>(
			"getImageBytes",
			"()J"
		);
	}
	jlong ExternalStorageStats::getTotalBytes()
	{
		return callMethod<jlong>(
			"getTotalBytes",
			"()J"
		);
	}
	jlong ExternalStorageStats::getVideoBytes()
	{
		return callMethod<jlong>(
			"getVideoBytes",
			"()J"
		);
	}
	void ExternalStorageStats::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::usage

