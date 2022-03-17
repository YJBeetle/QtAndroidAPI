#pragma once

#include "../../io/InputStream.def.hpp"
#include "../../../JString.hpp"
#include "../Provider.def.hpp"
#include "./CRL.def.hpp"
#include "./CertPath.def.hpp"
#include "./Certificate.def.hpp"
#include "./CertificateFactorySpi.def.hpp"
#include "./CertificateFactory.def.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::security::cert::CertificateFactory CertificateFactory::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"java.security.cert.CertificateFactory",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/cert/CertificateFactory;",
			arg0.object<jstring>()
		);
	}
	inline java::security::cert::CertificateFactory CertificateFactory::getInstance(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.security.cert.CertificateFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/cert/CertificateFactory;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline java::security::cert::CertificateFactory CertificateFactory::getInstance(JString arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"java.security.cert.CertificateFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/cert/CertificateFactory;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline java::security::cert::CRL CertificateFactory::generateCRL(java::io::InputStream arg0) const
	{
		return callObjectMethod(
			"generateCRL",
			"(Ljava/io/InputStream;)Ljava/security/cert/CRL;",
			arg0.object()
		);
	}
	inline JObject CertificateFactory::generateCRLs(java::io::InputStream arg0) const
	{
		return callObjectMethod(
			"generateCRLs",
			"(Ljava/io/InputStream;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	inline java::security::cert::CertPath CertificateFactory::generateCertPath(java::io::InputStream arg0) const
	{
		return callObjectMethod(
			"generateCertPath",
			"(Ljava/io/InputStream;)Ljava/security/cert/CertPath;",
			arg0.object()
		);
	}
	inline java::security::cert::CertPath CertificateFactory::generateCertPath(JObject arg0) const
	{
		return callObjectMethod(
			"generateCertPath",
			"(Ljava/util/List;)Ljava/security/cert/CertPath;",
			arg0.object()
		);
	}
	inline java::security::cert::CertPath CertificateFactory::generateCertPath(java::io::InputStream arg0, JString arg1) const
	{
		return callObjectMethod(
			"generateCertPath",
			"(Ljava/io/InputStream;Ljava/lang/String;)Ljava/security/cert/CertPath;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline java::security::cert::Certificate CertificateFactory::generateCertificate(java::io::InputStream arg0) const
	{
		return callObjectMethod(
			"generateCertificate",
			"(Ljava/io/InputStream;)Ljava/security/cert/Certificate;",
			arg0.object()
		);
	}
	inline JObject CertificateFactory::generateCertificates(java::io::InputStream arg0) const
	{
		return callObjectMethod(
			"generateCertificates",
			"(Ljava/io/InputStream;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	inline JObject CertificateFactory::getCertPathEncodings() const
	{
		return callObjectMethod(
			"getCertPathEncodings",
			"()Ljava/util/Iterator;"
		);
	}
	inline java::security::Provider CertificateFactory::getProvider() const
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	inline JString CertificateFactory::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::cert

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security::cert;
#endif
