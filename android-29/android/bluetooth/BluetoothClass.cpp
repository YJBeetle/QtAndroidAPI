#include "../os/Parcel.hpp"
#include "./BluetoothClass.hpp"

namespace android::bluetooth
{
	// Fields
	QAndroidJniObject BluetoothClass::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothClass",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	BluetoothClass::BluetoothClass(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint BluetoothClass::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean BluetoothClass::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint BluetoothClass::getDeviceClass()
	{
		return __thiz.callMethod<jint>(
			"getDeviceClass",
			"()I"
		);
	}
	jint BluetoothClass::getMajorDeviceClass()
	{
		return __thiz.callMethod<jint>(
			"getMajorDeviceClass",
			"()I"
		);
	}
	jboolean BluetoothClass::hasService(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasService",
			"(I)Z",
			arg0
		);
	}
	jint BluetoothClass::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring BluetoothClass::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void BluetoothClass::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::bluetooth

