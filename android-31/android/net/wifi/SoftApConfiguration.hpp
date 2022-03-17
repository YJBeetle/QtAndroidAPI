#pragma once

#include "../MacAddress.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./SoftApConfiguration.def.hpp"

namespace android::net::wifi
{
	// Fields
	inline JObject SoftApConfiguration::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.SoftApConfiguration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint SoftApConfiguration::SECURITY_TYPE_OPEN()
	{
		return getStaticField<jint>(
			"android.net.wifi.SoftApConfiguration",
			"SECURITY_TYPE_OPEN"
		);
	}
	inline jint SoftApConfiguration::SECURITY_TYPE_WPA2_PSK()
	{
		return getStaticField<jint>(
			"android.net.wifi.SoftApConfiguration",
			"SECURITY_TYPE_WPA2_PSK"
		);
	}
	inline jint SoftApConfiguration::SECURITY_TYPE_WPA3_SAE()
	{
		return getStaticField<jint>(
			"android.net.wifi.SoftApConfiguration",
			"SECURITY_TYPE_WPA3_SAE"
		);
	}
	inline jint SoftApConfiguration::SECURITY_TYPE_WPA3_SAE_TRANSITION()
	{
		return getStaticField<jint>(
			"android.net.wifi.SoftApConfiguration",
			"SECURITY_TYPE_WPA3_SAE_TRANSITION"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint SoftApConfiguration::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean SoftApConfiguration::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::net::MacAddress SoftApConfiguration::getBssid() const
	{
		return callObjectMethod(
			"getBssid",
			"()Landroid/net/MacAddress;"
		);
	}
	inline JString SoftApConfiguration::getPassphrase() const
	{
		return callObjectMethod(
			"getPassphrase",
			"()Ljava/lang/String;"
		);
	}
	inline jint SoftApConfiguration::getSecurityType() const
	{
		return callMethod<jint>(
			"getSecurityType",
			"()I"
		);
	}
	inline JString SoftApConfiguration::getSsid() const
	{
		return callObjectMethod(
			"getSsid",
			"()Ljava/lang/String;"
		);
	}
	inline jint SoftApConfiguration::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean SoftApConfiguration::isHiddenSsid() const
	{
		return callMethod<jboolean>(
			"isHiddenSsid",
			"()Z"
		);
	}
	inline JString SoftApConfiguration::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void SoftApConfiguration::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi

// Base class headers

