#include "../../math/BigInteger.hpp"
#include "./RSAKeyGenParameterSpec.hpp"

namespace java::security::spec
{
	// Fields
	QAndroidJniObject RSAKeyGenParameterSpec::F0()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.spec.RSAKeyGenParameterSpec",
			"F0",
			"Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject RSAKeyGenParameterSpec::F4()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.spec.RSAKeyGenParameterSpec",
			"F4",
			"Ljava/math/BigInteger;"
		);
	}
	
	// QAndroidJniObject forward
	RSAKeyGenParameterSpec::RSAKeyGenParameterSpec(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	RSAKeyGenParameterSpec::RSAKeyGenParameterSpec(jint arg0, java::math::BigInteger arg1)
		: __JniBaseClass(
			"java.security.spec.RSAKeyGenParameterSpec",
			"(ILjava/math/BigInteger;)V",
			arg0,
			arg1.object()
		) {}
	RSAKeyGenParameterSpec::RSAKeyGenParameterSpec(jint arg0, java::math::BigInteger arg1, __JniBaseClass arg2)
		: __JniBaseClass(
			"java.security.spec.RSAKeyGenParameterSpec",
			"(ILjava/math/BigInteger;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0,
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	QAndroidJniObject RSAKeyGenParameterSpec::getKeyParams()
	{
		return callObjectMethod(
			"getKeyParams",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	jint RSAKeyGenParameterSpec::getKeysize()
	{
		return callMethod<jint>(
			"getKeysize",
			"()I"
		);
	}
	QAndroidJniObject RSAKeyGenParameterSpec::getPublicExponent()
	{
		return callObjectMethod(
			"getPublicExponent",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec

