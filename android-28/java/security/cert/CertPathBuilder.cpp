#include "../../../JString.hpp"
#include "../Provider.hpp"
#include "./CertPathBuilderSpi.hpp"
#include "./CertPathBuilder.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	
	// Methods
	JString CertPathBuilder::getDefaultType()
	{
		return callStaticObjectMethod(
			"java.security.cert.CertPathBuilder",
			"getDefaultType",
			"()Ljava/lang/String;"
		);
	}
	java::security::cert::CertPathBuilder CertPathBuilder::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"java.security.cert.CertPathBuilder",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/cert/CertPathBuilder;",
			arg0.object<jstring>()
		);
	}
	java::security::cert::CertPathBuilder CertPathBuilder::getInstance(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.security.cert.CertPathBuilder",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/cert/CertPathBuilder;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	java::security::cert::CertPathBuilder CertPathBuilder::getInstance(JString arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"java.security.cert.CertPathBuilder",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/cert/CertPathBuilder;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JObject CertPathBuilder::build(JObject arg0) const
	{
		return callObjectMethod(
			"build",
			"(Ljava/security/cert/CertPathParameters;)Ljava/security/cert/CertPathBuilderResult;",
			arg0.object()
		);
	}
	JString CertPathBuilder::getAlgorithm() const
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	java::security::Provider CertPathBuilder::getProvider() const
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	JObject CertPathBuilder::getRevocationChecker() const
	{
		return callObjectMethod(
			"getRevocationChecker",
			"()Ljava/security/cert/CertPathChecker;"
		);
	}
} // namespace java::security::cert

