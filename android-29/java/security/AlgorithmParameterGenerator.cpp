#include "./AlgorithmParameterGeneratorSpi.hpp"
#include "./AlgorithmParameters.hpp"
#include "./Provider.hpp"
#include "./SecureRandom.hpp"
#include "./AlgorithmParameterGenerator.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	AlgorithmParameterGenerator::AlgorithmParameterGenerator(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	java::security::AlgorithmParameterGenerator AlgorithmParameterGenerator::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.AlgorithmParameterGenerator",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/AlgorithmParameterGenerator;",
			arg0
		);
	}
	java::security::AlgorithmParameterGenerator AlgorithmParameterGenerator::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.AlgorithmParameterGenerator",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/AlgorithmParameterGenerator;",
			arg0,
			arg1
		);
	}
	java::security::AlgorithmParameterGenerator AlgorithmParameterGenerator::getInstance(jstring arg0, java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.AlgorithmParameterGenerator",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/AlgorithmParameterGenerator;",
			arg0,
			arg1.object()
		);
	}
	java::security::AlgorithmParameters AlgorithmParameterGenerator::generateParameters()
	{
		return callObjectMethod(
			"generateParameters",
			"()Ljava/security/AlgorithmParameters;"
		);
	}
	jstring AlgorithmParameterGenerator::getAlgorithm()
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::security::Provider AlgorithmParameterGenerator::getProvider()
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	void AlgorithmParameterGenerator::init(jint arg0)
	{
		callMethod<void>(
			"init",
			"(I)V",
			arg0
		);
	}
	void AlgorithmParameterGenerator::init(__JniBaseClass arg0)
	{
		callMethod<void>(
			"init",
			"(Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.object()
		);
	}
	void AlgorithmParameterGenerator::init(jint arg0, java::security::SecureRandom arg1)
	{
		callMethod<void>(
			"init",
			"(ILjava/security/SecureRandom;)V",
			arg0,
			arg1.object()
		);
	}
	void AlgorithmParameterGenerator::init(__JniBaseClass arg0, java::security::SecureRandom arg1)
	{
		callMethod<void>(
			"init",
			"(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::security

