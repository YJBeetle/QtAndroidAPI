#include "../../../../os/Parcel.hpp"
#include "./Credential_CertificateCredential.hpp"

namespace android::net::wifi::hotspot2::pps
{
	// Fields
	JObject Credential_CertificateCredential::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.hotspot2.pps.Credential$CertificateCredential",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	Credential_CertificateCredential::Credential_CertificateCredential(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Credential_CertificateCredential::Credential_CertificateCredential()
		: JObject(
			"android.net.wifi.hotspot2.pps.Credential$CertificateCredential",
			"()V"
		) {}
	Credential_CertificateCredential::Credential_CertificateCredential(android::net::wifi::hotspot2::pps::Credential_CertificateCredential &arg0)
		: JObject(
			"android.net.wifi.hotspot2.pps.Credential$CertificateCredential",
			"(Landroid/net/wifi/hotspot2/pps/Credential$CertificateCredential;)V",
			arg0.object()
		) {}
	
	// Methods
	jint Credential_CertificateCredential::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Credential_CertificateCredential::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jbyteArray Credential_CertificateCredential::getCertSha256Fingerprint()
	{
		return callObjectMethod(
			"getCertSha256Fingerprint",
			"()[B"
		).object<jbyteArray>();
	}
	jstring Credential_CertificateCredential::getCertType()
	{
		return callObjectMethod(
			"getCertType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Credential_CertificateCredential::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Credential_CertificateCredential::setCertSha256Fingerprint(jbyteArray arg0)
	{
		callMethod<void>(
			"setCertSha256Fingerprint",
			"([B)V",
			arg0
		);
	}
	void Credential_CertificateCredential::setCertType(jstring arg0)
	{
		callMethod<void>(
			"setCertType",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jstring Credential_CertificateCredential::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Credential_CertificateCredential::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::hotspot2::pps

