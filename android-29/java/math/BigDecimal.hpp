#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Number.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}
namespace __jni_impl::java::math
{
	class BigInteger;
}
namespace __jni_impl::java::math
{
	class MathContext;
}
namespace __jni_impl::java::math
{
	class RoundingMode;
}

namespace __jni_impl::java::math
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
		void __constructor(jcharArray arg0);
		void __constructor(jdouble arg0);
		void __constructor(jint arg0);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(__jni_impl::java::math::BigInteger arg0);
		void __constructor(jlong arg0);
		void __constructor(jcharArray arg0, __jni_impl::java::math::MathContext arg1);
		void __constructor(jdouble arg0, __jni_impl::java::math::MathContext arg1);
		void __constructor(jint arg0, __jni_impl::java::math::MathContext arg1);
		void __constructor(jstring arg0, __jni_impl::java::math::MathContext arg1);
		void __constructor(const QString &arg0, __jni_impl::java::math::MathContext arg1);
		void __constructor(__jni_impl::java::math::BigInteger arg0, jint arg1);
		void __constructor(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::MathContext arg1);
		void __constructor(jlong arg0, __jni_impl::java::math::MathContext arg1);
		void __constructor(jcharArray arg0, jint arg1, jint arg2);
		void __constructor(__jni_impl::java::math::BigInteger arg0, jint arg1, __jni_impl::java::math::MathContext arg2);
		void __constructor(jcharArray arg0, jint arg1, jint arg2, __jni_impl::java::math::MathContext arg3);
		
		// Methods
		static QAndroidJniObject valueOf(jdouble arg0);
		static QAndroidJniObject valueOf(jlong arg0);
		static QAndroidJniObject valueOf(jlong arg0, jint arg1);
		QAndroidJniObject abs();
		QAndroidJniObject abs(__jni_impl::java::math::MathContext arg0);
		QAndroidJniObject add(__jni_impl::java::math::BigDecimal arg0);
		QAndroidJniObject add(__jni_impl::java::math::BigDecimal arg0, __jni_impl::java::math::MathContext arg1);
		jbyte byteValueExact();
		jint compareTo(jobject arg0);
		jint compareTo(__jni_impl::java::math::BigDecimal arg0);
		QAndroidJniObject divide(__jni_impl::java::math::BigDecimal arg0);
		QAndroidJniObject divide(__jni_impl::java::math::BigDecimal arg0, jint arg1);
		QAndroidJniObject divide(__jni_impl::java::math::BigDecimal arg0, __jni_impl::java::math::MathContext arg1);
		QAndroidJniObject divide(__jni_impl::java::math::BigDecimal arg0, __jni_impl::java::math::RoundingMode arg1);
		QAndroidJniObject divide(__jni_impl::java::math::BigDecimal arg0, jint arg1, jint arg2);
		QAndroidJniObject divide(__jni_impl::java::math::BigDecimal arg0, jint arg1, __jni_impl::java::math::RoundingMode arg2);
		jarray divideAndRemainder(__jni_impl::java::math::BigDecimal arg0);
		jarray divideAndRemainder(__jni_impl::java::math::BigDecimal arg0, __jni_impl::java::math::MathContext arg1);
		QAndroidJniObject divideToIntegralValue(__jni_impl::java::math::BigDecimal arg0);
		QAndroidJniObject divideToIntegralValue(__jni_impl::java::math::BigDecimal arg0, __jni_impl::java::math::MathContext arg1);
		jdouble doubleValue();
		jboolean equals(jobject arg0);
		jfloat floatValue();
		jint hashCode();
		jint intValue();
		jint intValueExact();
		jlong longValue();
		jlong longValueExact();
		QAndroidJniObject max(__jni_impl::java::math::BigDecimal arg0);
		QAndroidJniObject min(__jni_impl::java::math::BigDecimal arg0);
		QAndroidJniObject movePointLeft(jint arg0);
		QAndroidJniObject movePointRight(jint arg0);
		QAndroidJniObject multiply(__jni_impl::java::math::BigDecimal arg0);
		QAndroidJniObject multiply(__jni_impl::java::math::BigDecimal arg0, __jni_impl::java::math::MathContext arg1);
		QAndroidJniObject negate();
		QAndroidJniObject negate(__jni_impl::java::math::MathContext arg0);
		QAndroidJniObject plus();
		QAndroidJniObject plus(__jni_impl::java::math::MathContext arg0);
		QAndroidJniObject pow(jint arg0);
		QAndroidJniObject pow(jint arg0, __jni_impl::java::math::MathContext arg1);
		jint precision();
		QAndroidJniObject remainder(__jni_impl::java::math::BigDecimal arg0);
		QAndroidJniObject remainder(__jni_impl::java::math::BigDecimal arg0, __jni_impl::java::math::MathContext arg1);
		QAndroidJniObject round(__jni_impl::java::math::MathContext arg0);
		jint scale();
		QAndroidJniObject scaleByPowerOfTen(jint arg0);
		QAndroidJniObject setScale(jint arg0);
		QAndroidJniObject setScale(jint arg0, jint arg1);
		QAndroidJniObject setScale(jint arg0, __jni_impl::java::math::RoundingMode arg1);
		jshort shortValueExact();
		jint signum();
		QAndroidJniObject sqrt(__jni_impl::java::math::MathContext arg0);
		QAndroidJniObject stripTrailingZeros();
		QAndroidJniObject subtract(__jni_impl::java::math::BigDecimal arg0);
		QAndroidJniObject subtract(__jni_impl::java::math::BigDecimal arg0, __jni_impl::java::math::MathContext arg1);
		QAndroidJniObject toBigInteger();
		QAndroidJniObject toBigIntegerExact();
		jstring toEngineeringString();
		jstring toPlainString();
		jstring toString();
		QAndroidJniObject ulp();
		QAndroidJniObject unscaledValue();
	};
} // namespace __jni_impl::java::math

#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "BigInteger.hpp"
#include "MathContext.hpp"
#include "RoundingMode.hpp"

namespace __jni_impl::java::math
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
	
	// Constructors
	void BigDecimal::__constructor(jcharArray arg0)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigDecimal",
			"([C)V",
			arg0
		);
	}
	void BigDecimal::__constructor(jdouble arg0)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigDecimal",
			"(D)V",
			arg0
		);
	}
	void BigDecimal::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigDecimal",
			"(I)V",
			arg0
		);
	}
	void BigDecimal::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigDecimal",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void BigDecimal::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigDecimal",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void BigDecimal::__constructor(__jni_impl::java::math::BigInteger arg0)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigDecimal",
			"(Ljava/math/BigInteger;)V",
			arg0.__jniObject().object()
		);
	}
	void BigDecimal::__constructor(jlong arg0)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigDecimal",
			"(J)V",
			arg0
		);
	}
	void BigDecimal::__constructor(jcharArray arg0, __jni_impl::java::math::MathContext arg1)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigDecimal",
			"([CLjava/math/MathContext;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void BigDecimal::__constructor(jdouble arg0, __jni_impl::java::math::MathContext arg1)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigDecimal",
			"(DLjava/math/MathContext;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void BigDecimal::__constructor(jint arg0, __jni_impl::java::math::MathContext arg1)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigDecimal",
			"(ILjava/math/MathContext;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void BigDecimal::__constructor(jstring arg0, __jni_impl::java::math::MathContext arg1)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigDecimal",
			"(Ljava/lang/String;Ljava/math/MathContext;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void BigDecimal::__constructor(const QString &arg0, __jni_impl::java::math::MathContext arg1)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigDecimal",
			"(Ljava/lang/String;Ljava/math/MathContext;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void BigDecimal::__constructor(__jni_impl::java::math::BigInteger arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigDecimal",
			"(Ljava/math/BigInteger;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void BigDecimal::__constructor(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::MathContext arg1)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigDecimal",
			"(Ljava/math/BigInteger;Ljava/math/MathContext;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void BigDecimal::__constructor(jlong arg0, __jni_impl::java::math::MathContext arg1)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigDecimal",
			"(JLjava/math/MathContext;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void BigDecimal::__constructor(jcharArray arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigDecimal",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void BigDecimal::__constructor(__jni_impl::java::math::BigInteger arg0, jint arg1, __jni_impl::java::math::MathContext arg2)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigDecimal",
			"(Ljava/math/BigInteger;ILjava/math/MathContext;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void BigDecimal::__constructor(jcharArray arg0, jint arg1, jint arg2, __jni_impl::java::math::MathContext arg3)
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
	QAndroidJniObject BigDecimal::abs(__jni_impl::java::math::MathContext arg0)
	{
		return __thiz.callObjectMethod(
			"abs",
			"(Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::add(__jni_impl::java::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"add",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::add(__jni_impl::java::math::BigDecimal arg0, __jni_impl::java::math::MathContext arg1)
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
	jint BigDecimal::compareTo(__jni_impl::java::math::BigDecimal arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/math/BigDecimal;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::divide(__jni_impl::java::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"divide",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::divide(__jni_impl::java::math::BigDecimal arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"divide",
			"(Ljava/math/BigDecimal;I)Ljava/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject BigDecimal::divide(__jni_impl::java::math::BigDecimal arg0, __jni_impl::java::math::MathContext arg1)
	{
		return __thiz.callObjectMethod(
			"divide",
			"(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::divide(__jni_impl::java::math::BigDecimal arg0, __jni_impl::java::math::RoundingMode arg1)
	{
		return __thiz.callObjectMethod(
			"divide",
			"(Ljava/math/BigDecimal;Ljava/math/RoundingMode;)Ljava/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::divide(__jni_impl::java::math::BigDecimal arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"divide",
			"(Ljava/math/BigDecimal;II)Ljava/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject BigDecimal::divide(__jni_impl::java::math::BigDecimal arg0, jint arg1, __jni_impl::java::math::RoundingMode arg2)
	{
		return __thiz.callObjectMethod(
			"divide",
			"(Ljava/math/BigDecimal;ILjava/math/RoundingMode;)Ljava/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jarray BigDecimal::divideAndRemainder(__jni_impl::java::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"divideAndRemainder",
			"(Ljava/math/BigDecimal;)[Ljava/math/BigDecimal;",
			arg0.__jniObject().object()
		).object<jarray>();
	}
	jarray BigDecimal::divideAndRemainder(__jni_impl::java::math::BigDecimal arg0, __jni_impl::java::math::MathContext arg1)
	{
		return __thiz.callObjectMethod(
			"divideAndRemainder",
			"(Ljava/math/BigDecimal;Ljava/math/MathContext;)[Ljava/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		).object<jarray>();
	}
	QAndroidJniObject BigDecimal::divideToIntegralValue(__jni_impl::java::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"divideToIntegralValue",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::divideToIntegralValue(__jni_impl::java::math::BigDecimal arg0, __jni_impl::java::math::MathContext arg1)
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
	QAndroidJniObject BigDecimal::max(__jni_impl::java::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"max",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::min(__jni_impl::java::math::BigDecimal arg0)
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
	QAndroidJniObject BigDecimal::multiply(__jni_impl::java::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"multiply",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::multiply(__jni_impl::java::math::BigDecimal arg0, __jni_impl::java::math::MathContext arg1)
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
	QAndroidJniObject BigDecimal::negate(__jni_impl::java::math::MathContext arg0)
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
	QAndroidJniObject BigDecimal::plus(__jni_impl::java::math::MathContext arg0)
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
	QAndroidJniObject BigDecimal::pow(jint arg0, __jni_impl::java::math::MathContext arg1)
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
	QAndroidJniObject BigDecimal::remainder(__jni_impl::java::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"remainder",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::remainder(__jni_impl::java::math::BigDecimal arg0, __jni_impl::java::math::MathContext arg1)
	{
		return __thiz.callObjectMethod(
			"remainder",
			"(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::round(__jni_impl::java::math::MathContext arg0)
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
	QAndroidJniObject BigDecimal::setScale(jint arg0, __jni_impl::java::math::RoundingMode arg1)
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
	QAndroidJniObject BigDecimal::sqrt(__jni_impl::java::math::MathContext arg0)
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
	QAndroidJniObject BigDecimal::subtract(__jni_impl::java::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"subtract",
			"(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigDecimal::subtract(__jni_impl::java::math::BigDecimal arg0, __jni_impl::java::math::MathContext arg1)
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
} // namespace __jni_impl::java::math

namespace java::math
{
	class BigDecimal : public __jni_impl::java::math::BigDecimal
	{
	public:
		BigDecimal(QAndroidJniObject obj) { __thiz = obj; }
		BigDecimal(jcharArray arg0)
		{
			__constructor(
				arg0);
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
		BigDecimal(jstring arg0)
		{
			__constructor(
				arg0);
		}
		BigDecimal(__jni_impl::java::math::BigInteger arg0)
		{
			__constructor(
				arg0);
		}
		BigDecimal(jlong arg0)
		{
			__constructor(
				arg0);
		}
		BigDecimal(jcharArray arg0, __jni_impl::java::math::MathContext arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		BigDecimal(jdouble arg0, __jni_impl::java::math::MathContext arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		BigDecimal(jint arg0, __jni_impl::java::math::MathContext arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		BigDecimal(jstring arg0, __jni_impl::java::math::MathContext arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		BigDecimal(__jni_impl::java::math::BigInteger arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		BigDecimal(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::MathContext arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		BigDecimal(jlong arg0, __jni_impl::java::math::MathContext arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		BigDecimal(jcharArray arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		BigDecimal(__jni_impl::java::math::BigInteger arg0, jint arg1, __jni_impl::java::math::MathContext arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		BigDecimal(jcharArray arg0, jint arg1, jint arg2, __jni_impl::java::math::MathContext arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace java::math

