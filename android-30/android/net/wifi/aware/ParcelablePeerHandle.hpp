#pragma once

#include "./PeerHandle.def.hpp"
#include "../../../os/Parcel.def.hpp"
#include "./ParcelablePeerHandle.def.hpp"

namespace android::net::wifi::aware
{
	// Fields
	inline JObject ParcelablePeerHandle::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.aware.ParcelablePeerHandle",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline ParcelablePeerHandle::ParcelablePeerHandle(android::net::wifi::aware::PeerHandle arg0)
		: android::net::wifi::aware::PeerHandle(
			"android.net.wifi.aware.ParcelablePeerHandle",
			"(Landroid/net/wifi/aware/PeerHandle;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint ParcelablePeerHandle::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void ParcelablePeerHandle::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
#include "./PeerHandle.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::aware;
#endif
