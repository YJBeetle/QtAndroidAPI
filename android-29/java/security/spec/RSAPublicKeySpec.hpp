#pragma once

#include "../../math/BigInteger.def.hpp"
#include "./RSAPublicKeySpec.def.hpp"

namespace java::security::spec
{
	// Fields
	
	// Constructors
	inline RSAPublicKeySpec::RSAPublicKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1)
		: JObject(
			"java.security.spec.RSAPublicKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline RSAPublicKeySpec::RSAPublicKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, JObject arg2)
		: JObject(
			"java.security.spec.RSAPublicKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	inline java::math::BigInteger RSAPublicKeySpec::getModulus() const
	{
		return callObjectMethod(
			"getModulus",
			"()Ljava/math/BigInteger;"
		);
	}
	inline JObject RSAPublicKeySpec::getParams() const
	{
		return callObjectMethod(
			"getParams",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	inline java::math::BigInteger RSAPublicKeySpec::getPublicExponent() const
	{
		return callObjectMethod(
			"getPublicExponent",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec

// Base class headers

