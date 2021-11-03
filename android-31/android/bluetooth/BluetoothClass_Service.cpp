#include "./BluetoothClass_Service.hpp"

namespace android::bluetooth
{
	// Fields
	jint BluetoothClass_Service::AUDIO()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Service",
			"AUDIO"
		);
	}
	jint BluetoothClass_Service::CAPTURE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Service",
			"CAPTURE"
		);
	}
	jint BluetoothClass_Service::INFORMATION()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Service",
			"INFORMATION"
		);
	}
	jint BluetoothClass_Service::LIMITED_DISCOVERABILITY()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Service",
			"LIMITED_DISCOVERABILITY"
		);
	}
	jint BluetoothClass_Service::NETWORKING()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Service",
			"NETWORKING"
		);
	}
	jint BluetoothClass_Service::OBJECT_TRANSFER()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Service",
			"OBJECT_TRANSFER"
		);
	}
	jint BluetoothClass_Service::POSITIONING()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Service",
			"POSITIONING"
		);
	}
	jint BluetoothClass_Service::RENDER()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Service",
			"RENDER"
		);
	}
	jint BluetoothClass_Service::TELEPHONY()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Service",
			"TELEPHONY"
		);
	}
	
	// QAndroidJniObject forward
	BluetoothClass_Service::BluetoothClass_Service(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	BluetoothClass_Service::BluetoothClass_Service()
		: JObject(
			"android.bluetooth.BluetoothClass$Service",
			"()V"
		) {}
	
	// Methods
} // namespace android::bluetooth

