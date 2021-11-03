#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./AdvertisingSetParameters.hpp"

namespace android::bluetooth::le
{
	// Fields
	JObject AdvertisingSetParameters::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.le.AdvertisingSetParameters",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint AdvertisingSetParameters::INTERVAL_HIGH()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"INTERVAL_HIGH"
		);
	}
	jint AdvertisingSetParameters::INTERVAL_LOW()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"INTERVAL_LOW"
		);
	}
	jint AdvertisingSetParameters::INTERVAL_MAX()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"INTERVAL_MAX"
		);
	}
	jint AdvertisingSetParameters::INTERVAL_MEDIUM()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"INTERVAL_MEDIUM"
		);
	}
	jint AdvertisingSetParameters::INTERVAL_MIN()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"INTERVAL_MIN"
		);
	}
	jint AdvertisingSetParameters::TX_POWER_HIGH()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"TX_POWER_HIGH"
		);
	}
	jint AdvertisingSetParameters::TX_POWER_LOW()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"TX_POWER_LOW"
		);
	}
	jint AdvertisingSetParameters::TX_POWER_MAX()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"TX_POWER_MAX"
		);
	}
	jint AdvertisingSetParameters::TX_POWER_MEDIUM()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"TX_POWER_MEDIUM"
		);
	}
	jint AdvertisingSetParameters::TX_POWER_MIN()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"TX_POWER_MIN"
		);
	}
	jint AdvertisingSetParameters::TX_POWER_ULTRA_LOW()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"TX_POWER_ULTRA_LOW"
		);
	}
	
	// QJniObject forward
	AdvertisingSetParameters::AdvertisingSetParameters(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint AdvertisingSetParameters::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint AdvertisingSetParameters::getInterval()
	{
		return callMethod<jint>(
			"getInterval",
			"()I"
		);
	}
	jint AdvertisingSetParameters::getPrimaryPhy()
	{
		return callMethod<jint>(
			"getPrimaryPhy",
			"()I"
		);
	}
	jint AdvertisingSetParameters::getSecondaryPhy()
	{
		return callMethod<jint>(
			"getSecondaryPhy",
			"()I"
		);
	}
	jint AdvertisingSetParameters::getTxPowerLevel()
	{
		return callMethod<jint>(
			"getTxPowerLevel",
			"()I"
		);
	}
	jboolean AdvertisingSetParameters::includeTxPower()
	{
		return callMethod<jboolean>(
			"includeTxPower",
			"()Z"
		);
	}
	jboolean AdvertisingSetParameters::isAnonymous()
	{
		return callMethod<jboolean>(
			"isAnonymous",
			"()Z"
		);
	}
	jboolean AdvertisingSetParameters::isConnectable()
	{
		return callMethod<jboolean>(
			"isConnectable",
			"()Z"
		);
	}
	jboolean AdvertisingSetParameters::isLegacy()
	{
		return callMethod<jboolean>(
			"isLegacy",
			"()Z"
		);
	}
	jboolean AdvertisingSetParameters::isScannable()
	{
		return callMethod<jboolean>(
			"isScannable",
			"()Z"
		);
	}
	JString AdvertisingSetParameters::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void AdvertisingSetParameters::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::bluetooth::le

