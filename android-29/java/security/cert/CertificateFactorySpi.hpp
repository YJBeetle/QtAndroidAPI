#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::io
{
	class InputStream;
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
	class CertificateFactorySpi : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CertificateFactorySpi(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CertificateFactorySpi(QJniObject obj);
		
		// Constructors
		CertificateFactorySpi();
		
		// Methods
		java::security::cert::CRL engineGenerateCRL(java::io::InputStream arg0);
		__JniBaseClass engineGenerateCRLs(java::io::InputStream arg0);
		java::security::cert::CertPath engineGenerateCertPath(java::io::InputStream arg0);
		java::security::cert::CertPath engineGenerateCertPath(__JniBaseClass arg0);
		java::security::cert::CertPath engineGenerateCertPath(java::io::InputStream arg0, jstring arg1);
		java::security::cert::Certificate engineGenerateCertificate(java::io::InputStream arg0);
		__JniBaseClass engineGenerateCertificates(java::io::InputStream arg0);
		__JniBaseClass engineGetCertPathEncodings();
	};
} // namespace java::security::cert

