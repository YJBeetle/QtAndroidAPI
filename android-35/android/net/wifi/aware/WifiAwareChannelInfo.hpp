#pragma once

#include "../../../os/Parcel.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./WifiAwareChannelInfo.def.hpp"

namespace android::net::wifi::aware
{
	// Fields
	inline JObject WifiAwareChannelInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.aware.WifiAwareChannelInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint WifiAwareChannelInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean WifiAwareChannelInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint WifiAwareChannelInfo::getChannelBandwidth() const
	{
		return callMethod<jint>(
			"getChannelBandwidth",
			"()I"
		);
	}
	inline jint WifiAwareChannelInfo::getChannelFrequencyMhz() const
	{
		return callMethod<jint>(
			"getChannelFrequencyMhz",
			"()I"
		);
	}
	inline jint WifiAwareChannelInfo::getSpatialStreamCount() const
	{
		return callMethod<jint>(
			"getSpatialStreamCount",
			"()I"
		);
	}
	inline jint WifiAwareChannelInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString WifiAwareChannelInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void WifiAwareChannelInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::aware;
#endif
