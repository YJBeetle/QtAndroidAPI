#include "../../net/Uri.hpp"
#include "../../os/Parcel.hpp"
#include "./ApnSetting_Builder.hpp"
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
	
	// Constructors
	
	// Methods
	jint ApnSetting::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ApnSetting::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString ApnSetting::getApnName() const
	{
		return callObjectMethod(
			"getApnName",
			"()Ljava/lang/String;"
		);
	}
	jint ApnSetting::getApnTypeBitmask() const
	{
		return callMethod<jint>(
			"getApnTypeBitmask",
			"()I"
		);
	}
	jint ApnSetting::getAuthType() const
	{
		return callMethod<jint>(
			"getAuthType",
			"()I"
		);
	}
	jint ApnSetting::getCarrierId() const
	{
		return callMethod<jint>(
			"getCarrierId",
			"()I"
		);
	}
	JString ApnSetting::getEntryName() const
	{
		return callObjectMethod(
			"getEntryName",
			"()Ljava/lang/String;"
		);
	}
	jint ApnSetting::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	java::net::InetAddress ApnSetting::getMmsProxyAddress() const
	{
		return callObjectMethod(
			"getMmsProxyAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	JString ApnSetting::getMmsProxyAddressAsString() const
	{
		return callObjectMethod(
			"getMmsProxyAddressAsString",
			"()Ljava/lang/String;"
		);
	}
	jint ApnSetting::getMmsProxyPort() const
	{
		return callMethod<jint>(
			"getMmsProxyPort",
			"()I"
		);
	}
	android::net::Uri ApnSetting::getMmsc() const
	{
		return callObjectMethod(
			"getMmsc",
			"()Landroid/net/Uri;"
		);
	}
	jint ApnSetting::getMvnoType() const
	{
		return callMethod<jint>(
			"getMvnoType",
			"()I"
		);
	}
	jint ApnSetting::getNetworkTypeBitmask() const
	{
		return callMethod<jint>(
			"getNetworkTypeBitmask",
			"()I"
		);
	}
	JString ApnSetting::getOperatorNumeric() const
	{
		return callObjectMethod(
			"getOperatorNumeric",
			"()Ljava/lang/String;"
		);
	}
	JString ApnSetting::getPassword() const
	{
		return callObjectMethod(
			"getPassword",
			"()Ljava/lang/String;"
		);
	}
	jint ApnSetting::getProtocol() const
	{
		return callMethod<jint>(
			"getProtocol",
			"()I"
		);
	}
	java::net::InetAddress ApnSetting::getProxyAddress() const
	{
		return callObjectMethod(
			"getProxyAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	JString ApnSetting::getProxyAddressAsString() const
	{
		return callObjectMethod(
			"getProxyAddressAsString",
			"()Ljava/lang/String;"
		);
	}
	jint ApnSetting::getProxyPort() const
	{
		return callMethod<jint>(
			"getProxyPort",
			"()I"
		);
	}
	jint ApnSetting::getRoamingProtocol() const
	{
		return callMethod<jint>(
			"getRoamingProtocol",
			"()I"
		);
	}
	JString ApnSetting::getUser() const
	{
		return callObjectMethod(
			"getUser",
			"()Ljava/lang/String;"
		);
	}
	jboolean ApnSetting::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	JString ApnSetting::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ApnSetting::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::data

