#pragma once

#include "../../../../../JObject.hpp"

class JByteArray;
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

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
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JByteArray getCertSha256Fingerprint() const;
		JString getCertType() const;
		jint hashCode() const;
		void setCertSha256Fingerprint(JByteArray arg0) const;
		void setCertType(JString arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi::hotspot2::pps

