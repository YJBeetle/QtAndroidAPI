#include "../../../os/Parcel.hpp"
#include "./AwareResources.hpp"

namespace android::net::wifi::aware
{
	// Fields
	JObject AwareResources::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.aware.AwareResources",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	AwareResources::AwareResources(jint arg0, jint arg1, jint arg2)
		: JObject(
			"android.net.wifi.aware.AwareResources",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jint AwareResources::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint AwareResources::getAvailableDataPathsCount() const
	{
		return callMethod<jint>(
			"getAvailableDataPathsCount",
			"()I"
		);
	}
	jint AwareResources::getAvailablePublishSessionsCount() const
	{
		return callMethod<jint>(
			"getAvailablePublishSessionsCount",
			"()I"
		);
	}
	jint AwareResources::getAvailableSubscribeSessionsCount() const
	{
		return callMethod<jint>(
			"getAvailableSubscribeSessionsCount",
			"()I"
		);
	}
	void AwareResources::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::aware

