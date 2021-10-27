#include "../../os/Parcel.hpp"
#include "./AdvertiseSettings.hpp"

namespace android::bluetooth::le
{
	// Fields
	jint AdvertiseSettings::ADVERTISE_MODE_BALANCED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertiseSettings",
			"ADVERTISE_MODE_BALANCED"
		);
	}
	jint AdvertiseSettings::ADVERTISE_MODE_LOW_LATENCY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertiseSettings",
			"ADVERTISE_MODE_LOW_LATENCY"
		);
	}
	jint AdvertiseSettings::ADVERTISE_MODE_LOW_POWER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertiseSettings",
			"ADVERTISE_MODE_LOW_POWER"
		);
	}
	jint AdvertiseSettings::ADVERTISE_TX_POWER_HIGH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertiseSettings",
			"ADVERTISE_TX_POWER_HIGH"
		);
	}
	jint AdvertiseSettings::ADVERTISE_TX_POWER_LOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertiseSettings",
			"ADVERTISE_TX_POWER_LOW"
		);
	}
	jint AdvertiseSettings::ADVERTISE_TX_POWER_MEDIUM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertiseSettings",
			"ADVERTISE_TX_POWER_MEDIUM"
		);
	}
	jint AdvertiseSettings::ADVERTISE_TX_POWER_ULTRA_LOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertiseSettings",
			"ADVERTISE_TX_POWER_ULTRA_LOW"
		);
	}
	QAndroidJniObject AdvertiseSettings::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.le.AdvertiseSettings",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	AdvertiseSettings::AdvertiseSettings(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint AdvertiseSettings::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint AdvertiseSettings::getMode()
	{
		return __thiz.callMethod<jint>(
			"getMode",
			"()I"
		);
	}
	jint AdvertiseSettings::getTimeout()
	{
		return __thiz.callMethod<jint>(
			"getTimeout",
			"()I"
		);
	}
	jint AdvertiseSettings::getTxPowerLevel()
	{
		return __thiz.callMethod<jint>(
			"getTxPowerLevel",
			"()I"
		);
	}
	jboolean AdvertiseSettings::isConnectable()
	{
		return __thiz.callMethod<jboolean>(
			"isConnectable",
			"()Z"
		);
	}
	jstring AdvertiseSettings::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void AdvertiseSettings::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::bluetooth::le

