#pragma once

#include "../../JCharArray.hpp"
#include "../../JDoubleArray.hpp"
#include "../../JFloatArray.hpp"
#include "../../JLongArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../io/ObjectInputStream.def.hpp"
#include "../io/ObjectOutputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./BigInteger.def.hpp"
#include "./MathContext.def.hpp"
#include "./RoundingMode.def.hpp"
#include "./BigDecimal.def.hpp"

namespace java::math
{
	// Fields
	inline java::math::BigDecimal BigDecimal::ONE()
	{
		return getStaticObjectField(
			"java.math.BigDecimal",
			"ONE",
			"Ljava/math/BigDecimal;"
		);
	}
	inline jint BigDecimal::ROUND_CEILING()
	{
		return getStaticField<jint>(
			"java.math.BigDecimal",
			"ROUND_CEILING"
		);
	}
	inline jint BigDecimal::ROUND_DOWN()
	{
		return getStaticField<jint>(
			"java.math.BigDecimal",
			"ROUND_DOWN"
		);
	}
	inline jint BigDecimal::ROUND_FLOOR()
	{
		return getStaticField<jint>(
			"java.math.BigDecimal",
			"ROUND_FLOOR"
		);
	}
	inline jint BigDecimal::ROUND_HALF_DOWN()
	{
		return getStaticField<jint>(
			"java.math.BigDecimal",
			"ROUND_HALF_DOWN"
		);
	}
	inline jint BigDecimal::ROUND_HALF_EVEN()
	{
		return getStaticField<jint>(
			"java.math.BigDecimal",
			"ROUND_HALF_EVEN"
		);
	}
	inline jint BigDecimal::ROUND_HALF_UP()
	{
		return getStaticField<jint>(
			"java.math.BigDecimal",
			"ROUND_HALF_UP"
		);
	}
	inline jint BigDecimal::ROUND_UNNECESSARY()
	{
		return getStaticField<jint>(
			"java.math.BigDecimal",
			"ROUND_UNNECESSARY"
		);
	}
	inline jint BigDecimal::ROUND_UP()
	{
		return getStaticField<jint>(
			"java.math.BigDecimal",
			"ROUND_UP"
		);
	}
	inline java::math::BigDecimal BigDecimal::TEN()
	{
		return getStaticObjectField(
			"java.math.BigDecimal",
			"TEN",
			"Ljava/math/BigDecimal;"
		);
	}
	inline java::math::BigDecimal BigDecimal::ZERO()
	{
		return getStaticObjectField(
			"java.math.BigDecimal",
			"ZERO",
			"Ljava/math/BigDecimal;"
		);
	}
	
	// Constructors
	inline BigDecimal::BigDecimal(JCharArray arg0)
		: java::lang::Number(
			"java.math.BigDecimal",
			"([C)V",
			arg0.object<jcharArray>()
		) {}
	inline BigDecimal::BigDecimal(jdouble arg0)
		: java::lang::Number(
			"java.math.BigDecimal",
			"(D)V",
			arg0
		) {}
	inline BigDecimal::BigDecimal(jint arg0)
		: java::lang::Number(
			"java.math.BigDecimal",
			"(I)V",
			arg0
		) {}
	inline BigDecimal::BigDecimal(JString arg0)
		: java::lang::Number(
			"java.math.BigDecimal",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline BigDecimal::BigDecimal(java::math::BigInteger arg0)
		: java::lang::Number(
			"java.math.BigDecimal",
			"(Ljava/math/BigInteger;)V",
			arg0.object()
		) {}
	inline BigDecimal::BigDecimal(jlong arg0)
		: java::lang::Number(
			"java.math.BigDecimal",
			"(J)V",
			arg0
		) {}
	inline BigDecimal::BigDecimal(JCharArray arg0, java::math::MathContext arg1)
		: java::lang::Number(
			"java.math.BigDecimal",
			"([CLjava/math/MathContext;)V",
			arg0.object<jcharArray>(),
			arg1.object()
		) {}
	inline BigDecimal::BigDecimal(jdouble arg0, java::math::MathContext arg1)
		: java::lang::Number(
			"java.math.BigDecimal",
			"(DLjava/math/MathContext;)V",
			arg0,
			arg1.object()
		) {}
	inline BigDecimal::BigDecimal(jint arg0, java::math::MathContext arg1)
		: java::lang::Number(
			"java.math.BigDecimal",
			"(ILjava/math/MathContext;)V",
			arg0,
			arg1.object()
		) {}
	inline BigDecimal::BigDecimal(JString arg0, java::math::MathContext arg1)
		: java::lang::Number(
			"java.math.BigDecimal",
			"(Ljava/lang/String;Ljava/math/MathContext;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	inline BigDecimal::BigDecimal(java::math::BigInteger arg0, jint arg1)
		: java::lang::Number(
			"java.math.BigDecimal",
			"(Ljava/math/BigInteger;I)V",
			arg0.object(),
			arg1
		) {}
	inline BigDecimal::BigDecimal(java::math::BigInteger arg0, java::math::MathContext arg1)
		: java::lang::Number(
			"java.math.BigDecimal",
			"(Ljava/math/BigInteger;Ljava/math/MathContext;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline BigDecimal::BigDecimal(jlong arg0, java::math::MathContext arg1)
		: java::lang::Number(
			"java.math.BigDecimal",
			"(JLjava/math/MathContext;)V",
			arg0,
			arg1.object()
		) {}
	inline BigDecimal::BigDecimal(JCharArray arg0, jint arg1, jint arg2)
		: java::lang::Number(
			"java.math.BigDecimal",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		) {}
	inline BigDecimal::BigDecimal(java::math::BigInteger arg0, jint arg1, java::math::MathContext arg2)
		: java::lang::Number(
			"java.math.BigDecimal",
			"(Ljava/math/BigInteger;ILjava/math/MathContext;)V",
			arg0.object(),
			arg1,
			arg2.object()
		) {}
	inline BigDecimal::BigDecimal(JCharArray arg0, jint arg1, jint arg2, java::math::MathContext arg3)
		: java::lang::Number(
			"java.math.BigDecimal",
			"([CIILjava/math/MathContext;)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2,
			arg3.object()
		) {}
	
	// Methods
	inline java::math::BigDecimal BigDecimal::valueOf(jdouble arg0)
	{
		return callStaticObjectMethod(
			"java.math.BigDecimal",
			"valueOf",
			"(D)Ljava/math/BigDecimal;",
			arg0
		);
	}
	inline java::math::BigDecimal BigDecimal::valueOf(jlong arg0)
	{
		return callStaticObjectMethod(
			"java.math.BigDecimal",
			"valueOf",
			"(J)Ljava/math/BigDecimal;",
			arg0
		);
	}
	inline java::math::BigDecimal BigDecimal::valueOf(jlong arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.math.BigDecimal",
			"valueOf",
			"(JI)Ljava/math/BigDecimal;",
			arg0,
			arg1
		);
	}
	inline java::math::BigDecimal BigDecimal::abs() const
	{
		return callObjectMethod(
			"abs",
			"()Ljava/math/BigDecimal;"
		);
	}
	inline java::math::BigDecimal BigDecimal::abs(java::math::MathContext arg0) const
	{
		return callObjectMethod(
			"abs",
			"(Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	inline java::math::BigDecimal BigDecimal::add(java::math::BigDecimal arg0) const
	{
		return callObjectMethod(
			"add",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	inline java::math::BigDecimal BigDecimal::add(java::math::BigDecimal arg0, java::math::MathContext arg1) const
	{
		return callObjectMethod(
			"add",
			"(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.object(),
			arg1.object()
		);
	}
	inline jbyte BigDecimal::byteValueExact() const
	{
		return callMethod<jbyte>(
			"byteValueExact",
			"()B"
		);
	}
	inline jint BigDecimal::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint BigDecimal::compareTo(java::math::BigDecimal arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/math/BigDecimal;)I",
			arg0.object()
		);
	}
	inline java::math::BigDecimal BigDecimal::divide(java::math::BigDecimal arg0) const
	{
		return callObjectMethod(
			"divide",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	inline java::math::BigDecimal BigDecimal::divide(java::math::BigDecimal arg0, jint arg1) const
	{
		return callObjectMethod(
			"divide",
			"(Ljava/math/BigDecimal;I)Ljava/math/BigDecimal;",
			arg0.object(),
			arg1
		);
	}
	inline java::math::BigDecimal BigDecimal::divide(java::math::BigDecimal arg0, java::math::MathContext arg1) const
	{
		return callObjectMethod(
			"divide",
			"(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::math::BigDecimal BigDecimal::divide(java::math::BigDecimal arg0, java::math::RoundingMode arg1) const
	{
		return callObjectMethod(
			"divide",
			"(Ljava/math/BigDecimal;Ljava/math/RoundingMode;)Ljava/math/BigDecimal;",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::math::BigDecimal BigDecimal::divide(java::math::BigDecimal arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"divide",
			"(Ljava/math/BigDecimal;II)Ljava/math/BigDecimal;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline java::math::BigDecimal BigDecimal::divide(java::math::BigDecimal arg0, jint arg1, java::math::RoundingMode arg2) const
	{
		return callObjectMethod(
			"divide",
			"(Ljava/math/BigDecimal;ILjava/math/RoundingMode;)Ljava/math/BigDecimal;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline JArray BigDecimal::divideAndRemainder(java::math::BigDecimal arg0) const
	{
		return callObjectMethod(
			"divideAndRemainder",
			"(Ljava/math/BigDecimal;)[Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	inline JArray BigDecimal::divideAndRemainder(java::math::BigDecimal arg0, java::math::MathContext arg1) const
	{
		return callObjectMethod(
			"divideAndRemainder",
			"(Ljava/math/BigDecimal;Ljava/math/MathContext;)[Ljava/math/BigDecimal;",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::math::BigDecimal BigDecimal::divideToIntegralValue(java::math::BigDecimal arg0) const
	{
		return callObjectMethod(
			"divideToIntegralValue",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	inline java::math::BigDecimal BigDecimal::divideToIntegralValue(java::math::BigDecimal arg0, java::math::MathContext arg1) const
	{
		return callObjectMethod(
			"divideToIntegralValue",
			"(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.object(),
			arg1.object()
		);
	}
	inline jdouble BigDecimal::doubleValue() const
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	inline jboolean BigDecimal::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jfloat BigDecimal::floatValue() const
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	inline jint BigDecimal::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jint BigDecimal::intValue() const
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	inline jint BigDecimal::intValueExact() const
	{
		return callMethod<jint>(
			"intValueExact",
			"()I"
		);
	}
	inline jlong BigDecimal::longValue() const
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	inline jlong BigDecimal::longValueExact() const
	{
		return callMethod<jlong>(
			"longValueExact",
			"()J"
		);
	}
	inline java::math::BigDecimal BigDecimal::max(java::math::BigDecimal arg0) const
	{
		return callObjectMethod(
			"max",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	inline java::math::BigDecimal BigDecimal::min(java::math::BigDecimal arg0) const
	{
		return callObjectMethod(
			"min",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	inline java::math::BigDecimal BigDecimal::movePointLeft(jint arg0) const
	{
		return callObjectMethod(
			"movePointLeft",
			"(I)Ljava/math/BigDecimal;",
			arg0
		);
	}
	inline java::math::BigDecimal BigDecimal::movePointRight(jint arg0) const
	{
		return callObjectMethod(
			"movePointRight",
			"(I)Ljava/math/BigDecimal;",
			arg0
		);
	}
	inline java::math::BigDecimal BigDecimal::multiply(java::math::BigDecimal arg0) const
	{
		return callObjectMethod(
			"multiply",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	inline java::math::BigDecimal BigDecimal::multiply(java::math::BigDecimal arg0, java::math::MathContext arg1) const
	{
		return callObjectMethod(
			"multiply",
			"(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::math::BigDecimal BigDecimal::negate() const
	{
		return callObjectMethod(
			"negate",
			"()Ljava/math/BigDecimal;"
		);
	}
	inline java::math::BigDecimal BigDecimal::negate(java::math::MathContext arg0) const
	{
		return callObjectMethod(
			"negate",
			"(Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	inline java::math::BigDecimal BigDecimal::plus() const
	{
		return callObjectMethod(
			"plus",
			"()Ljava/math/BigDecimal;"
		);
	}
	inline java::math::BigDecimal BigDecimal::plus(java::math::MathContext arg0) const
	{
		return callObjectMethod(
			"plus",
			"(Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	inline java::math::BigDecimal BigDecimal::pow(jint arg0) const
	{
		return callObjectMethod(
			"pow",
			"(I)Ljava/math/BigDecimal;",
			arg0
		);
	}
	inline java::math::BigDecimal BigDecimal::pow(jint arg0, java::math::MathContext arg1) const
	{
		return callObjectMethod(
			"pow",
			"(ILjava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0,
			arg1.object()
		);
	}
	inline jint BigDecimal::precision() const
	{
		return callMethod<jint>(
			"precision",
			"()I"
		);
	}
	inline java::math::BigDecimal BigDecimal::remainder(java::math::BigDecimal arg0) const
	{
		return callObjectMethod(
			"remainder",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	inline java::math::BigDecimal BigDecimal::remainder(java::math::BigDecimal arg0, java::math::MathContext arg1) const
	{
		return callObjectMethod(
			"remainder",
			"(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::math::BigDecimal BigDecimal::round(java::math::MathContext arg0) const
	{
		return callObjectMethod(
			"round",
			"(Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	inline jint BigDecimal::scale() const
	{
		return callMethod<jint>(
			"scale",
			"()I"
		);
	}
	inline java::math::BigDecimal BigDecimal::scaleByPowerOfTen(jint arg0) const
	{
		return callObjectMethod(
			"scaleByPowerOfTen",
			"(I)Ljava/math/BigDecimal;",
			arg0
		);
	}
	inline java::math::BigDecimal BigDecimal::setScale(jint arg0) const
	{
		return callObjectMethod(
			"setScale",
			"(I)Ljava/math/BigDecimal;",
			arg0
		);
	}
	inline java::math::BigDecimal BigDecimal::setScale(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setScale",
			"(II)Ljava/math/BigDecimal;",
			arg0,
			arg1
		);
	}
	inline java::math::BigDecimal BigDecimal::setScale(jint arg0, java::math::RoundingMode arg1) const
	{
		return callObjectMethod(
			"setScale",
			"(ILjava/math/RoundingMode;)Ljava/math/BigDecimal;",
			arg0,
			arg1.object()
		);
	}
	inline jshort BigDecimal::shortValueExact() const
	{
		return callMethod<jshort>(
			"shortValueExact",
			"()S"
		);
	}
	inline jint BigDecimal::signum() const
	{
		return callMethod<jint>(
			"signum",
			"()I"
		);
	}
	inline java::math::BigDecimal BigDecimal::sqrt(java::math::MathContext arg0) const
	{
		return callObjectMethod(
			"sqrt",
			"(Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	inline java::math::BigDecimal BigDecimal::stripTrailingZeros() const
	{
		return callObjectMethod(
			"stripTrailingZeros",
			"()Ljava/math/BigDecimal;"
		);
	}
	inline java::math::BigDecimal BigDecimal::subtract(java::math::BigDecimal arg0) const
	{
		return callObjectMethod(
			"subtract",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	inline java::math::BigDecimal BigDecimal::subtract(java::math::BigDecimal arg0, java::math::MathContext arg1) const
	{
		return callObjectMethod(
			"subtract",
			"(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::math::BigInteger BigDecimal::toBigInteger() const
	{
		return callObjectMethod(
			"toBigInteger",
			"()Ljava/math/BigInteger;"
		);
	}
	inline java::math::BigInteger BigDecimal::toBigIntegerExact() const
	{
		return callObjectMethod(
			"toBigIntegerExact",
			"()Ljava/math/BigInteger;"
		);
	}
	inline JString BigDecimal::toEngineeringString() const
	{
		return callObjectMethod(
			"toEngineeringString",
			"()Ljava/lang/String;"
		);
	}
	inline JString BigDecimal::toPlainString() const
	{
		return callObjectMethod(
			"toPlainString",
			"()Ljava/lang/String;"
		);
	}
	inline JString BigDecimal::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline java::math::BigDecimal BigDecimal::ulp() const
	{
		return callObjectMethod(
			"ulp",
			"()Ljava/math/BigDecimal;"
		);
	}
	inline java::math::BigInteger BigDecimal::unscaledValue() const
	{
		return callObjectMethod(
			"unscaledValue",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::math

// Base class headers
#include "../lang/Number.hpp"

