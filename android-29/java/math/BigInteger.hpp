#pragma once

#include "../lang/Number.hpp"

class JByteArray;
class JCharArray;
class JDoubleArray;
class JIntArray;
class JLongArray;
class JArray;
class JArray;
class JArray;
namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
class JObject;
class JString;
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
		static java::math::BigInteger ONE();
		static java::math::BigInteger TEN();
		static java::math::BigInteger TWO();
		static java::math::BigInteger ZERO();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BigInteger(const char *className, const char *sig, Ts...agv) : java::lang::Number(className, sig, std::forward<Ts>(agv)...) {}
		BigInteger(QAndroidJniObject obj);
		
		// Constructors
		BigInteger(JByteArray arg0);
		BigInteger(JString arg0);
		BigInteger(jint arg0, JByteArray arg1);
		BigInteger(jint arg0, java::util::Random arg1);
		BigInteger(JString arg0, jint arg1);
		BigInteger(JByteArray arg0, jint arg1, jint arg2);
		BigInteger(jint arg0, jint arg1, java::util::Random arg2);
		BigInteger(jint arg0, JByteArray arg1, jint arg2, jint arg3);
		
		// Methods
		static java::math::BigInteger probablePrime(jint arg0, java::util::Random arg1);
		static java::math::BigInteger valueOf(jlong arg0);
		java::math::BigInteger abs() const;
		java::math::BigInteger add(java::math::BigInteger arg0) const;
		java::math::BigInteger _and(java::math::BigInteger arg0) const;
		java::math::BigInteger andNot(java::math::BigInteger arg0) const;
		jint bitCount() const;
		jint bitLength() const;
		jbyte byteValueExact() const;
		java::math::BigInteger clearBit(jint arg0) const;
		jint compareTo(JObject arg0) const;
		jint compareTo(java::math::BigInteger arg0) const;
		java::math::BigInteger divide(java::math::BigInteger arg0) const;
		JArray divideAndRemainder(java::math::BigInteger arg0) const;
		jdouble doubleValue() const;
		jboolean equals(JObject arg0) const;
		java::math::BigInteger flipBit(jint arg0) const;
		jfloat floatValue() const;
		java::math::BigInteger gcd(java::math::BigInteger arg0) const;
		jint getLowestSetBit() const;
		jint hashCode() const;
		jint intValue() const;
		jint intValueExact() const;
		jboolean isProbablePrime(jint arg0) const;
		jlong longValue() const;
		jlong longValueExact() const;
		java::math::BigInteger max(java::math::BigInteger arg0) const;
		java::math::BigInteger min(java::math::BigInteger arg0) const;
		java::math::BigInteger mod(java::math::BigInteger arg0) const;
		java::math::BigInteger modInverse(java::math::BigInteger arg0) const;
		java::math::BigInteger modPow(java::math::BigInteger arg0, java::math::BigInteger arg1) const;
		java::math::BigInteger multiply(java::math::BigInteger arg0) const;
		java::math::BigInteger negate() const;
		java::math::BigInteger nextProbablePrime() const;
		java::math::BigInteger _not() const;
		java::math::BigInteger _or(java::math::BigInteger arg0) const;
		java::math::BigInteger pow(jint arg0) const;
		java::math::BigInteger remainder(java::math::BigInteger arg0) const;
		java::math::BigInteger setBit(jint arg0) const;
		java::math::BigInteger shiftLeft(jint arg0) const;
		java::math::BigInteger shiftRight(jint arg0) const;
		jshort shortValueExact() const;
		jint signum() const;
		java::math::BigInteger sqrt() const;
		JArray sqrtAndRemainder() const;
		java::math::BigInteger subtract(java::math::BigInteger arg0) const;
		jboolean testBit(jint arg0) const;
		JByteArray toByteArray() const;
		JString toString() const;
		JString toString(jint arg0) const;
		java::math::BigInteger _xor(java::math::BigInteger arg0) const;
	};
} // namespace java::math

