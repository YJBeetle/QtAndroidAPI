#pragma once

#include "../../../JString.hpp"
#include "../Provider.def.hpp"
#include "./CertPathBuilderSpi.def.hpp"
#include "./CertPathBuilder.def.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString CertPathBuilder::getDefaultType()
	{
		return callStaticObjectMethod(
			"java.security.cert.CertPathBuilder",
			"getDefaultType",
			"()Ljava/lang/String;"
		);
	}
	inline java::security::cert::CertPathBuilder CertPathBuilder::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"java.security.cert.CertPathBuilder",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/cert/CertPathBuilder;",
			arg0.object<jstring>()
		);
	}
	inline java::security::cert::CertPathBuilder CertPathBuilder::getInstance(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.security.cert.CertPathBuilder",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/cert/CertPathBuilder;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline java::security::cert::CertPathBuilder CertPathBuilder::getInstance(JString arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"java.security.cert.CertPathBuilder",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/cert/CertPathBuilder;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JObject CertPathBuilder::build(JObject arg0) const
	{
		return callObjectMethod(
			"build",
			"(Ljava/security/cert/CertPathParameters;)Ljava/security/cert/CertPathBuilderResult;",
			arg0.object()
		);
	}
	inline JString CertPathBuilder::getAlgorithm() const
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	inline java::security::Provider CertPathBuilder::getProvider() const
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	inline JObject CertPathBuilder::getRevocationChecker() const
	{
		return callObjectMethod(
			"getRevocationChecker",
			"()Ljava/security/cert/CertPathChecker;"
		);
	}
} // namespace java::security::cert

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security::cert;
#endif
