#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../math/BigInteger.def.hpp"
#include "./EllipticCurve.def.hpp"

namespace java::security::spec
{
	// Fields
	
	// Constructors
	inline EllipticCurve::EllipticCurve(JObject arg0, java::math::BigInteger arg1, java::math::BigInteger arg2)
		: JObject(
			"java.security.spec.EllipticCurve",
			"(Ljava/security/spec/ECField;Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	inline EllipticCurve::EllipticCurve(JObject arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, JByteArray arg3)
		: JObject(
			"java.security.spec.EllipticCurve",
			"(Ljava/security/spec/ECField;Ljava/math/BigInteger;Ljava/math/BigInteger;[B)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object<jbyteArray>()
		) {}
	
	// Methods
	inline jboolean EllipticCurve::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::math::BigInteger EllipticCurve::getA() const
	{
		return callObjectMethod(
			"getA",
			"()Ljava/math/BigInteger;"
		);
	}
	inline java::math::BigInteger EllipticCurve::getB() const
	{
		return callObjectMethod(
			"getB",
			"()Ljava/math/BigInteger;"
		);
	}
	inline JObject EllipticCurve::getField() const
	{
		return callObjectMethod(
			"getField",
			"()Ljava/security/spec/ECField;"
		);
	}
	inline JByteArray EllipticCurve::getSeed() const
	{
		return callObjectMethod(
			"getSeed",
			"()[B"
		);
	}
	inline jint EllipticCurve::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace java::security::spec

// Base class headers

