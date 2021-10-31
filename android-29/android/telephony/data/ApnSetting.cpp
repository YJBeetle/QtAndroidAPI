#include "../../net/Uri.hpp"
#include "../../os/Parcel.hpp"
#include "./ApnSetting_Builder.hpp"
#include "../../../java/net/InetAddress.hpp"
#include "./ApnSetting.hpp"

namespace android::telephony::data
{
	// Fields
	jint ApnSetting::AUTH_TYPE_CHAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"AUTH_TYPE_CHAP"
		);
	}
	jint ApnSetting::AUTH_TYPE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"AUTH_TYPE_NONE"
		);
	}
	jint ApnSetting::AUTH_TYPE_PAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"AUTH_TYPE_PAP"
		);
	}
	jint ApnSetting::AUTH_TYPE_PAP_OR_CHAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"AUTH_TYPE_PAP_OR_CHAP"
		);
	}
	QAndroidJniObject ApnSetting::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.data.ApnSetting",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ApnSetting::MVNO_TYPE_GID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"MVNO_TYPE_GID"
		);
	}
	jint ApnSetting::MVNO_TYPE_ICCID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"MVNO_TYPE_ICCID"
		);
	}
	jint ApnSetting::MVNO_TYPE_IMSI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"MVNO_TYPE_IMSI"
		);
	}
	jint ApnSetting::MVNO_TYPE_SPN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"MVNO_TYPE_SPN"
		);
	}
	jint ApnSetting::PROTOCOL_IP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"PROTOCOL_IP"
		);
	}
	jint ApnSetting::PROTOCOL_IPV4V6()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"PROTOCOL_IPV4V6"
		);
	}
	jint ApnSetting::PROTOCOL_IPV6()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"PROTOCOL_IPV6"
		);
	}
	jint ApnSetting::PROTOCOL_NON_IP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"PROTOCOL_NON_IP"
		);
	}
	jint ApnSetting::PROTOCOL_PPP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"PROTOCOL_PPP"
		);
	}
	jint ApnSetting::PROTOCOL_UNSTRUCTURED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"PROTOCOL_UNSTRUCTURED"
		);
	}
	jint ApnSetting::TYPE_CBS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_CBS"
		);
	}
	jint ApnSetting::TYPE_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_DEFAULT"
		);
	}
	jint ApnSetting::TYPE_DUN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_DUN"
		);
	}
	jint ApnSetting::TYPE_EMERGENCY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_EMERGENCY"
		);
	}
	jint ApnSetting::TYPE_FOTA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_FOTA"
		);
	}
	jint ApnSetting::TYPE_HIPRI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_HIPRI"
		);
	}
	jint ApnSetting::TYPE_IA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_IA"
		);
	}
	jint ApnSetting::TYPE_IMS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_IMS"
		);
	}
	jint ApnSetting::TYPE_MCX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_MCX"
		);
	}
	jint ApnSetting::TYPE_MMS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_MMS"
		);
	}
	jint ApnSetting::TYPE_SUPL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.data.ApnSetting",
			"TYPE_SUPL"
		);
	}
	
	// QAndroidJniObject forward
	ApnSetting::ApnSetting(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint ApnSetting::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ApnSetting::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring ApnSetting::getApnName()
	{
		return callObjectMethod(
			"getApnName",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jstring ApnSetting::getEntryName()
	{
		return callObjectMethod(
			"getEntryName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ApnSetting::getId()
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	QAndroidJniObject ApnSetting::getMmsProxyAddress()
	{
		return callObjectMethod(
			"getMmsProxyAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	jstring ApnSetting::getMmsProxyAddressAsString()
	{
		return callObjectMethod(
			"getMmsProxyAddressAsString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ApnSetting::getMmsProxyPort()
	{
		return callMethod<jint>(
			"getMmsProxyPort",
			"()I"
		);
	}
	QAndroidJniObject ApnSetting::getMmsc()
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
	jstring ApnSetting::getOperatorNumeric()
	{
		return callObjectMethod(
			"getOperatorNumeric",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ApnSetting::getPassword()
	{
		return callObjectMethod(
			"getPassword",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ApnSetting::getProtocol()
	{
		return callMethod<jint>(
			"getProtocol",
			"()I"
		);
	}
	QAndroidJniObject ApnSetting::getProxyAddress()
	{
		return callObjectMethod(
			"getProxyAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	jstring ApnSetting::getProxyAddressAsString()
	{
		return callObjectMethod(
			"getProxyAddressAsString",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jstring ApnSetting::getUser()
	{
		return callObjectMethod(
			"getUser",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean ApnSetting::isEnabled()
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jstring ApnSetting::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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
