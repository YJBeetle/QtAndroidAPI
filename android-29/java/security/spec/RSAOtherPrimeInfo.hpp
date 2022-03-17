#pragma once

#include "../../math/BigInteger.def.hpp"
#include "./RSAOtherPrimeInfo.def.hpp"

namespace java::security::spec
{
	// Fields
	
	// Constructors
	inline RSAOtherPrimeInfo::RSAOtherPrimeInfo(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2)
		: JObject(
			"java.security.spec.RSAOtherPrimeInfo",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	inline java::math::BigInteger RSAOtherPrimeInfo::getCrtCoefficient() const
	{
		return callObjectMethod(
			"getCrtCoefficient",
			"()Ljava/math/BigInteger;"
		);
	}
	inline java::math::BigInteger RSAOtherPrimeInfo::getExponent() const
	{
		return callObjectMethod(
			"getExponent",
			"()Ljava/math/BigInteger;"
		);
	}
	inline java::math::BigInteger RSAOtherPrimeInfo::getPrime() const
	{
		return callObjectMethod(
			"getPrime",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec

// Base class headers

