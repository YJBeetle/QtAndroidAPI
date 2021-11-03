#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
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
	
	// QJniObject forward
	BluetoothHealthAppConfiguration::BluetoothHealthAppConfiguration(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint BluetoothHealthAppConfiguration::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean BluetoothHealthAppConfiguration::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint BluetoothHealthAppConfiguration::getDataType()
	{
		return callMethod<jint>(
			"getDataType",
			"()I"
		);
	}
	JString BluetoothHealthAppConfiguration::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	jint BluetoothHealthAppConfiguration::getRole()
	{
		return callMethod<jint>(
			"getRole",
			"()I"
		);
	}
	jint BluetoothHealthAppConfiguration::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString BluetoothHealthAppConfiguration::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
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

