#pragma once

#include "../bluetooth/BluetoothDevice.def.hpp"
#include "../bluetooth/le/ScanResult.def.hpp"
#include "../net/wifi/ScanResult.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AssociatedDevice.def.hpp"

namespace android::companion
{
	// Fields
	inline JObject AssociatedDevice::CREATOR()
	{
		return getStaticObjectField(
			"android.companion.AssociatedDevice",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint AssociatedDevice::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AssociatedDevice::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::bluetooth::le::ScanResult AssociatedDevice::getBleDevice() const
	{
		return callObjectMethod(
			"getBleDevice",
			"()Landroid/bluetooth/le/ScanResult;"
		);
	}
	inline android::bluetooth::BluetoothDevice AssociatedDevice::getBluetoothDevice() const
	{
		return callObjectMethod(
			"getBluetoothDevice",
			"()Landroid/bluetooth/BluetoothDevice;"
		);
	}
	inline android::net::wifi::ScanResult AssociatedDevice::getWifiDevice() const
	{
		return callObjectMethod(
			"getWifiDevice",
			"()Landroid/net/wifi/ScanResult;"
		);
	}
	inline jint AssociatedDevice::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString AssociatedDevice::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AssociatedDevice::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::companion

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::companion;
#endif
