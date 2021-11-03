#include "../../JCharArray.hpp"
#include "../../JDoubleArray.hpp"
#include "../../JFloatArray.hpp"
#include "../../JLongArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./BigInteger.hpp"
#include "./MathContext.hpp"
#include "./RoundingMode.hpp"
#include "./BigDecimal.hpp"

namespace java::math
{
	// Fields
	java::math::BigDecimal BigDecimal::ONE()
	{
		return getStaticObjectField(
			"java.math.BigDecimal",
			"ONE",
			"Ljava/math/BigDecimal;"
		);
	}
	jint BigDecimal::ROUND_CEILING()
	{
		return getStaticField<jint>(
			"java.math.BigDecimal",
			"ROUND_CEILING"
		);
	}
	jint BigDecimal::ROUND_DOWN()
	{
		return getStaticField<jint>(
			"java.math.BigDecimal",
			"ROUND_DOWN"
		);
	}
	jint BigDecimal::ROUND_FLOOR()
	{
		return getStaticField<jint>(
			"java.math.BigDecimal",
			"ROUND_FLOOR"
		);
	}
	jint BigDecimal::ROUND_HALF_DOWN()
	{
		return getStaticField<jint>(
			"java.math.BigDecimal",
			"ROUND_HALF_DOWN"
		);
	}
	jint BigDecimal::ROUND_HALF_EVEN()
	{
		return getStaticField<jint>(
			"java.math.BigDecimal",
			"ROUND_HALF_EVEN"
		);
	}
	jint BigDecimal::ROUND_HALF_UP()
	{
		return getStaticField<jint>(
			"java.math.BigDecimal",
			"ROUND_HALF_UP"
		);
	}
	jint BigDecimal::ROUND_UNNECESSARY()
	{
		return getStaticField<jint>(
			"java.math.BigDecimal",
			"ROUND_UNNECESSARY"
		);
	}
	jint BigDecimal::ROUND_UP()
	{
		return getStaticField<jint>(
			"java.math.BigDecimal",
			"ROUND_UP"
		);
	}
	java::math::BigDecimal BigDecimal::TEN()
	{
		return getStaticObjectField(
			"java.math.BigDecimal",
			"TEN",
			"Ljava/math/BigDecimal;"
		);
	}
	java::math::BigDecimal BigDecimal::ZERO()
	{
		return getStaticObjectField(
			"java.math.BigDecimal",
			"ZERO",
			"Ljava/math/BigDecimal;"
		);
	}
	
	// QJniObject forward
	BigDecimal::BigDecimal(QJniObject obj) : java::lang::Number(obj) {}
	
	// Constructors
	BigDecimal::BigDecimal(JCharArray arg0)
		: java::lang::Number(
			"java.math.BigDecimal",
			"([C)V",
			arg0.object<jcharArray>()
		) {}
	BigDecimal::BigDecimal(jdouble arg0)
		: java::lang::Number(
			"java.math.BigDecimal",
			"(D)V",
			arg0
		) {}
	BigDecimal::BigDecimal(jint arg0)
		: java::lang::Number(
			"java.math.BigDecimal",
			"(I)V",
			arg0
		) {}
	BigDecimal::BigDecimal(JString arg0)
		: java::lang::Number(
			"java.math.BigDecimal",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	BigDecimal::BigDecimal(java::math::BigInteger arg0)
		: java::lang::Number(
			"java.math.BigDecimal",
			"(Ljava/math/BigInteger;)V",
			arg0.object()
		) {}
	BigDecimal::BigDecimal(jlong arg0)
		: java::lang::Number(
			"java.math.BigDecimal",
			"(J)V",
			arg0
		) {}
	BigDecimal::BigDecimal(JCharArray arg0, java::math::MathContext arg1)
		: java::lang::Number(
			"java.math.BigDecimal",
			"([CLjava/math/MathContext;)V",
			arg0.object<jcharArray>(),
			arg1.object()
		) {}
	BigDecimal::BigDecimal(jdouble arg0, java::math::MathContext arg1)
		: java::lang::Number(
			"java.math.BigDecimal",
			"(DLjava/math/MathContext;)V",
			arg0,
			arg1.object()
		) {}
	BigDecimal::BigDecimal(jint arg0, java::math::MathContext arg1)
		: java::lang::Number(
			"java.math.BigDecimal",
			"(ILjava/math/MathContext;)V",
			arg0,
			arg1.object()
		) {}
	BigDecimal::BigDecimal(JString arg0, java::math::MathContext arg1)
		: java::lang::Number(
			"java.math.BigDecimal",
			"(Ljava/lang/String;Ljava/math/MathContext;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	BigDecimal::BigDecimal(java::math::BigInteger arg0, jint arg1)
		: java::lang::Number(
			"java.math.BigDecimal",
			"(Ljava/math/BigInteger;I)V",
			arg0.object(),
			arg1
		) {}
	BigDecimal::BigDecimal(java::math::BigInteger arg0, java::math::MathContext arg1)
		: java::lang::Number(
			"java.math.BigDecimal",
			"(Ljava/math/BigInteger;Ljava/math/MathContext;)V",
			arg0.object(),
			arg1.object()
		) {}
	BigDecimal::BigDecimal(jlong arg0, java::math::MathContext arg1)
		: java::lang::Number(
			"java.math.BigDecimal",
			"(JLjava/math/MathContext;)V",
			arg0,
			arg1.object()
		) {}
	BigDecimal::BigDecimal(JCharArray arg0, jint arg1, jint arg2)
		: java::lang::Number(
			"java.math.BigDecimal",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		) {}
	BigDecimal::BigDecimal(java::math::BigInteger arg0, jint arg1, java::math::MathContext arg2)
		: java::lang::Number(
			"java.math.BigDecimal",
			"(Ljava/math/BigInteger;ILjava/math/MathContext;)V",
			arg0.object(),
			arg1,
			arg2.object()
		) {}
	BigDecimal::BigDecimal(JCharArray arg0, jint arg1, jint arg2, java::math::MathContext arg3)
		: java::lang::Number(
			"java.math.BigDecimal",
			"([CIILjava/math/MathContext;)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2,
			arg3.object()
		) {}
	
	// Methods
	java::math::BigDecimal BigDecimal::valueOf(jdouble arg0)
	{
		return callStaticObjectMethod(
			"java.math.BigDecimal",
			"valueOf",
			"(D)Ljava/math/BigDecimal;",
			arg0
		);
	}
	java::math::BigDecimal BigDecimal::valueOf(jlong arg0)
	{
		return callStaticObjectMethod(
			"java.math.BigDecimal",
			"valueOf",
			"(J)Ljava/math/BigDecimal;",
			arg0
		);
	}
	java::math::BigDecimal BigDecimal::valueOf(jlong arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.math.BigDecimal",
			"valueOf",
			"(JI)Ljava/math/BigDecimal;",
			arg0,
			arg1
		);
	}
	java::math::BigDecimal BigDecimal::abs()
	{
		return callObjectMethod(
			"abs",
			"()Ljava/math/BigDecimal;"
		);
	}
	java::math::BigDecimal BigDecimal::abs(java::math::MathContext arg0)
	{
		return callObjectMethod(
			"abs",
			"(Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	java::math::BigDecimal BigDecimal::add(java::math::BigDecimal arg0)
	{
		return callObjectMethod(
			"add",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	java::math::BigDecimal BigDecimal::add(java::math::BigDecimal arg0, java::math::MathContext arg1)
	{
		return callObjectMethod(
			"add",
			"(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.object(),
			arg1.object()
		);
	}
	jbyte BigDecimal::byteValueExact()
	{
		return callMethod<jbyte>(
			"byteValueExact",
			"()B"
		);
	}
	jint BigDecimal::compareTo(JObject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint BigDecimal::compareTo(java::math::BigDecimal arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/math/BigDecimal;)I",
			arg0.object()
		);
	}
	java::math::BigDecimal BigDecimal::divide(java::math::BigDecimal arg0)
	{
		return callObjectMethod(
			"divide",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	java::math::BigDecimal BigDecimal::divide(java::math::BigDecimal arg0, jint arg1)
	{
		return callObjectMethod(
			"divide",
			"(Ljava/math/BigDecimal;I)Ljava/math/BigDecimal;",
			arg0.object(),
			arg1
		);
	}
	java::math::BigDecimal BigDecimal::divide(java::math::BigDecimal arg0, java::math::MathContext arg1)
	{
		return callObjectMethod(
			"divide",
			"(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.object(),
			arg1.object()
		);
	}
	java::math::BigDecimal BigDecimal::divide(java::math::BigDecimal arg0, java::math::RoundingMode arg1)
	{
		return callObjectMethod(
			"divide",
			"(Ljava/math/BigDecimal;Ljava/math/RoundingMode;)Ljava/math/BigDecimal;",
			arg0.object(),
			arg1.object()
		);
	}
	java::math::BigDecimal BigDecimal::divide(java::math::BigDecimal arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"divide",
			"(Ljava/math/BigDecimal;II)Ljava/math/BigDecimal;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	java::math::BigDecimal BigDecimal::divide(java::math::BigDecimal arg0, jint arg1, java::math::RoundingMode arg2)
	{
		return callObjectMethod(
			"divide",
			"(Ljava/math/BigDecimal;ILjava/math/RoundingMode;)Ljava/math/BigDecimal;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	JArray BigDecimal::divideAndRemainder(java::math::BigDecimal arg0)
	{
		return callObjectMethod(
			"divideAndRemainder",
			"(Ljava/math/BigDecimal;)[Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	JArray BigDecimal::divideAndRemainder(java::math::BigDecimal arg0, java::math::MathContext arg1)
	{
		return callObjectMethod(
			"divideAndRemainder",
			"(Ljava/math/BigDecimal;Ljava/math/MathContext;)[Ljava/math/BigDecimal;",
			arg0.object(),
			arg1.object()
		);
	}
	java::math::BigDecimal BigDecimal::divideToIntegralValue(java::math::BigDecimal arg0)
	{
		return callObjectMethod(
			"divideToIntegralValue",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	java::math::BigDecimal BigDecimal::divideToIntegralValue(java::math::BigDecimal arg0, java::math::MathContext arg1)
	{
		return callObjectMethod(
			"divideToIntegralValue",
			"(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.object(),
			arg1.object()
		);
	}
	jdouble BigDecimal::doubleValue()
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jboolean BigDecimal::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jfloat BigDecimal::floatValue()
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jint BigDecimal::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint BigDecimal::intValue()
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jint BigDecimal::intValueExact()
	{
		return callMethod<jint>(
			"intValueExact",
			"()I"
		);
	}
	jlong BigDecimal::longValue()
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	jlong BigDecimal::longValueExact()
	{
		return callMethod<jlong>(
			"longValueExact",
			"()J"
		);
	}
	java::math::BigDecimal BigDecimal::max(java::math::BigDecimal arg0)
	{
		return callObjectMethod(
			"max",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	java::math::BigDecimal BigDecimal::min(java::math::BigDecimal arg0)
	{
		return callObjectMethod(
			"min",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	java::math::BigDecimal BigDecimal::movePointLeft(jint arg0)
	{
		return callObjectMethod(
			"movePointLeft",
			"(I)Ljava/math/BigDecimal;",
			arg0
		);
	}
	java::math::BigDecimal BigDecimal::movePointRight(jint arg0)
	{
		return callObjectMethod(
			"movePointRight",
			"(I)Ljava/math/BigDecimal;",
			arg0
		);
	}
	java::math::BigDecimal BigDecimal::multiply(java::math::BigDecimal arg0)
	{
		return callObjectMethod(
			"multiply",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	java::math::BigDecimal BigDecimal::multiply(java::math::BigDecimal arg0, java::math::MathContext arg1)
	{
		return callObjectMethod(
			"multiply",
			"(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.object(),
			arg1.object()
		);
	}
	java::math::BigDecimal BigDecimal::negate()
	{
		return callObjectMethod(
			"negate",
			"()Ljava/math/BigDecimal;"
		);
	}
	java::math::BigDecimal BigDecimal::negate(java::math::MathContext arg0)
	{
		return callObjectMethod(
			"negate",
			"(Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	java::math::BigDecimal BigDecimal::plus()
	{
		return callObjectMethod(
			"plus",
			"()Ljava/math/BigDecimal;"
		);
	}
	java::math::BigDecimal BigDecimal::plus(java::math::MathContext arg0)
	{
		return callObjectMethod(
			"plus",
			"(Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	java::math::BigDecimal BigDecimal::pow(jint arg0)
	{
		return callObjectMethod(
			"pow",
			"(I)Ljava/math/BigDecimal;",
			arg0
		);
	}
	java::math::BigDecimal BigDecimal::pow(jint arg0, java::math::MathContext arg1)
	{
		return callObjectMethod(
			"pow",
			"(ILjava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0,
			arg1.object()
		);
	}
	jint BigDecimal::precision()
	{
		return callMethod<jint>(
			"precision",
			"()I"
		);
	}
	java::math::BigDecimal BigDecimal::remainder(java::math::BigDecimal arg0)
	{
		return callObjectMethod(
			"remainder",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	java::math::BigDecimal BigDecimal::remainder(java::math::BigDecimal arg0, java::math::MathContext arg1)
	{
		return callObjectMethod(
			"remainder",
			"(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.object(),
			arg1.object()
		);
	}
	java::math::BigDecimal BigDecimal::round(java::math::MathContext arg0)
	{
		return callObjectMethod(
			"round",
			"(Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	jint BigDecimal::scale()
	{
		return callMethod<jint>(
			"scale",
			"()I"
		);
	}
	java::math::BigDecimal BigDecimal::scaleByPowerOfTen(jint arg0)
	{
		return callObjectMethod(
			"scaleByPowerOfTen",
			"(I)Ljava/math/BigDecimal;",
			arg0
		);
	}
	java::math::BigDecimal BigDecimal::setScale(jint arg0)
	{
		return callObjectMethod(
			"setScale",
			"(I)Ljava/math/BigDecimal;",
			arg0
		);
	}
	java::math::BigDecimal BigDecimal::setScale(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"setScale",
			"(II)Ljava/math/BigDecimal;",
			arg0,
			arg1
		);
	}
	java::math::BigDecimal BigDecimal::setScale(jint arg0, java::math::RoundingMode arg1)
	{
		return callObjectMethod(
			"setScale",
			"(ILjava/math/RoundingMode;)Ljava/math/BigDecimal;",
			arg0,
			arg1.object()
		);
	}
	jshort BigDecimal::shortValueExact()
	{
		return callMethod<jshort>(
			"shortValueExact",
			"()S"
		);
	}
	jint BigDecimal::signum()
	{
		return callMethod<jint>(
			"signum",
			"()I"
		);
	}
	java::math::BigDecimal BigDecimal::sqrt(java::math::MathContext arg0)
	{
		return callObjectMethod(
			"sqrt",
			"(Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	java::math::BigDecimal BigDecimal::stripTrailingZeros()
	{
		return callObjectMethod(
			"stripTrailingZeros",
			"()Ljava/math/BigDecimal;"
		);
	}
	java::math::BigDecimal BigDecimal::subtract(java::math::BigDecimal arg0)
	{
		return callObjectMethod(
			"subtract",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	java::math::BigDecimal BigDecimal::subtract(java::math::BigDecimal arg0, java::math::MathContext arg1)
	{
		return callObjectMethod(
			"subtract",
			"(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.object(),
			arg1.object()
		);
	}
	java::math::BigInteger BigDecimal::toBigInteger()
	{
		return callObjectMethod(
			"toBigInteger",
			"()Ljava/math/BigInteger;"
		);
	}
	java::math::BigInteger BigDecimal::toBigIntegerExact()
	{
		return callObjectMethod(
			"toBigIntegerExact",
			"()Ljava/math/BigInteger;"
		);
	}
	JString BigDecimal::toEngineeringString()
	{
		return callObjectMethod(
			"toEngineeringString",
			"()Ljava/lang/String;"
		);
	}
	JString BigDecimal::toPlainString()
	{
		return callObjectMethod(
			"toPlainString",
			"()Ljava/lang/String;"
		);
	}
	JString BigDecimal::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	java::math::BigDecimal BigDecimal::ulp()
	{
		return callObjectMethod(
			"ulp",
			"()Ljava/math/BigDecimal;"
		);
	}
	java::math::BigInteger BigDecimal::unscaledValue()
	{
		return callObjectMethod(
			"unscaledValue",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::math

