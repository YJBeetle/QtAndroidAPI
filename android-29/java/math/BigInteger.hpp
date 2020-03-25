#pragma once

#ifndef JAVA_MATH_BIGINTEGER
#define JAVA_MATH_BIGINTEGER

#include "../../__JniBaseClass.hpp"
#include "../lang/Number.hpp"

namespace __jni_impl::java::util
{
	class Random;
}
namespace __jni_impl::java::lang
{
	class StringBuilder;
}
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
	class BigInteger : public __jni_impl::java::lang::Number
	{
	public:
		// Fields
		static QAndroidJniObject ZERO();
		static QAndroidJniObject ONE();
		static QAndroidJniObject TWO();
		static QAndroidJniObject TEN();
		
		// Constructors
		void __constructor(jint arg0, __jni_impl::java::util::Random arg1);
		void __constructor(jstring arg0);
		void __constructor(jint arg0, jint arg1, __jni_impl::java::util::Random arg2);
		void __constructor(jint arg0, jbyteArray arg1, jint arg2, jint arg3);
		void __constructor(jbyteArray arg0);
		void __constructor(jbyteArray arg0, jint arg1, jint arg2);
		void __constructor(jstring arg0, jint arg1);
		void __constructor(jint arg0, jbyteArray arg1);
		
		// Methods
		QAndroidJniObject add(__jni_impl::java::math::BigInteger arg0);
		jint bitCount();
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		QAndroidJniObject toString(jint arg0);
		jint hashCode();
		QAndroidJniObject abs();
		QAndroidJniObject sqrt();
		QAndroidJniObject pow(jint arg0);
		QAndroidJniObject min(__jni_impl::java::math::BigInteger arg0);
		QAndroidJniObject max(__jni_impl::java::math::BigInteger arg0);
		jint compareTo(__jni_impl::java::math::BigInteger arg0);
		jint compareTo(jobject arg0);
		jint intValue();
		jlong longValue();
		jfloat floatValue();
		jdouble doubleValue();
		static QAndroidJniObject valueOf(jlong arg0);
		QAndroidJniObject toByteArray();
		QAndroidJniObject mod(__jni_impl::java::math::BigInteger arg0);
		jint signum();
		QAndroidJniObject shiftLeft(jint arg0);
		QAndroidJniObject divide(__jni_impl::java::math::BigInteger arg0);
		QAndroidJniObject remainder(__jni_impl::java::math::BigInteger arg0);
		QAndroidJniObject multiply(__jni_impl::java::math::BigInteger arg0);
		QAndroidJniObject setBit(jint arg0);
		QAndroidJniObject _or(__jni_impl::java::math::BigInteger arg0);
		jlong longValueExact();
		QAndroidJniObject divideAndRemainder(__jni_impl::java::math::BigInteger arg0);
		jint bitLength();
		jboolean testBit(jint arg0);
		QAndroidJniObject subtract(__jni_impl::java::math::BigInteger arg0);
		QAndroidJniObject shiftRight(jint arg0);
		jint getLowestSetBit();
		QAndroidJniObject modPow(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1);
		QAndroidJniObject negate();
		QAndroidJniObject _and(__jni_impl::java::math::BigInteger arg0);
		QAndroidJniObject _not();
		QAndroidJniObject modInverse(__jni_impl::java::math::BigInteger arg0);
		static QAndroidJniObject probablePrime(jint arg0, __jni_impl::java::util::Random arg1);
		QAndroidJniObject nextProbablePrime();
		QAndroidJniObject sqrtAndRemainder();
		QAndroidJniObject gcd(__jni_impl::java::math::BigInteger arg0);
		QAndroidJniObject _xor(__jni_impl::java::math::BigInteger arg0);
		QAndroidJniObject andNot(__jni_impl::java::math::BigInteger arg0);
		QAndroidJniObject clearBit(jint arg0);
		QAndroidJniObject flipBit(jint arg0);
		jboolean isProbablePrime(jint arg0);
		jint intValueExact();
		jshort shortValueExact();
		jbyte byteValueExact();
	};
} // namespace __jni_impl::java::math

#include "../util/Random.hpp"
#include "../lang/StringBuilder.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"

namespace __jni_impl::java::math
{
	// Fields
	QAndroidJniObject BigInteger::ZERO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.math.BigInteger",
			"ZERO",
			"Ljava/math/BigInteger;");
	}
	QAndroidJniObject BigInteger::ONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.math.BigInteger",
			"ONE",
			"Ljava/math/BigInteger;");
	}
	QAndroidJniObject BigInteger::TWO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.math.BigInteger",
			"TWO",
			"Ljava/math/BigInteger;");
	}
	QAndroidJniObject BigInteger::TEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.math.BigInteger",
			"TEN",
			"Ljava/math/BigInteger;");
	}
	
	// Constructors
	void BigInteger::__constructor(jint arg0, __jni_impl::java::util::Random arg1)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigInteger",
			"(ILjava/util/Random;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void BigInteger::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigInteger",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void BigInteger::__constructor(jint arg0, jint arg1, __jni_impl::java::util::Random arg2)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigInteger",
			"(IILjava/util/Random;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void BigInteger::__constructor(jint arg0, jbyteArray arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigInteger",
			"(I[BII)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void BigInteger::__constructor(jbyteArray arg0)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigInteger",
			"([B)V",
			arg0);
	}
	void BigInteger::__constructor(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigInteger",
			"([BII)V",
			arg0,
			arg1,
			arg2);
	}
	void BigInteger::__constructor(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigInteger",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1);
	}
	void BigInteger::__constructor(jint arg0, jbyteArray arg1)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigInteger",
			"(I[B)V",
			arg0,
			arg1);
	}
	
	// Methods
	QAndroidJniObject BigInteger::add(__jni_impl::java::math::BigInteger arg0)
	{
		return __thiz.callObjectMethod(
			"add",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.__jniObject().object());
	}
	jint BigInteger::bitCount()
	{
		return __thiz.callMethod<jint>(
			"bitCount",
			"()I");
	}
	jboolean BigInteger::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject BigInteger::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject BigInteger::toString(jint arg0)
	{
		return __thiz.callObjectMethod(
			"toString",
			"(I)Ljava/lang/String;",
			arg0);
	}
	jint BigInteger::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject BigInteger::abs()
	{
		return __thiz.callObjectMethod(
			"abs",
			"()Ljava/math/BigInteger;");
	}
	QAndroidJniObject BigInteger::sqrt()
	{
		return __thiz.callObjectMethod(
			"sqrt",
			"()Ljava/math/BigInteger;");
	}
	QAndroidJniObject BigInteger::pow(jint arg0)
	{
		return __thiz.callObjectMethod(
			"pow",
			"(I)Ljava/math/BigInteger;",
			arg0);
	}
	QAndroidJniObject BigInteger::min(__jni_impl::java::math::BigInteger arg0)
	{
		return __thiz.callObjectMethod(
			"min",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject BigInteger::max(__jni_impl::java::math::BigInteger arg0)
	{
		return __thiz.callObjectMethod(
			"max",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.__jniObject().object());
	}
	jint BigInteger::compareTo(__jni_impl::java::math::BigInteger arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/math/BigInteger;)I",
			arg0.__jniObject().object());
	}
	jint BigInteger::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	jint BigInteger::intValue()
	{
		return __thiz.callMethod<jint>(
			"intValue",
			"()I");
	}
	jlong BigInteger::longValue()
	{
		return __thiz.callMethod<jlong>(
			"longValue",
			"()J");
	}
	jfloat BigInteger::floatValue()
	{
		return __thiz.callMethod<jfloat>(
			"floatValue",
			"()F");
	}
	jdouble BigInteger::doubleValue()
	{
		return __thiz.callMethod<jdouble>(
			"doubleValue",
			"()D");
	}
	QAndroidJniObject BigInteger::valueOf(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.math.BigInteger",
			"valueOf",
			"(J)Ljava/math/BigInteger;",
			arg0);
	}
	QAndroidJniObject BigInteger::toByteArray()
	{
		return __thiz.callObjectMethod(
			"toByteArray",
			"()[B");
	}
	QAndroidJniObject BigInteger::mod(__jni_impl::java::math::BigInteger arg0)
	{
		return __thiz.callObjectMethod(
			"mod",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.__jniObject().object());
	}
	jint BigInteger::signum()
	{
		return __thiz.callMethod<jint>(
			"signum",
			"()I");
	}
	QAndroidJniObject BigInteger::shiftLeft(jint arg0)
	{
		return __thiz.callObjectMethod(
			"shiftLeft",
			"(I)Ljava/math/BigInteger;",
			arg0);
	}
	QAndroidJniObject BigInteger::divide(__jni_impl::java::math::BigInteger arg0)
	{
		return __thiz.callObjectMethod(
			"divide",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject BigInteger::remainder(__jni_impl::java::math::BigInteger arg0)
	{
		return __thiz.callObjectMethod(
			"remainder",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject BigInteger::multiply(__jni_impl::java::math::BigInteger arg0)
	{
		return __thiz.callObjectMethod(
			"multiply",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject BigInteger::setBit(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setBit",
			"(I)Ljava/math/BigInteger;",
			arg0);
	}
	QAndroidJniObject BigInteger::_or(__jni_impl::java::math::BigInteger arg0)
	{
		return __thiz.callObjectMethod(
			"or",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.__jniObject().object());
	}
	jlong BigInteger::longValueExact()
	{
		return __thiz.callMethod<jlong>(
			"longValueExact",
			"()J");
	}
	QAndroidJniObject BigInteger::divideAndRemainder(__jni_impl::java::math::BigInteger arg0)
	{
		return __thiz.callObjectMethod(
			"divideAndRemainder",
			"(Ljava/math/BigInteger;)[Ljava/math/BigInteger;",
			arg0.__jniObject().object());
	}
	jint BigInteger::bitLength()
	{
		return __thiz.callMethod<jint>(
			"bitLength",
			"()I");
	}
	jboolean BigInteger::testBit(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"testBit",
			"(I)Z",
			arg0);
	}
	QAndroidJniObject BigInteger::subtract(__jni_impl::java::math::BigInteger arg0)
	{
		return __thiz.callObjectMethod(
			"subtract",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject BigInteger::shiftRight(jint arg0)
	{
		return __thiz.callObjectMethod(
			"shiftRight",
			"(I)Ljava/math/BigInteger;",
			arg0);
	}
	jint BigInteger::getLowestSetBit()
	{
		return __thiz.callMethod<jint>(
			"getLowestSetBit",
			"()I");
	}
	QAndroidJniObject BigInteger::modPow(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1)
	{
		return __thiz.callObjectMethod(
			"modPow",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject BigInteger::negate()
	{
		return __thiz.callObjectMethod(
			"negate",
			"()Ljava/math/BigInteger;");
	}
	QAndroidJniObject BigInteger::_and(__jni_impl::java::math::BigInteger arg0)
	{
		return __thiz.callObjectMethod(
			"and",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject BigInteger::_not()
	{
		return __thiz.callObjectMethod(
			"not",
			"()Ljava/math/BigInteger;");
	}
	QAndroidJniObject BigInteger::modInverse(__jni_impl::java::math::BigInteger arg0)
	{
		return __thiz.callObjectMethod(
			"modInverse",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject BigInteger::probablePrime(jint arg0, __jni_impl::java::util::Random arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.math.BigInteger",
			"probablePrime",
			"(ILjava/util/Random;)Ljava/math/BigInteger;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject BigInteger::nextProbablePrime()
	{
		return __thiz.callObjectMethod(
			"nextProbablePrime",
			"()Ljava/math/BigInteger;");
	}
	QAndroidJniObject BigInteger::sqrtAndRemainder()
	{
		return __thiz.callObjectMethod(
			"sqrtAndRemainder",
			"()[Ljava/math/BigInteger;");
	}
	QAndroidJniObject BigInteger::gcd(__jni_impl::java::math::BigInteger arg0)
	{
		return __thiz.callObjectMethod(
			"gcd",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject BigInteger::_xor(__jni_impl::java::math::BigInteger arg0)
	{
		return __thiz.callObjectMethod(
			"xor",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject BigInteger::andNot(__jni_impl::java::math::BigInteger arg0)
	{
		return __thiz.callObjectMethod(
			"andNot",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject BigInteger::clearBit(jint arg0)
	{
		return __thiz.callObjectMethod(
			"clearBit",
			"(I)Ljava/math/BigInteger;",
			arg0);
	}
	QAndroidJniObject BigInteger::flipBit(jint arg0)
	{
		return __thiz.callObjectMethod(
			"flipBit",
			"(I)Ljava/math/BigInteger;",
			arg0);
	}
	jboolean BigInteger::isProbablePrime(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isProbablePrime",
			"(I)Z",
			arg0);
	}
	jint BigInteger::intValueExact()
	{
		return __thiz.callMethod<jint>(
			"intValueExact",
			"()I");
	}
	jshort BigInteger::shortValueExact()
	{
		return __thiz.callMethod<jshort>(
			"shortValueExact",
			"()S");
	}
	jbyte BigInteger::byteValueExact()
	{
		return __thiz.callMethod<jbyte>(
			"byteValueExact",
			"()B");
	}
} // namespace __jni_impl::java::math

namespace java::math
{
	class BigInteger : public __jni_impl::java::math::BigInteger
	{
	public:
		BigInteger(QAndroidJniObject obj) { __thiz = obj; }
		BigInteger(jint arg0, __jni_impl::java::util::Random arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		BigInteger(jstring arg0)
		{
			__constructor(
				arg0);
		}
		BigInteger(jint arg0, jint arg1, __jni_impl::java::util::Random arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		BigInteger(jint arg0, jbyteArray arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		BigInteger(jbyteArray arg0)
		{
			__constructor(
				arg0);
		}
		BigInteger(jbyteArray arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		BigInteger(jstring arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		BigInteger(jint arg0, jbyteArray arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::math

#endif // JAVA_MATH_BIGINTEGER

