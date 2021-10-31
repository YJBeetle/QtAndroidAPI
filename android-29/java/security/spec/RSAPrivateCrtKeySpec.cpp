#include "../../math/BigInteger.hpp"
#include "./RSAPrivateCrtKeySpec.hpp"

namespace java::security::spec
{
	// Fields
	
	RSAPrivateCrtKeySpec::RSAPrivateCrtKeySpec(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RSAPrivateCrtKeySpec::RSAPrivateCrtKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3, java::math::BigInteger arg4, java::math::BigInteger arg5, java::math::BigInteger arg6, java::math::BigInteger arg7)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.RSAPrivateCrtKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6.__jniObject().object(),
			arg7.__jniObject().object()
		);
	}
	RSAPrivateCrtKeySpec::RSAPrivateCrtKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3, java::math::BigInteger arg4, java::math::BigInteger arg5, java::math::BigInteger arg6, java::math::BigInteger arg7, __JniBaseClass arg8)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.RSAPrivateCrtKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6.__jniObject().object(),
			arg7.__jniObject().object(),
			arg8.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject RSAPrivateCrtKeySpec::getCrtCoefficient()
	{
		return __thiz.callObjectMethod(
			"getCrtCoefficient",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject RSAPrivateCrtKeySpec::getPrimeExponentP()
	{
		return __thiz.callObjectMethod(
			"getPrimeExponentP",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject RSAPrivateCrtKeySpec::getPrimeExponentQ()
	{
		return __thiz.callObjectMethod(
			"getPrimeExponentQ",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject RSAPrivateCrtKeySpec::getPrimeP()
	{
		return __thiz.callObjectMethod(
			"getPrimeP",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject RSAPrivateCrtKeySpec::getPrimeQ()
	{
		return __thiz.callObjectMethod(
			"getPrimeQ",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject RSAPrivateCrtKeySpec::getPublicExponent()
	{
		return __thiz.callObjectMethod(
			"getPublicExponent",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec

