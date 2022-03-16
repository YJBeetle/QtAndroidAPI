#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
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
	
	// Constructors
	
	// Methods
	jint BluetoothClass::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean BluetoothClass::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint BluetoothClass::getDeviceClass() const
	{
		return callMethod<jint>(
			"getDeviceClass",
			"()I"
		);
	}
	jint BluetoothClass::getMajorDeviceClass() const
	{
		return callMethod<jint>(
			"getMajorDeviceClass",
			"()I"
		);
	}
	jboolean BluetoothClass::hasService(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasService",
			"(I)Z",
			arg0
		);
	}
	jint BluetoothClass::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString BluetoothClass::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void BluetoothClass::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::bluetooth

