#include "../../JByteArray.hpp"
#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./BluetoothHidDeviceAppSdpSettings.hpp"

namespace android::bluetooth
{
	// Fields
	JObject BluetoothHidDeviceAppSdpSettings::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothHidDeviceAppSdpSettings",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	BluetoothHidDeviceAppSdpSettings::BluetoothHidDeviceAppSdpSettings(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	BluetoothHidDeviceAppSdpSettings::BluetoothHidDeviceAppSdpSettings(JString arg0, JString arg1, JString arg2, jbyte arg3, JByteArray arg4)
		: JObject(
			"android.bluetooth.BluetoothHidDeviceAppSdpSettings",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;B[B)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3,
			arg4.object<jbyteArray>()
		) {}
	
	// Methods
	jint BluetoothHidDeviceAppSdpSettings::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString BluetoothHidDeviceAppSdpSettings::getDescription()
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		);
	}
	JByteArray BluetoothHidDeviceAppSdpSettings::getDescriptors()
	{
		return callObjectMethod(
			"getDescriptors",
			"()[B"
		);
	}
	JString BluetoothHidDeviceAppSdpSettings::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	JString BluetoothHidDeviceAppSdpSettings::getProvider()
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/lang/String;"
		);
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

