#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./AdvertisingSetParameters.def.hpp"

namespace android::bluetooth::le
{
	// Fields
	inline JObject AdvertisingSetParameters::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.le.AdvertisingSetParameters",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint AdvertisingSetParameters::INTERVAL_HIGH()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"INTERVAL_HIGH"
		);
	}
	inline jint AdvertisingSetParameters::INTERVAL_LOW()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"INTERVAL_LOW"
		);
	}
	inline jint AdvertisingSetParameters::INTERVAL_MAX()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"INTERVAL_MAX"
		);
	}
	inline jint AdvertisingSetParameters::INTERVAL_MEDIUM()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"INTERVAL_MEDIUM"
		);
	}
	inline jint AdvertisingSetParameters::INTERVAL_MIN()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"INTERVAL_MIN"
		);
	}
	inline jint AdvertisingSetParameters::TX_POWER_HIGH()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"TX_POWER_HIGH"
		);
	}
	inline jint AdvertisingSetParameters::TX_POWER_LOW()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"TX_POWER_LOW"
		);
	}
	inline jint AdvertisingSetParameters::TX_POWER_MAX()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"TX_POWER_MAX"
		);
	}
	inline jint AdvertisingSetParameters::TX_POWER_MEDIUM()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"TX_POWER_MEDIUM"
		);
	}
	inline jint AdvertisingSetParameters::TX_POWER_MIN()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"TX_POWER_MIN"
		);
	}
	inline jint AdvertisingSetParameters::TX_POWER_ULTRA_LOW()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"TX_POWER_ULTRA_LOW"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint AdvertisingSetParameters::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint AdvertisingSetParameters::getInterval() const
	{
		return callMethod<jint>(
			"getInterval",
			"()I"
		);
	}
	inline jint AdvertisingSetParameters::getPrimaryPhy() const
	{
		return callMethod<jint>(
			"getPrimaryPhy",
			"()I"
		);
	}
	inline jint AdvertisingSetParameters::getSecondaryPhy() const
	{
		return callMethod<jint>(
			"getSecondaryPhy",
			"()I"
		);
	}
	inline jint AdvertisingSetParameters::getTxPowerLevel() const
	{
		return callMethod<jint>(
			"getTxPowerLevel",
			"()I"
		);
	}
	inline jboolean AdvertisingSetParameters::includeTxPower() const
	{
		return callMethod<jboolean>(
			"includeTxPower",
			"()Z"
		);
	}
	inline jboolean AdvertisingSetParameters::isAnonymous() const
	{
		return callMethod<jboolean>(
			"isAnonymous",
			"()Z"
		);
	}
	inline jboolean AdvertisingSetParameters::isConnectable() const
	{
		return callMethod<jboolean>(
			"isConnectable",
			"()Z"
		);
	}
	inline jboolean AdvertisingSetParameters::isLegacy() const
	{
		return callMethod<jboolean>(
			"isLegacy",
			"()Z"
		);
	}
	inline jboolean AdvertisingSetParameters::isScannable() const
	{
		return callMethod<jboolean>(
			"isScannable",
			"()Z"
		);
	}
	inline JString AdvertisingSetParameters::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AdvertisingSetParameters::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::bluetooth::le

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::bluetooth::le;
#endif
