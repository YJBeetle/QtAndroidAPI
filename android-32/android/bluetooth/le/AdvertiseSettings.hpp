#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./AdvertiseSettings.def.hpp"

namespace android::bluetooth::le
{
	// Fields
	inline jint AdvertiseSettings::ADVERTISE_MODE_BALANCED()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertiseSettings",
			"ADVERTISE_MODE_BALANCED"
		);
	}
	inline jint AdvertiseSettings::ADVERTISE_MODE_LOW_LATENCY()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertiseSettings",
			"ADVERTISE_MODE_LOW_LATENCY"
		);
	}
	inline jint AdvertiseSettings::ADVERTISE_MODE_LOW_POWER()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertiseSettings",
			"ADVERTISE_MODE_LOW_POWER"
		);
	}
	inline jint AdvertiseSettings::ADVERTISE_TX_POWER_HIGH()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertiseSettings",
			"ADVERTISE_TX_POWER_HIGH"
		);
	}
	inline jint AdvertiseSettings::ADVERTISE_TX_POWER_LOW()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertiseSettings",
			"ADVERTISE_TX_POWER_LOW"
		);
	}
	inline jint AdvertiseSettings::ADVERTISE_TX_POWER_MEDIUM()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertiseSettings",
			"ADVERTISE_TX_POWER_MEDIUM"
		);
	}
	inline jint AdvertiseSettings::ADVERTISE_TX_POWER_ULTRA_LOW()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertiseSettings",
			"ADVERTISE_TX_POWER_ULTRA_LOW"
		);
	}
	inline JObject AdvertiseSettings::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.le.AdvertiseSettings",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint AdvertiseSettings::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint AdvertiseSettings::getMode() const
	{
		return callMethod<jint>(
			"getMode",
			"()I"
		);
	}
	inline jint AdvertiseSettings::getTimeout() const
	{
		return callMethod<jint>(
			"getTimeout",
			"()I"
		);
	}
	inline jint AdvertiseSettings::getTxPowerLevel() const
	{
		return callMethod<jint>(
			"getTxPowerLevel",
			"()I"
		);
	}
	inline jboolean AdvertiseSettings::isConnectable() const
	{
		return callMethod<jboolean>(
			"isConnectable",
			"()Z"
		);
	}
	inline JString AdvertiseSettings::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AdvertiseSettings::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
