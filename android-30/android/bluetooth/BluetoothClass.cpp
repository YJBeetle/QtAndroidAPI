#include "../os/Parcel.hpp"
#include "./BluetoothClass.hpp"

namespace android::bluetooth
{
	// Fields
	JObject BluetoothClass::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothClass",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	BluetoothClass::BluetoothClass(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint BluetoothClass::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean BluetoothClass::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint BluetoothClass::getDeviceClass()
	{
		return callMethod<jint>(
			"getDeviceClass",
			"()I"
		);
	}
	jint BluetoothClass::getMajorDeviceClass()
	{
		return callMethod<jint>(
			"getMajorDeviceClass",
			"()I"
		);
	}
	jboolean BluetoothClass::hasService(jint arg0)
	{
		return callMethod<jboolean>(
			"hasService",
			"(I)Z",
			arg0
		);
	}
	jint BluetoothClass::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring BluetoothClass::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void BluetoothClass::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::bluetooth

