#pragma once

#include "../../../JObject.hpp"
#include "../../math/BigInteger.def.hpp"
#include "./ECPoint.def.hpp"

namespace java::security::spec
{
	// Fields
	inline java::security::spec::ECPoint ECPoint::POINT_INFINITY()
	{
		return getStaticObjectField(
			"java.security.spec.ECPoint",
			"POINT_INFINITY",
			"Ljava/security/spec/ECPoint;"
		);
	}
	
	// Constructors
	inline ECPoint::ECPoint(java::math::BigInteger arg0, java::math::BigInteger arg1)
		: JObject(
			"java.security.spec.ECPoint",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jboolean ECPoint::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::math::BigInteger ECPoint::getAffineX() const
	{
		return callObjectMethod(
			"getAffineX",
			"()Ljava/math/BigInteger;"
		);
	}
	inline java::math::BigInteger ECPoint::getAffineY() const
	{
		return callObjectMethod(
			"getAffineY",
			"()Ljava/math/BigInteger;"
		);
	}
	inline jint ECPoint::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace java::security::spec

// Base class headers

