#pragma once

#include "../../../../../JObject.hpp"

class JArray;
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
class JObject;
class JString;
namespace java::security::cert
{
	class X509Certificate;
}

namespace android::net::wifi::hotspot2::pps
{
	class Credential : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit Credential(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Credential(QJniObject obj);
		
		// Constructors
		Credential();
		Credential(android::net::wifi::hotspot2::pps::Credential &arg0);
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		java::security::cert::X509Certificate getCaCertificate();
		android::net::wifi::hotspot2::pps::Credential_CertificateCredential getCertCredential();
		JArray getClientCertificateChain();
		JObject getClientPrivateKey();
		JString getRealm();
		android::net::wifi::hotspot2::pps::Credential_SimCredential getSimCredential();
		android::net::wifi::hotspot2::pps::Credential_UserCredential getUserCredential();
		jint hashCode();
		void setCaCertificate(java::security::cert::X509Certificate arg0);
		void setCertCredential(android::net::wifi::hotspot2::pps::Credential_CertificateCredential arg0);
		void setClientCertificateChain(JArray arg0);
		void setClientPrivateKey(JObject arg0);
		void setRealm(JString arg0);
		void setSimCredential(android::net::wifi::hotspot2::pps::Credential_SimCredential arg0);
		void setUserCredential(android::net::wifi::hotspot2::pps::Credential_UserCredential arg0);
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::hotspot2::pps

