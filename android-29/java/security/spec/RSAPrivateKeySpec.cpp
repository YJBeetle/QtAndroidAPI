#include "../../math/BigInteger.hpp"
#include "./RSAPrivateKeySpec.hpp"

namespace java::security::spec
{
	// Fields
	
	// QAndroidJniObject forward
	RSAPrivateKeySpec::RSAPrivateKeySpec(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	RSAPrivateKeySpec::RSAPrivateKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1)
		: __JniBaseClass(
			"java.security.spec.RSAPrivateKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.object(),
			arg1.object()
		) {}
	RSAPrivateKeySpec::RSAPrivateKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, __JniBaseClass arg2)
		: __JniBaseClass(
			"java.security.spec.RSAPrivateKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	QAndroidJniObject RSAPrivateKeySpec::getModulus()
	{
		return callObjectMethod(
			"getModulus",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject RSAPrivateKeySpec::getParams()
	{
		return callObjectMethod(
			"getParams",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	QAndroidJniObject RSAPrivateKeySpec::getPrivateExponent()
	{
		return callObjectMethod(
			"getPrivateExponent",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec

