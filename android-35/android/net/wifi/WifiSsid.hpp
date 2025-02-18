#pragma once

#include "../../../JByteArray.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./WifiSsid.def.hpp"

namespace android::net::wifi
{
	// Fields
	inline JObject WifiSsid::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiSsid",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::net::wifi::WifiSsid WifiSsid::fromBytes(JByteArray arg0)
	{
		return callStaticObjectMethod(
			"android.net.wifi.WifiSsid",
			"fromBytes",
			"([B)Landroid/net/wifi/WifiSsid;",
			arg0.object<jbyteArray>()
		);
	}
	inline jint WifiSsid::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean WifiSsid::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JByteArray WifiSsid::getBytes() const
	{
		return callObjectMethod(
			"getBytes",
			"()[B"
		);
	}
	inline jint WifiSsid::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString WifiSsid::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void WifiSsid::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
