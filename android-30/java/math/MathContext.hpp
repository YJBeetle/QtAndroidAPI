#pragma once

#include "../io/ObjectInputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./RoundingMode.def.hpp"
#include "./MathContext.def.hpp"

namespace java::math
{
	// Fields
	inline java::math::MathContext MathContext::DECIMAL128()
	{
		return getStaticObjectField(
			"java.math.MathContext",
			"DECIMAL128",
			"Ljava/math/MathContext;"
		);
	}
	inline java::math::MathContext MathContext::DECIMAL32()
	{
		return getStaticObjectField(
			"java.math.MathContext",
			"DECIMAL32",
			"Ljava/math/MathContext;"
		);
	}
	inline java::math::MathContext MathContext::DECIMAL64()
	{
		return getStaticObjectField(
			"java.math.MathContext",
			"DECIMAL64",
			"Ljava/math/MathContext;"
		);
	}
	inline java::math::MathContext MathContext::UNLIMITED()
	{
		return getStaticObjectField(
			"java.math.MathContext",
			"UNLIMITED",
			"Ljava/math/MathContext;"
		);
	}
	
	// Constructors
	inline MathContext::MathContext(jint arg0)
		: JObject(
			"java.math.MathContext",
			"(I)V",
			arg0
		) {}
	inline MathContext::MathContext(JString arg0)
		: JObject(
			"java.math.MathContext",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline MathContext::MathContext(jint arg0, java::math::RoundingMode arg1)
		: JObject(
			"java.math.MathContext",
			"(ILjava/math/RoundingMode;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	inline jboolean MathContext::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint MathContext::getPrecision() const
	{
		return callMethod<jint>(
			"getPrecision",
			"()I"
		);
	}
	inline java::math::RoundingMode MathContext::getRoundingMode() const
	{
		return callObjectMethod(
			"getRoundingMode",
			"()Ljava/math/RoundingMode;"
		);
	}
	inline jint MathContext::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString MathContext::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::math

// Base class headers

