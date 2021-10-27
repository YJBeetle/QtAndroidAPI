#include "../../os/Parcel.hpp"
#include "./PeriodicAdvertisingParameters.hpp"

namespace android::bluetooth::le
{
	// Fields
	QAndroidJniObject PeriodicAdvertisingParameters::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.le.PeriodicAdvertisingParameters",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	PeriodicAdvertisingParameters::PeriodicAdvertisingParameters(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint PeriodicAdvertisingParameters::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PeriodicAdvertisingParameters::getIncludeTxPower()
	{
		return __thiz.callMethod<jboolean>(
			"getIncludeTxPower",
			"()Z"
		);
	}
	jint PeriodicAdvertisingParameters::getInterval()
	{
		return __thiz.callMethod<jint>(
			"getInterval",
			"()I"
		);
	}
	void PeriodicAdvertisingParameters::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::bluetooth::le

