#pragma once

#include "../../math/BigInteger.def.hpp"
#include "./XECPublicKeySpec.def.hpp"

namespace java::security::spec
{
	// Fields
	
	// Constructors
	inline XECPublicKeySpec::XECPublicKeySpec(JObject arg0, java::math::BigInteger arg1)
		: JObject(
			"java.security.spec.XECPublicKeySpec",
			"(Ljava/security/spec/AlgorithmParameterSpec;Ljava/math/BigInteger;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline JObject XECPublicKeySpec::getParams() const
	{
		return callObjectMethod(
			"getParams",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	inline java::math::BigInteger XECPublicKeySpec::getU() const
	{
		return callObjectMethod(
			"getU",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security::spec;
#endif
