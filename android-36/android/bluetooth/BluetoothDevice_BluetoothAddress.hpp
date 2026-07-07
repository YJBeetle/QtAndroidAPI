#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./BluetoothDevice_BluetoothAddress.def.hpp"

namespace android::bluetooth
{
	// Fields
	inline JObject BluetoothDevice_BluetoothAddress::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice$BluetoothAddress",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline BluetoothDevice_BluetoothAddress::BluetoothDevice_BluetoothAddress(JString arg0, jint arg1)
		: JObject(
			"android.bluetooth.BluetoothDevice$BluetoothAddress",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	inline jint BluetoothDevice_BluetoothAddress::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString BluetoothDevice_BluetoothAddress::getAddress() const
	{
		return callObjectMethod(
			"getAddress",
			"()Ljava/lang/String;"
		);
	}
	inline jint BluetoothDevice_BluetoothAddress::getAddressType() const
	{
		return callMethod<jint>(
			"getAddressType",
			"()I"
		);
	}
	inline void BluetoothDevice_BluetoothAddress::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::bluetooth

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::bluetooth;
#endif
