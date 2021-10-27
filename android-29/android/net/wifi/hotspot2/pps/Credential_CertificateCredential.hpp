#pragma once

#include "../../../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::net::wifi::hotspot2::pps
{
	class Credential_CertificateCredential : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		Credential_CertificateCredential(QAndroidJniObject obj);
		// Constructors
		Credential_CertificateCredential();
		Credential_CertificateCredential(android::net::wifi::hotspot2::pps::Credential_CertificateCredential &arg0);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jbyteArray getCertSha256Fingerprint();
		jstring getCertType();
		jint hashCode();
		void setCertSha256Fingerprint(jbyteArray arg0);
		void setCertType(jstring arg0);
		void setCertType(const QString &arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::hotspot2::pps

