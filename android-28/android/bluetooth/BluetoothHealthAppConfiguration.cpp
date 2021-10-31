#include "../os/Parcel.hpp"
#include "./BluetoothHealthAppConfiguration.hpp"

namespace android::bluetooth
{
	// Fields
	__JniBaseClass BluetoothHealthAppConfiguration::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothHealthAppConfiguration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	BluetoothHealthAppConfiguration::BluetoothHealthAppConfiguration(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint BluetoothHealthAppConfiguration::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean BluetoothHealthAppConfiguration::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
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
	jint BluetoothHealthAppConfiguration::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring BluetoothHealthAppConfiguration::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

