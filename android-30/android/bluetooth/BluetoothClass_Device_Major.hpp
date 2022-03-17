#pragma once

#include "./BluetoothClass_Device_Major.def.hpp"

namespace android::bluetooth
{
	// Fields
	inline jint BluetoothClass_Device_Major::AUDIO_VIDEO()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device$Major",
			"AUDIO_VIDEO"
		);
	}
	inline jint BluetoothClass_Device_Major::COMPUTER()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device$Major",
			"COMPUTER"
		);
	}
	inline jint BluetoothClass_Device_Major::HEALTH()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device$Major",
			"HEALTH"
		);
	}
	inline jint BluetoothClass_Device_Major::IMAGING()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device$Major",
			"IMAGING"
		);
	}
	inline jint BluetoothClass_Device_Major::MISC()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device$Major",
			"MISC"
		);
	}
	inline jint BluetoothClass_Device_Major::NETWORKING()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device$Major",
			"NETWORKING"
		);
	}
	inline jint BluetoothClass_Device_Major::PERIPHERAL()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device$Major",
			"PERIPHERAL"
		);
	}
	inline jint BluetoothClass_Device_Major::PHONE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device$Major",
			"PHONE"
		);
	}
	inline jint BluetoothClass_Device_Major::TOY()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device$Major",
			"TOY"
		);
	}
	inline jint BluetoothClass_Device_Major::UNCATEGORIZED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device$Major",
			"UNCATEGORIZED"
		);
	}
	inline jint BluetoothClass_Device_Major::WEARABLE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device$Major",
			"WEARABLE"
		);
	}
	
	// Constructors
	inline BluetoothClass_Device_Major::BluetoothClass_Device_Major()
		: JObject(
			"android.bluetooth.BluetoothClass$Device$Major",
			"()V"
		) {}
	
	// Methods
} // namespace android::bluetooth

// Base class headers

