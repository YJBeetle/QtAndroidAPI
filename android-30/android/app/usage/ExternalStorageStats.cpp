#include "../../os/Parcel.hpp"
#include "./ExternalStorageStats.hpp"

namespace android::app::usage
{
	// Fields
	JObject ExternalStorageStats::CREATOR()
	{
		return getStaticObjectField(
			"android.app.usage.ExternalStorageStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	ExternalStorageStats::ExternalStorageStats(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint ExternalStorageStats::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jlong ExternalStorageStats::getAppBytes() const
	{
		return callMethod<jlong>(
			"getAppBytes",
			"()J"
		);
	}
	jlong ExternalStorageStats::getAudioBytes() const
	{
		return callMethod<jlong>(
			"getAudioBytes",
			"()J"
		);
	}
	jlong ExternalStorageStats::getImageBytes() const
	{
		return callMethod<jlong>(
			"getImageBytes",
			"()J"
		);
	}
	jlong ExternalStorageStats::getTotalBytes() const
	{
		return callMethod<jlong>(
			"getTotalBytes",
			"()J"
		);
	}
	jlong ExternalStorageStats::getVideoBytes() const
	{
		return callMethod<jlong>(
			"getVideoBytes",
			"()J"
		);
	}
	void ExternalStorageStats::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::usage

