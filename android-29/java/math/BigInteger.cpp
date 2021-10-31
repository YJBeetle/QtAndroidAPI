#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../lang/StringBuilder.hpp"
#include "../util/Random.hpp"
#include "./BigInteger.hpp"

namespace java::math
{
	// Fields
	QAndroidJniObject BigInteger::ONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.math.BigInteger",
			"ONE",
			"Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject BigInteger::TEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.math.BigInteger",
			"TEN",
			"Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject BigInteger::TWO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.math.BigInteger",
			"TWO",
			"Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject BigInteger::ZERO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.math.BigInteger",
			"ZERO",
			"Ljava/math/BigInteger;"
		);
	}
	
	BigInteger::BigInteger(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BigInteger::BigInteger(jbyteArray arg0)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigInteger",
			"([B)V",
			arg0
		);
	}
	BigInteger::BigInteger(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigInteger",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	BigInteger::BigInteger(jint arg0, jbyteArray arg1)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigInteger",
			"(I[B)V",
			arg0,
			arg1
		);
	}
	BigInteger::BigInteger(jint arg0, java::util::Random arg1)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigInteger",
			"(ILjava/util/Random;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	BigInteger::BigInteger(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigInteger",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	BigInteger::BigInteger(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigInteger",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	BigInteger::BigInteger(jint arg0, jint arg1, java::util::Random arg2)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigInteger",
			"(IILjava/util/Random;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	BigInteger::BigInteger(jint arg0, jbyteArray arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"java.math.BigInteger",
			"(I[BII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
	QAndroidJniObject BigInteger::probablePrime(jint arg0, java::util::Random arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.math.BigInteger",
			"probablePrime",
			"(ILjava/util/Random;)Ljava/math/BigInteger;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject BigInteger::valueOf(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.math.BigInteger",
			"valueOf",
			"(J)Ljava/math/BigInteger;",
			arg0
		);
	}
	QAndroidJniObject BigInteger::abs()
	{
		return __thiz.callObjectMethod(
			"abs",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject BigInteger::add(java::math::BigInteger arg0)
	{
		return __thiz.callObjectMethod(
			"add",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigInteger::_and(java::math::BigInteger arg0)
	{
		return __thiz.callObjectMethod(
			"and",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigInteger::andNot(java::math::BigInteger arg0)
	{
		return __thiz.callObjectMethod(
			"andNot",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.__jniObject().object()
		);
	}
	jint BigInteger::bitCount()
	{
		return __thiz.callMethod<jint>(
			"bitCount",
			"()I"
		);
	}
	jint BigInteger::bitLength()
	{
		return __thiz.callMethod<jint>(
			"bitLength",
			"()I"
		);
	}
	jbyte BigInteger::byteValueExact()
	{
		return __thiz.callMethod<jbyte>(
			"byteValueExact",
			"()B"
		);
	}
	QAndroidJniObject BigInteger::clearBit(jint arg0)
	{
		return __thiz.callObjectMethod(
			"clearBit",
			"(I)Ljava/math/BigInteger;",
			arg0
		);
	}
	jint BigInteger::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint BigInteger::compareTo(java::math::BigInteger arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/math/BigInteger;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigInteger::divide(java::math::BigInteger arg0)
	{
		return __thiz.callObjectMethod(
			"divide",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.__jniObject().object()
		);
	}
	jarray BigInteger::divideAndRemainder(java::math::BigInteger arg0)
	{
		return __thiz.callObjectMethod(
			"divideAndRemainder",
			"(Ljava/math/BigInteger;)[Ljava/math/BigInteger;",
			arg0.__jniObject().object()
		).object<jarray>();
	}
	jdouble BigInteger::doubleValue()
	{
		return __thiz.callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jboolean BigInteger::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject BigInteger::flipBit(jint arg0)
	{
		return __thiz.callObjectMethod(
			"flipBit",
			"(I)Ljava/math/BigInteger;",
			arg0
		);
	}
	jfloat BigInteger::floatValue()
	{
		return __thiz.callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	QAndroidJniObject BigInteger::gcd(java::math::BigInteger arg0)
	{
		return __thiz.callObjectMethod(
			"gcd",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.__jniObject().object()
		);
	}
	jint BigInteger::getLowestSetBit()
	{
		return __thiz.callMethod<jint>(
			"getLowestSetBit",
			"()I"
		);
	}
	jint BigInteger::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint BigInteger::intValue()
	{
		return __thiz.callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jint BigInteger::intValueExact()
	{
		return __thiz.callMethod<jint>(
			"intValueExact",
			"()I"
		);
	}
	jboolean BigInteger::isProbablePrime(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isProbablePrime",
			"(I)Z",
			arg0
		);
	}
	jlong BigInteger::longValue()
	{
		return __thiz.callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	jlong BigInteger::longValueExact()
	{
		return __thiz.callMethod<jlong>(
			"longValueExact",
			"()J"
		);
	}
	QAndroidJniObject BigInteger::max(java::math::BigInteger arg0)
	{
		return __thiz.callObjectMethod(
			"max",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigInteger::min(java::math::BigInteger arg0)
	{
		return __thiz.callObjectMethod(
			"min",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigInteger::mod(java::math::BigInteger arg0)
	{
		return __thiz.callObjectMethod(
			"mod",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigInteger::modInverse(java::math::BigInteger arg0)
	{
		return __thiz.callObjectMethod(
			"modInverse",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigInteger::modPow(java::math::BigInteger arg0, java::math::BigInteger arg1)
	{
		return __thiz.callObjectMethod(
			"modPow",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject BigInteger::multiply(java::math::BigInteger arg0)
	{
		return __thiz.callObjectMethod(
			"multiply",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigInteger::negate()
	{
		return __thiz.callObjectMethod(
			"negate",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject BigInteger::nextProbablePrime()
	{
		return __thiz.callObjectMethod(
			"nextProbablePrime",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject BigInteger::_not()
	{
		return __thiz.callObjectMethod(
			"not",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject BigInteger::_or(java::math::BigInteger arg0)
	{
		return __thiz.callObjectMethod(
			"or",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigInteger::pow(jint arg0)
	{
		return __thiz.callObjectMethod(
			"pow",
			"(I)Ljava/math/BigInteger;",
			arg0
		);
	}
	QAndroidJniObject BigInteger::remainder(java::math::BigInteger arg0)
	{
		return __thiz.callObjectMethod(
			"remainder",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BigInteger::setBit(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setBit",
			"(I)Ljava/math/BigInteger;",
			arg0
		);
	}
	QAndroidJniObject BigInteger::shiftLeft(jint arg0)
	{
		return __thiz.callObjectMethod(
			"shiftLeft",
			"(I)Ljava/math/BigInteger;",
			arg0
		);
	}
	QAndroidJniObject BigInteger::shiftRight(jint arg0)
	{
		return __thiz.callObjectMethod(
			"shiftRight",
			"(I)Ljava/math/BigInteger;",
			arg0
		);
	}
	jshort BigInteger::shortValueExact()
	{
		return __thiz.callMethod<jshort>(
			"shortValueExact",
			"()S"
		);
	}
	jint BigInteger::signum()
	{
		return __thiz.callMethod<jint>(
			"signum",
			"()I"
		);
	}
	QAndroidJniObject BigInteger::sqrt()
	{
		return __thiz.callObjectMethod(
			"sqrt",
			"()Ljava/math/BigInteger;"
		);
	}
	jarray BigInteger::sqrtAndRemainder()
	{
		return __thiz.callObjectMethod(
			"sqrtAndRemainder",
			"()[Ljava/math/BigInteger;"
		).object<jarray>();
	}
	QAndroidJniObject BigInteger::subtract(java::math::BigInteger arg0)
	{
		return __thiz.callObjectMethod(
			"subtract",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.__jniObject().object()
		);
	}
	jboolean BigInteger::testBit(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"testBit",
			"(I)Z",
			arg0
		);
	}
	jbyteArray BigInteger::toByteArray()
	{
		return __thiz.callObjectMethod(
			"toByteArray",
			"()[B"
		).object<jbyteArray>();
	}
	jstring BigInteger::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BigInteger::toString(jint arg0)
	{
		return __thiz.callObjectMethod(
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject BigInteger::_xor(java::math::BigInteger arg0)
	{
		return __thiz.callObjectMethod(
			"xor",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.__jniObject().object()
		);
	}
} // namespace java::math

