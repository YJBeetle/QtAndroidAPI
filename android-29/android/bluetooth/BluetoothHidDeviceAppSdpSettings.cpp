#include "../os/Parcel.hpp"
#include "./BluetoothHidDeviceAppSdpSettings.hpp"

namespace android::bluetooth
{
	// Fields
	QAndroidJniObject BluetoothHidDeviceAppSdpSettings::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothHidDeviceAppSdpSettings",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	BluetoothHidDeviceAppSdpSettings::BluetoothHidDeviceAppSdpSettings(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BluetoothHidDeviceAppSdpSettings::BluetoothHidDeviceAppSdpSettings(jstring arg0, jstring arg1, jstring arg2, jbyte arg3, jbyteArray arg4)
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.BluetoothHidDeviceAppSdpSettings",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;B[B)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	
	// Methods
	jint BluetoothHidDeviceAppSdpSettings::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring BluetoothHidDeviceAppSdpSettings::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray BluetoothHidDeviceAppSdpSettings::getDescriptors()
	{
		return __thiz.callObjectMethod(
			"getDescriptors",
			"()[B"
		).object<jbyteArray>();
	}
	jstring BluetoothHidDeviceAppSdpSettings::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothHidDeviceAppSdpSettings::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyte BluetoothHidDeviceAppSdpSettings::getSubclass()
	{
		return __thiz.callMethod<jbyte>(
			"getSubclass",
			"()B"
		);
	}
	void BluetoothHidDeviceAppSdpSettings::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::bluetooth

