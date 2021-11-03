#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./AdvertiseSettings.hpp"

namespace android::bluetooth::le
{
	// Fields
	jint AdvertiseSettings::ADVERTISE_MODE_BALANCED()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertiseSettings",
			"ADVERTISE_MODE_BALANCED"
		);
	}
	jint AdvertiseSettings::ADVERTISE_MODE_LOW_LATENCY()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertiseSettings",
			"ADVERTISE_MODE_LOW_LATENCY"
		);
	}
	jint AdvertiseSettings::ADVERTISE_MODE_LOW_POWER()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertiseSettings",
			"ADVERTISE_MODE_LOW_POWER"
		);
	}
	jint AdvertiseSettings::ADVERTISE_TX_POWER_HIGH()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertiseSettings",
			"ADVERTISE_TX_POWER_HIGH"
		);
	}
	jint AdvertiseSettings::ADVERTISE_TX_POWER_LOW()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertiseSettings",
			"ADVERTISE_TX_POWER_LOW"
		);
	}
	jint AdvertiseSettings::ADVERTISE_TX_POWER_MEDIUM()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertiseSettings",
			"ADVERTISE_TX_POWER_MEDIUM"
		);
	}
	jint AdvertiseSettings::ADVERTISE_TX_POWER_ULTRA_LOW()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertiseSettings",
			"ADVERTISE_TX_POWER_ULTRA_LOW"
		);
	}
	JObject AdvertiseSettings::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.le.AdvertiseSettings",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	AdvertiseSettings::AdvertiseSettings(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint AdvertiseSettings::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint AdvertiseSettings::getMode() const
	{
		return callMethod<jint>(
			"getMode",
			"()I"
		);
	}
	jint AdvertiseSettings::getTimeout() const
	{
		return callMethod<jint>(
			"getTimeout",
			"()I"
		);
	}
	jint AdvertiseSettings::getTxPowerLevel() const
	{
		return callMethod<jint>(
			"getTxPowerLevel",
			"()I"
		);
	}
	jboolean AdvertiseSettings::isConnectable() const
	{
		return callMethod<jboolean>(
			"isConnectable",
			"()Z"
		);
	}
	JString AdvertiseSettings::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void AdvertiseSettings::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::bluetooth::le

