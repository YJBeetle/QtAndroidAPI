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
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(jstring arg0, java::security::Provider arg1);
		QAndroidJniObject generateCRL(java::io::InputStream arg0);
		QAndroidJniObject generateCRLs(java::io::InputStream arg0);
		QAndroidJniObject generateCertPath(java::io::InputStream arg0);
		QAndroidJniObject generateCertPath(__JniBaseClass arg0);
		QAndroidJniObject generateCertPath(java::io::InputStream arg0, jstring arg1);
		QAndroidJniObject generateCertificate(java::io::InputStream arg0);
		QAndroidJniObject generateCertificates(java::io::InputStream arg0);
		QAndroidJniObject getCertPathEncodings();
		QAndroidJniObject getProvider();
		jstring getType();
	};
} // namespace java::security::cert

