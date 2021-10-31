#include "../../math/BigInteger.hpp"
#include "./RSAPrivateCrtKeySpec.hpp"

namespace java::security::spec
{
	// Fields
	
	// QAndroidJniObject forward
	RSAPrivateCrtKeySpec::RSAPrivateCrtKeySpec(QAndroidJniObject obj) : java::security::spec::RSAPrivateKeySpec(obj) {}
	
	// Constructors
	RSAPrivateCrtKeySpec::RSAPrivateCrtKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3, java::math::BigInteger arg4, java::math::BigInteger arg5, java::math::BigInteger arg6, java::math::BigInteger arg7)
		: java::security::spec::RSAPrivateKeySpec(
			"java.security.spec.RSAPrivateCrtKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object(),
			arg5.object(),
			arg6.object(),
			arg7.object()
		) {}
	RSAPrivateCrtKeySpec::RSAPrivateCrtKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3, java::math::BigInteger arg4, java::math::BigInteger arg5, java::math::BigInteger arg6, java::math::BigInteger arg7, __JniBaseClass arg8)
		: java::security::spec::RSAPrivateKeySpec(
			"java.security.spec.RSAPrivateCrtKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object(),
			arg5.object(),
			arg6.object(),
			arg7.object(),
			arg8.object()
		) {}
	
	// Methods
	QAndroidJniObject RSAPrivateCrtKeySpec::getCrtCoefficient()
	{
		return callObjectMethod(
			"getCrtCoefficient",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject RSAPrivateCrtKeySpec::getPrimeExponentP()
	{
		return callObjectMethod(
			"getPrimeExponentP",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject RSAPrivateCrtKeySpec::getPrimeExponentQ()
	{
		return callObjectMethod(
			"getPrimeExponentQ",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject RSAPrivateCrtKeySpec::getPrimeP()
	{
		return callObjectMethod(
			"getPrimeP",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject RSAPrivateCrtKeySpec::getPrimeQ()
	{
		return callObjectMethod(
			"getPrimeQ",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject RSAPrivateCrtKeySpec::getPublicExponent()
	{
		return callObjectMethod(
			"getPublicExponent",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec

