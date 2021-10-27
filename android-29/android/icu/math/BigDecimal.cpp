#include "./MathContext.hpp"
#include "../../../java/math/BigDecimal.hpp"
#include "../../../java/math/BigInteger.hpp"
#include "./BigDecimal.hpp"

namespace android::icu::math
{
	// Fields
	QAndroidJniObject BigDecimal::ONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.math.BigDecimal",
			"ONE",
			"Landroid/icu/math/BigDecimal;"
		);
	}
	jint BigDecimal::ROUND_CEILING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.math.BigDecimal",
			"ROUND_CEILING"
		);
	}
	jint BigDecimal::ROUND_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.math.BigDecimal",
			"ROUND_DOWN"
		);
	}
	jint BigDecimal::ROUND_FLOOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.math.BigDecimal",
			"ROUND_FLOOR"
		);
	}
	jint BigDecimal::ROUND_HALF_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.math.BigDecimal",
			"ROUND_HALF_DOWN"
		);
	}
	jint BigDecimal::ROUND_HALF_EVEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.math.BigDecimal",
			"ROUND_HALF_EVEN"
		);
	}
	jint BigDecimal::ROUND_HALF_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.math.BigDecimal",
			"ROUND_HALF_UP"
		);
	}
	jint BigDecimal::ROUND_UNNECESSARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.math.BigDecimal",
			"ROUND_UNNECESSARY"
		);
	}
	jint BigDecimal::ROUND_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.math.BigDecimal",
			"ROUND_UP"
		);
	}
	QAndroidJniObject BigDecimal::TEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.math.BigDecimal",
			"TEN",
			"Landroid/icu/math/BigDecimal;"
		);
	}
	QAndroidJniObject BigDecimal::ZERO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.math.BigDecimal",
			"ZERO",
			"Landroid/icu/math/BigDecimal;"
		);
	}
	
	BigDecimal::BigDecimal(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BigDecimal::BigDecimal(jcharArray &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.math.BigDecimal",
			"([C)V",
			arg0
		);
	}
	BigDecimal::BigDecimal(jdouble &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.math.BigDecimal",
			"(D)V",
			arg0
		);
	}
	BigDecimal::BigDecimal(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.math.BigDecimal",
			"(I)V",
			arg0
		);
	}
	BigDecimal::BigDecimal(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.math.BigDecimal",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	BigDecimal::BigDecimal(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.math.BigDecimal",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	BigDecimal::BigDecimal(java::math::BigDecimal &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.math.BigDecimal",
			"(Ljava/math/BigDecimal;)V",
			arg0.__jniObject().object()
		);
	}
	BigDecimal::BigDecimal(java::math::BigInteger &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.math.BigDecimal",
			"(Ljava/math/BigInteger;)V",
			arg0.__jniObject().object()
		);
	}
	BigDecimal::BigDecimal(jlong &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.math.BigDecimal",
			"(J)V",
			arg0
		);
	}
	BigDecimal::BigDecimal(java::math::BigInteger &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.math.BigDecimal",
			"(Ljava/math/BigInteger;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	BigDecimal::BigDecimal(jcharArray &arg0, jint &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.math.BigDecimal",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	QAndroidJniObject BigDecimal::valueOf(jdouble arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.math.BigDecimal",
			"valueOf",
			"(D)Landroid/icu/math/BigDecimal;",
			arg0
		);
	}
	QAndroidJniObject BigDecimal::valueOf(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.math.BigDecimal",
			"valueOf",
			"(J)Landroid/icu/math/BigDecimal;",
			arg0
		);
	}
	QAndroidJniObject BigDecimal::valueOf(jlong arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.math.BigDecimal",
			"valueOf",
			"(JI)Landroid/icu/math/BigDecimal;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject BigDecimal::abs()
	{
		return __thiz.callObjectMethod(
			"abs",
			"()Landroid/icu/math/BigDecimal;"
		);
	}
	QAndroidJniObject BigDecimal::abs(android::icu::math::MathContext arg0)
	{
		return __thiz.callObjectMethod(
			"abs",
			"(Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::add(android::icu::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"add",
			"(Landroid/icu/math/BigDecimal;)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::add(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1)
	{
		return __thiz.callObjectMethod(
			"add",
			"(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;",
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
	jint BigDecimal::compareTo(android::icu::math::BigDecimal arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Landroid/icu/math/BigDecimal;)I",
			arg0.__jniObject().object()
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
	jint BigDecimal::compareTo(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::divide(android::icu::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"divide",
			"(Landroid/icu/math/BigDecimal;)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::divide(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1)
	{
		return __thiz.callObjectMethod(
			"divide",
			"(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::divide(android::icu::math::BigDecimal arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"divide",
			"(Landroid/icu/math/BigDecimal;I)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject BigDecimal::divide(android::icu::math::BigDecimal arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"divide",
			"(Landroid/icu/math/BigDecimal;II)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject BigDecimal::divideInteger(android::icu::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"divideInteger",
			"(Landroid/icu/math/BigDecimal;)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::divideInteger(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1)
	{
		return __thiz.callObjectMethod(
			"divideInteger",
			"(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;",
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
	jstring BigDecimal::format(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"format",
			"(II)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring BigDecimal::format(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		return __thiz.callObjectMethod(
			"format",
			"(IIIIII)Ljava/lang/String;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		).object<jstring>();
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
	QAndroidJniObject BigDecimal::max(android::icu::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"max",
			"(Landroid/icu/math/BigDecimal;)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::max(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1)
	{
		return __thiz.callObjectMethod(
			"max",
			"(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::min(android::icu::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"min",
			"(Landroid/icu/math/BigDecimal;)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::min(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1)
	{
		return __thiz.callObjectMethod(
			"min",
			"(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::movePointLeft(jint arg0)
	{
		return __thiz.callObjectMethod(
			"movePointLeft",
			"(I)Landroid/icu/math/BigDecimal;",
			arg0
		);
	}
	QAndroidJniObject BigDecimal::movePointRight(jint arg0)
	{
		return __thiz.callObjectMethod(
			"movePointRight",
			"(I)Landroid/icu/math/BigDecimal;",
			arg0
		);
	}
	QAndroidJniObject BigDecimal::multiply(android::icu::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"multiply",
			"(Landroid/icu/math/BigDecimal;)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::multiply(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1)
	{
		return __thiz.callObjectMethod(
			"multiply",
			"(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::negate()
	{
		return __thiz.callObjectMethod(
			"negate",
			"()Landroid/icu/math/BigDecimal;"
		);
	}
	QAndroidJniObject BigDecimal::negate(android::icu::math::MathContext arg0)
	{
		return __thiz.callObjectMethod(
			"negate",
			"(Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::plus()
	{
		return __thiz.callObjectMethod(
			"plus",
			"()Landroid/icu/math/BigDecimal;"
		);
	}
	QAndroidJniObject BigDecimal::plus(android::icu::math::MathContext arg0)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::pow(android::icu::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"pow",
			"(Landroid/icu/math/BigDecimal;)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::pow(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1)
	{
		return __thiz.callObjectMethod(
			"pow",
			"(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::remainder(android::icu::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"remainder",
			"(Landroid/icu/math/BigDecimal;)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::remainder(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1)
	{
		return __thiz.callObjectMethod(
			"remainder",
			"(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jint BigDecimal::scale()
	{
		return __thiz.callMethod<jint>(
			"scale",
			"()I"
		);
	}
	QAndroidJniObject BigDecimal::setScale(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setScale",
			"(I)Landroid/icu/math/BigDecimal;",
			arg0
		);
	}
	QAndroidJniObject BigDecimal::setScale(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"setScale",
			"(II)Landroid/icu/math/BigDecimal;",
			arg0,
			arg1
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
	QAndroidJniObject BigDecimal::subtract(android::icu::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"subtract",
			"(Landroid/icu/math/BigDecimal;)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::subtract(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1)
	{
		return __thiz.callObjectMethod(
			"subtract",
			"(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::toBigDecimal()
	{
		return __thiz.callObjectMethod(
			"toBigDecimal",
			"()Ljava/math/BigDecimal;"
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
	jcharArray BigDecimal::toCharArray()
	{
		return __thiz.callObjectMethod(
			"toCharArray",
			"()[C"
		).object<jcharArray>();
	}
	jstring BigDecimal::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject BigDecimal::unscaledValue()
	{
		return __thiz.callObjectMethod(
			"unscaledValue",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace android::icu::math

