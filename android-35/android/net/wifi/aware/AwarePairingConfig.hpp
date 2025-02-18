#pragma once

#include "../../../os/Parcel.def.hpp"
#include "../../../../JObject.hpp"
#include "./AwarePairingConfig.def.hpp"

namespace android::net::wifi::aware
{
	// Fields
	inline JObject AwarePairingConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.aware.AwarePairingConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint AwarePairingConfig::PAIRING_BOOTSTRAPPING_NFC_READER()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.AwarePairingConfig",
			"PAIRING_BOOTSTRAPPING_NFC_READER"
		);
	}
	inline jint AwarePairingConfig::PAIRING_BOOTSTRAPPING_NFC_TAG()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.AwarePairingConfig",
			"PAIRING_BOOTSTRAPPING_NFC_TAG"
		);
	}
	inline jint AwarePairingConfig::PAIRING_BOOTSTRAPPING_OPPORTUNISTIC()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.AwarePairingConfig",
			"PAIRING_BOOTSTRAPPING_OPPORTUNISTIC"
		);
	}
	inline jint AwarePairingConfig::PAIRING_BOOTSTRAPPING_PASSPHRASE_DISPLAY()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.AwarePairingConfig",
			"PAIRING_BOOTSTRAPPING_PASSPHRASE_DISPLAY"
		);
	}
	inline jint AwarePairingConfig::PAIRING_BOOTSTRAPPING_PASSPHRASE_KEYPAD()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.AwarePairingConfig",
			"PAIRING_BOOTSTRAPPING_PASSPHRASE_KEYPAD"
		);
	}
	inline jint AwarePairingConfig::PAIRING_BOOTSTRAPPING_PIN_CODE_DISPLAY()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.AwarePairingConfig",
			"PAIRING_BOOTSTRAPPING_PIN_CODE_DISPLAY"
		);
	}
	inline jint AwarePairingConfig::PAIRING_BOOTSTRAPPING_PIN_CODE_KEYPAD()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.AwarePairingConfig",
			"PAIRING_BOOTSTRAPPING_PIN_CODE_KEYPAD"
		);
	}
	inline jint AwarePairingConfig::PAIRING_BOOTSTRAPPING_QR_DISPLAY()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.AwarePairingConfig",
			"PAIRING_BOOTSTRAPPING_QR_DISPLAY"
		);
	}
	inline jint AwarePairingConfig::PAIRING_BOOTSTRAPPING_QR_SCAN()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.AwarePairingConfig",
			"PAIRING_BOOTSTRAPPING_QR_SCAN"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint AwarePairingConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AwarePairingConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint AwarePairingConfig::getBootstrappingMethods() const
	{
		return callMethod<jint>(
			"getBootstrappingMethods",
			"()I"
		);
	}
	inline jint AwarePairingConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean AwarePairingConfig::isPairingCacheEnabled() const
	{
		return callMethod<jboolean>(
			"isPairingCacheEnabled",
			"()Z"
		);
	}
	inline jboolean AwarePairingConfig::isPairingSetupEnabled() const
	{
		return callMethod<jboolean>(
			"isPairingSetupEnabled",
			"()Z"
		);
	}
	inline jboolean AwarePairingConfig::isPairingVerificationEnabled() const
	{
		return callMethod<jboolean>(
			"isPairingVerificationEnabled",
			"()Z"
		);
	}
	inline void AwarePairingConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::aware

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::aware;
#endif
