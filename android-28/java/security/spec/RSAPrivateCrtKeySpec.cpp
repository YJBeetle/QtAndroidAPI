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
	RSAPrivateCrtKeySpec::RSAPrivateCrtKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3, java::math::BigInteger arg4, java::math::BigInteger arg5, java::math::BigInteger arg6, java::math::BigInteger arg7, JObject arg8)
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
	java::math::BigInteger RSAPrivateCrtKeySpec::getCrtCoefficient() const
	{
		return callObjectMethod(
			"getCrtCoefficient",
			"()Ljava/math/BigInteger;"
		);
	}
	java::math::BigInteger RSAPrivateCrtKeySpec::getPrimeExponentP() const
	{
		return callObjectMethod(
			"getPrimeExponentP",
			"()Ljava/math/BigInteger;"
		);
	}
	java::math::BigInteger RSAPrivateCrtKeySpec::getPrimeExponentQ() const
	{
		return callObjectMethod(
			"getPrimeExponentQ",
			"()Ljava/math/BigInteger;"
		);
	}
	java::math::BigInteger RSAPrivateCrtKeySpec::getPrimeP() const
	{
		return callObjectMethod(
			"getPrimeP",
			"()Ljava/math/BigInteger;"
		);
	}
	java::math::BigInteger RSAPrivateCrtKeySpec::getPrimeQ() const
	{
		return callObjectMethod(
			"getPrimeQ",
			"()Ljava/math/BigInteger;"
		);
	}
	java::math::BigInteger RSAPrivateCrtKeySpec::getPublicExponent() const
	{
		return callObjectMethod(
			"getPublicExponent",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec

