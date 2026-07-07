#pragma once

#include "../../../../JByteArray.hpp"
#include "../../MacAddress.def.hpp"
#include "../../../os/Parcel.def.hpp"
#include "../../../../JString.hpp"
#include "./WifiP2pDirInfo.def.hpp"

namespace android::net::wifi::p2p
{
	// Fields
	inline JObject WifiP2pDirInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pDirInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline WifiP2pDirInfo::WifiP2pDirInfo(android::net::MacAddress arg0, JByteArray arg1, JByteArray arg2)
		: JObject(
			"android.net.wifi.p2p.WifiP2pDirInfo",
			"(Landroid/net/MacAddress;[B[B)V",
			arg0.object(),
			arg1.object<jbyteArray>(),
			arg2.object<jbyteArray>()
		) {}
	
	// Methods
	inline jint WifiP2pDirInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JByteArray WifiP2pDirInfo::getDirTag() const
	{
		return callObjectMethod(
			"getDirTag",
			"()[B"
		);
	}
	inline android::net::MacAddress WifiP2pDirInfo::getMacAddress() const
	{
		return callObjectMethod(
			"getMacAddress",
			"()Landroid/net/MacAddress;"
		);
	}
	inline JByteArray WifiP2pDirInfo::getNonce() const
	{
		return callObjectMethod(
			"getNonce",
			"()[B"
		);
	}
	inline JString WifiP2pDirInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void WifiP2pDirInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::p2p

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::p2p;
#endif
