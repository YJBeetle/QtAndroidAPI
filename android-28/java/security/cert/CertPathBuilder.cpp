#include "../Provider.hpp"
#include "./CertPathBuilderSpi.hpp"
#include "./CertPathBuilder.hpp"

namespace java::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	CertPathBuilder::CertPathBuilder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jstring CertPathBuilder::getDefaultType()
	{
		return callStaticObjectMethod(
			"java.security.cert.CertPathBuilder",
			"getDefaultType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::security::cert::CertPathBuilder CertPathBuilder::getInstance(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.security.cert.CertPathBuilder",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/cert/CertPathBuilder;",
			arg0
		);
	}
	java::security::cert::CertPathBuilder CertPathBuilder::getInstance(jstring arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"java.security.cert.CertPathBuilder",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/cert/CertPathBuilder;",
			arg0,
			arg1
		);
	}
	java::security::cert::CertPathBuilder CertPathBuilder::getInstance(jstring arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"java.security.cert.CertPathBuilder",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/cert/CertPathBuilder;",
			arg0,
			arg1.object()
		);
	}
	JObject CertPathBuilder::build(JObject arg0)
	{
		return callObjectMethod(
			"build",
			"(Ljava/security/cert/CertPathParameters;)Ljava/security/cert/CertPathBuilderResult;",
			arg0.object()
		);
	}
	jstring CertPathBuilder::getAlgorithm()
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::security::Provider CertPathBuilder::getProvider()
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	JObject CertPathBuilder::getRevocationChecker()
	{
		return callObjectMethod(
			"getRevocationChecker",
			"()Ljava/security/cert/CertPathChecker;"
		);
	}
} // namespace java::security::cert

