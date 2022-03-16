#pragma once

#include "./DHGenParameterSpec.def.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	// Constructors
	inline DHGenParameterSpec::DHGenParameterSpec(jint arg0, jint arg1)
		: JObject(
			"javax.crypto.spec.DHGenParameterSpec",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jint DHGenParameterSpec::getExponentSize() const
	{
		return callMethod<jint>(
			"getExponentSize",
			"()I"
		);
	}
	inline jint DHGenParameterSpec::getPrimeSize() const
	{
		return callMethod<jint>(
			"getPrimeSize",
			"()I"
		);
	}
} // namespace javax::crypto::spec

// Base class headers

