#pragma once

#include "../../math/BigInteger.def.hpp"
#include "./ECParameterSpec.def.hpp"
#include "./ECPrivateKeySpec.def.hpp"

namespace java::security::spec
{
	// Fields
	
	// Constructors
	inline ECPrivateKeySpec::ECPrivateKeySpec(java::math::BigInteger arg0, java::security::spec::ECParameterSpec arg1)
		: JObject(
			"java.security.spec.ECPrivateKeySpec",
			"(Ljava/math/BigInteger;Ljava/security/spec/ECParameterSpec;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline java::security::spec::ECParameterSpec ECPrivateKeySpec::getParams() const
	{
		return callObjectMethod(
			"getParams",
			"()Ljava/security/spec/ECParameterSpec;"
		);
	}
	inline java::math::BigInteger ECPrivateKeySpec::getS() const
	{
		return callObjectMethod(
			"getS",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security::spec;
#endif
