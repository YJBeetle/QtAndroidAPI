#include "../../../JArray.hpp"
#include "../../math/BigInteger.hpp"
#include "./RSAMultiPrimePrivateCrtKeySpec.hpp"

namespace java::security::spec
{
	// Fields
	
	// QJniObject forward
	RSAMultiPrimePrivateCrtKeySpec::RSAMultiPrimePrivateCrtKeySpec(QJniObject obj) : java::security::spec::RSAPrivateKeySpec(obj) {}
	
	// Constructors
	RSAMultiPrimePrivateCrtKeySpec::RSAMultiPrimePrivateCrtKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3, java::math::BigInteger arg4, java::math::BigInteger arg5, java::math::BigInteger arg6, java::math::BigInteger arg7, JArray arg8)
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
			arg8.object<jarray>()
		) {}
	RSAMultiPrimePrivateCrtKeySpec::RSAMultiPrimePrivateCrtKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3, java::math::BigInteger arg4, java::math::BigInteger arg5, java::math::BigInteger arg6, java::math::BigInteger arg7, JArray arg8, JObject arg9)
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
			arg8.object<jarray>(),
			arg9.object()
		) {}
	
	// Methods
	java::math::BigInteger RSAMultiPrimePrivateCrtKeySpec::getCrtCoefficient() const
	{
		return callObjectMethod(
			"getCrtCoefficient",
			"()Ljava/math/BigInteger;"
		);
	}
	JArray RSAMultiPrimePrivateCrtKeySpec::getOtherPrimeInfo() const
	{
		return callObjectMethod(
			"getOtherPrimeInfo",
			"()[Ljava/security/spec/RSAOtherPrimeInfo;"
		);
	}
	java::math::BigInteger RSAMultiPrimePrivateCrtKeySpec::getPrimeExponentP() const
	{
		return callObjectMethod(
			"getPrimeExponentP",
			"()Ljava/math/BigInteger;"
		);
	}
	java::math::BigInteger RSAMultiPrimePrivateCrtKeySpec::getPrimeExponentQ() const
	{
		return callObjectMethod(
			"getPrimeExponentQ",
			"()Ljava/math/BigInteger;"
		);
	}
	java::math::BigInteger RSAMultiPrimePrivateCrtKeySpec::getPrimeP() const
	{
		return callObjectMethod(
			"getPrimeP",
			"()Ljava/math/BigInteger;"
		);
	}
	java::math::BigInteger RSAMultiPrimePrivateCrtKeySpec::getPrimeQ() const
	{
		return callObjectMethod(
			"getPrimeQ",
			"()Ljava/math/BigInteger;"
		);
	}
	java::math::BigInteger RSAMultiPrimePrivateCrtKeySpec::getPublicExponent() const
	{
		return callObjectMethod(
			"getPublicExponent",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec

