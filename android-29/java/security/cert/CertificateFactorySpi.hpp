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
		
		CertificateFactorySpi(QAndroidJniObject obj);
		// Constructors
		CertificateFactorySpi();
		
		// Methods
		QAndroidJniObject engineGenerateCRL(java::io::InputStream arg0);
		QAndroidJniObject engineGenerateCRLs(java::io::InputStream arg0);
		QAndroidJniObject engineGenerateCertPath(java::io::InputStream arg0);
		QAndroidJniObject engineGenerateCertPath(__JniBaseClass arg0);
		QAndroidJniObject engineGenerateCertPath(java::io::InputStream arg0, jstring arg1);
		QAndroidJniObject engineGenerateCertPath(java::io::InputStream arg0, const QString &arg1);
		QAndroidJniObject engineGenerateCertificate(java::io::InputStream arg0);
		QAndroidJniObject engineGenerateCertificates(java::io::InputStream arg0);
		QAndroidJniObject engineGetCertPathEncodings();
	};
} // namespace java::security::cert

