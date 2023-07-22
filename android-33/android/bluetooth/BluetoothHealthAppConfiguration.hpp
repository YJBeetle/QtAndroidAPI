#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./BluetoothHealthAppConfiguration.def.hpp"

namespace android::bluetooth
{
	// Fields
	inline JObject BluetoothHealthAppConfiguration::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothHealthAppConfiguration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint BluetoothHealthAppConfiguration::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint BluetoothHealthAppConfiguration::getDataType() const
	{
		return callMethod<jint>(
			"getDataType",
			"()I"
		);
	}
	inline JString BluetoothHealthAppConfiguration::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jint BluetoothHealthAppConfiguration::getRole() const
	{
		return callMethod<jint>(
			"getRole",
			"()I"
		);
	}
	inline void BluetoothHealthAppConfiguration::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
