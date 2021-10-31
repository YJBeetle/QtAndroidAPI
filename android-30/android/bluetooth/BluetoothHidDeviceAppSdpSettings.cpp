#include "../os/Parcel.hpp"
#include "./BluetoothHidDeviceAppSdpSettings.hpp"

namespace android::bluetooth
{
	// Fields
	__JniBaseClass BluetoothHidDeviceAppSdpSettings::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothHidDeviceAppSdpSettings",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	BluetoothHidDeviceAppSdpSettings::BluetoothHidDeviceAppSdpSettings(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	BluetoothHidDeviceAppSdpSettings::BluetoothHidDeviceAppSdpSettings(jstring arg0, jstring arg1, jstring arg2, jbyte arg3, jbyteArray arg4)
		: __JniBaseClass(
			"android.bluetooth.BluetoothHidDeviceAppSdpSettings",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;B[B)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	
	// Methods
	jint BluetoothHidDeviceAppSdpSettings::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring BluetoothHidDeviceAppSdpSettings::getDescription()
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray BluetoothHidDeviceAppSdpSettings::getDescriptors()
	{
		return callObjectMethod(
			"getDescriptors",
			"()[B"
		).object<jbyteArray>();
	}
	jstring BluetoothHidDeviceAppSdpSettings::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothHidDeviceAppSdpSettings::getProvider()
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyte BluetoothHidDeviceAppSdpSettings::getSubclass()
	{
		return callMethod<jbyte>(
			"getSubclass",
			"()B"
		);
	}
	void BluetoothHidDeviceAppSdpSettings::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::bluetooth

