#include "../../os/Parcel.hpp"
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
	
	// QAndroidJniObject forward
	WifiEnterpriseConfig::WifiEnterpriseConfig(QAndroidJniObject obj) : JObject(obj) {}
	
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
	jint WifiEnterpriseConfig::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring WifiEnterpriseConfig::getAltSubjectMatch()
	{
		return callObjectMethod(
			"getAltSubjectMatch",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiEnterpriseConfig::getAnonymousIdentity()
	{
		return callObjectMethod(
			"getAnonymousIdentity",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::security::cert::X509Certificate WifiEnterpriseConfig::getCaCertificate()
	{
		return callObjectMethod(
			"getCaCertificate",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	jarray WifiEnterpriseConfig::getCaCertificates()
	{
		return callObjectMethod(
			"getCaCertificates",
			"()[Ljava/security/cert/X509Certificate;"
		).object<jarray>();
	}
	java::security::cert::X509Certificate WifiEnterpriseConfig::getClientCertificate()
	{
		return callObjectMethod(
			"getClientCertificate",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	jarray WifiEnterpriseConfig::getClientCertificateChain()
	{
		return callObjectMethod(
			"getClientCertificateChain",
			"()[Ljava/security/cert/X509Certificate;"
		).object<jarray>();
	}
	jstring WifiEnterpriseConfig::getDomainSuffixMatch()
	{
		return callObjectMethod(
			"getDomainSuffixMatch",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint WifiEnterpriseConfig::getEapMethod()
	{
		return callMethod<jint>(
			"getEapMethod",
			"()I"
		);
	}
	jstring WifiEnterpriseConfig::getIdentity()
	{
		return callObjectMethod(
			"getIdentity",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiEnterpriseConfig::getPassword()
	{
		return callObjectMethod(
			"getPassword",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint WifiEnterpriseConfig::getPhase2Method()
	{
		return callMethod<jint>(
			"getPhase2Method",
			"()I"
		);
	}
	jstring WifiEnterpriseConfig::getPlmn()
	{
		return callObjectMethod(
			"getPlmn",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiEnterpriseConfig::getRealm()
	{
		return callObjectMethod(
			"getRealm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiEnterpriseConfig::getSubjectMatch()
	{
		return callObjectMethod(
			"getSubjectMatch",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WifiEnterpriseConfig::setAltSubjectMatch(jstring arg0)
	{
		callMethod<void>(
			"setAltSubjectMatch",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WifiEnterpriseConfig::setAnonymousIdentity(jstring arg0)
	{
		callMethod<void>(
			"setAnonymousIdentity",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WifiEnterpriseConfig::setCaCertificate(java::security::cert::X509Certificate arg0)
	{
		callMethod<void>(
			"setCaCertificate",
			"(Ljava/security/cert/X509Certificate;)V",
			arg0.object()
		);
	}
	void WifiEnterpriseConfig::setCaCertificates(jarray arg0)
	{
		callMethod<void>(
			"setCaCertificates",
			"([Ljava/security/cert/X509Certificate;)V",
			arg0
		);
	}
	void WifiEnterpriseConfig::setClientKeyEntry(JObject arg0, java::security::cert::X509Certificate arg1)
	{
		callMethod<void>(
			"setClientKeyEntry",
			"(Ljava/security/PrivateKey;Ljava/security/cert/X509Certificate;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void WifiEnterpriseConfig::setClientKeyEntryWithCertificateChain(JObject arg0, jarray arg1)
	{
		callMethod<void>(
			"setClientKeyEntryWithCertificateChain",
			"(Ljava/security/PrivateKey;[Ljava/security/cert/X509Certificate;)V",
			arg0.object(),
			arg1
		);
	}
	void WifiEnterpriseConfig::setDomainSuffixMatch(jstring arg0)
	{
		callMethod<void>(
			"setDomainSuffixMatch",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WifiEnterpriseConfig::setEapMethod(jint arg0)
	{
		callMethod<void>(
			"setEapMethod",
			"(I)V",
			arg0
		);
	}
	void WifiEnterpriseConfig::setIdentity(jstring arg0)
	{
		callMethod<void>(
			"setIdentity",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WifiEnterpriseConfig::setPassword(jstring arg0)
	{
		callMethod<void>(
			"setPassword",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WifiEnterpriseConfig::setPhase2Method(jint arg0)
	{
		callMethod<void>(
			"setPhase2Method",
			"(I)V",
			arg0
		);
	}
	void WifiEnterpriseConfig::setPlmn(jstring arg0)
	{
		callMethod<void>(
			"setPlmn",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WifiEnterpriseConfig::setRealm(jstring arg0)
	{
		callMethod<void>(
			"setRealm",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WifiEnterpriseConfig::setSubjectMatch(jstring arg0)
	{
		callMethod<void>(
			"setSubjectMatch",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jstring WifiEnterpriseConfig::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WifiEnterpriseConfig::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi

