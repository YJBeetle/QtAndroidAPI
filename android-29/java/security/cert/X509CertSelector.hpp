#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::lang
{
	class Boolean;
}
namespace java::math
{
	class BigInteger;
}
namespace java::security::cert
{
	class Certificate;
}
namespace java::security::cert
{
	class X509Certificate;
}
namespace java::util
{
	class Date;
}
namespace javax::security::auth::x500
{
	class X500Principal;
}

namespace java::security::cert
{
	class X509CertSelector : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit X509CertSelector(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		X509CertSelector(QAndroidJniObject obj);
		
		// Constructors
		X509CertSelector();
		
		// Methods
		void addPathToName(jint arg0, jbyteArray arg1);
		void addPathToName(jint arg0, jstring arg1);
		void addSubjectAlternativeName(jint arg0, jbyteArray arg1);
		void addSubjectAlternativeName(jint arg0, jstring arg1);
		jobject clone();
		jbyteArray getAuthorityKeyIdentifier();
		jint getBasicConstraints();
		QAndroidJniObject getCertificate();
		QAndroidJniObject getCertificateValid();
		QAndroidJniObject getExtendedKeyUsage();
		QAndroidJniObject getIssuer();
		jbyteArray getIssuerAsBytes();
		jstring getIssuerAsString();
		jbooleanArray getKeyUsage();
		jboolean getMatchAllSubjectAltNames();
		jbyteArray getNameConstraints();
		QAndroidJniObject getPathToNames();
		QAndroidJniObject getPolicy();
		QAndroidJniObject getPrivateKeyValid();
		QAndroidJniObject getSerialNumber();
		QAndroidJniObject getSubject();
		QAndroidJniObject getSubjectAlternativeNames();
		jbyteArray getSubjectAsBytes();
		jstring getSubjectAsString();
		jbyteArray getSubjectKeyIdentifier();
		QAndroidJniObject getSubjectPublicKey();
		jstring getSubjectPublicKeyAlgID();
		jboolean match(java::security::cert::Certificate arg0);
		void setAuthorityKeyIdentifier(jbyteArray arg0);
		void setBasicConstraints(jint arg0);
		void setCertificate(java::security::cert::X509Certificate arg0);
		void setCertificateValid(java::util::Date arg0);
		void setExtendedKeyUsage(__JniBaseClass arg0);
		void setIssuer(jbyteArray arg0);
		void setIssuer(jstring arg0);
		void setIssuer(javax::security::auth::x500::X500Principal arg0);
		void setKeyUsage(jbooleanArray arg0);
		void setMatchAllSubjectAltNames(jboolean arg0);
		void setNameConstraints(jbyteArray arg0);
		void setPathToNames(__JniBaseClass arg0);
		void setPolicy(__JniBaseClass arg0);
		void setPrivateKeyValid(java::util::Date arg0);
		void setSerialNumber(java::math::BigInteger arg0);
		void setSubject(jbyteArray arg0);
		void setSubject(jstring arg0);
		void setSubject(javax::security::auth::x500::X500Principal arg0);
		void setSubjectAlternativeNames(__JniBaseClass arg0);
		void setSubjectKeyIdentifier(jbyteArray arg0);
		void setSubjectPublicKey(jbyteArray arg0);
		void setSubjectPublicKey(__JniBaseClass arg0);
		void setSubjectPublicKeyAlgID(jstring arg0);
		jstring toString();
	};
} // namespace java::security::cert

