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
	inline jint BluetoothStatusCodes::ERROR_GATT_WRITE_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothStatusCodes",
			"ERROR_GATT_WRITE_NOT_ALLOWED"
		);
	}
	inline jint BluetoothStatusCodes::ERROR_GATT_WRITE_REQUEST_BUSY()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothStatusCodes",
			"ERROR_GATT_WRITE_REQUEST_BUSY"
		);
	}
	inline jint BluetoothStatusCodes::ERROR_MISSING_BLUETOOTH_CONNECT_PERMISSION()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothStatusCodes",
			"ERROR_MISSING_BLUETOOTH_CONNECT_PERMISSION"
		);
	}
	inline jint BluetoothStatusCodes::ERROR_PROFILE_SERVICE_NOT_BOUND()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothStatusCodes",
			"ERROR_PROFILE_SERVICE_NOT_BOUND"
		);
	}
	inline jint BluetoothStatusCodes::ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothStatusCodes",
			"ERROR_UNKNOWN"
		);
	}
	inline jint BluetoothStatusCodes::FEATURE_NOT_CONFIGURED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothStatusCodes",
			"FEATURE_NOT_CONFIGURED"
		);
	}
	inline jint BluetoothStatusCodes::FEATURE_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothStatusCodes",
			"FEATURE_NOT_SUPPORTED"
		);
	}
	inline jint BluetoothStatusCodes::FEATURE_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothStatusCodes",
			"FEATURE_SUPPORTED"
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::bluetooth;
#endif
