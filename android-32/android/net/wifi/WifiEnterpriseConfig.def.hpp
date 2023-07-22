#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace android::os
{
	class Parcel;
}
class JString;
namespace java::security::cert
{
	class X509Certificate;
}

namespace android::net::wifi
{
	class WifiEnterpriseConfig : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static JString EXTRA_WAPI_AS_CERTIFICATE_DATA();
		static JString EXTRA_WAPI_AS_CERTIFICATE_NAME();
		static JString EXTRA_WAPI_USER_CERTIFICATE_DATA();
		static JString EXTRA_WAPI_USER_CERTIFICATE_NAME();
		static JString WAPI_AS_CERTIFICATE();
		static JString WAPI_USER_CERTIFICATE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiEnterpriseConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiEnterpriseConfig(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		WifiEnterpriseConfig();
		WifiEnterpriseConfig(android::net::wifi::WifiEnterpriseConfig &arg0);
		
		// Methods
		jint describeContents() const;
		JString getAltSubjectMatch() const;
		JString getAnonymousIdentity() const;
		java::security::cert::X509Certificate getCaCertificate() const;
		JArray getCaCertificates() const;
		java::security::cert::X509Certificate getClientCertificate() const;
		JArray getClientCertificateChain() const;
		JString getClientKeyPairAlias() const;
		JObject getClientPrivateKey() const;
		JString getDecoratedIdentityPrefix() const;
		JString getDomainSuffixMatch() const;
		jint getEapMethod() const;
		JString getIdentity() const;
		JString getPassword() const;
		jint getPhase2Method() const;
		JString getPlmn() const;
		JString getRealm() const;
		JString getSubjectMatch() const;
		jboolean isAuthenticationSimBased() const;
		jboolean isEapMethodServerCertUsed() const;
		jboolean isServerCertValidationEnabled() const;
		void setAltSubjectMatch(JString arg0) const;
		void setAnonymousIdentity(JString arg0) const;
		void setCaCertificate(java::security::cert::X509Certificate arg0) const;
		void setCaCertificates(JArray arg0) const;
		void setClientKeyEntry(JObject arg0, java::security::cert::X509Certificate arg1) const;
		void setClientKeyEntryWithCertificateChain(JObject arg0, JArray arg1) const;
		void setClientKeyPairAlias(JString arg0) const;
		void setDecoratedIdentityPrefix(JString arg0) const;
		void setDomainSuffixMatch(JString arg0) const;
		void setEapMethod(jint arg0) const;
		void setIdentity(JString arg0) const;
		void setPassword(JString arg0) const;
		void setPhase2Method(jint arg0) const;
		void setPlmn(JString arg0) const;
		void setRealm(JString arg0) const;
		void setSubjectMatch(JString arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi

