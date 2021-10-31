#pragma once

#include "../../../../../__JniBaseClass.hpp"

namespace android::net::wifi::hotspot2::pps
{
	class Credential_CertificateCredential;
}
namespace android::net::wifi::hotspot2::pps
{
	class Credential_SimCredential;
}
namespace android::net::wifi::hotspot2::pps
{
	class Credential_UserCredential;
}
namespace android::os
{
	class Parcel;
}
namespace java::security::cert
{
	class X509Certificate;
}

namespace android::net::wifi::hotspot2::pps
{
	class Credential : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit Credential(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Credential(QJniObject obj);
		
		// Constructors
		Credential();
		Credential(android::net::wifi::hotspot2::pps::Credential &arg0);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		java::security::cert::X509Certificate getCaCertificate();
		android::net::wifi::hotspot2::pps::Credential_CertificateCredential getCertCredential();
		jarray getClientCertificateChain();
		__JniBaseClass getClientPrivateKey();
		jstring getRealm();
		android::net::wifi::hotspot2::pps::Credential_SimCredential getSimCredential();
		android::net::wifi::hotspot2::pps::Credential_UserCredential getUserCredential();
		jint hashCode();
		void setCaCertificate(java::security::cert::X509Certificate arg0);
		void setCertCredential(android::net::wifi::hotspot2::pps::Credential_CertificateCredential arg0);
		void setClientCertificateChain(jarray arg0);
		void setClientPrivateKey(__JniBaseClass arg0);
		void setRealm(jstring arg0);
		void setSimCredential(android::net::wifi::hotspot2::pps::Credential_SimCredential arg0);
		void setUserCredential(android::net::wifi::hotspot2::pps::Credential_UserCredential arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::hotspot2::pps

