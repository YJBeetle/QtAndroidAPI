#pragma once

#include "../../math/BigInteger.def.hpp"
#include "./DSAPublicKeySpec.def.hpp"

namespace java::security::spec
{
	// Fields
	
	// Constructors
	inline DSAPublicKeySpec::DSAPublicKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3)
		: JObject(
			"java.security.spec.DSAPublicKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	inline java::math::BigInteger DSAPublicKeySpec::getG() const
	{
		return callObjectMethod(
			"getG",
			"()Ljava/math/BigInteger;"
		);
	}
	inline java::math::BigInteger DSAPublicKeySpec::getP() const
	{
		return callObjectMethod(
			"getP",
			"()Ljava/math/BigInteger;"
		);
	}
	inline java::math::BigInteger DSAPublicKeySpec::getQ() const
	{
		return callObjectMethod(
			"getQ",
			"()Ljava/math/BigInteger;"
		);
	}
	inline java::math::BigInteger DSAPublicKeySpec::getY() const
	{
		return callObjectMethod(
			"getY",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec

// Base class headers

