#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./DnsEvent.def.hpp"

namespace android::app::admin
{
	// Fields
	inline JObject DnsEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.app.admin.DnsEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint DnsEvent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString DnsEvent::getHostname() const
	{
		return callObjectMethod(
			"getHostname",
			"()Ljava/lang/String;"
		);
	}
	inline JObject DnsEvent::getInetAddresses() const
	{
		return callObjectMethod(
			"getInetAddresses",
			"()Ljava/util/List;"
		);
	}
	inline jint DnsEvent::getTotalResolvedAddressCount() const
	{
		return callMethod<jint>(
			"getTotalResolvedAddressCount",
			"()I"
		);
	}
	inline JString DnsEvent::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void DnsEvent::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::admin

// Base class headers
#include "./NetworkEvent.hpp"

