#pragma once

#include "../os/Parcel.def.hpp"
#include "./BluetoothHidDeviceAppQosSettings.def.hpp"

namespace android::bluetooth
{
	// Fields
	inline JObject BluetoothHidDeviceAppQosSettings::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothHidDeviceAppQosSettings",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint BluetoothHidDeviceAppQosSettings::MAX()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHidDeviceAppQosSettings",
			"MAX"
		);
	}
	inline jint BluetoothHidDeviceAppQosSettings::SERVICE_BEST_EFFORT()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHidDeviceAppQosSettings",
			"SERVICE_BEST_EFFORT"
		);
	}
	inline jint BluetoothHidDeviceAppQosSettings::SERVICE_GUARANTEED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHidDeviceAppQosSettings",
			"SERVICE_GUARANTEED"
		);
	}
	inline jint BluetoothHidDeviceAppQosSettings::SERVICE_NO_TRAFFIC()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHidDeviceAppQosSettings",
			"SERVICE_NO_TRAFFIC"
		);
	}
	
	// Constructors
	inline BluetoothHidDeviceAppQosSettings::BluetoothHidDeviceAppQosSettings(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
		: JObject(
			"android.bluetooth.BluetoothHidDeviceAppQosSettings",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		) {}
	
	// Methods
	inline jint BluetoothHidDeviceAppQosSettings::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint BluetoothHidDeviceAppQosSettings::getDelayVariation() const
	{
		return callMethod<jint>(
			"getDelayVariation",
			"()I"
		);
	}
	inline jint BluetoothHidDeviceAppQosSettings::getLatency() const
	{
		return callMethod<jint>(
			"getLatency",
			"()I"
		);
	}
	inline jint BluetoothHidDeviceAppQosSettings::getPeakBandwidth() const
	{
		return callMethod<jint>(
			"getPeakBandwidth",
			"()I"
		);
	}
	inline jint BluetoothHidDeviceAppQosSettings::getServiceType() const
	{
		return callMethod<jint>(
			"getServiceType",
			"()I"
		);
	}
	inline jint BluetoothHidDeviceAppQosSettings::getTokenBucketSize() const
	{
		return callMethod<jint>(
			"getTokenBucketSize",
			"()I"
		);
	}
	inline jint BluetoothHidDeviceAppQosSettings::getTokenRate() const
	{
		return callMethod<jint>(
			"getTokenRate",
			"()I"
		);
	}
	inline void BluetoothHidDeviceAppQosSettings::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
