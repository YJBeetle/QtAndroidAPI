#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./NetworkCapabilities.def.hpp"

namespace android::net
{
	// Fields
	inline JObject NetworkCapabilities::CREATOR()
	{
		return getStaticObjectField(
			"android.net.NetworkCapabilities",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint NetworkCapabilities::NET_CAPABILITY_CAPTIVE_PORTAL()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_CAPTIVE_PORTAL"
		);
	}
	inline jint NetworkCapabilities::NET_CAPABILITY_CBS()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_CBS"
		);
	}
	inline jint NetworkCapabilities::NET_CAPABILITY_DUN()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_DUN"
		);
	}
	inline jint NetworkCapabilities::NET_CAPABILITY_EIMS()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_EIMS"
		);
	}
	inline jint NetworkCapabilities::NET_CAPABILITY_FOREGROUND()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_FOREGROUND"
		);
	}
	inline jint NetworkCapabilities::NET_CAPABILITY_FOTA()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_FOTA"
		);
	}
	inline jint NetworkCapabilities::NET_CAPABILITY_IA()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_IA"
		);
	}
	inline jint NetworkCapabilities::NET_CAPABILITY_IMS()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_IMS"
		);
	}
	inline jint NetworkCapabilities::NET_CAPABILITY_INTERNET()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_INTERNET"
		);
	}
	inline jint NetworkCapabilities::NET_CAPABILITY_MMS()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_MMS"
		);
	}
	inline jint NetworkCapabilities::NET_CAPABILITY_NOT_CONGESTED()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_NOT_CONGESTED"
		);
	}
	inline jint NetworkCapabilities::NET_CAPABILITY_NOT_METERED()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_NOT_METERED"
		);
	}
	inline jint NetworkCapabilities::NET_CAPABILITY_NOT_RESTRICTED()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_NOT_RESTRICTED"
		);
	}
	inline jint NetworkCapabilities::NET_CAPABILITY_NOT_ROAMING()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_NOT_ROAMING"
		);
	}
	inline jint NetworkCapabilities::NET_CAPABILITY_NOT_SUSPENDED()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_NOT_SUSPENDED"
		);
	}
	inline jint NetworkCapabilities::NET_CAPABILITY_NOT_VPN()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_NOT_VPN"
		);
	}
	inline jint NetworkCapabilities::NET_CAPABILITY_RCS()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_RCS"
		);
	}
	inline jint NetworkCapabilities::NET_CAPABILITY_SUPL()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_SUPL"
		);
	}
	inline jint NetworkCapabilities::NET_CAPABILITY_TRUSTED()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_TRUSTED"
		);
	}
	inline jint NetworkCapabilities::NET_CAPABILITY_VALIDATED()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_VALIDATED"
		);
	}
	inline jint NetworkCapabilities::NET_CAPABILITY_WIFI_P2P()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_WIFI_P2P"
		);
	}
	inline jint NetworkCapabilities::NET_CAPABILITY_XCAP()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_XCAP"
		);
	}
	inline jint NetworkCapabilities::TRANSPORT_BLUETOOTH()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"TRANSPORT_BLUETOOTH"
		);
	}
	inline jint NetworkCapabilities::TRANSPORT_CELLULAR()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"TRANSPORT_CELLULAR"
		);
	}
	inline jint NetworkCapabilities::TRANSPORT_ETHERNET()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"TRANSPORT_ETHERNET"
		);
	}
	inline jint NetworkCapabilities::TRANSPORT_LOWPAN()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"TRANSPORT_LOWPAN"
		);
	}
	inline jint NetworkCapabilities::TRANSPORT_VPN()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"TRANSPORT_VPN"
		);
	}
	inline jint NetworkCapabilities::TRANSPORT_WIFI()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"TRANSPORT_WIFI"
		);
	}
	inline jint NetworkCapabilities::TRANSPORT_WIFI_AWARE()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"TRANSPORT_WIFI_AWARE"
		);
	}
	
	// Constructors
	inline NetworkCapabilities::NetworkCapabilities(android::net::NetworkCapabilities &arg0)
		: JObject(
			"android.net.NetworkCapabilities",
			"(Landroid/net/NetworkCapabilities;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint NetworkCapabilities::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean NetworkCapabilities::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint NetworkCapabilities::getLinkDownstreamBandwidthKbps() const
	{
		return callMethod<jint>(
			"getLinkDownstreamBandwidthKbps",
			"()I"
		);
	}
	inline jint NetworkCapabilities::getLinkUpstreamBandwidthKbps() const
	{
		return callMethod<jint>(
			"getLinkUpstreamBandwidthKbps",
			"()I"
		);
	}
	inline jboolean NetworkCapabilities::hasCapability(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasCapability",
			"(I)Z",
			arg0
		);
	}
	inline jboolean NetworkCapabilities::hasTransport(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasTransport",
			"(I)Z",
			arg0
		);
	}
	inline jint NetworkCapabilities::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString NetworkCapabilities::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void NetworkCapabilities::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net;
#endif
