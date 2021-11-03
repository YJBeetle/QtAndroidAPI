#pragma once

#include "../../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::net::wifi::hotspot2::pps
{
	class Credential_CertificateCredential : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit Credential_CertificateCredential(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Credential_CertificateCredential(QJniObject obj);
		
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
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::hotspot2::pps

