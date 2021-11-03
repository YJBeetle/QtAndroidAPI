#pragma once

#include "../lang/Number.hpp"

class JCharArray;
class JDoubleArray;
class JFloatArray;
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
namespace java::math
{
	class BigInteger;
}
namespace java::math
{
	class MathContext;
}
namespace java::math
{
	class RoundingMode;
}

namespace java::math
{
	class BigDecimal : public java::lang::Number
	{
	public:
		// Fields
		static java::math::BigDecimal ONE();
		static jint ROUND_CEILING();
		static jint ROUND_DOWN();
		static jint ROUND_FLOOR();
		static jint ROUND_HALF_DOWN();
		static jint ROUND_HALF_EVEN();
		static jint ROUND_HALF_UP();
		static jint ROUND_UNNECESSARY();
		static jint ROUND_UP();
		static java::math::BigDecimal TEN();
		static java::math::BigDecimal ZERO();
		
		// QJniObject forward
		template<typename ...Ts> explicit BigDecimal(const char *className, const char *sig, Ts...agv) : java::lang::Number(className, sig, std::forward<Ts>(agv)...) {}
		BigDecimal(QJniObject obj);
		
		// Constructors
		BigDecimal(JCharArray arg0);
		BigDecimal(jdouble arg0);
		BigDecimal(jint arg0);
		BigDecimal(JString arg0);
		BigDecimal(java::math::BigInteger arg0);
		BigDecimal(jlong arg0);
		BigDecimal(JCharArray arg0, java::math::MathContext arg1);
		BigDecimal(jdouble arg0, java::math::MathContext arg1);
		BigDecimal(jint arg0, java::math::MathContext arg1);
		BigDecimal(JString arg0, java::math::MathContext arg1);
		BigDecimal(java::math::BigInteger arg0, jint arg1);
		BigDecimal(java::math::BigInteger arg0, java::math::MathContext arg1);
		BigDecimal(jlong arg0, java::math::MathContext arg1);
		BigDecimal(JCharArray arg0, jint arg1, jint arg2);
		BigDecimal(java::math::BigInteger arg0, jint arg1, java::math::MathContext arg2);
		BigDecimal(JCharArray arg0, jint arg1, jint arg2, java::math::MathContext arg3);
		
		// Methods
		static java::math::BigDecimal valueOf(jdouble arg0);
		static java::math::BigDecimal valueOf(jlong arg0);
		static java::math::BigDecimal valueOf(jlong arg0, jint arg1);
		java::math::BigDecimal abs() const;
		java::math::BigDecimal abs(java::math::MathContext arg0) const;
		java::math::BigDecimal add(java::math::BigDecimal arg0) const;
		java::math::BigDecimal add(java::math::BigDecimal arg0, java::math::MathContext arg1) const;
		jbyte byteValueExact() const;
		jint compareTo(JObject arg0) const;
		jint compareTo(java::math::BigDecimal arg0) const;
		java::math::BigDecimal divide(java::math::BigDecimal arg0) const;
		java::math::BigDecimal divide(java::math::BigDecimal arg0, jint arg1) const;
		java::math::BigDecimal divide(java::math::BigDecimal arg0, java::math::MathContext arg1) const;
		java::math::BigDecimal divide(java::math::BigDecimal arg0, java::math::RoundingMode arg1) const;
		java::math::BigDecimal divide(java::math::BigDecimal arg0, jint arg1, jint arg2) const;
		java::math::BigDecimal divide(java::math::BigDecimal arg0, jint arg1, java::math::RoundingMode arg2) const;
		JArray divideAndRemainder(java::math::BigDecimal arg0) const;
		JArray divideAndRemainder(java::math::BigDecimal arg0, java::math::MathContext arg1) const;
		java::math::BigDecimal divideToIntegralValue(java::math::BigDecimal arg0) const;
		java::math::BigDecimal divideToIntegralValue(java::math::BigDecimal arg0, java::math::MathContext arg1) const;
		jdouble doubleValue() const;
		jboolean equals(JObject arg0) const;
		jfloat floatValue() const;
		jint hashCode() const;
		jint intValue() const;
		jint intValueExact() const;
		jlong longValue() const;
		jlong longValueExact() const;
		java::math::BigDecimal max(java::math::BigDecimal arg0) const;
		java::math::BigDecimal min(java::math::BigDecimal arg0) const;
		java::math::BigDecimal movePointLeft(jint arg0) const;
		java::math::BigDecimal movePointRight(jint arg0) const;
		java::math::BigDecimal multiply(java::math::BigDecimal arg0) const;
		java::math::BigDecimal multiply(java::math::BigDecimal arg0, java::math::MathContext arg1) const;
		java::math::BigDecimal negate() const;
		java::math::BigDecimal negate(java::math::MathContext arg0) const;
		java::math::BigDecimal plus() const;
		java::math::BigDecimal plus(java::math::MathContext arg0) const;
		java::math::BigDecimal pow(jint arg0) const;
		java::math::BigDecimal pow(jint arg0, java::math::MathContext arg1) const;
		jint precision() const;
		java::math::BigDecimal remainder(java::math::BigDecimal arg0) const;
		java::math::BigDecimal remainder(java::math::BigDecimal arg0, java::math::MathContext arg1) const;
		java::math::BigDecimal round(java::math::MathContext arg0) const;
		jint scale() const;
		java::math::BigDecimal scaleByPowerOfTen(jint arg0) const;
		java::math::BigDecimal setScale(jint arg0) const;
		java::math::BigDecimal setScale(jint arg0, jint arg1) const;
		java::math::BigDecimal setScale(jint arg0, java::math::RoundingMode arg1) const;
		jshort shortValueExact() const;
		jint signum() const;
		java::math::BigDecimal sqrt(java::math::MathContext arg0) const;
		java::math::BigDecimal stripTrailingZeros() const;
		java::math::BigDecimal subtract(java::math::BigDecimal arg0) const;
		java::math::BigDecimal subtract(java::math::BigDecimal arg0, java::math::MathContext arg1) const;
		java::math::BigInteger toBigInteger() const;
		java::math::BigInteger toBigIntegerExact() const;
		JString toEngineeringString() const;
		JString toPlainString() const;
		JString toString() const;
		java::math::BigDecimal ulp() const;
		java::math::BigInteger unscaledValue() const;
	};
} // namespace java::math

