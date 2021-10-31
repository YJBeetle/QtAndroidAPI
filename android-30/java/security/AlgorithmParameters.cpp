#include "./AlgorithmParametersSpi.hpp"
#include "./Provider.hpp"
#include "./AlgorithmParameters.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	AlgorithmParameters::AlgorithmParameters(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	java::security::AlgorithmParameters AlgorithmParameters::getInstance(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.security.AlgorithmParameters",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/AlgorithmParameters;",
			arg0
		);
	}
	java::security::AlgorithmParameters AlgorithmParameters::getInstance(jstring arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"java.security.AlgorithmParameters",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/AlgorithmParameters;",
			arg0,
			arg1
		);
	}
	java::security::AlgorithmParameters AlgorithmParameters::getInstance(jstring arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"java.security.AlgorithmParameters",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/AlgorithmParameters;",
			arg0,
			arg1.object()
		);
	}
	jstring AlgorithmParameters::getAlgorithm()
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray AlgorithmParameters::getEncoded()
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray AlgorithmParameters::getEncoded(jstring arg0)
	{
		return callObjectMethod(
			"getEncoded",
			"(Ljava/lang/String;)[B",
			arg0
		).object<jbyteArray>();
	}
	__JniBaseClass AlgorithmParameters::getParameterSpec(jclass arg0)
	{
		return callObjectMethod(
			"getParameterSpec",
			"(Ljava/lang/Class;)Ljava/security/spec/AlgorithmParameterSpec;",
			arg0
		);
	}
	java::security::Provider AlgorithmParameters::getProvider()
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	void AlgorithmParameters::init(jbyteArray arg0)
	{
		callMethod<void>(
			"init",
			"([B)V",
			arg0
		);
	}
	void AlgorithmParameters::init(__JniBaseClass arg0)
	{
		callMethod<void>(
			"init",
			"(Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.object()
		);
	}
	void AlgorithmParameters::init(jbyteArray arg0, jstring arg1)
	{
		callMethod<void>(
			"init",
			"([BLjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	jstring AlgorithmParameters::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security

