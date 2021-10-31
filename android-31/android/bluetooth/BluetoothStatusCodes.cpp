#include "./BluetoothStatusCodes.hpp"

namespace android::bluetooth
{
	// Fields
	jint BluetoothStatusCodes::ERROR_BLUETOOTH_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothStatusCodes",
			"ERROR_BLUETOOTH_NOT_ALLOWED"
		);
	}
	jint BluetoothStatusCodes::ERROR_BLUETOOTH_NOT_ENABLED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothStatusCodes",
			"ERROR_BLUETOOTH_NOT_ENABLED"
		);
	}
	jint BluetoothStatusCodes::ERROR_DEVICE_NOT_BONDED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothStatusCodes",
			"ERROR_DEVICE_NOT_BONDED"
		);
	}
	jint BluetoothStatusCodes::ERROR_MISSING_BLUETOOTH_CONNECT_PERMISSION()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothStatusCodes",
			"ERROR_MISSING_BLUETOOTH_CONNECT_PERMISSION"
		);
	}
	jint BluetoothStatusCodes::ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothStatusCodes",
			"ERROR_UNKNOWN"
		);
	}
	jint BluetoothStatusCodes::SUCCESS()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothStatusCodes",
			"SUCCESS"
		);
	}
	
	// QAndroidJniObject forward
	BluetoothStatusCodes::BluetoothStatusCodes(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::bluetooth

