#include "../../math/BigInteger.hpp"
#include "./RSAMultiPrimePrivateCrtKeySpec.hpp"

namespace java::security::spec
{
	// Fields
	
	RSAMultiPrimePrivateCrtKeySpec::RSAMultiPrimePrivateCrtKeySpec(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RSAMultiPrimePrivateCrtKeySpec::RSAMultiPrimePrivateCrtKeySpec(java::math::BigInteger &arg0, java::math::BigInteger &arg1, java::math::BigInteger &arg2, java::math::BigInteger &arg3, java::math::BigInteger &arg4, java::math::BigInteger &arg5, java::math::BigInteger &arg6, java::math::BigInteger &arg7, jarray &arg8)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.RSAMultiPrimePrivateCrtKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;[Ljava/security/spec/RSAOtherPrimeInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6.__jniObject().object(),
			arg7.__jniObject().object(),
			arg8
		);
	}
	RSAMultiPrimePrivateCrtKeySpec::RSAMultiPrimePrivateCrtKeySpec(java::math::BigInteger &arg0, java::math::BigInteger &arg1, java::math::BigInteger &arg2, java::math::BigInteger &arg3, java::math::BigInteger &arg4, java::math::BigInteger &arg5, java::math::BigInteger &arg6, java::math::BigInteger &arg7, jarray &arg8, __JniBaseClass &arg9)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.RSAMultiPrimePrivateCrtKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;[Ljava/security/spec/RSAOtherPrimeInfo;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6.__jniObject().object(),
			arg7.__jniObject().object(),
			arg8,
			arg9.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject RSAMultiPrimePrivateCrtKeySpec::getCrtCoefficient()
	{
		return __thiz.callObjectMethod(
			"getCrtCoefficient",
			"()Ljava/math/BigInteger;"
		);
	}
	jarray RSAMultiPrimePrivateCrtKeySpec::getOtherPrimeInfo()
	{
		return __thiz.callObjectMethod(
			"getOtherPrimeInfo",
			"()[Ljava/security/spec/RSAOtherPrimeInfo;"
		).object<jarray>();
	}
	QAndroidJniObject RSAMultiPrimePrivateCrtKeySpec::getPrimeExponentP()
	{
		return __thiz.callObjectMethod(
			"getPrimeExponentP",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject RSAMultiPrimePrivateCrtKeySpec::getPrimeExponentQ()
	{
		return __thiz.callObjectMethod(
			"getPrimeExponentQ",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject RSAMultiPrimePrivateCrtKeySpec::getPrimeP()
	{
		return __thiz.callObjectMethod(
			"getPrimeP",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject RSAMultiPrimePrivateCrtKeySpec::getPrimeQ()
	{
		return __thiz.callObjectMethod(
			"getPrimeQ",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject RSAMultiPrimePrivateCrtKeySpec::getPublicExponent()
	{
		return __thiz.callObjectMethod(
			"getPublicExponent",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec

