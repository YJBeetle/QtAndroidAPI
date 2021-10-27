#include "../../math/BigInteger.hpp"
#include "./RSAPublicKeySpec.hpp"

namespace java::security::spec
{
	// Fields
	
	RSAPublicKeySpec::RSAPublicKeySpec(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RSAPublicKeySpec::RSAPublicKeySpec(java::math::BigInteger &arg0, java::math::BigInteger &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.RSAPublicKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	RSAPublicKeySpec::RSAPublicKeySpec(java::math::BigInteger &arg0, java::math::BigInteger &arg1, __JniBaseClass &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.RSAPublicKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject RSAPublicKeySpec::getModulus()
	{
		return __thiz.callObjectMethod(
			"getModulus",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject RSAPublicKeySpec::getParams()
	{
		return __thiz.callObjectMethod(
			"getParams",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	QAndroidJniObject RSAPublicKeySpec::getPublicExponent()
	{
		return __thiz.callObjectMethod(
			"getPublicExponent",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec

