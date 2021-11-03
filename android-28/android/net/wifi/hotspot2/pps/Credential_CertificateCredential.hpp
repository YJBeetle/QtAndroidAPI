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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Credential_CertificateCredential(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Credential_CertificateCredential(QAndroidJniObject obj);
		
		// Constructors
		Credential_CertificateCredential();
		Credential_CertificateCredential(android::net::wifi::hotspot2::pps::Credential_CertificateCredential &arg0);
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		JByteArray getCertSha256Fingerprint();
		JString getCertType();
		jint hashCode();
		void setCertSha256Fingerprint(JByteArray arg0);
		void setCertType(JString arg0);
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::hotspot2::pps

