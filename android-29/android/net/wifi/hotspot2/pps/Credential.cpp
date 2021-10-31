#include "./Credential_CertificateCredential.hpp"
#include "./Credential_SimCredential.hpp"
#include "./Credential_UserCredential.hpp"
#include "../../../../os/Parcel.hpp"
#include "../../../../../java/security/cert/X509Certificate.hpp"
#include "./Credential.hpp"

namespace android::net::wifi::hotspot2::pps
{
	// Fields
	QAndroidJniObject Credential::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.hotspot2.pps.Credential",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	Credential::Credential(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Credential::Credential()
		: __JniBaseClass(
			"android.net.wifi.hotspot2.pps.Credential",
			"()V"
		) {}
	Credential::Credential(android::net::wifi::hotspot2::pps::Credential &arg0)
		: __JniBaseClass(
			"android.net.wifi.hotspot2.pps.Credential",
			"(Landroid/net/wifi/hotspot2/pps/Credential;)V",
			arg0.object()
		) {}
	
	// Methods
	jint Credential::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Credential::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject Credential::getCaCertificate()
	{
		return callObjectMethod(
			"getCaCertificate",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	QAndroidJniObject Credential::getCertCredential()
	{
		return callObjectMethod(
			"getCertCredential",
			"()Landroid/net/wifi/hotspot2/pps/Credential$CertificateCredential;"
		);
	}
	jarray Credential::getClientCertificateChain()
	{
		return callObjectMethod(
			"getClientCertificateChain",
			"()[Ljava/security/cert/X509Certificate;"
		).object<jarray>();
	}
	QAndroidJniObject Credential::getClientPrivateKey()
	{
		return callObjectMethod(
			"getClientPrivateKey",
			"()Ljava/security/PrivateKey;"
		);
	}
	jstring Credential::getRealm()
	{
		return callObjectMethod(
			"getRealm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Credential::getSimCredential()
	{
		return callObjectMethod(
			"getSimCredential",
			"()Landroid/net/wifi/hotspot2/pps/Credential$SimCredential;"
		);
	}
	QAndroidJniObject Credential::getUserCredential()
	{
		return callObjectMethod(
			"getUserCredential",
			"()Landroid/net/wifi/hotspot2/pps/Credential$UserCredential;"
		);
	}
	jint Credential::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Credential::setCaCertificate(java::security::cert::X509Certificate arg0)
	{
		callMethod<void>(
			"setCaCertificate",
			"(Ljava/security/cert/X509Certificate;)V",
			arg0.object()
		);
	}
	void Credential::setCertCredential(android::net::wifi::hotspot2::pps::Credential_CertificateCredential arg0)
	{
		callMethod<void>(
			"setCertCredential",
			"(Landroid/net/wifi/hotspot2/pps/Credential$CertificateCredential;)V",
			arg0.object()
		);
	}
	void Credential::setClientCertificateChain(jarray arg0)
	{
		callMethod<void>(
			"setClientCertificateChain",
			"([Ljava/security/cert/X509Certificate;)V",
			arg0
		);
	}
	void Credential::setClientPrivateKey(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setClientPrivateKey",
			"(Ljava/security/PrivateKey;)V",
			arg0.object()
		);
	}
	void Credential::setRealm(jstring arg0)
	{
		callMethod<void>(
			"setRealm",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Credential::setSimCredential(android::net::wifi::hotspot2::pps::Credential_SimCredential arg0)
	{
		callMethod<void>(
			"setSimCredential",
			"(Landroid/net/wifi/hotspot2/pps/Credential$SimCredential;)V",
			arg0.object()
		);
	}
	void Credential::setUserCredential(android::net::wifi::hotspot2::pps::Credential_UserCredential arg0)
	{
		callMethod<void>(
			"setUserCredential",
			"(Landroid/net/wifi/hotspot2/pps/Credential$UserCredential;)V",
			arg0.object()
		);
	}
	jstring Credential::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Credential::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::hotspot2::pps

