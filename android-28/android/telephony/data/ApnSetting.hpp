#pragma once

#include "../../net/Uri.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "./ApnSetting_Builder.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/net/InetAddress.def.hpp"
#include "./ApnSetting.def.hpp"

namespace android::telephony::data
{
	// Fields
	inline jint ApnSetting::AUTH_TYPE_CHAP()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"AUTH_TYPE_CHAP"
		);
	}
	inline jint ApnSetting::AUTH_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"AUTH_TYPE_NONE"
		);
	}
	inline jint ApnSetting::AUTH_TYPE_PAP()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"AUTH_TYPE_PAP"
		);
	}
	inline jint ApnSetting::AUTH_TYPE_PAP_OR_CHAP()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"AUTH_TYPE_PAP_OR_CHAP"
		);
	}
	inline JObject ApnSetting::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.data.ApnSetting",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint ApnSetting::MVNO_TYPE_GID()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"MVNO_TYPE_GID"
		);
	}
	inline jint ApnSetting::MVNO_TYPE_ICCID()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"MVNO_TYPE_ICCID"
		);
	}
	inline jint ApnSetting::MVNO_TYPE_IMSI()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"MVNO_TYPE_IMSI"
		);
	}
	inline jint ApnSetting::MVNO_TYPE_SPN()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"MVNO_TYPE_SPN"
		);
	}
	inline jint ApnSetting::PROTOCOL_IP()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"PROTOCOL_IP"
		);
	}
	inline jint ApnSetting::PROTOCOL_IPV4V6()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"PROTOCOL_IPV4V6"
		);
	}
	inline jint ApnSetting::PROTOCOL_IPV6()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"PROTOCOL_IPV6"
		);
	}
	inline jint ApnSetting::PROTOCOL_PPP()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"PROTOCOL_PPP"
		);
	}
	inline jint ApnSetting::TYPE_CBS()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_CBS"
		);
	}
	inline jint ApnSetting::TYPE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_DEFAULT"
		);
	}
	inline jint ApnSetting::TYPE_DUN()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_DUN"
		);
	}
	inline jint ApnSetting::TYPE_EMERGENCY()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_EMERGENCY"
		);
	}
	inline jint ApnSetting::TYPE_FOTA()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_FOTA"
		);
	}
	inline jint ApnSetting::TYPE_HIPRI()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_HIPRI"
		);
	}
	inline jint ApnSetting::TYPE_IA()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_IA"
		);
	}
	inline jint ApnSetting::TYPE_IMS()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_IMS"
		);
	}
	inline jint ApnSetting::TYPE_MMS()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_MMS"
		);
	}
	inline jint ApnSetting::TYPE_SUPL()
	{
		return getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_SUPL"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ApnSetting::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean ApnSetting::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString ApnSetting::getApnName() const
	{
		return callObjectMethod(
			"getApnName",
			"()Ljava/lang/String;"
		);
	}
	inline jint ApnSetting::getApnTypeBitmask() const
	{
		return callMethod<jint>(
			"getApnTypeBitmask",
			"()I"
		);
	}
	inline jint ApnSetting::getAuthType() const
	{
		return callMethod<jint>(
			"getAuthType",
			"()I"
		);
	}
	inline JString ApnSetting::getEntryName() const
	{
		return callObjectMethod(
			"getEntryName",
			"()Ljava/lang/String;"
		);
	}
	inline jint ApnSetting::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	inline java::net::InetAddress ApnSetting::getMmsProxyAddress() const
	{
		return callObjectMethod(
			"getMmsProxyAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	inline jint ApnSetting::getMmsProxyPort() const
	{
		return callMethod<jint>(
			"getMmsProxyPort",
			"()I"
		);
	}
	inline android::net::Uri ApnSetting::getMmsc() const
	{
		return callObjectMethod(
			"getMmsc",
			"()Landroid/net/Uri;"
		);
	}
	inline jint ApnSetting::getMvnoType() const
	{
		return callMethod<jint>(
			"getMvnoType",
			"()I"
		);
	}
	inline jint ApnSetting::getNetworkTypeBitmask() const
	{
		return callMethod<jint>(
			"getNetworkTypeBitmask",
			"()I"
		);
	}
	inline JString ApnSetting::getOperatorNumeric() const
	{
		return callObjectMethod(
			"getOperatorNumeric",
			"()Ljava/lang/String;"
		);
	}
	inline JString ApnSetting::getPassword() const
	{
		return callObjectMethod(
			"getPassword",
			"()Ljava/lang/String;"
		);
	}
	inline jint ApnSetting::getProtocol() const
	{
		return callMethod<jint>(
			"getProtocol",
			"()I"
		);
	}
	inline java::net::InetAddress ApnSetting::getProxyAddress() const
	{
		return callObjectMethod(
			"getProxyAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	inline jint ApnSetting::getProxyPort() const
	{
		return callMethod<jint>(
			"getProxyPort",
			"()I"
		);
	}
	inline jint ApnSetting::getRoamingProtocol() const
	{
		return callMethod<jint>(
			"getRoamingProtocol",
			"()I"
		);
	}
	inline JString ApnSetting::getUser() const
	{
		return callObjectMethod(
			"getUser",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean ApnSetting::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	inline JString ApnSetting::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ApnSetting::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::data

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony::data;
#endif
