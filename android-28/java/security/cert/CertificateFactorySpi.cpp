#include "../../io/InputStream.hpp"
#include "../../../JString.hpp"
#include "./CRL.hpp"
#include "./CertPath.hpp"
#include "./Certificate.hpp"
#include "./CertificateFactorySpi.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	CertificateFactorySpi::CertificateFactorySpi()
		: JObject(
			"java.security.cert.CertificateFactorySpi",
			"()V"
		) {}
	
	// Methods
	java::security::cert::CRL CertificateFactorySpi::engineGenerateCRL(java::io::InputStream arg0) const
	{
		return callObjectMethod(
			"engineGenerateCRL",
			"(Ljava/io/InputStream;)Ljava/security/cert/CRL;",
			arg0.object()
		);
	}
	JObject CertificateFactorySpi::engineGenerateCRLs(java::io::InputStream arg0) const
	{
		return callObjectMethod(
			"engineGenerateCRLs",
			"(Ljava/io/InputStream;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	java::security::cert::CertPath CertificateFactorySpi::engineGenerateCertPath(java::io::InputStream arg0) const
	{
		return callObjectMethod(
			"engineGenerateCertPath",
			"(Ljava/io/InputStream;)Ljava/security/cert/CertPath;",
			arg0.object()
		);
	}
	java::security::cert::CertPath CertificateFactorySpi::engineGenerateCertPath(JObject arg0) const
	{
		return callObjectMethod(
			"engineGenerateCertPath",
			"(Ljava/util/List;)Ljava/security/cert/CertPath;",
			arg0.object()
		);
	}
	java::security::cert::CertPath CertificateFactorySpi::engineGenerateCertPath(java::io::InputStream arg0, JString arg1) const
	{
		return callObjectMethod(
			"engineGenerateCertPath",
			"(Ljava/io/InputStream;Ljava/lang/String;)Ljava/security/cert/CertPath;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	java::security::cert::Certificate CertificateFactorySpi::engineGenerateCertificate(java::io::InputStream arg0) const
	{
		return callObjectMethod(
			"engineGenerateCertificate",
			"(Ljava/io/InputStream;)Ljava/security/cert/Certificate;",
			arg0.object()
		);
	}
	JObject CertificateFactorySpi::engineGenerateCertificates(java::io::InputStream arg0) const
	{
		return callObjectMethod(
			"engineGenerateCertificates",
			"(Ljava/io/InputStream;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	JObject CertificateFactorySpi::engineGetCertPathEncodings() const
	{
		return callObjectMethod(
			"engineGetCertPathEncodings",
			"()Ljava/util/Iterator;"
		);
	}
} // namespace java::security::cert

