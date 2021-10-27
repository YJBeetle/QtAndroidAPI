#include "../os/Parcel.hpp"
#include "./NetworkCapabilities.hpp"

namespace android::net
{
	// Fields
	QAndroidJniObject NetworkCapabilities::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.NetworkCapabilities",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_CAPTIVE_PORTAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_CAPTIVE_PORTAL"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_CBS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_CBS"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_DUN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_DUN"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_EIMS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_EIMS"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_FOREGROUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_FOREGROUND"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_FOTA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_FOTA"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_IA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_IA"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_IMS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_IMS"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_INTERNET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_INTERNET"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_MCX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_MCX"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_MMS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_MMS"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_NOT_CONGESTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_NOT_CONGESTED"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_NOT_METERED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_NOT_METERED"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_NOT_RESTRICTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_NOT_RESTRICTED"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_NOT_ROAMING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_NOT_ROAMING"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_NOT_SUSPENDED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_NOT_SUSPENDED"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_NOT_VPN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_NOT_VPN"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_RCS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_RCS"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_SUPL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_SUPL"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_TRUSTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_TRUSTED"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_VALIDATED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_VALIDATED"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_WIFI_P2P()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_WIFI_P2P"
		);
	}
	jint NetworkCapabilities::NET_CAPABILITY_XCAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"NET_CAPABILITY_XCAP"
		);
	}
	jint NetworkCapabilities::SIGNAL_STRENGTH_UNSPECIFIED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"SIGNAL_STRENGTH_UNSPECIFIED"
		);
	}
	jint NetworkCapabilities::TRANSPORT_BLUETOOTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"TRANSPORT_BLUETOOTH"
		);
	}
	jint NetworkCapabilities::TRANSPORT_CELLULAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"TRANSPORT_CELLULAR"
		);
	}
	jint NetworkCapabilities::TRANSPORT_ETHERNET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"TRANSPORT_ETHERNET"
		);
	}
	jint NetworkCapabilities::TRANSPORT_LOWPAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"TRANSPORT_LOWPAN"
		);
	}
	jint NetworkCapabilities::TRANSPORT_VPN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"TRANSPORT_VPN"
		);
	}
	jint NetworkCapabilities::TRANSPORT_WIFI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"TRANSPORT_WIFI"
		);
	}
	jint NetworkCapabilities::TRANSPORT_WIFI_AWARE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.NetworkCapabilities",
			"TRANSPORT_WIFI_AWARE"
		);
	}
	
	NetworkCapabilities::NetworkCapabilities(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NetworkCapabilities::NetworkCapabilities(android::net::NetworkCapabilities &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.NetworkCapabilities",
			"(Landroid/net/NetworkCapabilities;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint NetworkCapabilities::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean NetworkCapabilities::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint NetworkCapabilities::getLinkDownstreamBandwidthKbps()
	{
		return __thiz.callMethod<jint>(
			"getLinkDownstreamBandwidthKbps",
			"()I"
		);
	}
	jint NetworkCapabilities::getLinkUpstreamBandwidthKbps()
	{
		return __thiz.callMethod<jint>(
			"getLinkUpstreamBandwidthKbps",
			"()I"
		);
	}
	jint NetworkCapabilities::getSignalStrength()
	{
		return __thiz.callMethod<jint>(
			"getSignalStrength",
			"()I"
		);
	}
	QAndroidJniObject NetworkCapabilities::getTransportInfo()
	{
		return __thiz.callObjectMethod(
			"getTransportInfo",
			"()Landroid/net/TransportInfo;"
		);
	}
	jboolean NetworkCapabilities::hasCapability(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasCapability",
			"(I)Z",
			arg0
		);
	}
	jboolean NetworkCapabilities::hasTransport(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasTransport",
			"(I)Z",
			arg0
		);
	}
	jint NetworkCapabilities::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring NetworkCapabilities::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void NetworkCapabilities::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::net

