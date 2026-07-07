#pragma once

#include "../../math/BigInteger.def.hpp"
#include "./EdECPoint.def.hpp"

namespace java::security::spec
{
	// Fields
	
	// Constructors
	inline EdECPoint::EdECPoint(jboolean arg0, java::math::BigInteger arg1)
		: JObject(
			"java.security.spec.EdECPoint",
			"(ZLjava/math/BigInteger;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	inline java::math::BigInteger EdECPoint::getY() const
	{
		return callObjectMethod(
			"getY",
			"()Ljava/math/BigInteger;"
		);
	}
	inline jboolean EdECPoint::isXOdd() const
	{
		return callMethod<jboolean>(
			"isXOdd",
			"()Z"
		);
	}
} // namespace java::security::spec

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security::spec;
#endif
