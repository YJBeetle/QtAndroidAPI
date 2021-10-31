#include "../Provider.hpp"
#include "./CertPath.hpp"
#include "./CertPathValidatorSpi.hpp"
#include "./CertPathValidator.hpp"

namespace java::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	CertPathValidator::CertPathValidator(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring CertPathValidator::getDefaultType()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CertPathValidator",
			"getDefaultType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject CertPathValidator::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CertPathValidator",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/cert/CertPathValidator;",
			arg0
		);
	}
	QAndroidJniObject CertPathValidator::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CertPathValidator",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/cert/CertPathValidator;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject CertPathValidator::getInstance(jstring arg0, java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
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
	QAndroidJniObject CertPathValidator::getProvider()
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	QAndroidJniObject CertPathValidator::getRevocationChecker()
	{
		return callObjectMethod(
			"getRevocationChecker",
			"()Ljava/security/cert/CertPathChecker;"
		);
	}
	QAndroidJniObject CertPathValidator::validate(java::security::cert::CertPath arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"validate",
			"(Ljava/security/cert/CertPath;Ljava/security/cert/CertPathParameters;)Ljava/security/cert/CertPathValidatorResult;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::security::cert

