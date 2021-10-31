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
	
	BigDecimal::BigDecimal(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BigDecimal::BigDecimal(jcharArray arg0)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigDecimal",
			"([C)V",
			arg0
		);
	}
	BigDecimal::BigDecimal(jdouble arg0)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigDecimal",
			"(D)V",
			arg0
		);
	}
	BigDecimal::BigDecimal(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigDecimal",
			"(I)V",
			arg0
		);
	}
	BigDecimal::BigDecimal(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigDecimal",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	BigDecimal::BigDecimal(java::math::BigInteger arg0)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigDecimal",
			"(Ljava/math/BigInteger;)V",
			arg0.__jniObject().object()
		);
	}
	BigDecimal::BigDecimal(jlong arg0)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigDecimal",
			"(J)V",
			arg0
		);
	}
	BigDecimal::BigDecimal(jcharArray arg0, java::math::MathContext arg1)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigDecimal",
			"([CLjava/math/MathContext;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	BigDecimal::BigDecimal(jdouble arg0, java::math::MathContext arg1)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigDecimal",
			"(DLjava/math/MathContext;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	BigDecimal::BigDecimal(jint arg0, java::math::MathContext arg1)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigDecimal",
			"(ILjava/math/MathContext;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	BigDecimal::BigDecimal(jstring arg0, java::math::MathContext arg1)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigDecimal",
			"(Ljava/lang/String;Ljava/math/MathContext;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	BigDecimal::BigDecimal(java::math::BigInteger arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigDecimal",
			"(Ljava/math/BigInteger;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	BigDecimal::BigDecimal(java::math::BigInteger arg0, java::math::MathContext arg1)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigDecimal",
			"(Ljava/math/BigInteger;Ljava/math/MathContext;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	BigDecimal::BigDecimal(jlong arg0, java::math::MathContext arg1)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigDecimal",
			"(JLjava/math/MathContext;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	BigDecimal::BigDecimal(jcharArray arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigDecimal",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	BigDecimal::BigDecimal(java::math::BigInteger arg0, jint arg1, java::math::MathContext arg2)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigDecimal",
			"(Ljava/math/BigInteger;ILjava/math/MathContext;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	BigDecimal::BigDecimal(jcharArray arg0, jint arg1, jint arg2, java::math::MathContext arg3)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigDecimal",
			"([CIILjava/math/MathContext;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	
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
		return __thiz.callObjectMethod(
			"abs",
			"()Ljava/math/BigDecimal;"
		);
	}
	QAndroidJniObject BigDecimal::abs(java::math::MathContext arg0)
	{
		return __thiz.callObjectMethod(
			"abs",
			"(Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::add(java::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"add",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::add(java::math::BigDecimal arg0, java::math::MathContext arg1)
	{
		return __thiz.callObjectMethod(
			"add",
			"(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jbyte BigDecimal::byteValueExact()
	{
		return __thiz.callMethod<jbyte>(
			"byteValueExact",
			"()B"
		);
	}
	jint BigDecimal::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint BigDecimal::compareTo(java::math::BigDecimal arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/math/BigDecimal;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::divide(java::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"divide",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::divide(java::math::BigDecimal arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"divide",
			"(Ljava/math/BigDecimal;I)Ljava/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject BigDecimal::divide(java::math::BigDecimal arg0, java::math::MathContext arg1)
	{
		return __thiz.callObjectMethod(
			"divide",
			"(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::divide(java::math::BigDecimal arg0, java::math::RoundingMode arg1)
	{
		return __thiz.callObjectMethod(
			"divide",
			"(Ljava/math/BigDecimal;Ljava/math/RoundingMode;)Ljava/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::divide(java::math::BigDecimal arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"divide",
			"(Ljava/math/BigDecimal;II)Ljava/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject BigDecimal::divide(java::math::BigDecimal arg0, jint arg1, java::math::RoundingMode arg2)
	{
		return __thiz.callObjectMethod(
			"divide",
			"(Ljava/math/BigDecimal;ILjava/math/RoundingMode;)Ljava/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jarray BigDecimal::divideAndRemainder(java::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"divideAndRemainder",
			"(Ljava/math/BigDecimal;)[Ljava/math/BigDecimal;",
			arg0.__jniObject().object()
		).object<jarray>();
	}
	jarray BigDecimal::divideAndRemainder(java::math::BigDecimal arg0, java::math::MathContext arg1)
	{
		return __thiz.callObjectMethod(
			"divideAndRemainder",
			"(Ljava/math/BigDecimal;Ljava/math/MathContext;)[Ljava/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		).object<jarray>();
	}
	QAndroidJniObject BigDecimal::divideToIntegralValue(java::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"divideToIntegralValue",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::divideToIntegralValue(java::math::BigDecimal arg0, java::math::MathContext arg1)
	{
		return __thiz.callObjectMethod(
			"divideToIntegralValue",
			"(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jdouble BigDecimal::doubleValue()
	{
		return __thiz.callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jboolean BigDecimal::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jfloat BigDecimal::floatValue()
	{
		return __thiz.callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jint BigDecimal::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint BigDecimal::intValue()
	{
		return __thiz.callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jint BigDecimal::intValueExact()
	{
		return __thiz.callMethod<jint>(
			"intValueExact",
			"()I"
		);
	}
	jlong BigDecimal::longValue()
	{
		return __thiz.callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	jlong BigDecimal::longValueExact()
	{
		return __thiz.callMethod<jlong>(
			"longValueExact",
			"()J"
		);
	}
	QAndroidJniObject BigDecimal::max(java::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"max",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::min(java::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"min",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::movePointLeft(jint arg0)
	{
		return __thiz.callObjectMethod(
			"movePointLeft",
			"(I)Ljava/math/BigDecimal;",
			arg0
		);
	}
	QAndroidJniObject BigDecimal::movePointRight(jint arg0)
	{
		return __thiz.callObjectMethod(
			"movePointRight",
			"(I)Ljava/math/BigDecimal;",
			arg0
		);
	}
	QAndroidJniObject BigDecimal::multiply(java::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"multiply",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::multiply(java::math::BigDecimal arg0, java::math::MathContext arg1)
	{
		return __thiz.callObjectMethod(
			"multiply",
			"(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::negate()
	{
		return __thiz.callObjectMethod(
			"negate",
			"()Ljava/math/BigDecimal;"
		);
	}
	QAndroidJniObject BigDecimal::negate(java::math::MathContext arg0)
	{
		return __thiz.callObjectMethod(
			"negate",
			"(Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::plus()
	{
		return __thiz.callObjectMethod(
			"plus",
			"()Ljava/math/BigDecimal;"
		);
	}
	QAndroidJniObject BigDecimal::plus(java::math::MathContext arg0)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::pow(jint arg0)
	{
		return __thiz.callObjectMethod(
			"pow",
			"(I)Ljava/math/BigDecimal;",
			arg0
		);
	}
	QAndroidJniObject BigDecimal::pow(jint arg0, java::math::MathContext arg1)
	{
		return __thiz.callObjectMethod(
			"pow",
			"(ILjava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint BigDecimal::precision()
	{
		return __thiz.callMethod<jint>(
			"precision",
			"()I"
		);
	}
	QAndroidJniObject BigDecimal::remainder(java::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"remainder",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::remainder(java::math::BigDecimal arg0, java::math::MathContext arg1)
	{
		return __thiz.callObjectMethod(
			"remainder",
			"(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::round(java::math::MathContext arg0)
	{
		return __thiz.callObjectMethod(
			"round",
			"(Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	jint BigDecimal::scale()
	{
		return __thiz.callMethod<jint>(
			"scale",
			"()I"
		);
	}
	QAndroidJniObject BigDecimal::scaleByPowerOfTen(jint arg0)
	{
		return __thiz.callObjectMethod(
			"scaleByPowerOfTen",
			"(I)Ljava/math/BigDecimal;",
			arg0
		);
	}
	QAndroidJniObject BigDecimal::setScale(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setScale",
			"(I)Ljava/math/BigDecimal;",
			arg0
		);
	}
	QAndroidJniObject BigDecimal::setScale(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"setScale",
			"(II)Ljava/math/BigDecimal;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject BigDecimal::setScale(jint arg0, java::math::RoundingMode arg1)
	{
		return __thiz.callObjectMethod(
			"setScale",
			"(ILjava/math/RoundingMode;)Ljava/math/BigDecimal;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jshort BigDecimal::shortValueExact()
	{
		return __thiz.callMethod<jshort>(
			"shortValueExact",
			"()S"
		);
	}
	jint BigDecimal::signum()
	{
		return __thiz.callMethod<jint>(
			"signum",
			"()I"
		);
	}
	QAndroidJniObject BigDecimal::sqrt(java::math::MathContext arg0)
	{
		return __thiz.callObjectMethod(
			"sqrt",
			"(Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::stripTrailingZeros()
	{
		return __thiz.callObjectMethod(
			"stripTrailingZeros",
			"()Ljava/math/BigDecimal;"
		);
	}
	QAndroidJniObject BigDecimal::subtract(java::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"subtract",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::subtract(java::math::BigDecimal arg0, java::math::MathContext arg1)
	{
		return __thiz.callObjectMethod(
			"subtract",
			"(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::toBigInteger()
	{
		return __thiz.callObjectMethod(
			"toBigInteger",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject BigDecimal::toBigIntegerExact()
	{
		return __thiz.callObjectMethod(
			"toBigIntegerExact",
			"()Ljava/math/BigInteger;"
		);
	}
	jstring BigDecimal::toEngineeringString()
	{
		return __thiz.callObjectMethod(
			"toEngineeringString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BigDecimal::toPlainString()
	{
		return __thiz.callObjectMethod(
			"toPlainString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BigDecimal::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject BigDecimal::ulp()
	{
		return __thiz.callObjectMethod(
			"ulp",
			"()Ljava/math/BigDecimal;"
		);
	}
	QAndroidJniObject BigDecimal::unscaledValue()
	{
		return __thiz.callObjectMethod(
			"unscaledValue",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::math

