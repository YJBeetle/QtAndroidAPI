#pragma once

#include "../net/LinkProperties.def.hpp"
#include "../os/Parcel.def.hpp"
#include "./data/ApnSetting.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PreciseDataConnectionState.def.hpp"

namespace android::telephony
{
	// Fields
	inline JObject PreciseDataConnectionState::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.PreciseDataConnectionState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint PreciseDataConnectionState::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean PreciseDataConnectionState::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::telephony::data::ApnSetting PreciseDataConnectionState::getApnSetting() const
	{
		return callObjectMethod(
			"getApnSetting",
			"()Landroid/telephony/data/ApnSetting;"
		);
	}
	inline jint PreciseDataConnectionState::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	inline jint PreciseDataConnectionState::getLastCauseCode() const
	{
		return callMethod<jint>(
			"getLastCauseCode",
			"()I"
		);
	}
	inline android::net::LinkProperties PreciseDataConnectionState::getLinkProperties() const
	{
		return callObjectMethod(
			"getLinkProperties",
			"()Landroid/net/LinkProperties;"
		);
	}
	inline jint PreciseDataConnectionState::getNetworkType() const
	{
		return callMethod<jint>(
			"getNetworkType",
			"()I"
		);
	}
	inline jint PreciseDataConnectionState::getState() const
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	inline jint PreciseDataConnectionState::getTransportType() const
	{
		return callMethod<jint>(
			"getTransportType",
			"()I"
		);
	}
	inline jint PreciseDataConnectionState::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString PreciseDataConnectionState::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void PreciseDataConnectionState::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

// Base class headers

