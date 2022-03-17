#pragma once

#include "../../../java/math/BigInteger.def.hpp"
#include "./DHParameterSpec.def.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	// Constructors
	inline DHParameterSpec::DHParameterSpec(java::math::BigInteger arg0, java::math::BigInteger arg1)
		: JObject(
			"javax.crypto.spec.DHParameterSpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline DHParameterSpec::DHParameterSpec(java::math::BigInteger arg0, java::math::BigInteger arg1, jint arg2)
		: JObject(
			"javax.crypto.spec.DHParameterSpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	inline java::math::BigInteger DHParameterSpec::getG() const
	{
		return callObjectMethod(
			"getG",
			"()Ljava/math/BigInteger;"
		);
	}
	inline jint DHParameterSpec::getL() const
	{
		return callMethod<jint>(
			"getL",
			"()I"
		);
	}
	inline java::math::BigInteger DHParameterSpec::getP() const
	{
		return callObjectMethod(
			"getP",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace javax::crypto::spec

// Base class headers

