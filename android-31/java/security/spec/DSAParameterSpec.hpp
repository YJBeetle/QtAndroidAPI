#pragma once

#include "../../math/BigInteger.def.hpp"
#include "./DSAParameterSpec.def.hpp"

namespace java::security::spec
{
	// Fields
	
	// Constructors
	inline DSAParameterSpec::DSAParameterSpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2)
		: JObject(
			"java.security.spec.DSAParameterSpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	inline java::math::BigInteger DSAParameterSpec::getG() const
	{
		return callObjectMethod(
			"getG",
			"()Ljava/math/BigInteger;"
		);
	}
	inline java::math::BigInteger DSAParameterSpec::getP() const
	{
		return callObjectMethod(
			"getP",
			"()Ljava/math/BigInteger;"
		);
	}
	inline java::math::BigInteger DSAParameterSpec::getQ() const
	{
		return callObjectMethod(
			"getQ",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security::spec;
#endif
