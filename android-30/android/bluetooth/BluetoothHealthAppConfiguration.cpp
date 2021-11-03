#include "../os/Parcel.hpp"
#include "./BluetoothHealthAppConfiguration.hpp"

namespace android::bluetooth
{
	// Fields
	JObject BluetoothHealthAppConfiguration::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothHealthAppConfiguration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	BluetoothHealthAppConfiguration::BluetoothHealthAppConfiguration(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint BluetoothHealthAppConfiguration::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint BluetoothHealthAppConfiguration::getDataType()
	{
		return callMethod<jint>(
			"getDataType",
			"()I"
		);
	}
	jstring BluetoothHealthAppConfiguration::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint BluetoothHealthAppConfiguration::getRole()
	{
		return callMethod<jint>(
			"getRole",
			"()I"
		);
	}
	void BluetoothHealthAppConfiguration::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::bluetooth

