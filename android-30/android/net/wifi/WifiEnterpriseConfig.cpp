#include "../../../JArray.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "../../../java/security/cert/X509Certificate.hpp"
#include "./WifiEnterpriseConfig.hpp"

namespace android::net::wifi
{
	// Fields
	JObject WifiEnterpriseConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiEnterpriseConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	JString WifiEnterpriseConfig::EXTRA_WAPI_AS_CERTIFICATE_DATA()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiEnterpriseConfig",
			"EXTRA_WAPI_AS_CERTIFICATE_DATA",
			"Ljava/lang/String;"
		);
	}
	JString WifiEnterpriseConfig::EXTRA_WAPI_AS_CERTIFICATE_NAME()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiEnterpriseConfig",
			"EXTRA_WAPI_AS_CERTIFICATE_NAME",
			"Ljava/lang/String;"
		);
	}
	JString WifiEnterpriseConfig::EXTRA_WAPI_USER_CERTIFICATE_DATA()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiEnterpriseConfig",
			"EXTRA_WAPI_USER_CERTIFICATE_DATA",
			"Ljava/lang/String;"
		);
	}
	JString WifiEnterpriseConfig::EXTRA_WAPI_USER_CERTIFICATE_NAME()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiEnterpriseConfig",
			"EXTRA_WAPI_USER_CERTIFICATE_NAME",
			"Ljava/lang/String;"
		);
	}
	JString WifiEnterpriseConfig::WAPI_AS_CERTIFICATE()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiEnterpriseConfig",
			"WAPI_AS_CERTIFICATE",
			"Ljava/lang/String;"
		);
	}
	JString WifiEnterpriseConfig::WAPI_USER_CERTIFICATE()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiEnterpriseConfig",
			"WAPI_USER_CERTIFICATE",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	WifiEnterpriseConfig::WifiEnterpriseConfig(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	WifiEnterpriseConfig::WifiEnterpriseConfig()
		: JObject(
			"android.net.wifi.WifiEnterpriseConfig",
			"()V"
		) {}
	WifiEnterpriseConfig::WifiEnterpriseConfig(android::net::wifi::WifiEnterpriseConfig &arg0)
		: JObject(
			"android.net.wifi.WifiEnterpriseConfig",
			"(Landroid/net/wifi/WifiEnterpriseConfig;)V",
			arg0.object()
		) {}
	
	// Methods
	jint WifiEnterpriseConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString WifiEnterpriseConfig::getAltSubjectMatch() const
	{
		return callObjectMethod(
			"getAltSubjectMatch",
			"()Ljava/lang/String;"
		);
	}
	JString WifiEnterpriseConfig::getAnonymousIdentity() const
	{
		return callObjectMethod(
			"getAnonymousIdentity",
			"()Ljava/lang/String;"
		);
	}
	java::security::cert::X509Certificate WifiEnterpriseConfig::getCaCertificate() const
	{
		return callObjectMethod(
			"getCaCertificate",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	JArray WifiEnterpriseConfig::getCaCertificates() const
	{
		return callObjectMethod(
			"getCaCertificates",
			"()[Ljava/security/cert/X509Certificate;"
		);
	}
	java::security::cert::X509Certificate WifiEnterpriseConfig::getClientCertificate() const
	{
		return callObjectMethod(
			"getClientCertificate",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	JArray WifiEnterpriseConfig::getClientCertificateChain() const
	{
		return callObjectMethod(
			"getClientCertificateChain",
			"()[Ljava/security/cert/X509Certificate;"
		);
	}
	JObject WifiEnterpriseConfig::getClientPrivateKey() const
	{
		return callObjectMethod(
			"getClientPrivateKey",
			"()Ljava/security/PrivateKey;"
		);
	}
	JString WifiEnterpriseConfig::getDomainSuffixMatch() const
	{
		return callObjectMethod(
			"getDomainSuffixMatch",
			"()Ljava/lang/String;"
		);
	}
	jint WifiEnterpriseConfig::getEapMethod() const
	{
		return callMethod<jint>(
			"getEapMethod",
			"()I"
		);
	}
	JString WifiEnterpriseConfig::getIdentity() const
	{
		return callObjectMethod(
			"getIdentity",
			"()Ljava/lang/String;"
		);
	}
	JString WifiEnterpriseConfig::getPassword() const
	{
		return callObjectMethod(
			"getPassword",
			"()Ljava/lang/String;"
		);
	}
	jint WifiEnterpriseConfig::getPhase2Method() const
	{
		return callMethod<jint>(
			"getPhase2Method",
			"()I"
		);
	}
	JString WifiEnterpriseConfig::getPlmn() const
	{
		return callObjectMethod(
			"getPlmn",
			"()Ljava/lang/String;"
		);
	}
	JString WifiEnterpriseConfig::getRealm() const
	{
		return callObjectMethod(
			"getRealm",
			"()Ljava/lang/String;"
		);
	}
	JString WifiEnterpriseConfig::getSubjectMatch() const
	{
		return callObjectMethod(
			"getSubjectMatch",
			"()Ljava/lang/String;"
		);
	}
	jboolean WifiEnterpriseConfig::isAuthenticationSimBased() const
	{
		return callMethod<jboolean>(
			"isAuthenticationSimBased",
			"()Z"
		);
	}
	void WifiEnterpriseConfig::setAltSubjectMatch(JString arg0) const
	{
		callMethod<void>(
			"setAltSubjectMatch",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void WifiEnterpriseConfig::setAnonymousIdentity(JString arg0) const
	{
		callMethod<void>(
			"setAnonymousIdentity",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void WifiEnterpriseConfig::setCaCertificate(java::security::cert::X509Certificate arg0) const
	{
		callMethod<void>(
			"setCaCertificate",
			"(Ljava/security/cert/X509Certificate;)V",
			arg0.object()
		);
	}
	void WifiEnterpriseConfig::setCaCertificates(JArray arg0) const
	{
		callMethod<void>(
			"setCaCertificates",
			"([Ljava/security/cert/X509Certificate;)V",
			arg0.object<jarray>()
		);
	}
	void WifiEnterpriseConfig::setClientKeyEntry(JObject arg0, java::security::cert::X509Certificate arg1) const
	{
		callMethod<void>(
			"setClientKeyEntry",
			"(Ljava/security/PrivateKey;Ljava/security/cert/X509Certificate;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void WifiEnterpriseConfig::setClientKeyEntryWithCertificateChain(JObject arg0, JArray arg1) const
	{
		callMethod<void>(
			"setClientKeyEntryWithCertificateChain",
			"(Ljava/security/PrivateKey;[Ljava/security/cert/X509Certificate;)V",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	void WifiEnterpriseConfig::setDomainSuffixMatch(JString arg0) const
	{
		callMethod<void>(
			"setDomainSuffixMatch",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void WifiEnterpriseConfig::setEapMethod(jint arg0) const
	{
		callMethod<void>(
			"setEapMethod",
			"(I)V",
			arg0
		);
	}
	void WifiEnterpriseConfig::setIdentity(JString arg0) const
	{
		callMethod<void>(
			"setIdentity",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void WifiEnterpriseConfig::setPassword(JString arg0) const
	{
		callMethod<void>(
			"setPassword",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void WifiEnterpriseConfig::setPhase2Method(jint arg0) const
	{
		callMethod<void>(
			"setPhase2Method",
			"(I)V",
			arg0
		);
	}
	void WifiEnterpriseConfig::setPlmn(JString arg0) const
	{
		callMethod<void>(
			"setPlmn",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void WifiEnterpriseConfig::setRealm(JString arg0) const
	{
		callMethod<void>(
			"setRealm",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void WifiEnterpriseConfig::setSubjectMatch(JString arg0) const
	{
		callMethod<void>(
			"setSubjectMatch",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	JString WifiEnterpriseConfig::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void WifiEnterpriseConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi

