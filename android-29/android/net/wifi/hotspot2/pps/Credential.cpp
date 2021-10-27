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
	
	Credential::Credential(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Credential::Credential()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.hotspot2.pps.Credential",
			"()V"
		);
	}
	Credential::Credential(android::net::wifi::hotspot2::pps::Credential &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.hotspot2.pps.Credential",
			"(Landroid/net/wifi/hotspot2/pps/Credential;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint Credential::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Credential::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject Credential::getCaCertificate()
	{
		return __thiz.callObjectMethod(
			"getCaCertificate",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	QAndroidJniObject Credential::getCertCredential()
	{
		return __thiz.callObjectMethod(
			"getCertCredential",
			"()Landroid/net/wifi/hotspot2/pps/Credential$CertificateCredential;"
		);
	}
	jarray Credential::getClientCertificateChain()
	{
		return __thiz.callObjectMethod(
			"getClientCertificateChain",
			"()[Ljava/security/cert/X509Certificate;"
		).object<jarray>();
	}
	QAndroidJniObject Credential::getClientPrivateKey()
	{
		return __thiz.callObjectMethod(
			"getClientPrivateKey",
			"()Ljava/security/PrivateKey;"
		);
	}
	jstring Credential::getRealm()
	{
		return __thiz.callObjectMethod(
			"getRealm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Credential::getSimCredential()
	{
		return __thiz.callObjectMethod(
			"getSimCredential",
			"()Landroid/net/wifi/hotspot2/pps/Credential$SimCredential;"
		);
	}
	QAndroidJniObject Credential::getUserCredential()
	{
		return __thiz.callObjectMethod(
			"getUserCredential",
			"()Landroid/net/wifi/hotspot2/pps/Credential$UserCredential;"
		);
	}
	jint Credential::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Credential::setCaCertificate(java::security::cert::X509Certificate arg0)
	{
		__thiz.callMethod<void>(
			"setCaCertificate",
			"(Ljava/security/cert/X509Certificate;)V",
			arg0.__jniObject().object()
		);
	}
	void Credential::setCertCredential(android::net::wifi::hotspot2::pps::Credential_CertificateCredential arg0)
	{
		__thiz.callMethod<void>(
			"setCertCredential",
			"(Landroid/net/wifi/hotspot2/pps/Credential$CertificateCredential;)V",
			arg0.__jniObject().object()
		);
	}
	void Credential::setClientCertificateChain(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setClientCertificateChain",
			"([Ljava/security/cert/X509Certificate;)V",
			arg0
		);
	}
	void Credential::setClientPrivateKey(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setClientPrivateKey",
			"(Ljava/security/PrivateKey;)V",
			arg0.__jniObject().object()
		);
	}
	void Credential::setRealm(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setRealm",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Credential::setRealm(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setRealm",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Credential::setSimCredential(android::net::wifi::hotspot2::pps::Credential_SimCredential arg0)
	{
		__thiz.callMethod<void>(
			"setSimCredential",
			"(Landroid/net/wifi/hotspot2/pps/Credential$SimCredential;)V",
			arg0.__jniObject().object()
		);
	}
	void Credential::setUserCredential(android::net::wifi::hotspot2::pps::Credential_UserCredential arg0)
	{
		__thiz.callMethod<void>(
			"setUserCredential",
			"(Landroid/net/wifi/hotspot2/pps/Credential$UserCredential;)V",
			arg0.__jniObject().object()
		);
	}
	jstring Credential::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Credential::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::net::wifi::hotspot2::pps

