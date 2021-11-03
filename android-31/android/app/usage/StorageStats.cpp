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
	
	// QJniObject forward
	StorageStats::StorageStats(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint StorageStats::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jlong StorageStats::getAppBytes()
	{
		return callMethod<jlong>(
			"getAppBytes",
			"()J"
		);
	}
	jlong StorageStats::getCacheBytes()
	{
		return callMethod<jlong>(
			"getCacheBytes",
			"()J"
		);
	}
	jlong StorageStats::getDataBytes()
	{
		return callMethod<jlong>(
			"getDataBytes",
			"()J"
		);
	}
	jlong StorageStats::getExternalCacheBytes()
	{
		return callMethod<jlong>(
			"getExternalCacheBytes",
			"()J"
		);
	}
	void StorageStats::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::usage

