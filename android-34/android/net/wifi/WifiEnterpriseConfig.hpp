#pragma once

#include "../../../JArray.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/security/cert/X509Certificate.def.hpp"
#include "./WifiEnterpriseConfig.def.hpp"

namespace android::net::wifi
{
	// Fields
	inline JObject WifiEnterpriseConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiEnterpriseConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString WifiEnterpriseConfig::EXTRA_WAPI_AS_CERTIFICATE_DATA()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiEnterpriseConfig",
			"EXTRA_WAPI_AS_CERTIFICATE_DATA",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiEnterpriseConfig::EXTRA_WAPI_AS_CERTIFICATE_NAME()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiEnterpriseConfig",
			"EXTRA_WAPI_AS_CERTIFICATE_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiEnterpriseConfig::EXTRA_WAPI_USER_CERTIFICATE_DATA()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiEnterpriseConfig",
			"EXTRA_WAPI_USER_CERTIFICATE_DATA",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiEnterpriseConfig::EXTRA_WAPI_USER_CERTIFICATE_NAME()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiEnterpriseConfig",
			"EXTRA_WAPI_USER_CERTIFICATE_NAME",
			"Ljava/lang/String;"
		);
	}
	inline jint WifiEnterpriseConfig::TLS_V1_0()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig",
			"TLS_V1_0"
		);
	}
	inline jint WifiEnterpriseConfig::TLS_V1_1()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig",
			"TLS_V1_1"
		);
	}
	inline jint WifiEnterpriseConfig::TLS_V1_2()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig",
			"TLS_V1_2"
		);
	}
	inline jint WifiEnterpriseConfig::TLS_V1_3()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig",
			"TLS_V1_3"
		);
	}
	inline JString WifiEnterpriseConfig::WAPI_AS_CERTIFICATE()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiEnterpriseConfig",
			"WAPI_AS_CERTIFICATE",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiEnterpriseConfig::WAPI_USER_CERTIFICATE()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiEnterpriseConfig",
			"WAPI_USER_CERTIFICATE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline WifiEnterpriseConfig::WifiEnterpriseConfig()
		: JObject(
			"android.net.wifi.WifiEnterpriseConfig",
			"()V"
		) {}
	inline WifiEnterpriseConfig::WifiEnterpriseConfig(android::net::wifi::WifiEnterpriseConfig &arg0)
		: JObject(
			"android.net.wifi.WifiEnterpriseConfig",
			"(Landroid/net/wifi/WifiEnterpriseConfig;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint WifiEnterpriseConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void WifiEnterpriseConfig::enableTrustOnFirstUse(jboolean arg0) const
	{
		callMethod<void>(
			"enableTrustOnFirstUse",
			"(Z)V",
			arg0
		);
	}
	inline JString WifiEnterpriseConfig::getAltSubjectMatch() const
	{
		return callObjectMethod(
			"getAltSubjectMatch",
			"()Ljava/lang/String;"
		);
	}
	inline JString WifiEnterpriseConfig::getAnonymousIdentity() const
	{
		return callObjectMethod(
			"getAnonymousIdentity",
			"()Ljava/lang/String;"
		);
	}
	inline java::security::cert::X509Certificate WifiEnterpriseConfig::getCaCertificate() const
	{
		return callObjectMethod(
			"getCaCertificate",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	inline JArray WifiEnterpriseConfig::getCaCertificates() const
	{
		return callObjectMethod(
			"getCaCertificates",
			"()[Ljava/security/cert/X509Certificate;"
		);
	}
	inline java::security::cert::X509Certificate WifiEnterpriseConfig::getClientCertificate() const
	{
		return callObjectMethod(
			"getClientCertificate",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	inline JArray WifiEnterpriseConfig::getClientCertificateChain() const
	{
		return callObjectMethod(
			"getClientCertificateChain",
			"()[Ljava/security/cert/X509Certificate;"
		);
	}
	inline JString WifiEnterpriseConfig::getClientKeyPairAlias() const
	{
		return callObjectMethod(
			"getClientKeyPairAlias",
			"()Ljava/lang/String;"
		);
	}
	inline JObject WifiEnterpriseConfig::getClientPrivateKey() const
	{
		return callObjectMethod(
			"getClientPrivateKey",
			"()Ljava/security/PrivateKey;"
		);
	}
	inline JString WifiEnterpriseConfig::getDecoratedIdentityPrefix() const
	{
		return callObjectMethod(
			"getDecoratedIdentityPrefix",
			"()Ljava/lang/String;"
		);
	}
	inline JString WifiEnterpriseConfig::getDomainSuffixMatch() const
	{
		return callObjectMethod(
			"getDomainSuffixMatch",
			"()Ljava/lang/String;"
		);
	}
	inline jint WifiEnterpriseConfig::getEapMethod() const
	{
		return callMethod<jint>(
			"getEapMethod",
			"()I"
		);
	}
	inline JString WifiEnterpriseConfig::getIdentity() const
	{
		return callObjectMethod(
			"getIdentity",
			"()Ljava/lang/String;"
		);
	}
	inline jint WifiEnterpriseConfig::getMinimumTlsVersion() const
	{
		return callMethod<jint>(
			"getMinimumTlsVersion",
			"()I"
		);
	}
	inline JString WifiEnterpriseConfig::getPassword() const
	{
		return callObjectMethod(
			"getPassword",
			"()Ljava/lang/String;"
		);
	}
	inline jint WifiEnterpriseConfig::getPhase2Method() const
	{
		return callMethod<jint>(
			"getPhase2Method",
			"()I"
		);
	}
	inline JString WifiEnterpriseConfig::getPlmn() const
	{
		return callObjectMethod(
			"getPlmn",
			"()Ljava/lang/String;"
		);
	}
	inline JString WifiEnterpriseConfig::getRealm() const
	{
		return callObjectMethod(
			"getRealm",
			"()Ljava/lang/String;"
		);
	}
	inline JString WifiEnterpriseConfig::getSubjectMatch() const
	{
		return callObjectMethod(
			"getSubjectMatch",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean WifiEnterpriseConfig::hasCaCertificate() const
	{
		return callMethod<jboolean>(
			"hasCaCertificate",
			"()Z"
		);
	}
	inline jboolean WifiEnterpriseConfig::isAuthenticationSimBased() const
	{
		return callMethod<jboolean>(
			"isAuthenticationSimBased",
			"()Z"
		);
	}
	inline jboolean WifiEnterpriseConfig::isEapMethodServerCertUsed() const
	{
		return callMethod<jboolean>(
			"isEapMethodServerCertUsed",
			"()Z"
		);
	}
	inline jboolean WifiEnterpriseConfig::isServerCertValidationEnabled() const
	{
		return callMethod<jboolean>(
			"isServerCertValidationEnabled",
			"()Z"
		);
	}
	inline jboolean WifiEnterpriseConfig::isTrustOnFirstUseEnabled() const
	{
		return callMethod<jboolean>(
			"isTrustOnFirstUseEnabled",
			"()Z"
		);
	}
	inline void WifiEnterpriseConfig::setAltSubjectMatch(JString arg0) const
	{
		callMethod<void>(
			"setAltSubjectMatch",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void WifiEnterpriseConfig::setAnonymousIdentity(JString arg0) const
	{
		callMethod<void>(
			"setAnonymousIdentity",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void WifiEnterpriseConfig::setCaCertificate(java::security::cert::X509Certificate arg0) const
	{
		callMethod<void>(
			"setCaCertificate",
			"(Ljava/security/cert/X509Certificate;)V",
			arg0.object()
		);
	}
	inline void WifiEnterpriseConfig::setCaCertificates(JArray arg0) const
	{
		callMethod<void>(
			"setCaCertificates",
			"([Ljava/security/cert/X509Certificate;)V",
			arg0.object<jarray>()
		);
	}
	inline void WifiEnterpriseConfig::setClientKeyEntry(JObject arg0, java::security::cert::X509Certificate arg1) const
	{
		callMethod<void>(
			"setClientKeyEntry",
			"(Ljava/security/PrivateKey;Ljava/security/cert/X509Certificate;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void WifiEnterpriseConfig::setClientKeyEntryWithCertificateChain(JObject arg0, JArray arg1) const
	{
		callMethod<void>(
			"setClientKeyEntryWithCertificateChain",
			"(Ljava/security/PrivateKey;[Ljava/security/cert/X509Certificate;)V",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	inline void WifiEnterpriseConfig::setClientKeyPairAlias(JString arg0) const
	{
		callMethod<void>(
			"setClientKeyPairAlias",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void WifiEnterpriseConfig::setDecoratedIdentityPrefix(JString arg0) const
	{
		callMethod<void>(
			"setDecoratedIdentityPrefix",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void WifiEnterpriseConfig::setDomainSuffixMatch(JString arg0) const
	{
		callMethod<void>(
			"setDomainSuffixMatch",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void WifiEnterpriseConfig::setEapMethod(jint arg0) const
	{
		callMethod<void>(
			"setEapMethod",
			"(I)V",
			arg0
		);
	}
	inline void WifiEnterpriseConfig::setIdentity(JString arg0) const
	{
		callMethod<void>(
			"setIdentity",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void WifiEnterpriseConfig::setMinimumTlsVersion(jint arg0) const
	{
		callMethod<void>(
			"setMinimumTlsVersion",
			"(I)V",
			arg0
		);
	}
	inline void WifiEnterpriseConfig::setPassword(JString arg0) const
	{
		callMethod<void>(
			"setPassword",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void WifiEnterpriseConfig::setPhase2Method(jint arg0) const
	{
		callMethod<void>(
			"setPhase2Method",
			"(I)V",
			arg0
		);
	}
	inline void WifiEnterpriseConfig::setPlmn(JString arg0) const
	{
		callMethod<void>(
			"setPlmn",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void WifiEnterpriseConfig::setRealm(JString arg0) const
	{
		callMethod<void>(
			"setRealm",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void WifiEnterpriseConfig::setSubjectMatch(JString arg0) const
	{
		callMethod<void>(
			"setSubjectMatch",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline JString WifiEnterpriseConfig::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void WifiEnterpriseConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi;
#endif
