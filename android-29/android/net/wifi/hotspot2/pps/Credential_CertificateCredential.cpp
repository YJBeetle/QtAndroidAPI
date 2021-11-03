#include "../../../../../JByteArray.hpp"
#include "../../../../os/Parcel.hpp"
#include "../../../../../JObject.hpp"
#include "../../../../../JString.hpp"
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
	
	// QJniObject forward
	Credential_CertificateCredential::Credential_CertificateCredential(QJniObject obj) : JObject(obj) {}
	
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
	jint Credential_CertificateCredential::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Credential_CertificateCredential::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JByteArray Credential_CertificateCredential::getCertSha256Fingerprint() const
	{
		return callObjectMethod(
			"getCertSha256Fingerprint",
			"()[B"
		);
	}
	JString Credential_CertificateCredential::getCertType() const
	{
		return callObjectMethod(
			"getCertType",
			"()Ljava/lang/String;"
		);
	}
	jint Credential_CertificateCredential::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Credential_CertificateCredential::setCertSha256Fingerprint(JByteArray arg0) const
	{
		callMethod<void>(
			"setCertSha256Fingerprint",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void Credential_CertificateCredential::setCertType(JString arg0) const
	{
		callMethod<void>(
			"setCertType",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	JString Credential_CertificateCredential::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void Credential_CertificateCredential::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::hotspot2::pps

