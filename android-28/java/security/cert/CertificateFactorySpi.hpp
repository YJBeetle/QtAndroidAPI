#pragma once

#include "../../../JObject.hpp"

namespace java::io
{
	class InputStream;
}
class JString;
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
	class CertificateFactorySpi : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CertificateFactorySpi(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CertificateFactorySpi(QJniObject obj);
		
		// Constructors
		CertificateFactorySpi();
		
		// Methods
		java::security::cert::CRL engineGenerateCRL(java::io::InputStream arg0);
		JObject engineGenerateCRLs(java::io::InputStream arg0);
		java::security::cert::CertPath engineGenerateCertPath(java::io::InputStream arg0);
		java::security::cert::CertPath engineGenerateCertPath(JObject arg0);
		java::security::cert::CertPath engineGenerateCertPath(java::io::InputStream arg0, JString arg1);
		java::security::cert::Certificate engineGenerateCertificate(java::io::InputStream arg0);
		JObject engineGenerateCertificates(java::io::InputStream arg0);
		JObject engineGetCertPathEncodings();
	};
} // namespace java::security::cert

