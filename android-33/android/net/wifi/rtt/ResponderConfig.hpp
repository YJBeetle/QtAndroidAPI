#pragma once

#include "../../MacAddress.def.hpp"
#include "../ScanResult.def.hpp"
#include "../../../os/Parcel.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./ResponderConfig.def.hpp"

namespace android::net::wifi::rtt
{
	// Fields
	inline JObject ResponderConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.rtt.ResponderConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::net::wifi::rtt::ResponderConfig ResponderConfig::fromScanResult(android::net::wifi::ScanResult arg0)
	{
		return callStaticObjectMethod(
			"android.net.wifi.rtt.ResponderConfig",
			"fromScanResult",
			"(Landroid/net/wifi/ScanResult;)Landroid/net/wifi/rtt/ResponderConfig;",
			arg0.object()
		);
	}
	inline jint ResponderConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean ResponderConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint ResponderConfig::getCenterFreq0Mhz() const
	{
		return callMethod<jint>(
			"getCenterFreq0Mhz",
			"()I"
		);
	}
	inline jint ResponderConfig::getCenterFreq1Mhz() const
	{
		return callMethod<jint>(
			"getCenterFreq1Mhz",
			"()I"
		);
	}
	inline jint ResponderConfig::getChannelWidth() const
	{
		return callMethod<jint>(
			"getChannelWidth",
			"()I"
		);
	}
	inline jint ResponderConfig::getFrequencyMhz() const
	{
		return callMethod<jint>(
			"getFrequencyMhz",
			"()I"
		);
	}
	inline android::net::MacAddress ResponderConfig::getMacAddress() const
	{
		return callObjectMethod(
			"getMacAddress",
			"()Landroid/net/MacAddress;"
		);
	}
	inline jint ResponderConfig::getPreamble() const
	{
		return callMethod<jint>(
			"getPreamble",
			"()I"
		);
	}
	inline jint ResponderConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean ResponderConfig::is80211mcSupported() const
	{
		return callMethod<jboolean>(
			"is80211mcSupported",
			"()Z"
		);
	}
	inline JString ResponderConfig::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ResponderConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::rtt

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::rtt;
#endif
