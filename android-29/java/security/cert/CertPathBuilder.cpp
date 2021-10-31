#include "../Provider.hpp"
#include "./CertPathBuilderSpi.hpp"
#include "./CertPathBuilder.hpp"

namespace java::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	CertPathBuilder::CertPathBuilder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring CertPathBuilder::getDefaultType()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CertPathBuilder",
			"getDefaultType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject CertPathBuilder::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CertPathBuilder",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/cert/CertPathBuilder;",
			arg0
		);
	}
	QAndroidJniObject CertPathBuilder::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CertPathBuilder",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/cert/CertPathBuilder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject CertPathBuilder::getInstance(jstring arg0, java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CertPathBuilder",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/cert/CertPathBuilder;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject CertPathBuilder::build(__JniBaseClass arg0)
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
	QAndroidJniObject CertPathBuilder::getProvider()
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	QAndroidJniObject CertPathBuilder::getRevocationChecker()
	{
		return callObjectMethod(
			"getRevocationChecker",
			"()Ljava/security/cert/CertPathChecker;"
		);
	}
} // namespace java::security::cert

