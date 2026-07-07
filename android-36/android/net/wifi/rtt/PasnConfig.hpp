#pragma once

#include "../../../../JByteArray.hpp"
#include "../WifiSsid.def.hpp"
#include "../../../os/Parcel.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./PasnConfig.def.hpp"

namespace android::net::wifi::rtt
{
	// Fields
	inline jint PasnConfig::AKM_FILS_EAP_SHA256()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.PasnConfig",
			"AKM_FILS_EAP_SHA256"
		);
	}
	inline jint PasnConfig::AKM_FILS_EAP_SHA384()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.PasnConfig",
			"AKM_FILS_EAP_SHA384"
		);
	}
	inline jint PasnConfig::AKM_FT_EAP_SHA256()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.PasnConfig",
			"AKM_FT_EAP_SHA256"
		);
	}
	inline jint PasnConfig::AKM_FT_EAP_SHA384()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.PasnConfig",
			"AKM_FT_EAP_SHA384"
		);
	}
	inline jint PasnConfig::AKM_FT_PSK_SHA256()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.PasnConfig",
			"AKM_FT_PSK_SHA256"
		);
	}
	inline jint PasnConfig::AKM_FT_PSK_SHA384()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.PasnConfig",
			"AKM_FT_PSK_SHA384"
		);
	}
	inline jint PasnConfig::AKM_NONE()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.PasnConfig",
			"AKM_NONE"
		);
	}
	inline jint PasnConfig::AKM_PASN()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.PasnConfig",
			"AKM_PASN"
		);
	}
	inline jint PasnConfig::AKM_SAE()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.PasnConfig",
			"AKM_SAE"
		);
	}
	inline jint PasnConfig::CIPHER_CCMP_128()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.PasnConfig",
			"CIPHER_CCMP_128"
		);
	}
	inline jint PasnConfig::CIPHER_CCMP_256()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.PasnConfig",
			"CIPHER_CCMP_256"
		);
	}
	inline jint PasnConfig::CIPHER_GCMP_128()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.PasnConfig",
			"CIPHER_GCMP_128"
		);
	}
	inline jint PasnConfig::CIPHER_GCMP_256()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.PasnConfig",
			"CIPHER_GCMP_256"
		);
	}
	inline jint PasnConfig::CIPHER_NONE()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.PasnConfig",
			"CIPHER_NONE"
		);
	}
	inline JObject PasnConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.rtt.PasnConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint PasnConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean PasnConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint PasnConfig::getBaseAkms() const
	{
		return callMethod<jint>(
			"getBaseAkms",
			"()I"
		);
	}
	inline jint PasnConfig::getCiphers() const
	{
		return callMethod<jint>(
			"getCiphers",
			"()I"
		);
	}
	inline JByteArray PasnConfig::getPasnComebackCookie() const
	{
		return callObjectMethod(
			"getPasnComebackCookie",
			"()[B"
		);
	}
	inline JString PasnConfig::getPassword() const
	{
		return callObjectMethod(
			"getPassword",
			"()Ljava/lang/String;"
		);
	}
	inline android::net::wifi::WifiSsid PasnConfig::getWifiSsid() const
	{
		return callObjectMethod(
			"getWifiSsid",
			"()Landroid/net/wifi/WifiSsid;"
		);
	}
	inline jint PasnConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString PasnConfig::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void PasnConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::rtt

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::rtt;
#endif
