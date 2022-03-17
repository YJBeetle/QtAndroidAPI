#pragma once

#include "../../JByteArray.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./BluetoothHidDeviceAppSdpSettings.def.hpp"

namespace android::bluetooth
{
	// Fields
	inline JObject BluetoothHidDeviceAppSdpSettings::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothHidDeviceAppSdpSettings",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline BluetoothHidDeviceAppSdpSettings::BluetoothHidDeviceAppSdpSettings(JString arg0, JString arg1, JString arg2, jbyte arg3, JByteArray arg4)
		: JObject(
			"android.bluetooth.BluetoothHidDeviceAppSdpSettings",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;B[B)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3,
			arg4.object<jbyteArray>()
		) {}
	
	// Methods
	inline jint BluetoothHidDeviceAppSdpSettings::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString BluetoothHidDeviceAppSdpSettings::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		);
	}
	inline JByteArray BluetoothHidDeviceAppSdpSettings::getDescriptors() const
	{
		return callObjectMethod(
			"getDescriptors",
			"()[B"
		);
	}
	inline JString BluetoothHidDeviceAppSdpSettings::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline JString BluetoothHidDeviceAppSdpSettings::getProvider() const
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/lang/String;"
		);
	}
	inline jbyte BluetoothHidDeviceAppSdpSettings::getSubclass() const
	{
		return callMethod<jbyte>(
			"getSubclass",
			"()B"
		);
	}
	inline void BluetoothHidDeviceAppSdpSettings::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

