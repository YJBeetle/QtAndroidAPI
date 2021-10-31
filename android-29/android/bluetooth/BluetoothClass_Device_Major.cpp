#include "./BluetoothClass_Device_Major.hpp"

namespace android::bluetooth
{
	// Fields
	jint BluetoothClass_Device_Major::AUDIO_VIDEO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device$Major",
			"AUDIO_VIDEO"
		);
	}
	jint BluetoothClass_Device_Major::COMPUTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device$Major",
			"COMPUTER"
		);
	}
	jint BluetoothClass_Device_Major::HEALTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device$Major",
			"HEALTH"
		);
	}
	jint BluetoothClass_Device_Major::IMAGING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device$Major",
			"IMAGING"
		);
	}
	jint BluetoothClass_Device_Major::MISC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device$Major",
			"MISC"
		);
	}
	jint BluetoothClass_Device_Major::NETWORKING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device$Major",
			"NETWORKING"
		);
	}
	jint BluetoothClass_Device_Major::PERIPHERAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device$Major",
			"PERIPHERAL"
		);
	}
	jint BluetoothClass_Device_Major::PHONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device$Major",
			"PHONE"
		);
	}
	jint BluetoothClass_Device_Major::TOY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device$Major",
			"TOY"
		);
	}
	jint BluetoothClass_Device_Major::UNCATEGORIZED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device$Major",
			"UNCATEGORIZED"
		);
	}
	jint BluetoothClass_Device_Major::WEARABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device$Major",
			"WEARABLE"
		);
	}
	
	// QAndroidJniObject forward
	BluetoothClass_Device_Major::BluetoothClass_Device_Major(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	BluetoothClass_Device_Major::BluetoothClass_Device_Major()
		: __JniBaseClass(
			"android.bluetooth.BluetoothClass$Device$Major",
			"()V"
		) {}
	
	// Methods
} // namespace android::bluetooth

