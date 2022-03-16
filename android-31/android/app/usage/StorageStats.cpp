#include "../../os/Parcel.hpp"
#include "./StorageStats.hpp"

namespace android::app::usage
{
	// Fields
	JObject StorageStats::CREATOR()
	{
		return getStaticObjectField(
			"android.app.usage.StorageStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	jint StorageStats::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jlong StorageStats::getAppBytes() const
	{
		return callMethod<jlong>(
			"getAppBytes",
			"()J"
		);
	}
	jlong StorageStats::getCacheBytes() const
	{
		return callMethod<jlong>(
			"getCacheBytes",
			"()J"
		);
	}
	jlong StorageStats::getDataBytes() const
	{
		return callMethod<jlong>(
			"getDataBytes",
			"()J"
		);
	}
	jlong StorageStats::getExternalCacheBytes() const
	{
		return callMethod<jlong>(
			"getExternalCacheBytes",
			"()J"
		);
	}
	void StorageStats::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::usage

