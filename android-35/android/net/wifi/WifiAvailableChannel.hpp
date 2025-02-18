#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./WifiAvailableChannel.def.hpp"

namespace android::net::wifi
{
	// Fields
	inline JObject WifiAvailableChannel::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiAvailableChannel",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint WifiAvailableChannel::OP_MODE_SAP()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiAvailableChannel",
			"OP_MODE_SAP"
		);
	}
	inline jint WifiAvailableChannel::OP_MODE_STA()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiAvailableChannel",
			"OP_MODE_STA"
		);
	}
	inline jint WifiAvailableChannel::OP_MODE_TDLS()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiAvailableChannel",
			"OP_MODE_TDLS"
		);
	}
	inline jint WifiAvailableChannel::OP_MODE_WIFI_AWARE()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiAvailableChannel",
			"OP_MODE_WIFI_AWARE"
		);
	}
	inline jint WifiAvailableChannel::OP_MODE_WIFI_DIRECT_CLI()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiAvailableChannel",
			"OP_MODE_WIFI_DIRECT_CLI"
		);
	}
	inline jint WifiAvailableChannel::OP_MODE_WIFI_DIRECT_GO()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiAvailableChannel",
			"OP_MODE_WIFI_DIRECT_GO"
		);
	}
	
	// Constructors
	inline WifiAvailableChannel::WifiAvailableChannel(jint arg0, jint arg1)
		: JObject(
			"android.net.wifi.WifiAvailableChannel",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jint WifiAvailableChannel::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean WifiAvailableChannel::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint WifiAvailableChannel::getFrequencyMhz() const
	{
		return callMethod<jint>(
			"getFrequencyMhz",
			"()I"
		);
	}
	inline jint WifiAvailableChannel::getOperationalModes() const
	{
		return callMethod<jint>(
			"getOperationalModes",
			"()I"
		);
	}
	inline jint WifiAvailableChannel::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString WifiAvailableChannel::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void WifiAvailableChannel::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
