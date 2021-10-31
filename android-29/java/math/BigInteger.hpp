#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Number.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
namespace java::lang
{
	class StringBuilder;
}
namespace java::util
{
	class Random;
}

namespace java::math
{
	class BigInteger : public java::lang::Number
	{
	public:
		// Fields
		static QAndroidJniObject ONE();
		static QAndroidJniObject TEN();
		static QAndroidJniObject TWO();
		static QAndroidJniObject ZERO();
		
		BigInteger(QAndroidJniObject obj);
		// Constructors
		BigInteger(jbyteArray arg0);
		BigInteger(jstring arg0);
		BigInteger(jint arg0, jbyteArray arg1);
		BigInteger(jint arg0, java::util::Random arg1);
		BigInteger(jstring arg0, jint arg1);
		BigInteger(jbyteArray arg0, jint arg1, jint arg2);
		BigInteger(jint arg0, jint arg1, java::util::Random arg2);
		BigInteger(jint arg0, jbyteArray arg1, jint arg2, jint arg3);
		BigInteger() = default;
		
		// Methods
		static QAndroidJniObject probablePrime(jint arg0, java::util::Random arg1);
		static QAndroidJniObject valueOf(jlong arg0);
		QAndroidJniObject abs();
		QAndroidJniObject add(java::math::BigInteger arg0);
		QAndroidJniObject _and(java::math::BigInteger arg0);
		QAndroidJniObject andNot(java::math::BigInteger arg0);
		jint bitCount();
		jint bitLength();
		jbyte byteValueExact();
		QAndroidJniObject clearBit(jint arg0);
		jint compareTo(jobject arg0);
		jint compareTo(java::math::BigInteger arg0);
		QAndroidJniObject divide(java::math::BigInteger arg0);
		jarray divideAndRemainder(java::math::BigInteger arg0);
		jdouble doubleValue();
		jboolean equals(jobject arg0);
		QAndroidJniObject flipBit(jint arg0);
		jfloat floatValue();
		QAndroidJniObject gcd(java::math::BigInteger arg0);
		jint getLowestSetBit();
		jint hashCode();
		jint intValue();
		jint intValueExact();
		jboolean isProbablePrime(jint arg0);
		jlong longValue();
		jlong longValueExact();
		QAndroidJniObject max(java::math::BigInteger arg0);
		QAndroidJniObject min(java::math::BigInteger arg0);
		QAndroidJniObject mod(java::math::BigInteger arg0);
		QAndroidJniObject modInverse(java::math::BigInteger arg0);
		QAndroidJniObject modPow(java::math::BigInteger arg0, java::math::BigInteger arg1);
		QAndroidJniObject multiply(java::math::BigInteger arg0);
		QAndroidJniObject negate();
		QAndroidJniObject nextProbablePrime();
		QAndroidJniObject _not();
		QAndroidJniObject _or(java::math::BigInteger arg0);
		QAndroidJniObject pow(jint arg0);
		QAndroidJniObject remainder(java::math::BigInteger arg0);
		QAndroidJniObject setBit(jint arg0);
		QAndroidJniObject shiftLeft(jint arg0);
		QAndroidJniObject shiftRight(jint arg0);
		jshort shortValueExact();
		jint signum();
		QAndroidJniObject sqrt();
		jarray sqrtAndRemainder();
		QAndroidJniObject subtract(java::math::BigInteger arg0);
		jboolean testBit(jint arg0);
		jbyteArray toByteArray();
		jstring toString();
		jstring toString(jint arg0);
		QAndroidJniObject _xor(java::math::BigInteger arg0);
	};
} // namespace java::math

