#include "../../os/Parcel.hpp"
#include "./AdvertisingSetParameters.hpp"

namespace android::bluetooth::le
{
	// Fields
	QAndroidJniObject AdvertisingSetParameters::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.le.AdvertisingSetParameters",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint AdvertisingSetParameters::INTERVAL_HIGH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"INTERVAL_HIGH"
		);
	}
	jint AdvertisingSetParameters::INTERVAL_LOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"INTERVAL_LOW"
		);
	}
	jint AdvertisingSetParameters::INTERVAL_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"INTERVAL_MAX"
		);
	}
	jint AdvertisingSetParameters::INTERVAL_MEDIUM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"INTERVAL_MEDIUM"
		);
	}
	jint AdvertisingSetParameters::INTERVAL_MIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"INTERVAL_MIN"
		);
	}
	jint AdvertisingSetParameters::TX_POWER_HIGH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"TX_POWER_HIGH"
		);
	}
	jint AdvertisingSetParameters::TX_POWER_LOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"TX_POWER_LOW"
		);
	}
	jint AdvertisingSetParameters::TX_POWER_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"TX_POWER_MAX"
		);
	}
	jint AdvertisingSetParameters::TX_POWER_MEDIUM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"TX_POWER_MEDIUM"
		);
	}
	jint AdvertisingSetParameters::TX_POWER_MIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"TX_POWER_MIN"
		);
	}
	jint AdvertisingSetParameters::TX_POWER_ULTRA_LOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"TX_POWER_ULTRA_LOW"
		);
	}
	
	AdvertisingSetParameters::AdvertisingSetParameters(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint AdvertisingSetParameters::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint AdvertisingSetParameters::getInterval()
	{
		return __thiz.callMethod<jint>(
			"getInterval",
			"()I"
		);
	}
	jint AdvertisingSetParameters::getPrimaryPhy()
	{
		return __thiz.callMethod<jint>(
			"getPrimaryPhy",
			"()I"
		);
	}
	jint AdvertisingSetParameters::getSecondaryPhy()
	{
		return __thiz.callMethod<jint>(
			"getSecondaryPhy",
			"()I"
		);
	}
	jint AdvertisingSetParameters::getTxPowerLevel()
	{
		return __thiz.callMethod<jint>(
			"getTxPowerLevel",
			"()I"
		);
	}
	jboolean AdvertisingSetParameters::includeTxPower()
	{
		return __thiz.callMethod<jboolean>(
			"includeTxPower",
			"()Z"
		);
	}
	jboolean AdvertisingSetParameters::isAnonymous()
	{
		return __thiz.callMethod<jboolean>(
			"isAnonymous",
			"()Z"
		);
	}
	jboolean AdvertisingSetParameters::isConnectable()
	{
		return __thiz.callMethod<jboolean>(
			"isConnectable",
			"()Z"
		);
	}
	jboolean AdvertisingSetParameters::isLegacy()
	{
		return __thiz.callMethod<jboolean>(
			"isLegacy",
			"()Z"
		);
	}
	jboolean AdvertisingSetParameters::isScannable()
	{
		return __thiz.callMethod<jboolean>(
			"isScannable",
			"()Z"
		);
	}
	jstring AdvertisingSetParameters::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void AdvertisingSetParameters::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::bluetooth::le

