#include "../Provider.hpp"
#include "./CertPath.hpp"
#include "./CertPathValidatorSpi.hpp"
#include "./CertPathValidator.hpp"

namespace java::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	CertPathValidator::CertPathValidator(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jstring CertPathValidator::getDefaultType()
	{
		return callStaticObjectMethod(
			"java.security.cert.CertPathValidator",
			"getDefaultType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::security::cert::CertPathValidator CertPathValidator::getInstance(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.security.cert.CertPathValidator",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/cert/CertPathValidator;",
			arg0
		);
	}
	java::security::cert::CertPathValidator CertPathValidator::getInstance(jstring arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"java.security.cert.CertPathValidator",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/cert/CertPathValidator;",
			arg0,
			arg1
		);
	}
	java::security::cert::CertPathValidator CertPathValidator::getInstance(jstring arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"java.security.cert.CertPathValidator",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/cert/CertPathValidator;",
			arg0,
			arg1.object()
		);
	}
	jstring CertPathValidator::getAlgorithm()
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::security::Provider CertPathValidator::getProvider()
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	JObject CertPathValidator::getRevocationChecker()
	{
		return callObjectMethod(
			"getRevocationChecker",
			"()Ljava/security/cert/CertPathChecker;"
		);
	}
	JObject CertPathValidator::validate(java::security::cert::CertPath arg0, JObject arg1)
	{
		return callObjectMethod(
			"validate",
			"(Ljava/security/cert/CertPath;Ljava/security/cert/CertPathParameters;)Ljava/security/cert/CertPathValidatorResult;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::security::cert

