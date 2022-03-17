#pragma once

#include "../../../JString.hpp"
#include "../Provider.def.hpp"
#include "./CertPath.def.hpp"
#include "./CertPathValidatorSpi.def.hpp"
#include "./CertPathValidator.def.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString CertPathValidator::getDefaultType()
	{
		return callStaticObjectMethod(
			"java.security.cert.CertPathValidator",
			"getDefaultType",
			"()Ljava/lang/String;"
		);
	}
	inline java::security::cert::CertPathValidator CertPathValidator::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"java.security.cert.CertPathValidator",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/cert/CertPathValidator;",
			arg0.object<jstring>()
		);
	}
	inline java::security::cert::CertPathValidator CertPathValidator::getInstance(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.security.cert.CertPathValidator",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/cert/CertPathValidator;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline java::security::cert::CertPathValidator CertPathValidator::getInstance(JString arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"java.security.cert.CertPathValidator",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/cert/CertPathValidator;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JString CertPathValidator::getAlgorithm() const
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	inline java::security::Provider CertPathValidator::getProvider() const
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	inline JObject CertPathValidator::getRevocationChecker() const
	{
		return callObjectMethod(
			"getRevocationChecker",
			"()Ljava/security/cert/CertPathChecker;"
		);
	}
	inline JObject CertPathValidator::validate(java::security::cert::CertPath arg0, JObject arg1) const
	{
		return callObjectMethod(
			"validate",
			"(Ljava/security/cert/CertPath;Ljava/security/cert/CertPathParameters;)Ljava/security/cert/CertPathValidatorResult;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::security::cert

// Base class headers

