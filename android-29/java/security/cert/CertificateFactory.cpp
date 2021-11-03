#include "../../io/InputStream.hpp"
#include "../Provider.hpp"
#include "./CRL.hpp"
#include "./CertPath.hpp"
#include "./Certificate.hpp"
#include "./CertificateFactorySpi.hpp"
#include "./CertificateFactory.hpp"

namespace java::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	CertificateFactory::CertificateFactory(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::security::cert::CertificateFactory CertificateFactory::getInstance(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.security.cert.CertificateFactory",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/cert/CertificateFactory;",
			arg0
		);
	}
	java::security::cert::CertificateFactory CertificateFactory::getInstance(jstring arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"java.security.cert.CertificateFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/cert/CertificateFactory;",
			arg0,
			arg1
		);
	}
	java::security::cert::CertificateFactory CertificateFactory::getInstance(jstring arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"java.security.cert.CertificateFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/cert/CertificateFactory;",
			arg0,
			arg1.object()
		);
	}
	java::security::cert::CRL CertificateFactory::generateCRL(java::io::InputStream arg0)
	{
		return callObjectMethod(
			"generateCRL",
			"(Ljava/io/InputStream;)Ljava/security/cert/CRL;",
			arg0.object()
		);
	}
	JObject CertificateFactory::generateCRLs(java::io::InputStream arg0)
	{
		return callObjectMethod(
			"generateCRLs",
			"(Ljava/io/InputStream;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	java::security::cert::CertPath CertificateFactory::generateCertPath(java::io::InputStream arg0)
	{
		return callObjectMethod(
			"generateCertPath",
			"(Ljava/io/InputStream;)Ljava/security/cert/CertPath;",
			arg0.object()
		);
	}
	java::security::cert::CertPath CertificateFactory::generateCertPath(JObject arg0)
	{
		return callObjectMethod(
			"generateCertPath",
			"(Ljava/util/List;)Ljava/security/cert/CertPath;",
			arg0.object()
		);
	}
	java::security::cert::CertPath CertificateFactory::generateCertPath(java::io::InputStream arg0, jstring arg1)
	{
		return callObjectMethod(
			"generateCertPath",
			"(Ljava/io/InputStream;Ljava/lang/String;)Ljava/security/cert/CertPath;",
			arg0.object(),
			arg1
		);
	}
	java::security::cert::Certificate CertificateFactory::generateCertificate(java::io::InputStream arg0)
	{
		return callObjectMethod(
			"generateCertificate",
			"(Ljava/io/InputStream;)Ljava/security/cert/Certificate;",
			arg0.object()
		);
	}
	JObject CertificateFactory::generateCertificates(java::io::InputStream arg0)
	{
		return callObjectMethod(
			"generateCertificates",
			"(Ljava/io/InputStream;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	JObject CertificateFactory::getCertPathEncodings()
	{
		return callObjectMethod(
			"getCertPathEncodings",
			"()Ljava/util/Iterator;"
		);
	}
	java::security::Provider CertificateFactory::getProvider()
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	jstring CertificateFactory::getType()
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security::cert

