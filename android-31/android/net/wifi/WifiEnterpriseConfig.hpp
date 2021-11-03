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
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiEnterpriseConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiEnterpriseConfig(QJniObject obj);
		
		// Constructors
		WifiEnterpriseConfig();
		WifiEnterpriseConfig(android::net::wifi::WifiEnterpriseConfig &arg0);
		
		// Methods
		jint describeContents();
		JString getAltSubjectMatch();
		JString getAnonymousIdentity();
		java::security::cert::X509Certificate getCaCertificate();
		JArray getCaCertificates();
		java::security::cert::X509Certificate getClientCertificate();
		JArray getClientCertificateChain();
		JString getClientKeyPairAlias();
		JObject getClientPrivateKey();
		JString getDecoratedIdentityPrefix();
		JString getDomainSuffixMatch();
		jint getEapMethod();
		JString getIdentity();
		JString getPassword();
		jint getPhase2Method();
		JString getPlmn();
		JString getRealm();
		JString getSubjectMatch();
		jboolean isAuthenticationSimBased();
		jboolean isEapMethodServerCertUsed();
		jboolean isServerCertValidationEnabled();
		void setAltSubjectMatch(JString arg0);
		void setAnonymousIdentity(JString arg0);
		void setCaCertificate(java::security::cert::X509Certificate arg0);
		void setCaCertificates(JArray arg0);
		void setClientKeyEntry(JObject arg0, java::security::cert::X509Certificate arg1);
		void setClientKeyEntryWithCertificateChain(JObject arg0, JArray arg1);
		void setClientKeyPairAlias(JString arg0);
		void setDecoratedIdentityPrefix(JString arg0);
		void setDomainSuffixMatch(JString arg0);
		void setEapMethod(jint arg0);
		void setIdentity(JString arg0);
		void setPassword(JString arg0);
		void setPhase2Method(jint arg0);
		void setPlmn(JString arg0);
		void setRealm(JString arg0);
		void setSubjectMatch(JString arg0);
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi

