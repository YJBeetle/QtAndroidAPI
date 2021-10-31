#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "./BigInteger.hpp"
#include "./MathContext.hpp"
#include "./RoundingMode.hpp"
#include "./BigDecimal.hpp"

namespace java::math
{
	// Fields
	QAndroidJniObject BigDecimal::ONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.math.BigDecimal",
			"ONE",
			"Ljava/math/BigDecimal;"
		);
	}
	jint BigDecimal::ROUND_CEILING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.math.BigDecimal",
			"ROUND_CEILING"
		);
	}
	jint BigDecimal::ROUND_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.math.BigDecimal",
			"ROUND_DOWN"
		);
	}
	jint BigDecimal::ROUND_FLOOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.math.BigDecimal",
			"ROUND_FLOOR"
		);
	}
	jint BigDecimal::ROUND_HALF_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.math.BigDecimal",
			"ROUND_HALF_DOWN"
		);
	}
	jint BigDecimal::ROUND_HALF_EVEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.math.BigDecimal",
			"ROUND_HALF_EVEN"
		);
	}
	jint BigDecimal::ROUND_HALF_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.math.BigDecimal",
			"ROUND_HALF_UP"
		);
	}
	jint BigDecimal::ROUND_UNNECESSARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.math.BigDecimal",
			"ROUND_UNNECESSARY"
		);
	}
	jint BigDecimal::ROUND_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.math.BigDecimal",
			"ROUND_UP"
		);
	}
	QAndroidJniObject BigDecimal::TEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.math.BigDecimal",
			"TEN",
			"Ljava/math/BigDecimal;"
		);
	}
	QAndroidJniObject BigDecimal::ZERO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.math.BigDecimal",
			"ZERO",
			"Ljava/math/BigDecimal;"
		);
	}
	
	// QAndroidJniObject forward
	BigDecimal::BigDecimal(QAndroidJniObject obj) : java::lang::Number(obj) {}
	
	// Constructors
	BigDecimal::BigDecimal(jcharArray arg0)
		: java::lang::Number(
			"java.math.BigDecimal",
			"([C)V",
			arg0
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
	BigDecimal::BigDecimal(jstring arg0)
		: java::lang::Number(
			"java.math.BigDecimal",
			"(Ljava/lang/String;)V",
			arg0
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
	BigDecimal::BigDecimal(jcharArray arg0, java::math::MathContext arg1)
		: java::lang::Number(
			"java.math.BigDecimal",
			"([CLjava/math/MathContext;)V",
			arg0,
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
	BigDecimal::BigDecimal(jstring arg0, java::math::MathContext arg1)
		: java::lang::Number(
			"java.math.BigDecimal",
			"(Ljava/lang/String;Ljava/math/MathContext;)V",
			arg0,
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
	BigDecimal::BigDecimal(jcharArray arg0, jint arg1, jint arg2)
		: java::lang::Number(
			"java.math.BigDecimal",
			"([CII)V",
			arg0,
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
	BigDecimal::BigDecimal(jcharArray arg0, jint arg1, jint arg2, java::math::MathContext arg3)
		: java::lang::Number(
			"java.math.BigDecimal",
			"([CIILjava/math/MathContext;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		) {}
	
	// Methods
	QAndroidJniObject BigDecimal::valueOf(jdouble arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.math.BigDecimal",
			"valueOf",
			"(D)Ljava/math/BigDecimal;",
			arg0
		);
	}
	QAndroidJniObject BigDecimal::valueOf(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.math.BigDecimal",
			"valueOf",
			"(J)Ljava/math/BigDecimal;",
			arg0
		);
	}
	QAndroidJniObject BigDecimal::valueOf(jlong arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.math.BigDecimal",
			"valueOf",
			"(JI)Ljava/math/BigDecimal;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject BigDecimal::abs()
	{
		return callObjectMethod(
			"abs",
			"()Ljava/math/BigDecimal;"
		);
	}
	QAndroidJniObject BigDecimal::abs(java::math::MathContext arg0)
	{
		return callObjectMethod(
			"abs",
			"(Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	QAndroidJniObject BigDecimal::add(java::math::BigDecimal arg0)
	{
		return callObjectMethod(
			"add",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	QAndroidJniObject BigDecimal::add(java::math::BigDecimal arg0, java::math::MathContext arg1)
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
	jint BigDecimal::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
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
	QAndroidJniObject BigDecimal::divide(java::math::BigDecimal arg0)
	{
		return callObjectMethod(
			"divide",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	QAndroidJniObject BigDecimal::divide(java::math::BigDecimal arg0, jint arg1)
	{
		return callObjectMethod(
			"divide",
			"(Ljava/math/BigDecimal;I)Ljava/math/BigDecimal;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject BigDecimal::divide(java::math::BigDecimal arg0, java::math::MathContext arg1)
	{
		return callObjectMethod(
			"divide",
			"(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject BigDecimal::divide(java::math::BigDecimal arg0, java::math::RoundingMode arg1)
	{
		return callObjectMethod(
			"divide",
			"(Ljava/math/BigDecimal;Ljava/math/RoundingMode;)Ljava/math/BigDecimal;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject BigDecimal::divide(java::math::BigDecimal arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"divide",
			"(Ljava/math/BigDecimal;II)Ljava/math/BigDecimal;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject BigDecimal::divide(java::math::BigDecimal arg0, jint arg1, java::math::RoundingMode arg2)
	{
		return callObjectMethod(
			"divide",
			"(Ljava/math/BigDecimal;ILjava/math/RoundingMode;)Ljava/math/BigDecimal;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	jarray BigDecimal::divideAndRemainder(java::math::BigDecimal arg0)
	{
		return callObjectMethod(
			"divideAndRemainder",
			"(Ljava/math/BigDecimal;)[Ljava/math/BigDecimal;",
			arg0.object()
		).object<jarray>();
	}
	jarray BigDecimal::divideAndRemainder(java::math::BigDecimal arg0, java::math::MathContext arg1)
	{
		return callObjectMethod(
			"divideAndRemainder",
			"(Ljava/math/BigDecimal;Ljava/math/MathContext;)[Ljava/math/BigDecimal;",
			arg0.object(),
			arg1.object()
		).object<jarray>();
	}
	QAndroidJniObject BigDecimal::divideToIntegralValue(java::math::BigDecimal arg0)
	{
		return callObjectMethod(
			"divideToIntegralValue",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	QAndroidJniObject BigDecimal::divideToIntegralValue(java::math::BigDecimal arg0, java::math::MathContext arg1)
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
	jboolean BigDecimal::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
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
	QAndroidJniObject BigDecimal::max(java::math::BigDecimal arg0)
	{
		return callObjectMethod(
			"max",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	QAndroidJniObject BigDecimal::min(java::math::BigDecimal arg0)
	{
		return callObjectMethod(
			"min",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	QAndroidJniObject BigDecimal::movePointLeft(jint arg0)
	{
		return callObjectMethod(
			"movePointLeft",
			"(I)Ljava/math/BigDecimal;",
			arg0
		);
	}
	QAndroidJniObject BigDecimal::movePointRight(jint arg0)
	{
		return callObjectMethod(
			"movePointRight",
			"(I)Ljava/math/BigDecimal;",
			arg0
		);
	}
	QAndroidJniObject BigDecimal::multiply(java::math::BigDecimal arg0)
	{
		return callObjectMethod(
			"multiply",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	QAndroidJniObject BigDecimal::multiply(java::math::BigDecimal arg0, java::math::MathContext arg1)
	{
		return callObjectMethod(
			"multiply",
			"(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject BigDecimal::negate()
	{
		return callObjectMethod(
			"negate",
			"()Ljava/math/BigDecimal;"
		);
	}
	QAndroidJniObject BigDecimal::negate(java::math::MathContext arg0)
	{
		return callObjectMethod(
			"negate",
			"(Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	QAndroidJniObject BigDecimal::plus()
	{
		return callObjectMethod(
			"plus",
			"()Ljava/math/BigDecimal;"
		);
	}
	QAndroidJniObject BigDecimal::plus(java::math::MathContext arg0)
	{
		return callObjectMethod(
			"plus",
			"(Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	QAndroidJniObject BigDecimal::pow(jint arg0)
	{
		return callObjectMethod(
			"pow",
			"(I)Ljava/math/BigDecimal;",
			arg0
		);
	}
	QAndroidJniObject BigDecimal::pow(jint arg0, java::math::MathContext arg1)
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
	QAndroidJniObject BigDecimal::remainder(java::math::BigDecimal arg0)
	{
		return callObjectMethod(
			"remainder",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	QAndroidJniObject BigDecimal::remainder(java::math::BigDecimal arg0, java::math::MathContext arg1)
	{
		return callObjectMethod(
			"remainder",
			"(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject BigDecimal::round(java::math::MathContext arg0)
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
	QAndroidJniObject BigDecimal::scaleByPowerOfTen(jint arg0)
	{
		return callObjectMethod(
			"scaleByPowerOfTen",
			"(I)Ljava/math/BigDecimal;",
			arg0
		);
	}
	QAndroidJniObject BigDecimal::setScale(jint arg0)
	{
		return callObjectMethod(
			"setScale",
			"(I)Ljava/math/BigDecimal;",
			arg0
		);
	}
	QAndroidJniObject BigDecimal::setScale(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"setScale",
			"(II)Ljava/math/BigDecimal;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject BigDecimal::setScale(jint arg0, java::math::RoundingMode arg1)
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
	QAndroidJniObject BigDecimal::sqrt(java::math::MathContext arg0)
	{
		return callObjectMethod(
			"sqrt",
			"(Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	QAndroidJniObject BigDecimal::stripTrailingZeros()
	{
		return callObjectMethod(
			"stripTrailingZeros",
			"()Ljava/math/BigDecimal;"
		);
	}
	QAndroidJniObject BigDecimal::subtract(java::math::BigDecimal arg0)
	{
		return callObjectMethod(
			"subtract",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.object()
		);
	}
	QAndroidJniObject BigDecimal::subtract(java::math::BigDecimal arg0, java::math::MathContext arg1)
	{
		return callObjectMethod(
			"subtract",
			"(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject BigDecimal::toBigInteger()
	{
		return callObjectMethod(
			"toBigInteger",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject BigDecimal::toBigIntegerExact()
	{
		return callObjectMethod(
			"toBigIntegerExact",
			"()Ljava/math/BigInteger;"
		);
	}
	jstring BigDecimal::toEngineeringString()
	{
		return callObjectMethod(
			"toEngineeringString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BigDecimal::toPlainString()
	{
		return callObjectMethod(
			"toPlainString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BigDecimal::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject BigDecimal::ulp()
	{
		return callObjectMethod(
			"ulp",
			"()Ljava/math/BigDecimal;"
		);
	}
	QAndroidJniObject BigDecimal::unscaledValue()
	{
		return callObjectMethod(
			"unscaledValue",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::math

