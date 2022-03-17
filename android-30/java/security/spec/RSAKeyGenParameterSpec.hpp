#pragma once

#include "../../math/BigInteger.def.hpp"
#include "./RSAKeyGenParameterSpec.def.hpp"

namespace java::security::spec
{
	// Fields
	inline java::math::BigInteger RSAKeyGenParameterSpec::F0()
	{
		return getStaticObjectField(
			"java.security.spec.RSAKeyGenParameterSpec",
			"F0",
			"Ljava/math/BigInteger;"
		);
	}
	inline java::math::BigInteger RSAKeyGenParameterSpec::F4()
	{
		return getStaticObjectField(
			"java.security.spec.RSAKeyGenParameterSpec",
			"F4",
			"Ljava/math/BigInteger;"
		);
	}
	
	// Constructors
	inline RSAKeyGenParameterSpec::RSAKeyGenParameterSpec(jint arg0, java::math::BigInteger arg1)
		: JObject(
			"java.security.spec.RSAKeyGenParameterSpec",
			"(ILjava/math/BigInteger;)V",
			arg0,
			arg1.object()
		) {}
	inline RSAKeyGenParameterSpec::RSAKeyGenParameterSpec(jint arg0, java::math::BigInteger arg1, JObject arg2)
		: JObject(
			"java.security.spec.RSAKeyGenParameterSpec",
			"(ILjava/math/BigInteger;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0,
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	inline JObject RSAKeyGenParameterSpec::getKeyParams() const
	{
		return callObjectMethod(
			"getKeyParams",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	inline jint RSAKeyGenParameterSpec::getKeysize() const
	{
		return callMethod<jint>(
			"getKeysize",
			"()I"
		);
	}
	inline java::math::BigInteger RSAKeyGenParameterSpec::getPublicExponent() const
	{
		return callObjectMethod(
			"getPublicExponent",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec

// Base class headers

