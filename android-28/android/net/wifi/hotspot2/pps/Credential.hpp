#pragma once

#include "../../../../../JArray.hpp"
#include "./Credential_CertificateCredential.def.hpp"
#include "./Credential_SimCredential.def.hpp"
#include "./Credential_UserCredential.def.hpp"
#include "../../../../os/Parcel.def.hpp"
#include "../../../../../JObject.hpp"
#include "../../../../../JString.hpp"
#include "../../../../../java/security/cert/X509Certificate.def.hpp"
#include "./Credential.def.hpp"

namespace android::net::wifi::hotspot2::pps
{
	// Fields
	inline JObject Credential::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.hotspot2.pps.Credential",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline Credential::Credential()
		: JObject(
			"android.net.wifi.hotspot2.pps.Credential",
			"()V"
		) {}
	inline Credential::Credential(android::net::wifi::hotspot2::pps::Credential &arg0)
		: JObject(
			"android.net.wifi.hotspot2.pps.Credential",
			"(Landroid/net/wifi/hotspot2/pps/Credential;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint Credential::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean Credential::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::security::cert::X509Certificate Credential::getCaCertificate() const
	{
		return callObjectMethod(
			"getCaCertificate",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	inline android::net::wifi::hotspot2::pps::Credential_CertificateCredential Credential::getCertCredential() const
	{
		return callObjectMethod(
			"getCertCredential",
			"()Landroid/net/wifi/hotspot2/pps/Credential$CertificateCredential;"
		);
	}
	inline JArray Credential::getClientCertificateChain() const
	{
		return callObjectMethod(
			"getClientCertificateChain",
			"()[Ljava/security/cert/X509Certificate;"
		);
	}
	inline JObject Credential::getClientPrivateKey() const
	{
		return callObjectMethod(
			"getClientPrivateKey",
			"()Ljava/security/PrivateKey;"
		);
	}
	inline JString Credential::getRealm() const
	{
		return callObjectMethod(
			"getRealm",
			"()Ljava/lang/String;"
		);
	}
	inline android::net::wifi::hotspot2::pps::Credential_SimCredential Credential::getSimCredential() const
	{
		return callObjectMethod(
			"getSimCredential",
			"()Landroid/net/wifi/hotspot2/pps/Credential$SimCredential;"
		);
	}
	inline android::net::wifi::hotspot2::pps::Credential_UserCredential Credential::getUserCredential() const
	{
		return callObjectMethod(
			"getUserCredential",
			"()Landroid/net/wifi/hotspot2/pps/Credential$UserCredential;"
		);
	}
	inline jint Credential::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void Credential::setCaCertificate(java::security::cert::X509Certificate arg0) const
	{
		callMethod<void>(
			"setCaCertificate",
			"(Ljava/security/cert/X509Certificate;)V",
			arg0.object()
		);
	}
	inline void Credential::setCertCredential(android::net::wifi::hotspot2::pps::Credential_CertificateCredential arg0) const
	{
		callMethod<void>(
			"setCertCredential",
			"(Landroid/net/wifi/hotspot2/pps/Credential$CertificateCredential;)V",
			arg0.object()
		);
	}
	inline void Credential::setClientCertificateChain(JArray arg0) const
	{
		callMethod<void>(
			"setClientCertificateChain",
			"([Ljava/security/cert/X509Certificate;)V",
			arg0.object<jarray>()
		);
	}
	inline void Credential::setClientPrivateKey(JObject arg0) const
	{
		callMethod<void>(
			"setClientPrivateKey",
			"(Ljava/security/PrivateKey;)V",
			arg0.object()
		);
	}
	inline void Credential::setRealm(JString arg0) const
	{
		callMethod<void>(
			"setRealm",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Credential::setSimCredential(android::net::wifi::hotspot2::pps::Credential_SimCredential arg0) const
	{
		callMethod<void>(
			"setSimCredential",
			"(Landroid/net/wifi/hotspot2/pps/Credential$SimCredential;)V",
			arg0.object()
		);
	}
	inline void Credential::setUserCredential(android::net::wifi::hotspot2::pps::Credential_UserCredential arg0) const
	{
		callMethod<void>(
			"setUserCredential",
			"(Landroid/net/wifi/hotspot2/pps/Credential$UserCredential;)V",
			arg0.object()
		);
	}
	inline JString Credential::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void Credential::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::hotspot2::pps

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::hotspot2::pps;
#endif
