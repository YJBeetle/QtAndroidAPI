#include "../os/Parcel.hpp"
#include "../../JString.hpp"
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
	jint BluetoothHealthAppConfiguration::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint BluetoothHealthAppConfiguration::getDataType() const
	{
		return callMethod<jint>(
			"getDataType",
			"()I"
		);
	}
	JString BluetoothHealthAppConfiguration::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	jint BluetoothHealthAppConfiguration::getRole() const
	{
		return callMethod<jint>(
			"getRole",
			"()I"
		);
	}
	void BluetoothHealthAppConfiguration::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::bluetooth

