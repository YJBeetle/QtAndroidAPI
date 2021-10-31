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
	
	// QAndroidJniObject forward
	BigInteger::BigInteger(QAndroidJniObject obj) : java::lang::Number(obj) {}
	
	// Constructors
	BigInteger::BigInteger(jbyteArray arg0)
		: java::lang::Number(
			"java.math.BigInteger",
			"([B)V",
			arg0
		) {}
	BigInteger::BigInteger(jstring arg0)
		: java::lang::Number(
			"java.math.BigInteger",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	BigInteger::BigInteger(jint arg0, jbyteArray arg1)
		: java::lang::Number(
			"java.math.BigInteger",
			"(I[B)V",
			arg0,
			arg1
		) {}
	BigInteger::BigInteger(jint arg0, java::util::Random arg1)
		: java::lang::Number(
			"java.math.BigInteger",
			"(ILjava/util/Random;)V",
			arg0,
			arg1.object()
		) {}
	BigInteger::BigInteger(jstring arg0, jint arg1)
		: java::lang::Number(
			"java.math.BigInteger",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		) {}
	BigInteger::BigInteger(jbyteArray arg0, jint arg1, jint arg2)
		: java::lang::Number(
			"java.math.BigInteger",
			"([BII)V",
			arg0,
			arg1,
			arg2
		) {}
	BigInteger::BigInteger(jint arg0, jint arg1, java::util::Random arg2)
		: java::lang::Number(
			"java.math.BigInteger",
			"(IILjava/util/Random;)V",
			arg0,
			arg1,
			arg2.object()
		) {}
	BigInteger::BigInteger(jint arg0, jbyteArray arg1, jint arg2, jint arg3)
		: java::lang::Number(
			"java.math.BigInteger",
			"(I[BII)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	QAndroidJniObject BigInteger::probablePrime(jint arg0, java::util::Random arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.math.BigInteger",
			"probablePrime",
			"(ILjava/util/Random;)Ljava/math/BigInteger;",
			arg0,
			arg1.object()
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
		return callObjectMethod(
			"abs",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject BigInteger::add(java::math::BigInteger arg0)
	{
		return callObjectMethod(
			"add",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.object()
		);
	}
	QAndroidJniObject BigInteger::_and(java::math::BigInteger arg0)
	{
		return callObjectMethod(
			"and",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.object()
		);
	}
	QAndroidJniObject BigInteger::andNot(java::math::BigInteger arg0)
	{
		return callObjectMethod(
			"andNot",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.object()
		);
	}
	jint BigInteger::bitCount()
	{
		return callMethod<jint>(
			"bitCount",
			"()I"
		);
	}
	jint BigInteger::bitLength()
	{
		return callMethod<jint>(
			"bitLength",
			"()I"
		);
	}
	jbyte BigInteger::byteValueExact()
	{
		return callMethod<jbyte>(
			"byteValueExact",
			"()B"
		);
	}
	QAndroidJniObject BigInteger::clearBit(jint arg0)
	{
		return callObjectMethod(
			"clearBit",
			"(I)Ljava/math/BigInteger;",
			arg0
		);
	}
	jint BigInteger::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint BigInteger::compareTo(java::math::BigInteger arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/math/BigInteger;)I",
			arg0.object()
		);
	}
	QAndroidJniObject BigInteger::divide(java::math::BigInteger arg0)
	{
		return callObjectMethod(
			"divide",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.object()
		);
	}
	jarray BigInteger::divideAndRemainder(java::math::BigInteger arg0)
	{
		return callObjectMethod(
			"divideAndRemainder",
			"(Ljava/math/BigInteger;)[Ljava/math/BigInteger;",
			arg0.object()
		).object<jarray>();
	}
	jdouble BigInteger::doubleValue()
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jboolean BigInteger::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject BigInteger::flipBit(jint arg0)
	{
		return callObjectMethod(
			"flipBit",
			"(I)Ljava/math/BigInteger;",
			arg0
		);
	}
	jfloat BigInteger::floatValue()
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	QAndroidJniObject BigInteger::gcd(java::math::BigInteger arg0)
	{
		return callObjectMethod(
			"gcd",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.object()
		);
	}
	jint BigInteger::getLowestSetBit()
	{
		return callMethod<jint>(
			"getLowestSetBit",
			"()I"
		);
	}
	jint BigInteger::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint BigInteger::intValue()
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jint BigInteger::intValueExact()
	{
		return callMethod<jint>(
			"intValueExact",
			"()I"
		);
	}
	jboolean BigInteger::isProbablePrime(jint arg0)
	{
		return callMethod<jboolean>(
			"isProbablePrime",
			"(I)Z",
			arg0
		);
	}
	jlong BigInteger::longValue()
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	jlong BigInteger::longValueExact()
	{
		return callMethod<jlong>(
			"longValueExact",
			"()J"
		);
	}
	QAndroidJniObject BigInteger::max(java::math::BigInteger arg0)
	{
		return callObjectMethod(
			"max",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.object()
		);
	}
	QAndroidJniObject BigInteger::min(java::math::BigInteger arg0)
	{
		return callObjectMethod(
			"min",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.object()
		);
	}
	QAndroidJniObject BigInteger::mod(java::math::BigInteger arg0)
	{
		return callObjectMethod(
			"mod",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.object()
		);
	}
	QAndroidJniObject BigInteger::modInverse(java::math::BigInteger arg0)
	{
		return callObjectMethod(
			"modInverse",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.object()
		);
	}
	QAndroidJniObject BigInteger::modPow(java::math::BigInteger arg0, java::math::BigInteger arg1)
	{
		return callObjectMethod(
			"modPow",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject BigInteger::multiply(java::math::BigInteger arg0)
	{
		return callObjectMethod(
			"multiply",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.object()
		);
	}
	QAndroidJniObject BigInteger::negate()
	{
		return callObjectMethod(
			"negate",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject BigInteger::nextProbablePrime()
	{
		return callObjectMethod(
			"nextProbablePrime",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject BigInteger::_not()
	{
		return callObjectMethod(
			"not",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject BigInteger::_or(java::math::BigInteger arg0)
	{
		return callObjectMethod(
			"or",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.object()
		);
	}
	QAndroidJniObject BigInteger::pow(jint arg0)
	{
		return callObjectMethod(
			"pow",
			"(I)Ljava/math/BigInteger;",
			arg0
		);
	}
	QAndroidJniObject BigInteger::remainder(java::math::BigInteger arg0)
	{
		return callObjectMethod(
			"remainder",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.object()
		);
	}
	QAndroidJniObject BigInteger::setBit(jint arg0)
	{
		return callObjectMethod(
			"setBit",
			"(I)Ljava/math/BigInteger;",
			arg0
		);
	}
	QAndroidJniObject BigInteger::shiftLeft(jint arg0)
	{
		return callObjectMethod(
			"shiftLeft",
			"(I)Ljava/math/BigInteger;",
			arg0
		);
	}
	QAndroidJniObject BigInteger::shiftRight(jint arg0)
	{
		return callObjectMethod(
			"shiftRight",
			"(I)Ljava/math/BigInteger;",
			arg0
		);
	}
	jshort BigInteger::shortValueExact()
	{
		return callMethod<jshort>(
			"shortValueExact",
			"()S"
		);
	}
	jint BigInteger::signum()
	{
		return callMethod<jint>(
			"signum",
			"()I"
		);
	}
	QAndroidJniObject BigInteger::sqrt()
	{
		return callObjectMethod(
			"sqrt",
			"()Ljava/math/BigInteger;"
		);
	}
	jarray BigInteger::sqrtAndRemainder()
	{
		return callObjectMethod(
			"sqrtAndRemainder",
			"()[Ljava/math/BigInteger;"
		).object<jarray>();
	}
	QAndroidJniObject BigInteger::subtract(java::math::BigInteger arg0)
	{
		return callObjectMethod(
			"subtract",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.object()
		);
	}
	jboolean BigInteger::testBit(jint arg0)
	{
		return callMethod<jboolean>(
			"testBit",
			"(I)Z",
			arg0
		);
	}
	jbyteArray BigInteger::toByteArray()
	{
		return callObjectMethod(
			"toByteArray",
			"()[B"
		).object<jbyteArray>();
	}
	jstring BigInteger::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BigInteger::toString(jint arg0)
	{
		return callObjectMethod(
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject BigInteger::_xor(java::math::BigInteger arg0)
	{
		return callObjectMethod(
			"xor",
			"(Ljava/math/BigInteger;)Ljava/math/BigInteger;",
			arg0.object()
		);
	}
} // namespace java::math

