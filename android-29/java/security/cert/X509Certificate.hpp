#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Certificate.hpp"

namespace java::math
{
	class BigInteger;
}
namespace java::security
{
	class Provider;
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
	class X509Certificate : public java::security::cert::Certificate
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit X509Certificate(const char *className, const char *sig, Ts...agv) : java::security::cert::Certificate(className, sig, std::forward<Ts>(agv)...) {}
		X509Certificate(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void checkValidity();
		void checkValidity(java::util::Date arg0);
		jint getBasicConstraints();
		QAndroidJniObject getExtendedKeyUsage();
		QAndroidJniObject getIssuerAlternativeNames();
		QAndroidJniObject getIssuerDN();
		jbooleanArray getIssuerUniqueID();
		QAndroidJniObject getIssuerX500Principal();
		jbooleanArray getKeyUsage();
		QAndroidJniObject getNotAfter();
		QAndroidJniObject getNotBefore();
		QAndroidJniObject getSerialNumber();
		jstring getSigAlgName();
		jstring getSigAlgOID();
		jbyteArray getSigAlgParams();
		jbyteArray getSignature();
		QAndroidJniObject getSubjectAlternativeNames();
		QAndroidJniObject getSubjectDN();
		jbooleanArray getSubjectUniqueID();
		QAndroidJniObject getSubjectX500Principal();
		jbyteArray getTBSCertificate();
		jint getVersion();
		void verify(__JniBaseClass arg0, java::security::Provider arg1);
	};
} // namespace java::security::cert

