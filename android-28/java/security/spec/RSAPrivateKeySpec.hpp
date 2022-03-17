#pragma once

#include "../../math/BigInteger.def.hpp"
#include "./RSAPrivateKeySpec.def.hpp"

namespace java::security::spec
{
	// Fields
	
	// Constructors
	inline RSAPrivateKeySpec::RSAPrivateKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1)
		: JObject(
			"java.security.spec.RSAPrivateKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline RSAPrivateKeySpec::RSAPrivateKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, JObject arg2)
		: JObject(
			"java.security.spec.RSAPrivateKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	inline java::math::BigInteger RSAPrivateKeySpec::getModulus() const
	{
		return callObjectMethod(
			"getModulus",
			"()Ljava/math/BigInteger;"
		);
	}
	inline JObject RSAPrivateKeySpec::getParams() const
	{
		return callObjectMethod(
			"getParams",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	inline java::math::BigInteger RSAPrivateKeySpec::getPrivateExponent() const
	{
		return callObjectMethod(
			"getPrivateExponent",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec

// Base class headers

