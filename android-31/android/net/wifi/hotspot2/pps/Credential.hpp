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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Credential(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Credential(QAndroidJniObject obj);
		
		// Constructors
		Credential();
		Credential(android::net::wifi::hotspot2::pps::Credential &arg0);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		java::security::cert::X509Certificate getCaCertificate() const;
		android::net::wifi::hotspot2::pps::Credential_CertificateCredential getCertCredential() const;
		JArray getClientCertificateChain() const;
		JObject getClientPrivateKey() const;
		JString getRealm() const;
		android::net::wifi::hotspot2::pps::Credential_SimCredential getSimCredential() const;
		android::net::wifi::hotspot2::pps::Credential_UserCredential getUserCredential() const;
		jint hashCode() const;
		void setCaCertificate(java::security::cert::X509Certificate arg0) const;
		void setCertCredential(android::net::wifi::hotspot2::pps::Credential_CertificateCredential arg0) const;
		void setClientCertificateChain(JArray arg0) const;
		void setClientPrivateKey(JObject arg0) const;
		void setRealm(JString arg0) const;
		void setSimCredential(android::net::wifi::hotspot2::pps::Credential_SimCredential arg0) const;
		void setUserCredential(android::net::wifi::hotspot2::pps::Credential_UserCredential arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi::hotspot2::pps

