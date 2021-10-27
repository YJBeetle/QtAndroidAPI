#include "./BluetoothClass_Service.hpp"

namespace android::bluetooth
{
	// Fields
	jint BluetoothClass_Service::AUDIO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Service",
			"AUDIO"
		);
	}
	jint BluetoothClass_Service::CAPTURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Service",
			"CAPTURE"
		);
	}
	jint BluetoothClass_Service::INFORMATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Service",
			"INFORMATION"
		);
	}
	jint BluetoothClass_Service::LIMITED_DISCOVERABILITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Service",
			"LIMITED_DISCOVERABILITY"
		);
	}
	jint BluetoothClass_Service::NETWORKING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Service",
			"NETWORKING"
		);
	}
	jint BluetoothClass_Service::OBJECT_TRANSFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Service",
			"OBJECT_TRANSFER"
		);
	}
	jint BluetoothClass_Service::POSITIONING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Service",
			"POSITIONING"
		);
	}
	jint BluetoothClass_Service::RENDER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Service",
			"RENDER"
		);
	}
	jint BluetoothClass_Service::TELEPHONY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Service",
			"TELEPHONY"
		);
	}
	
	BluetoothClass_Service::BluetoothClass_Service(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BluetoothClass_Service::BluetoothClass_Service()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.BluetoothClass$Service",
			"()V"
		);
	}
	
	// Methods
} // namespace android::bluetooth

