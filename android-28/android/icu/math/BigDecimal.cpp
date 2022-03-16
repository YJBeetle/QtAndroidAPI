#include "../../../JCharArray.hpp"
#include "./MathContext.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/math/BigDecimal.hpp"
#include "../../../java/math/BigInteger.hpp"
#include "./BigDecimal.hpp"

namespace android::icu::math
{
	// Fields
	android::icu::math::BigDecimal BigDecimal::ONE()
	{
		return getStaticObjectField(
			"android.icu.math.BigDecimal",
			"ONE",
			"Landroid/icu/math/BigDecimal;"
		);
	}
	jint BigDecimal::ROUND_CEILING()
	{
		return getStaticField<jint>(
			"android.icu.math.BigDecimal",
			"ROUND_CEILING"
		);
	}
	jint BigDecimal::ROUND_DOWN()
	{
		return getStaticField<jint>(
			"android.icu.math.BigDecimal",
			"ROUND_DOWN"
		);
	}
	jint BigDecimal::ROUND_FLOOR()
	{
		return getStaticField<jint>(
			"android.icu.math.BigDecimal",
			"ROUND_FLOOR"
		);
	}
	jint BigDecimal::ROUND_HALF_DOWN()
	{
		return getStaticField<jint>(
			"android.icu.math.BigDecimal",
			"ROUND_HALF_DOWN"
		);
	}
	jint BigDecimal::ROUND_HALF_EVEN()
	{
		return getStaticField<jint>(
			"android.icu.math.BigDecimal",
			"ROUND_HALF_EVEN"
		);
	}
	jint BigDecimal::ROUND_HALF_UP()
	{
		return getStaticField<jint>(
			"android.icu.math.BigDecimal",
			"ROUND_HALF_UP"
		);
	}
	jint BigDecimal::ROUND_UNNECESSARY()
	{
		return getStaticField<jint>(
			"android.icu.math.BigDecimal",
			"ROUND_UNNECESSARY"
		);
	}
	jint BigDecimal::ROUND_UP()
	{
		return getStaticField<jint>(
			"android.icu.math.BigDecimal",
			"ROUND_UP"
		);
	}
	android::icu::math::BigDecimal BigDecimal::TEN()
	{
		return getStaticObjectField(
			"android.icu.math.BigDecimal",
			"TEN",
			"Landroid/icu/math/BigDecimal;"
		);
	}
	android::icu::math::BigDecimal BigDecimal::ZERO()
	{
		return getStaticObjectField(
			"android.icu.math.BigDecimal",
			"ZERO",
			"Landroid/icu/math/BigDecimal;"
		);
	}
	
	// Constructors
	BigDecimal::BigDecimal(JCharArray arg0)
		: java::lang::Number(
			"android.icu.math.BigDecimal",
			"([C)V",
			arg0.object<jcharArray>()
		) {}
	BigDecimal::BigDecimal(jdouble arg0)
		: java::lang::Number(
			"android.icu.math.BigDecimal",
			"(D)V",
			arg0
		) {}
	BigDecimal::BigDecimal(jint arg0)
		: java::lang::Number(
			"android.icu.math.BigDecimal",
			"(I)V",
			arg0
		) {}
	BigDecimal::BigDecimal(JString arg0)
		: java::lang::Number(
			"android.icu.math.BigDecimal",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	BigDecimal::BigDecimal(java::math::BigDecimal arg0)
		: java::lang::Number(
			"android.icu.math.BigDecimal",
			"(Ljava/math/BigDecimal;)V",
			arg0.object()
		) {}
	BigDecimal::BigDecimal(java::math::BigInteger arg0)
		: java::lang::Number(
			"android.icu.math.BigDecimal",
			"(Ljava/math/BigInteger;)V",
			arg0.object()
		) {}
	BigDecimal::BigDecimal(jlong arg0)
		: java::lang::Number(
			"android.icu.math.BigDecimal",
			"(J)V",
			arg0
		) {}
	BigDecimal::BigDecimal(java::math::BigInteger arg0, jint arg1)
		: java::lang::Number(
			"android.icu.math.BigDecimal",
			"(Ljava/math/BigInteger;I)V",
			arg0.object(),
			arg1
		) {}
	BigDecimal::BigDecimal(JCharArray arg0, jint arg1, jint arg2)
		: java::lang::Number(
			"android.icu.math.BigDecimal",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		) {}
	
	// Methods
	android::icu::math::BigDecimal BigDecimal::valueOf(jdouble arg0)
	{
		return callStaticObjectMethod(
			"android.icu.math.BigDecimal",
			"valueOf",
			"(D)Landroid/icu/math/BigDecimal;",
			arg0
		);
	}
	android::icu::math::BigDecimal BigDecimal::valueOf(jlong arg0)
	{
		return callStaticObjectMethod(
			"android.icu.math.BigDecimal",
			"valueOf",
			"(J)Landroid/icu/math/BigDecimal;",
			arg0
		);
	}
	android::icu::math::BigDecimal BigDecimal::valueOf(jlong arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.icu.math.BigDecimal",
			"valueOf",
			"(JI)Landroid/icu/math/BigDecimal;",
			arg0,
			arg1
		);
	}
	android::icu::math::BigDecimal BigDecimal::abs() const
	{
		return callObjectMethod(
			"abs",
			"()Landroid/icu/math/BigDecimal;"
		);
	}
	android::icu::math::BigDecimal BigDecimal::abs(android::icu::math::MathContext arg0) const
	{
		return callObjectMethod(
			"abs",
			"(Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;",
			arg0.object()
		);
	}
	android::icu::math::BigDecimal BigDecimal::add(android::icu::math::BigDecimal arg0) const
	{
		return callObjectMethod(
			"add",
			"(Landroid/icu/math/BigDecimal;)Landroid/icu/math/BigDecimal;",
			arg0.object()
		);
	}
	android::icu::math::BigDecimal BigDecimal::add(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1) const
	{
		return callObjectMethod(
			"add",
			"(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;",
			arg0.object(),
			arg1.object()
		);
	}
	jbyte BigDecimal::byteValueExact() const
	{
		return callMethod<jbyte>(
			"byteValueExact",
			"()B"
		);
	}
	jint BigDecimal::compareTo(android::icu::math::BigDecimal arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/icu/math/BigDecimal;)I",
			arg0.object()
		);
	}
	jint BigDecimal::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint BigDecimal::compareTo(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)I",
			arg0.object(),
			arg1.object()
		);
	}
	android::icu::math::BigDecimal BigDecimal::divide(android::icu::math::BigDecimal arg0) const
	{
		return callObjectMethod(
			"divide",
			"(Landroid/icu/math/BigDecimal;)Landroid/icu/math/BigDecimal;",
			arg0.object()
		);
	}
	android::icu::math::BigDecimal BigDecimal::divide(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1) const
	{
		return callObjectMethod(
			"divide",
			"(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;",
			arg0.object(),
			arg1.object()
		);
	}
	android::icu::math::BigDecimal BigDecimal::divide(android::icu::math::BigDecimal arg0, jint arg1) const
	{
		return callObjectMethod(
			"divide",
			"(Landroid/icu/math/BigDecimal;I)Landroid/icu/math/BigDecimal;",
			arg0.object(),
			arg1
		);
	}
	android::icu::math::BigDecimal BigDecimal::divide(android::icu::math::BigDecimal arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"divide",
			"(Landroid/icu/math/BigDecimal;II)Landroid/icu/math/BigDecimal;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	android::icu::math::BigDecimal BigDecimal::divideInteger(android::icu::math::BigDecimal arg0) const
	{
		return callObjectMethod(
			"divideInteger",
			"(Landroid/icu/math/BigDecimal;)Landroid/icu/math/BigDecimal;",
			arg0.object()
		);
	}
	android::icu::math::BigDecimal BigDecimal::divideInteger(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1) const
	{
		return callObjectMethod(
			"divideInteger",
			"(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;",
			arg0.object(),
			arg1.object()
		);
	}
	jdouble BigDecimal::doubleValue() const
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jboolean BigDecimal::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jfloat BigDecimal::floatValue() const
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	JString BigDecimal::format(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"format",
			"(II)Ljava/lang/String;",
			arg0,
			arg1
		);
	}
	JString BigDecimal::format(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5) const
	{
		return callObjectMethod(
			"format",
			"(IIIIII)Ljava/lang/String;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jint BigDecimal::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint BigDecimal::intValue() const
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jint BigDecimal::intValueExact() const
	{
		return callMethod<jint>(
			"intValueExact",
			"()I"
		);
	}
	jlong BigDecimal::longValue() const
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	jlong BigDecimal::longValueExact() const
	{
		return callMethod<jlong>(
			"longValueExact",
			"()J"
		);
	}
	android::icu::math::BigDecimal BigDecimal::max(android::icu::math::BigDecimal arg0) const
	{
		return callObjectMethod(
			"max",
			"(Landroid/icu/math/BigDecimal;)Landroid/icu/math/BigDecimal;",
			arg0.object()
		);
	}
	android::icu::math::BigDecimal BigDecimal::max(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1) const
	{
		return callObjectMethod(
			"max",
			"(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;",
			arg0.object(),
			arg1.object()
		);
	}
	android::icu::math::BigDecimal BigDecimal::min(android::icu::math::BigDecimal arg0) const
	{
		return callObjectMethod(
			"min",
			"(Landroid/icu/math/BigDecimal;)Landroid/icu/math/BigDecimal;",
			arg0.object()
		);
	}
	android::icu::math::BigDecimal BigDecimal::min(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1) const
	{
		return callObjectMethod(
			"min",
			"(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;",
			arg0.object(),
			arg1.object()
		);
	}
	android::icu::math::BigDecimal BigDecimal::movePointLeft(jint arg0) const
	{
		return callObjectMethod(
			"movePointLeft",
			"(I)Landroid/icu/math/BigDecimal;",
			arg0
		);
	}
	android::icu::math::BigDecimal BigDecimal::movePointRight(jint arg0) const
	{
		return callObjectMethod(
			"movePointRight",
			"(I)Landroid/icu/math/BigDecimal;",
			arg0
		);
	}
	android::icu::math::BigDecimal BigDecimal::multiply(android::icu::math::BigDecimal arg0) const
	{
		return callObjectMethod(
			"multiply",
			"(Landroid/icu/math/BigDecimal;)Landroid/icu/math/BigDecimal;",
			arg0.object()
		);
	}
	android::icu::math::BigDecimal BigDecimal::multiply(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1) const
	{
		return callObjectMethod(
			"multiply",
			"(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;",
			arg0.object(),
			arg1.object()
		);
	}
	android::icu::math::BigDecimal BigDecimal::negate() const
	{
		return callObjectMethod(
			"negate",
			"()Landroid/icu/math/BigDecimal;"
		);
	}
	android::icu::math::BigDecimal BigDecimal::negate(android::icu::math::MathContext arg0) const
	{
		return callObjectMethod(
			"negate",
			"(Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;",
			arg0.object()
		);
	}
	android::icu::math::BigDecimal BigDecimal::plus() const
	{
		return callObjectMethod(
			"plus",
			"()Landroid/icu/math/BigDecimal;"
		);
	}
	android::icu::math::BigDecimal BigDecimal::plus(android::icu::math::MathContext arg0) const
	{
		return callObjectMethod(
			"plus",
			"(Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;",
			arg0.object()
		);
	}
	android::icu::math::BigDecimal BigDecimal::pow(android::icu::math::BigDecimal arg0) const
	{
		return callObjectMethod(
			"pow",
			"(Landroid/icu/math/BigDecimal;)Landroid/icu/math/BigDecimal;",
			arg0.object()
		);
	}
	android::icu::math::BigDecimal BigDecimal::pow(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1) const
	{
		return callObjectMethod(
			"pow",
			"(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;",
			arg0.object(),
			arg1.object()
		);
	}
	android::icu::math::BigDecimal BigDecimal::remainder(android::icu::math::BigDecimal arg0) const
	{
		return callObjectMethod(
			"remainder",
			"(Landroid/icu/math/BigDecimal;)Landroid/icu/math/BigDecimal;",
			arg0.object()
		);
	}
	android::icu::math::BigDecimal BigDecimal::remainder(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1) const
	{
		return callObjectMethod(
			"remainder",
			"(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;",
			arg0.object(),
			arg1.object()
		);
	}
	jint BigDecimal::scale() const
	{
		return callMethod<jint>(
			"scale",
			"()I"
		);
	}
	android::icu::math::BigDecimal BigDecimal::setScale(jint arg0) const
	{
		return callObjectMethod(
			"setScale",
			"(I)Landroid/icu/math/BigDecimal;",
			arg0
		);
	}
	android::icu::math::BigDecimal BigDecimal::setScale(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setScale",
			"(II)Landroid/icu/math/BigDecimal;",
			arg0,
			arg1
		);
	}
	jshort BigDecimal::shortValueExact() const
	{
		return callMethod<jshort>(
			"shortValueExact",
			"()S"
		);
	}
	jint BigDecimal::signum() const
	{
		return callMethod<jint>(
			"signum",
			"()I"
		);
	}
	android::icu::math::BigDecimal BigDecimal::subtract(android::icu::math::BigDecimal arg0) const
	{
		return callObjectMethod(
			"subtract",
			"(Landroid/icu/math/BigDecimal;)Landroid/icu/math/BigDecimal;",
			arg0.object()
		);
	}
	android::icu::math::BigDecimal BigDecimal::subtract(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1) const
	{
		return callObjectMethod(
			"subtract",
			"(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;",
			arg0.object(),
			arg1.object()
		);
	}
	java::math::BigDecimal BigDecimal::toBigDecimal() const
	{
		return callObjectMethod(
			"toBigDecimal",
			"()Ljava/math/BigDecimal;"
		);
	}
	java::math::BigInteger BigDecimal::toBigInteger() const
	{
		return callObjectMethod(
			"toBigInteger",
			"()Ljava/math/BigInteger;"
		);
	}
	java::math::BigInteger BigDecimal::toBigIntegerExact() const
	{
		return callObjectMethod(
			"toBigIntegerExact",
			"()Ljava/math/BigInteger;"
		);
	}
	JCharArray BigDecimal::toCharArray() const
	{
		return callObjectMethod(
			"toCharArray",
			"()[C"
		);
	}
	JString BigDecimal::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	java::math::BigInteger BigDecimal::unscaledValue() const
	{
		return callObjectMethod(
			"unscaledValue",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace android::icu::math

