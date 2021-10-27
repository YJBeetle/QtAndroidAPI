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
		static QAndroidJniObject CREATOR();
		
		WifiEnterpriseConfig(QAndroidJniObject obj);
		// Constructors
		WifiEnterpriseConfig();
		WifiEnterpriseConfig(android::net::wifi::WifiEnterpriseConfig &arg0);
		
		// Methods
		jint describeContents();
		jstring getAltSubjectMatch();
		jstring getAnonymousIdentity();
		QAndroidJniObject getCaCertificate();
		jarray getCaCertificates();
		QAndroidJniObject getClientCertificate();
		jarray getClientCertificateChain();
		jstring getDomainSuffixMatch();
		jint getEapMethod();
		jstring getIdentity();
		jstring getPassword();
		jint getPhase2Method();
		jstring getPlmn();
		jstring getRealm();
		jstring getSubjectMatch();
		void setAltSubjectMatch(jstring arg0);
		void setAltSubjectMatch(const QString &arg0);
		void setAnonymousIdentity(jstring arg0);
		void setAnonymousIdentity(const QString &arg0);
		void setCaCertificate(java::security::cert::X509Certificate arg0);
		void setCaCertificates(jarray arg0);
		void setClientKeyEntry(__JniBaseClass arg0, java::security::cert::X509Certificate arg1);
		void setClientKeyEntryWithCertificateChain(__JniBaseClass arg0, jarray arg1);
		void setDomainSuffixMatch(jstring arg0);
		void setDomainSuffixMatch(const QString &arg0);
		void setEapMethod(jint arg0);
		void setIdentity(jstring arg0);
		void setIdentity(const QString &arg0);
		void setPassword(jstring arg0);
		void setPassword(const QString &arg0);
		void setPhase2Method(jint arg0);
		void setPlmn(jstring arg0);
		void setPlmn(const QString &arg0);
		void setRealm(jstring arg0);
		void setRealm(const QString &arg0);
		void setSubjectMatch(jstring arg0);
		void setSubjectMatch(const QString &arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi

