#include "./NetworkSpecifier.hpp"
#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./NetworkCapabilities.hpp"

namespace android::net
{
	// Fields
	JObject NetworkCapabilities::CREATOR()
	{
		return getStaticObjectField(
			"android.net.NetworkCapabilities",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_CAPTIVE_PORTAL()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_CAPTIVE_PORTAL"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_CBS()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_CBS"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_DUN()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_DUN"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_EIMS()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_EIMS"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_FOREGROUND()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_FOREGROUND"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_FOTA()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_FOTA"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_IA()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_IA"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_IMS()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_IMS"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_INTERNET()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_INTERNET"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_MCX()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_MCX"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_MMS()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_MMS"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_NOT_CONGESTED()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_NOT_CONGESTED"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_NOT_METERED()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_NOT_METERED"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_NOT_RESTRICTED()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_NOT_RESTRICTED"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_NOT_ROAMING()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_NOT_ROAMING"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_NOT_SUSPENDED()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_NOT_SUSPENDED"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_NOT_VPN()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_NOT_VPN"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_RCS()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_RCS"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_SUPL()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_SUPL"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_TEMPORARILY_NOT_METERED()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_TEMPORARILY_NOT_METERED"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_TRUSTED()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_TRUSTED"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_VALIDATED()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_VALIDATED"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_WIFI_P2P()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_WIFI_P2P"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_XCAP()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_XCAP"
		);
	}
	jint NetworkCapabilities::SIGNAL_STRENGTH_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"SIGNAL_STRENGTH_UNSPECIFIED"
		);
	}
	jint NetworkCapabilities::TRANSPORT_BLUETOOTH()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"TRANSPORT_BLUETOOTH"
		);
	}
	jint NetworkCapabilities::TRANSPORT_CELLULAR()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"TRANSPORT_CELLULAR"
		);
	}
	jint NetworkCapabilities::TRANSPORT_ETHERNET()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"TRANSPORT_ETHERNET"
		);
	}
	jint NetworkCapabilities::TRANSPORT_LOWPAN()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"TRANSPORT_LOWPAN"
		);
	}
	jint NetworkCapabilities::TRANSPORT_VPN()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"TRANSPORT_VPN"
		);
	}
	jint NetworkCapabilities::TRANSPORT_WIFI()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"TRANSPORT_WIFI"
		);
	}
	jint NetworkCapabilities::TRANSPORT_WIFI_AWARE()
	{
		return getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"TRANSPORT_WIFI_AWARE"
		);
	}
	
	// QAndroidJniObject forward
	NetworkCapabilities::NetworkCapabilities(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	NetworkCapabilities::NetworkCapabilities()
		: JObject(
			"android.net.NetworkCapabilities",
			"()V"
		) {}
	NetworkCapabilities::NetworkCapabilities(android::net::NetworkCapabilities &arg0)
		: JObject(
			"android.net.NetworkCapabilities",
			"(Landroid/net/NetworkCapabilities;)V",
			arg0.object()
		) {}
	
	// Methods
	jint NetworkCapabilities::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean NetworkCapabilities::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint NetworkCapabilities::getLinkDownstreamBandwidthKbps()
	{
		return callMethod<jint>(
			"getLinkDownstreamBandwidthKbps",
			"()I"
		);
	}
	jint NetworkCapabilities::getLinkUpstreamBandwidthKbps()
	{
		return callMethod<jint>(
			"getLinkUpstreamBandwidthKbps",
			"()I"
		);
	}
	android::net::NetworkSpecifier NetworkCapabilities::getNetworkSpecifier()
	{
		return callObjectMethod(
			"getNetworkSpecifier",
			"()Landroid/net/NetworkSpecifier;"
		);
	}
	jint NetworkCapabilities::getOwnerUid()
	{
		return callMethod<jint>(
			"getOwnerUid",
			"()I"
		);
	}
	jint NetworkCapabilities::getSignalStrength()
	{
		return callMethod<jint>(
			"getSignalStrength",
			"()I"
		);
	}
	JObject NetworkCapabilities::getTransportInfo()
	{
		return callObjectMethod(
			"getTransportInfo",
			"()Landroid/net/TransportInfo;"
		);
	}
	jboolean NetworkCapabilities::hasCapability(jint arg0)
	{
		return callMethod<jboolean>(
			"hasCapability",
			"(I)Z",
			arg0
		);
	}
	jboolean NetworkCapabilities::hasTransport(jint arg0)
	{
		return callMethod<jboolean>(
			"hasTransport",
			"(I)Z",
			arg0
		);
	}
	jint NetworkCapabilities::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString NetworkCapabilities::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void NetworkCapabilities::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

