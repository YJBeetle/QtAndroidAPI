#pragma once

#ifndef ANDROID_ICU_MATH_BIGDECIMAL
#define ANDROID_ICU_MATH_BIGDECIMAL

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Number.hpp"

namespace __jni_impl::java::math
{
	class BigDecimal;
}
namespace __jni_impl::java::math
{
	class BigInteger;
}
namespace __jni_impl::android::icu::math
{
	class MathContext;
}

namespace __jni_impl::android::icu::math
{
	class BigDecimal : public __jni_impl::java::lang::Number
	{
	public:
		// Fields
		static QAndroidJniObject ONE();
		static jint ROUND_CEILING();
		static jint ROUND_DOWN();
		static jint ROUND_FLOOR();
		static jint ROUND_HALF_DOWN();
		static jint ROUND_HALF_EVEN();
		static jint ROUND_HALF_UP();
		static jint ROUND_UNNECESSARY();
		static jint ROUND_UP();
		static QAndroidJniObject TEN();
		static QAndroidJniObject ZERO();
		
		// Constructors
		void __constructor(jcharArray arg0, jint arg1, jint arg2);
		void __constructor(jdouble arg0);
		void __constructor(jint arg0);
		void __constructor(jlong arg0);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(__jni_impl::java::math::BigDecimal arg0);
		void __constructor(__jni_impl::java::math::BigInteger arg0);
		void __constructor(__jni_impl::java::math::BigInteger arg0, jint arg1);
		void __constructor(jcharArray arg0);
		
		// Methods
		QAndroidJniObject add(__jni_impl::android::icu::math::BigDecimal arg0, __jni_impl::android::icu::math::MathContext arg1);
		QAndroidJniObject add(__jni_impl::android::icu::math::BigDecimal arg0);
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		QAndroidJniObject abs(__jni_impl::android::icu::math::MathContext arg0);
		QAndroidJniObject abs();
		QAndroidJniObject pow(__jni_impl::android::icu::math::BigDecimal arg0);
		QAndroidJniObject pow(__jni_impl::android::icu::math::BigDecimal arg0, __jni_impl::android::icu::math::MathContext arg1);
		QAndroidJniObject min(__jni_impl::android::icu::math::BigDecimal arg0, __jni_impl::android::icu::math::MathContext arg1);
		QAndroidJniObject min(__jni_impl::android::icu::math::BigDecimal arg0);
		QAndroidJniObject max(__jni_impl::android::icu::math::BigDecimal arg0, __jni_impl::android::icu::math::MathContext arg1);
		QAndroidJniObject max(__jni_impl::android::icu::math::BigDecimal arg0);
		jint compareTo(jobject arg0);
		jint compareTo(__jni_impl::android::icu::math::BigDecimal arg0, __jni_impl::android::icu::math::MathContext arg1);
		jint compareTo(__jni_impl::android::icu::math::BigDecimal arg0);
		jint intValue();
		jlong longValue();
		jfloat floatValue();
		jdouble doubleValue();
		static QAndroidJniObject valueOf(jlong arg0);
		static QAndroidJniObject valueOf(jlong arg0, jint arg1);
		static QAndroidJniObject valueOf(jdouble arg0);
		jcharArray toCharArray();
		jstring format(jint arg0, jint arg1);
		jstring format(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		jint signum();
		QAndroidJniObject divide(__jni_impl::android::icu::math::BigDecimal arg0, jint arg1, jint arg2);
		QAndroidJniObject divide(__jni_impl::android::icu::math::BigDecimal arg0);
		QAndroidJniObject divide(__jni_impl::android::icu::math::BigDecimal arg0, __jni_impl::android::icu::math::MathContext arg1);
		QAndroidJniObject divide(__jni_impl::android::icu::math::BigDecimal arg0, jint arg1);
		QAndroidJniObject remainder(__jni_impl::android::icu::math::BigDecimal arg0, __jni_impl::android::icu::math::MathContext arg1);
		QAndroidJniObject remainder(__jni_impl::android::icu::math::BigDecimal arg0);
		QAndroidJniObject multiply(__jni_impl::android::icu::math::BigDecimal arg0);
		QAndroidJniObject multiply(__jni_impl::android::icu::math::BigDecimal arg0, __jni_impl::android::icu::math::MathContext arg1);
		jint scale();
		QAndroidJniObject plus(__jni_impl::android::icu::math::MathContext arg0);
		QAndroidJniObject plus();
		jlong longValueExact();
		QAndroidJniObject movePointRight(jint arg0);
		QAndroidJniObject toBigIntegerExact();
		QAndroidJniObject subtract(__jni_impl::android::icu::math::BigDecimal arg0);
		QAndroidJniObject subtract(__jni_impl::android::icu::math::BigDecimal arg0, __jni_impl::android::icu::math::MathContext arg1);
		QAndroidJniObject unscaledValue();
		QAndroidJniObject toBigDecimal();
		QAndroidJniObject negate();
		QAndroidJniObject negate(__jni_impl::android::icu::math::MathContext arg0);
		QAndroidJniObject toBigInteger();
		jint intValueExact();
		jshort shortValueExact();
		jbyte byteValueExact();
		QAndroidJniObject setScale(jint arg0);
		QAndroidJniObject setScale(jint arg0, jint arg1);
		QAndroidJniObject movePointLeft(jint arg0);
		QAndroidJniObject divideInteger(__jni_impl::android::icu::math::BigDecimal arg0);
		QAndroidJniObject divideInteger(__jni_impl::android::icu::math::BigDecimal arg0, __jni_impl::android::icu::math::MathContext arg1);
	};
} // namespace __jni_impl::android::icu::math

#include "../../../java/math/BigDecimal.hpp"
#include "../../../java/math/BigInteger.hpp"
#include "MathContext.hpp"

namespace __jni_impl::android::icu::math
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
	
	// Constructors
	void BigDecimal::__constructor(jcharArray arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.math.BigDecimal",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void BigDecimal::__constructor(jdouble arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.math.BigDecimal",
			"(D)V",
			arg0
		);
	}
	void BigDecimal::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.math.BigDecimal",
			"(I)V",
			arg0
		);
	}
	void BigDecimal::__constructor(jlong arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.math.BigDecimal",
			"(J)V",
			arg0
		);
	}
	void BigDecimal::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.math.BigDecimal",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void BigDecimal::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.math.BigDecimal",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void BigDecimal::__constructor(__jni_impl::java::math::BigDecimal arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.math.BigDecimal",
			"(Ljava/math/BigDecimal;)V",
			arg0.__jniObject().object()
		);
	}
	void BigDecimal::__constructor(__jni_impl::java::math::BigInteger arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.math.BigDecimal",
			"(Ljava/math/BigInteger;)V",
			arg0.__jniObject().object()
		);
	}
	void BigDecimal::__constructor(__jni_impl::java::math::BigInteger arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.math.BigDecimal",
			"(Ljava/math/BigInteger;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void BigDecimal::__constructor(jcharArray arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.math.BigDecimal",
			"([C)V",
			arg0
		);
	}
	
	// Methods
	QAndroidJniObject BigDecimal::add(__jni_impl::android::icu::math::BigDecimal arg0, __jni_impl::android::icu::math::MathContext arg1)
	{
		return __thiz.callObjectMethod(
			"add",
			"(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::add(__jni_impl::android::icu::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"add",
			"(Landroid/icu/math/BigDecimal;)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object()
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
	jstring BigDecimal::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint BigDecimal::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject BigDecimal::abs(__jni_impl::android::icu::math::MathContext arg0)
	{
		return __thiz.callObjectMethod(
			"abs",
			"(Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::abs()
	{
		return __thiz.callObjectMethod(
			"abs",
			"()Landroid/icu/math/BigDecimal;"
		);
	}
	QAndroidJniObject BigDecimal::pow(__jni_impl::android::icu::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"pow",
			"(Landroid/icu/math/BigDecimal;)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::pow(__jni_impl::android::icu::math::BigDecimal arg0, __jni_impl::android::icu::math::MathContext arg1)
	{
		return __thiz.callObjectMethod(
			"pow",
			"(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::min(__jni_impl::android::icu::math::BigDecimal arg0, __jni_impl::android::icu::math::MathContext arg1)
	{
		return __thiz.callObjectMethod(
			"min",
			"(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::min(__jni_impl::android::icu::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"min",
			"(Landroid/icu/math/BigDecimal;)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::max(__jni_impl::android::icu::math::BigDecimal arg0, __jni_impl::android::icu::math::MathContext arg1)
	{
		return __thiz.callObjectMethod(
			"max",
			"(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::max(__jni_impl::android::icu::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"max",
			"(Landroid/icu/math/BigDecimal;)Landroid/icu/math/BigDecimal;",
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
	jint BigDecimal::compareTo(__jni_impl::android::icu::math::BigDecimal arg0, __jni_impl::android::icu::math::MathContext arg1)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jint BigDecimal::compareTo(__jni_impl::android::icu::math::BigDecimal arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Landroid/icu/math/BigDecimal;)I",
			arg0.__jniObject().object()
		);
	}
	jint BigDecimal::intValue()
	{
		return __thiz.callMethod<jint>(
			"intValue",
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
	jfloat BigDecimal::floatValue()
	{
		return __thiz.callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jdouble BigDecimal::doubleValue()
	{
		return __thiz.callMethod<jdouble>(
			"doubleValue",
			"()D"
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
	QAndroidJniObject BigDecimal::valueOf(jdouble arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.math.BigDecimal",
			"valueOf",
			"(D)Landroid/icu/math/BigDecimal;",
			arg0
		);
	}
	jcharArray BigDecimal::toCharArray()
	{
		return __thiz.callObjectMethod(
			"toCharArray",
			"()[C"
		).object<jcharArray>();
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
	jint BigDecimal::signum()
	{
		return __thiz.callMethod<jint>(
			"signum",
			"()I"
		);
	}
	QAndroidJniObject BigDecimal::divide(__jni_impl::android::icu::math::BigDecimal arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"divide",
			"(Landroid/icu/math/BigDecimal;II)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject BigDecimal::divide(__jni_impl::android::icu::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"divide",
			"(Landroid/icu/math/BigDecimal;)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::divide(__jni_impl::android::icu::math::BigDecimal arg0, __jni_impl::android::icu::math::MathContext arg1)
	{
		return __thiz.callObjectMethod(
			"divide",
			"(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::divide(__jni_impl::android::icu::math::BigDecimal arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"divide",
			"(Landroid/icu/math/BigDecimal;I)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject BigDecimal::remainder(__jni_impl::android::icu::math::BigDecimal arg0, __jni_impl::android::icu::math::MathContext arg1)
	{
		return __thiz.callObjectMethod(
			"remainder",
			"(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::remainder(__jni_impl::android::icu::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"remainder",
			"(Landroid/icu/math/BigDecimal;)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::multiply(__jni_impl::android::icu::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"multiply",
			"(Landroid/icu/math/BigDecimal;)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::multiply(__jni_impl::android::icu::math::BigDecimal arg0, __jni_impl::android::icu::math::MathContext arg1)
	{
		return __thiz.callObjectMethod(
			"multiply",
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
	QAndroidJniObject BigDecimal::plus(__jni_impl::android::icu::math::MathContext arg0)
	{
		return __thiz.callObjectMethod(
			"plus",
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
	jlong BigDecimal::longValueExact()
	{
		return __thiz.callMethod<jlong>(
			"longValueExact",
			"()J"
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
	QAndroidJniObject BigDecimal::toBigIntegerExact()
	{
		return __thiz.callObjectMethod(
			"toBigIntegerExact",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject BigDecimal::subtract(__jni_impl::android::icu::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"subtract",
			"(Landroid/icu/math/BigDecimal;)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::subtract(__jni_impl::android::icu::math::BigDecimal arg0, __jni_impl::android::icu::math::MathContext arg1)
	{
		return __thiz.callObjectMethod(
			"subtract",
			"(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::unscaledValue()
	{
		return __thiz.callObjectMethod(
			"unscaledValue",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject BigDecimal::toBigDecimal()
	{
		return __thiz.callObjectMethod(
			"toBigDecimal",
			"()Ljava/math/BigDecimal;"
		);
	}
	QAndroidJniObject BigDecimal::negate()
	{
		return __thiz.callObjectMethod(
			"negate",
			"()Landroid/icu/math/BigDecimal;"
		);
	}
	QAndroidJniObject BigDecimal::negate(__jni_impl::android::icu::math::MathContext arg0)
	{
		return __thiz.callObjectMethod(
			"negate",
			"(Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::toBigInteger()
	{
		return __thiz.callObjectMethod(
			"toBigInteger",
			"()Ljava/math/BigInteger;"
		);
	}
	jint BigDecimal::intValueExact()
	{
		return __thiz.callMethod<jint>(
			"intValueExact",
			"()I"
		);
	}
	jshort BigDecimal::shortValueExact()
	{
		return __thiz.callMethod<jshort>(
			"shortValueExact",
			"()S"
		);
	}
	jbyte BigDecimal::byteValueExact()
	{
		return __thiz.callMethod<jbyte>(
			"byteValueExact",
			"()B"
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
	QAndroidJniObject BigDecimal::movePointLeft(jint arg0)
	{
		return __thiz.callObjectMethod(
			"movePointLeft",
			"(I)Landroid/icu/math/BigDecimal;",
			arg0
		);
	}
	QAndroidJniObject BigDecimal::divideInteger(__jni_impl::android::icu::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"divideInteger",
			"(Landroid/icu/math/BigDecimal;)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::divideInteger(__jni_impl::android::icu::math::BigDecimal arg0, __jni_impl::android::icu::math::MathContext arg1)
	{
		return __thiz.callObjectMethod(
			"divideInteger",
			"(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::icu::math

namespace android::icu::math
{
	class BigDecimal : public __jni_impl::android::icu::math::BigDecimal
	{
	public:
		BigDecimal(QAndroidJniObject obj) { __thiz = obj; }
		BigDecimal(jcharArray arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		BigDecimal(jdouble arg0)
		{
			__constructor(
				arg0);
		}
		BigDecimal(jint arg0)
		{
			__constructor(
				arg0);
		}
		BigDecimal(jlong arg0)
		{
			__constructor(
				arg0);
		}
		BigDecimal(jstring arg0)
		{
			__constructor(
				arg0);
		}
		BigDecimal(__jni_impl::java::math::BigDecimal arg0)
		{
			__constructor(
				arg0);
		}
		BigDecimal(__jni_impl::java::math::BigInteger arg0)
		{
			__constructor(
				arg0);
		}
		BigDecimal(__jni_impl::java::math::BigInteger arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		BigDecimal(jcharArray arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::icu::math

#endif // ANDROID_ICU_MATH_BIGDECIMAL

