#pragma once

#include "./BluetoothClass_Service.def.hpp"

namespace android::bluetooth
{
	// Fields
	inline jint BluetoothClass_Service::AUDIO()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Service",
			"AUDIO"
		);
	}
	inline jint BluetoothClass_Service::CAPTURE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Service",
			"CAPTURE"
		);
	}
	inline jint BluetoothClass_Service::INFORMATION()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Service",
			"INFORMATION"
		);
	}
	inline jint BluetoothClass_Service::LIMITED_DISCOVERABILITY()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Service",
			"LIMITED_DISCOVERABILITY"
		);
	}
	inline jint BluetoothClass_Service::NETWORKING()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Service",
			"NETWORKING"
		);
	}
	inline jint BluetoothClass_Service::OBJECT_TRANSFER()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Service",
			"OBJECT_TRANSFER"
		);
	}
	inline jint BluetoothClass_Service::POSITIONING()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Service",
			"POSITIONING"
		);
	}
	inline jint BluetoothClass_Service::RENDER()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Service",
			"RENDER"
		);
	}
	inline jint BluetoothClass_Service::TELEPHONY()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Service",
			"TELEPHONY"
		);
	}
	
	// Constructors
	inline BluetoothClass_Service::BluetoothClass_Service()
		: JObject(
			"android.bluetooth.BluetoothClass$Service",
			"()V"
		) {}
	
	// Methods
} // namespace android::bluetooth

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::bluetooth;
#endif
