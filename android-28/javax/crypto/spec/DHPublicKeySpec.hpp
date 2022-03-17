#pragma once

#include "../../../java/math/BigInteger.def.hpp"
#include "./DHPublicKeySpec.def.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	// Constructors
	inline DHPublicKeySpec::DHPublicKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2)
		: JObject(
			"javax.crypto.spec.DHPublicKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	inline java::math::BigInteger DHPublicKeySpec::getG() const
	{
		return callObjectMethod(
			"getG",
			"()Ljava/math/BigInteger;"
		);
	}
	inline java::math::BigInteger DHPublicKeySpec::getP() const
	{
		return callObjectMethod(
			"getP",
			"()Ljava/math/BigInteger;"
		);
	}
	inline java::math::BigInteger DHPublicKeySpec::getY() const
	{
		return callObjectMethod(
			"getY",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace javax::crypto::spec

// Base class headers

