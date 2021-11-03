#include "../../net/Uri.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/net/InetAddress.hpp"
#include "./ApnSetting.hpp"

namespace android::telephony::data
{
	// Fields
	jint ApnSetting::AUTH_TYPE_CHAP()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"AUTH_TYPE_CHAP"
		);
	}
	jint ApnSetting::AUTH_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"AUTH_TYPE_NONE"
		);
	}
	jint ApnSetting::AUTH_TYPE_PAP()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"AUTH_TYPE_PAP"
		);
	}
	jint ApnSetting::AUTH_TYPE_PAP_OR_CHAP()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"AUTH_TYPE_PAP_OR_CHAP"
		);
	}
	JObject ApnSetting::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.data.ApnSetting",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ApnSetting::MVNO_TYPE_GID()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"MVNO_TYPE_GID"
		);
	}
	jint ApnSetting::MVNO_TYPE_ICCID()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"MVNO_TYPE_ICCID"
		);
	}
	jint ApnSetting::MVNO_TYPE_IMSI()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"MVNO_TYPE_IMSI"
		);
	}
	jint ApnSetting::MVNO_TYPE_SPN()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"MVNO_TYPE_SPN"
		);
	}
	jint ApnSetting::PROTOCOL_IP()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"PROTOCOL_IP"
		);
	}
	jint ApnSetting::PROTOCOL_IPV4V6()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"PROTOCOL_IPV4V6"
		);
	}
	jint ApnSetting::PROTOCOL_IPV6()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"PROTOCOL_IPV6"
		);
	}
	jint ApnSetting::PROTOCOL_NON_IP()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"PROTOCOL_NON_IP"
		);
	}
	jint ApnSetting::PROTOCOL_PPP()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"PROTOCOL_PPP"
		);
	}
	jint ApnSetting::PROTOCOL_UNSTRUCTURED()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"PROTOCOL_UNSTRUCTURED"
		);
	}
	jint ApnSetting::TYPE_CBS()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_CBS"
		);
	}
	jint ApnSetting::TYPE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_DEFAULT"
		);
	}
	jint ApnSetting::TYPE_DUN()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_DUN"
		);
	}
	jint ApnSetting::TYPE_EMERGENCY()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_EMERGENCY"
		);
	}
	jint ApnSetting::TYPE_FOTA()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_FOTA"
		);
	}
	jint ApnSetting::TYPE_HIPRI()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_HIPRI"
		);
	}
	jint ApnSetting::TYPE_IA()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_IA"
		);
	}
	jint ApnSetting::TYPE_IMS()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_IMS"
		);
	}
	jint ApnSetting::TYPE_MCX()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_MCX"
		);
	}
	jint ApnSetting::TYPE_MMS()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_MMS"
		);
	}
	jint ApnSetting::TYPE_SUPL()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_SUPL"
		);
	}
	jint ApnSetting::TYPE_XCAP()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_XCAP"
		);
	}
	
	// QJniObject forward
	ApnSetting::ApnSetting(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint ApnSetting::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ApnSetting::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString ApnSetting::getApnName()
	{
		return callObjectMethod(
			"getApnName",
			"()Ljava/lang/String;"
		);
	}
	jint ApnSetting::getApnTypeBitmask()
	{
		return callMethod<jint>(
			"getApnTypeBitmask",
			"()I"
		);
	}
	jint ApnSetting::getAuthType()
	{
		return callMethod<jint>(
			"getAuthType",
			"()I"
		);
	}
	jint ApnSetting::getCarrierId()
	{
		return callMethod<jint>(
			"getCarrierId",
			"()I"
		);
	}
	JString ApnSetting::getEntryName()
	{
		return callObjectMethod(
			"getEntryName",
			"()Ljava/lang/String;"
		);
	}
	jint ApnSetting::getId()
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	java::net::InetAddress ApnSetting::getMmsProxyAddress()
	{
		return callObjectMethod(
			"getMmsProxyAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	JString ApnSetting::getMmsProxyAddressAsString()
	{
		return callObjectMethod(
			"getMmsProxyAddressAsString",
			"()Ljava/lang/String;"
		);
	}
	jint ApnSetting::getMmsProxyPort()
	{
		return callMethod<jint>(
			"getMmsProxyPort",
			"()I"
		);
	}
	android::net::Uri ApnSetting::getMmsc()
	{
		return callObjectMethod(
			"getMmsc",
			"()Landroid/net/Uri;"
		);
	}
	jint ApnSetting::getMvnoType()
	{
		return callMethod<jint>(
			"getMvnoType",
			"()I"
		);
	}
	jint ApnSetting::getNetworkTypeBitmask()
	{
		return callMethod<jint>(
			"getNetworkTypeBitmask",
			"()I"
		);
	}
	JString ApnSetting::getOperatorNumeric()
	{
		return callObjectMethod(
			"getOperatorNumeric",
			"()Ljava/lang/String;"
		);
	}
	JString ApnSetting::getPassword()
	{
		return callObjectMethod(
			"getPassword",
			"()Ljava/lang/String;"
		);
	}
	jint ApnSetting::getProtocol()
	{
		return callMethod<jint>(
			"getProtocol",
			"()I"
		);
	}
	java::net::InetAddress ApnSetting::getProxyAddress()
	{
		return callObjectMethod(
			"getProxyAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	JString ApnSetting::getProxyAddressAsString()
	{
		return callObjectMethod(
			"getProxyAddressAsString",
			"()Ljava/lang/String;"
		);
	}
	jint ApnSetting::getProxyPort()
	{
		return callMethod<jint>(
			"getProxyPort",
			"()I"
		);
	}
	jint ApnSetting::getRoamingProtocol()
	{
		return callMethod<jint>(
			"getRoamingProtocol",
			"()I"
		);
	}
	JString ApnSetting::getUser()
	{
		return callObjectMethod(
			"getUser",
			"()Ljava/lang/String;"
		);
	}
	jboolean ApnSetting::isEnabled()
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	JString ApnSetting::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ApnSetting::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::data

