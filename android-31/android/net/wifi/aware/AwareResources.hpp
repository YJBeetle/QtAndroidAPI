#pragma once

#include "../../../os/Parcel.def.hpp"
#include "./AwareResources.def.hpp"

namespace android::net::wifi::aware
{
	// Fields
	inline JObject AwareResources::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.aware.AwareResources",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline AwareResources::AwareResources(jint arg0, jint arg1, jint arg2)
		: JObject(
			"android.net.wifi.aware.AwareResources",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	inline jint AwareResources::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint AwareResources::getAvailableDataPathsCount() const
	{
		return callMethod<jint>(
			"getAvailableDataPathsCount",
			"()I"
		);
	}
	inline jint AwareResources::getAvailablePublishSessionsCount() const
	{
		return callMethod<jint>(
			"getAvailablePublishSessionsCount",
			"()I"
		);
	}
	inline jint AwareResources::getAvailableSubscribeSessionsCount() const
	{
		return callMethod<jint>(
			"getAvailableSubscribeSessionsCount",
			"()I"
		);
	}
	inline void AwareResources::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::aware

// Base class headers

