#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./CRL.hpp"

namespace java::math
{
	class BigInteger;
}
namespace java::security
{
	class Provider;
}
namespace java::security::cert
{
	class X509CRLEntry;
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
	class X509CRL : public java::security::cert::CRL
	{
	public:
		// Fields
		
		X509CRL(QAndroidJniObject obj);
		// Constructors
		X509CRL() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jbyteArray getEncoded();
		QAndroidJniObject getIssuerDN();
		QAndroidJniObject getIssuerX500Principal();
		QAndroidJniObject getNextUpdate();
		QAndroidJniObject getRevokedCertificate(java::math::BigInteger arg0);
		QAndroidJniObject getRevokedCertificate(java::security::cert::X509Certificate arg0);
		QAndroidJniObject getRevokedCertificates();
		jstring getSigAlgName();
		jstring getSigAlgOID();
		jbyteArray getSigAlgParams();
		jbyteArray getSignature();
		jbyteArray getTBSCertList();
		QAndroidJniObject getThisUpdate();
		jint getVersion();
		jint hashCode();
		void verify(__JniBaseClass arg0);
		void verify(__JniBaseClass arg0, jstring arg1);
		void verify(__JniBaseClass arg0, const QString &arg1);
		void verify(__JniBaseClass arg0, java::security::Provider arg1);
	};
} // namespace java::security::cert

