#include "../../math/BigInteger.hpp"
#include "./RSAPrivateKeySpec.hpp"

namespace java::security::spec
{
	// Fields
	
	RSAPrivateKeySpec::RSAPrivateKeySpec(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RSAPrivateKeySpec::RSAPrivateKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.RSAPrivateKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	RSAPrivateKeySpec::RSAPrivateKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, __JniBaseClass arg2)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.RSAPrivateKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject RSAPrivateKeySpec::getModulus()
	{
		return __thiz.callObjectMethod(
			"getModulus",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject RSAPrivateKeySpec::getParams()
	{
		return __thiz.callObjectMethod(
			"getParams",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	QAndroidJniObject RSAPrivateKeySpec::getPrivateExponent()
	{
		return __thiz.callObjectMethod(
			"getPrivateExponent",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec

