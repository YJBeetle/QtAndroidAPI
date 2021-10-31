#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace java::security::cert
{
	class X509Certificate;
}

namespace android::net::wifi
{
	class WifiEnterpriseConfig : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jstring EXTRA_WAPI_AS_CERTIFICATE_DATA();
		static jstring EXTRA_WAPI_AS_CERTIFICATE_NAME();
		static jstring EXTRA_WAPI_USER_CERTIFICATE_DATA();
		static jstring EXTRA_WAPI_USER_CERTIFICATE_NAME();
		static jstring WAPI_AS_CERTIFICATE();
		static jstring WAPI_USER_CERTIFICATE();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiEnterpriseConfig(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WifiEnterpriseConfig(QJniObject obj);
		
		// Constructors
		WifiEnterpriseConfig();
		WifiEnterpriseConfig(android::net::wifi::WifiEnterpriseConfig &arg0);
		
		// Methods
		jint describeContents();
		jstring getAltSubjectMatch();
		jstring getAnonymousIdentity();
		java::security::cert::X509Certificate getCaCertificate();
		jarray getCaCertificates();
		java::security::cert::X509Certificate getClientCertificate();
		jarray getClientCertificateChain();
		__JniBaseClass getClientPrivateKey();
		jstring getDomainSuffixMatch();
		jint getEapMethod();
		jstring getIdentity();
		jstring getPassword();
		jint getPhase2Method();
		jstring getPlmn();
		jstring getRealm();
		jstring getSubjectMatch();
		jboolean isAuthenticationSimBased();
		void setAltSubjectMatch(jstring arg0);
		void setAnonymousIdentity(jstring arg0);
		void setCaCertificate(java::security::cert::X509Certificate arg0);
		void setCaCertificates(jarray arg0);
		void setClientKeyEntry(__JniBaseClass arg0, java::security::cert::X509Certificate arg1);
		void setClientKeyEntryWithCertificateChain(__JniBaseClass arg0, jarray arg1);
		void setDomainSuffixMatch(jstring arg0);
		void setEapMethod(jint arg0);
		void setIdentity(jstring arg0);
		void setPassword(jstring arg0);
		void setPhase2Method(jint arg0);
		void setPlmn(jstring arg0);
		void setRealm(jstring arg0);
		void setSubjectMatch(jstring arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi

