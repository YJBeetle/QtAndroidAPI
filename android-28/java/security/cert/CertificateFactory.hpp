#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::io
{
	class InputStream;
}
namespace java::security
{
	class Provider;
}
namespace java::security::cert
{
	class CRL;
}
namespace java::security::cert
{
	class CertPath;
}
namespace java::security::cert
{
	class Certificate;
}
namespace java::security::cert
{
	class CertificateFactorySpi;
}

namespace java::security::cert
{
	class CertificateFactory : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CertificateFactory(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CertificateFactory(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::security::cert::CertificateFactory getInstance(jstring arg0);
		static java::security::cert::CertificateFactory getInstance(jstring arg0, jstring arg1);
		static java::security::cert::CertificateFactory getInstance(jstring arg0, java::security::Provider arg1);
		java::security::cert::CRL generateCRL(java::io::InputStream arg0);
		__JniBaseClass generateCRLs(java::io::InputStream arg0);
		java::security::cert::CertPath generateCertPath(java::io::InputStream arg0);
		java::security::cert::CertPath generateCertPath(__JniBaseClass arg0);
		java::security::cert::CertPath generateCertPath(java::io::InputStream arg0, jstring arg1);
		java::security::cert::Certificate generateCertificate(java::io::InputStream arg0);
		__JniBaseClass generateCertificates(java::io::InputStream arg0);
		__JniBaseClass getCertPathEncodings();
		java::security::Provider getProvider();
		jstring getType();
	};
} // namespace java::security::cert
