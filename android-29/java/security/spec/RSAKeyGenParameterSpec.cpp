#include "../../math/BigInteger.hpp"
#include "./RSAKeyGenParameterSpec.hpp"

namespace java::security::spec
{
	// Fields
	java::math::BigInteger RSAKeyGenParameterSpec::F0()
	{
		return getStaticObjectField(
			"java.security.spec.RSAKeyGenParameterSpec",
			"F0",
			"Ljava/math/BigInteger;"
		);
	}
	java::math::BigInteger RSAKeyGenParameterSpec::F4()
	{
		return getStaticObjectField(
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
	__JniBaseClass RSAKeyGenParameterSpec::getKeyParams()
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
	java::math::BigInteger RSAKeyGenParameterSpec::getPublicExponent()
	{
		return callObjectMethod(
			"getPublicExponent",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec

