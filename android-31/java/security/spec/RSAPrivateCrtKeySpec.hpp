#pragma once

#include "../../math/BigInteger.def.hpp"
#include "./RSAPrivateCrtKeySpec.def.hpp"

namespace java::security::spec
{
	// Fields
	
	// Constructors
	inline RSAPrivateCrtKeySpec::RSAPrivateCrtKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3, java::math::BigInteger arg4, java::math::BigInteger arg5, java::math::BigInteger arg6, java::math::BigInteger arg7)
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
	inline RSAPrivateCrtKeySpec::RSAPrivateCrtKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3, java::math::BigInteger arg4, java::math::BigInteger arg5, java::math::BigInteger arg6, java::math::BigInteger arg7, JObject arg8)
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
	inline java::math::BigInteger RSAPrivateCrtKeySpec::getCrtCoefficient() const
	{
		return callObjectMethod(
			"getCrtCoefficient",
			"()Ljava/math/BigInteger;"
		);
	}
	inline java::math::BigInteger RSAPrivateCrtKeySpec::getPrimeExponentP() const
	{
		return callObjectMethod(
			"getPrimeExponentP",
			"()Ljava/math/BigInteger;"
		);
	}
	inline java::math::BigInteger RSAPrivateCrtKeySpec::getPrimeExponentQ() const
	{
		return callObjectMethod(
			"getPrimeExponentQ",
			"()Ljava/math/BigInteger;"
		);
	}
	inline java::math::BigInteger RSAPrivateCrtKeySpec::getPrimeP() const
	{
		return callObjectMethod(
			"getPrimeP",
			"()Ljava/math/BigInteger;"
		);
	}
	inline java::math::BigInteger RSAPrivateCrtKeySpec::getPrimeQ() const
	{
		return callObjectMethod(
			"getPrimeQ",
			"()Ljava/math/BigInteger;"
		);
	}
	inline java::math::BigInteger RSAPrivateCrtKeySpec::getPublicExponent() const
	{
		return callObjectMethod(
			"getPublicExponent",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec

// Base class headers
#include "./RSAPrivateKeySpec.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security::spec;
#endif
