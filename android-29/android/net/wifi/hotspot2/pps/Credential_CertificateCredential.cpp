#include "../../../../os/Parcel.hpp"
#include "./Credential_CertificateCredential.hpp"

namespace android::net::wifi::hotspot2::pps
{
	// Fields
	QAndroidJniObject Credential_CertificateCredential::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.hotspot2.pps.Credential$CertificateCredential",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	Credential_CertificateCredential::Credential_CertificateCredential(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Credential_CertificateCredential::Credential_CertificateCredential()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.hotspot2.pps.Credential$CertificateCredential",
			"()V"
		);
	}
	Credential_CertificateCredential::Credential_CertificateCredential(android::net::wifi::hotspot2::pps::Credential_CertificateCredential &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.hotspot2.pps.Credential$CertificateCredential",
			"(Landroid/net/wifi/hotspot2/pps/Credential$CertificateCredential;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint Credential_CertificateCredential::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Credential_CertificateCredential::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jbyteArray Credential_CertificateCredential::getCertSha256Fingerprint()
	{
		return __thiz.callObjectMethod(
			"getCertSha256Fingerprint",
			"()[B"
		).object<jbyteArray>();
	}
	jstring Credential_CertificateCredential::getCertType()
	{
		return __thiz.callObjectMethod(
			"getCertType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Credential_CertificateCredential::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Credential_CertificateCredential::setCertSha256Fingerprint(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"setCertSha256Fingerprint",
			"([B)V",
			arg0
		);
	}
	void Credential_CertificateCredential::setCertType(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setCertType",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Credential_CertificateCredential::setCertType(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setCertType",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring Credential_CertificateCredential::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Credential_CertificateCredential::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::net::wifi::hotspot2::pps

