#include "../../JByteArray.hpp"
#include "../bluetooth/le/ScanFilter.hpp"
#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/util/regex/Pattern.hpp"
#include "./BluetoothLeDeviceFilter.hpp"

namespace android::companion
{
	// Fields
	JObject BluetoothLeDeviceFilter::CREATOR()
	{
		return getStaticObjectField(
			"android.companion.BluetoothLeDeviceFilter",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	BluetoothLeDeviceFilter::BluetoothLeDeviceFilter(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint BluetoothLeDeviceFilter::getRenamePrefixLengthLimit()
	{
		return callStaticMethod<jint>(
			"android.companion.BluetoothLeDeviceFilter",
			"getRenamePrefixLengthLimit",
			"()I"
		);
	}
	jint BluetoothLeDeviceFilter::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean BluetoothLeDeviceFilter::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint BluetoothLeDeviceFilter::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString BluetoothLeDeviceFilter::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void BluetoothLeDeviceFilter::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::companion

