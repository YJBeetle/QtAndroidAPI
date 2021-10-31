#include "../../os/Parcel.hpp"
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
	__JniBaseClass AdvertiseSettings::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.le.AdvertiseSettings",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	AdvertiseSettings::AdvertiseSettings(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint AdvertiseSettings::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint AdvertiseSettings::getMode()
	{
		return callMethod<jint>(
			"getMode",
			"()I"
		);
	}
	jint AdvertiseSettings::getTimeout()
	{
		return callMethod<jint>(
			"getTimeout",
			"()I"
		);
	}
	jint AdvertiseSettings::getTxPowerLevel()
	{
		return callMethod<jint>(
			"getTxPowerLevel",
			"()I"
		);
	}
	jboolean AdvertiseSettings::isConnectable()
	{
		return callMethod<jboolean>(
			"isConnectable",
			"()Z"
		);
	}
	jstring AdvertiseSettings::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void AdvertiseSettings::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::bluetooth::le

