#include "../../math/BigInteger.hpp"
#include "./RSAMultiPrimePrivateCrtKeySpec.hpp"

namespace java::security::spec
{
	// Fields
	
	// QAndroidJniObject forward
	RSAMultiPrimePrivateCrtKeySpec::RSAMultiPrimePrivateCrtKeySpec(QAndroidJniObject obj) : java::security::spec::RSAPrivateKeySpec(obj) {}
	
	// Constructors
	RSAMultiPrimePrivateCrtKeySpec::RSAMultiPrimePrivateCrtKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3, java::math::BigInteger arg4, java::math::BigInteger arg5, java::math::BigInteger arg6, java::math::BigInteger arg7, jarray arg8)
		: java::security::spec::RSAPrivateKeySpec(
			"java.security.spec.RSAMultiPrimePrivateCrtKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;[Ljava/security/spec/RSAOtherPrimeInfo;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object(),
			arg5.object(),
			arg6.object(),
			arg7.object(),
			arg8
		) {}
	RSAMultiPrimePrivateCrtKeySpec::RSAMultiPrimePrivateCrtKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3, java::math::BigInteger arg4, java::math::BigInteger arg5, java::math::BigInteger arg6, java::math::BigInteger arg7, jarray arg8, __JniBaseClass arg9)
		: java::security::spec::RSAPrivateKeySpec(
			"java.security.spec.RSAMultiPrimePrivateCrtKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;[Ljava/security/spec/RSAOtherPrimeInfo;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object(),
			arg5.object(),
			arg6.object(),
			arg7.object(),
			arg8,
			arg9.object()
		) {}
	
	// Methods
	QAndroidJniObject RSAMultiPrimePrivateCrtKeySpec::getCrtCoefficient()
	{
		return callObjectMethod(
			"getCrtCoefficient",
			"()Ljava/math/BigInteger;"
		);
	}
	jarray RSAMultiPrimePrivateCrtKeySpec::getOtherPrimeInfo()
	{
		return callObjectMethod(
			"getOtherPrimeInfo",
			"()[Ljava/security/spec/RSAOtherPrimeInfo;"
		).object<jarray>();
	}
	QAndroidJniObject RSAMultiPrimePrivateCrtKeySpec::getPrimeExponentP()
	{
		return callObjectMethod(
			"getPrimeExponentP",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject RSAMultiPrimePrivateCrtKeySpec::getPrimeExponentQ()
	{
		return callObjectMethod(
			"getPrimeExponentQ",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject RSAMultiPrimePrivateCrtKeySpec::getPrimeP()
	{
		return callObjectMethod(
			"getPrimeP",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject RSAMultiPrimePrivateCrtKeySpec::getPrimeQ()
	{
		return callObjectMethod(
			"getPrimeQ",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject RSAMultiPrimePrivateCrtKeySpec::getPublicExponent()
	{
		return callObjectMethod(
			"getPublicExponent",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec

