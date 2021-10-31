#include "../bluetooth/le/ScanFilter.hpp"
#include "../os/Parcel.hpp"
#include "../../java/util/regex/Pattern.hpp"
#include "./BluetoothLeDeviceFilter.hpp"

namespace android::companion
{
	// Fields
	__JniBaseClass BluetoothLeDeviceFilter::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.companion.BluetoothLeDeviceFilter",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	BluetoothLeDeviceFilter::BluetoothLeDeviceFilter(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint BluetoothLeDeviceFilter::getRenamePrefixLengthLimit()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.companion.BluetoothLeDeviceFilter",
			"getRenamePrefixLengthLimit",
			"()I"
		);
	}
	jint BluetoothLeDeviceFilter::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean BluetoothLeDeviceFilter::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint BluetoothLeDeviceFilter::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring BluetoothLeDeviceFilter::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void BluetoothLeDeviceFilter::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::companion

