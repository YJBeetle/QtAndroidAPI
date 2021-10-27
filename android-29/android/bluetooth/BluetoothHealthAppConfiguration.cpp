#include "../os/Parcel.hpp"
#include "./BluetoothHealthAppConfiguration.hpp"

namespace android::bluetooth
{
	// Fields
	QAndroidJniObject BluetoothHealthAppConfiguration::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothHealthAppConfiguration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	BluetoothHealthAppConfiguration::BluetoothHealthAppConfiguration(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint BluetoothHealthAppConfiguration::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint BluetoothHealthAppConfiguration::getDataType()
	{
		return __thiz.callMethod<jint>(
			"getDataType",
			"()I"
		);
	}
	jstring BluetoothHealthAppConfiguration::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint BluetoothHealthAppConfiguration::getRole()
	{
		return __thiz.callMethod<jint>(
			"getRole",
			"()I"
		);
	}
	void BluetoothHealthAppConfiguration::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::bluetooth

