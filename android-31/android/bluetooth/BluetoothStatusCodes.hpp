#pragma once

#include "./BluetoothStatusCodes.def.hpp"

namespace android::bluetooth
{
	// Fields
	inline jint BluetoothStatusCodes::ERROR_BLUETOOTH_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothStatusCodes",
			"ERROR_BLUETOOTH_NOT_ALLOWED"
		);
	}
	inline jint BluetoothStatusCodes::ERROR_BLUETOOTH_NOT_ENABLED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothStatusCodes",
			"ERROR_BLUETOOTH_NOT_ENABLED"
		);
	}
	inline jint BluetoothStatusCodes::ERROR_DEVICE_NOT_BONDED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothStatusCodes",
			"ERROR_DEVICE_NOT_BONDED"
		);
	}
	inline jint BluetoothStatusCodes::ERROR_MISSING_BLUETOOTH_CONNECT_PERMISSION()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothStatusCodes",
			"ERROR_MISSING_BLUETOOTH_CONNECT_PERMISSION"
		);
	}
	inline jint BluetoothStatusCodes::ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothStatusCodes",
			"ERROR_UNKNOWN"
		);
	}
	inline jint BluetoothStatusCodes::SUCCESS()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothStatusCodes",
			"SUCCESS"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::bluetooth

// Base class headers

