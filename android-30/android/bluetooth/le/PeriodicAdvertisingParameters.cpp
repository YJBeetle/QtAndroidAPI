#include "../../os/Parcel.hpp"
#include "./PeriodicAdvertisingParameters.hpp"

namespace android::bluetooth::le
{
	// Fields
	__JniBaseClass PeriodicAdvertisingParameters::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.le.PeriodicAdvertisingParameters",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	PeriodicAdvertisingParameters::PeriodicAdvertisingParameters(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint PeriodicAdvertisingParameters::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PeriodicAdvertisingParameters::getIncludeTxPower()
	{
		return callMethod<jboolean>(
			"getIncludeTxPower",
			"()Z"
		);
	}
	jint PeriodicAdvertisingParameters::getInterval()
	{
		return callMethod<jint>(
			"getInterval",
			"()I"
		);
	}
	void PeriodicAdvertisingParameters::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::bluetooth::le

