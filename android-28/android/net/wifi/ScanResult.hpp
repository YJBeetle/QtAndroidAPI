#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./ScanResult.def.hpp"

namespace android::net::wifi
{
	// Fields
	inline JString ScanResult::BSSID()
	{
		return getObjectField(
			"BSSID",
			"Ljava/lang/String;"
		);
	}
	inline jint ScanResult::CHANNEL_WIDTH_160MHZ()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"CHANNEL_WIDTH_160MHZ"
		);
	}
	inline jint ScanResult::CHANNEL_WIDTH_20MHZ()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"CHANNEL_WIDTH_20MHZ"
		);
	}
	inline jint ScanResult::CHANNEL_WIDTH_40MHZ()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"CHANNEL_WIDTH_40MHZ"
		);
	}
	inline jint ScanResult::CHANNEL_WIDTH_80MHZ()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"CHANNEL_WIDTH_80MHZ"
		);
	}
	inline jint ScanResult::CHANNEL_WIDTH_80MHZ_PLUS_MHZ()
	{
		return getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"CHANNEL_WIDTH_80MHZ_PLUS_MHZ"
		);
	}
	inline JString ScanResult::SSID()
	{
		return getObjectField(
			"SSID",
			"Ljava/lang/String;"
		);
	}
	inline JString ScanResult::capabilities()
	{
		return getObjectField(
			"capabilities",
			"Ljava/lang/String;"
		);
	}
	inline jint ScanResult::centerFreq0()
	{
		return getField<jint>(
			"centerFreq0"
		);
	}
	inline jint ScanResult::centerFreq1()
	{
		return getField<jint>(
			"centerFreq1"
		);
	}
	inline jint ScanResult::channelWidth()
	{
		return getField<jint>(
			"channelWidth"
		);
	}
	inline jint ScanResult::frequency()
	{
		return getField<jint>(
			"frequency"
		);
	}
	inline jint ScanResult::level()
	{
		return getField<jint>(
			"level"
		);
	}
	inline JString ScanResult::operatorFriendlyName()
	{
		return getObjectField(
			"operatorFriendlyName",
			"Ljava/lang/CharSequence;"
		);
	}
	inline jlong ScanResult::timestamp()
	{
		return getField<jlong>(
			"timestamp"
		);
	}
	inline JString ScanResult::venueName()
	{
		return getObjectField(
			"venueName",
			"Ljava/lang/CharSequence;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ScanResult::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean ScanResult::is80211mcResponder() const
	{
		return callMethod<jboolean>(
			"is80211mcResponder",
			"()Z"
		);
	}
	inline jboolean ScanResult::isPasspointNetwork() const
	{
		return callMethod<jboolean>(
			"isPasspointNetwork",
			"()Z"
		);
	}
	inline JString ScanResult::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ScanResult::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi;
#endif
