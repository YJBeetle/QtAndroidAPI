#include "./AlgorithmParametersSpi.hpp"
#include "./Provider.hpp"
#include "./AlgorithmParameters.hpp"

namespace java::security
{
	// Fields
	
	AlgorithmParameters::AlgorithmParameters(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject AlgorithmParameters::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.AlgorithmParameters",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/AlgorithmParameters;",
			arg0
		);
	}
	QAndroidJniObject AlgorithmParameters::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.AlgorithmParameters",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/AlgorithmParameters;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject AlgorithmParameters::getInstance(jstring arg0, java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.AlgorithmParameters",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/AlgorithmParameters;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jstring AlgorithmParameters::getAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray AlgorithmParameters::getEncoded()
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray AlgorithmParameters::getEncoded(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"(Ljava/lang/String;)[B",
			arg0
		).object<jbyteArray>();
	}
	QAndroidJniObject AlgorithmParameters::getParameterSpec(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getParameterSpec",
			"(Ljava/lang/Class;)Ljava/security/spec/AlgorithmParameterSpec;",
			arg0
		);
	}
	QAndroidJniObject AlgorithmParameters::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	void AlgorithmParameters::init(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"init",
			"([B)V",
			arg0
		);
	}
	void AlgorithmParameters::init(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"init",
			"(Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.__jniObject().object()
		);
	}
	void AlgorithmParameters::init(jbyteArray arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"init",
			"([BLjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	jstring AlgorithmParameters::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security

