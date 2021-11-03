#pragma once

#include "../../../java/lang/Number.hpp"

class JCharArray;
namespace android::icu::math
{
	class MathContext;
}
class JObject;
class JString;
namespace java::math
{
	class BigDecimal;
}
namespace java::math
{
	class BigInteger;
}

namespace android::icu::math
{
	class BigDecimal : public java::lang::Number
	{
	public:
		// Fields
		static android::icu::math::BigDecimal ONE();
		static jint ROUND_CEILING();
		static jint ROUND_DOWN();
		static jint ROUND_FLOOR();
		static jint ROUND_HALF_DOWN();
		static jint ROUND_HALF_EVEN();
		static jint ROUND_HALF_UP();
		static jint ROUND_UNNECESSARY();
		static jint ROUND_UP();
		static android::icu::math::BigDecimal TEN();
		static android::icu::math::BigDecimal ZERO();
		
		// QJniObject forward
		template<typename ...Ts> explicit BigDecimal(const char *className, const char *sig, Ts...agv) : java::lang::Number(className, sig, std::forward<Ts>(agv)...) {}
		BigDecimal(QJniObject obj);
		
		// Constructors
		BigDecimal(JCharArray arg0);
		BigDecimal(jdouble arg0);
		BigDecimal(jint arg0);
		BigDecimal(JString arg0);
		BigDecimal(java::math::BigDecimal arg0);
		BigDecimal(java::math::BigInteger arg0);
		BigDecimal(jlong arg0);
		BigDecimal(java::math::BigInteger arg0, jint arg1);
		BigDecimal(JCharArray arg0, jint arg1, jint arg2);
		
		// Methods
		static android::icu::math::BigDecimal valueOf(jdouble arg0);
		static android::icu::math::BigDecimal valueOf(jlong arg0);
		static android::icu::math::BigDecimal valueOf(jlong arg0, jint arg1);
		android::icu::math::BigDecimal abs() const;
		android::icu::math::BigDecimal abs(android::icu::math::MathContext arg0) const;
		android::icu::math::BigDecimal add(android::icu::math::BigDecimal arg0) const;
		android::icu::math::BigDecimal add(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1) const;
		jbyte byteValueExact() const;
		jint compareTo(android::icu::math::BigDecimal arg0) const;
		jint compareTo(JObject arg0) const;
		jint compareTo(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1) const;
		android::icu::math::BigDecimal divide(android::icu::math::BigDecimal arg0) const;
		android::icu::math::BigDecimal divide(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1) const;
		android::icu::math::BigDecimal divide(android::icu::math::BigDecimal arg0, jint arg1) const;
		android::icu::math::BigDecimal divide(android::icu::math::BigDecimal arg0, jint arg1, jint arg2) const;
		android::icu::math::BigDecimal divideInteger(android::icu::math::BigDecimal arg0) const;
		android::icu::math::BigDecimal divideInteger(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1) const;
		jdouble doubleValue() const;
		jboolean equals(JObject arg0) const;
		jfloat floatValue() const;
		JString format(jint arg0, jint arg1) const;
		JString format(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5) const;
		jint hashCode() const;
		jint intValue() const;
		jint intValueExact() const;
		jlong longValue() const;
		jlong longValueExact() const;
		android::icu::math::BigDecimal max(android::icu::math::BigDecimal arg0) const;
		android::icu::math::BigDecimal max(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1) const;
		android::icu::math::BigDecimal min(android::icu::math::BigDecimal arg0) const;
		android::icu::math::BigDecimal min(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1) const;
		android::icu::math::BigDecimal movePointLeft(jint arg0) const;
		android::icu::math::BigDecimal movePointRight(jint arg0) const;
		android::icu::math::BigDecimal multiply(android::icu::math::BigDecimal arg0) const;
		android::icu::math::BigDecimal multiply(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1) const;
		android::icu::math::BigDecimal negate() const;
		android::icu::math::BigDecimal negate(android::icu::math::MathContext arg0) const;
		android::icu::math::BigDecimal plus() const;
		android::icu::math::BigDecimal plus(android::icu::math::MathContext arg0) const;
		android::icu::math::BigDecimal pow(android::icu::math::BigDecimal arg0) const;
		android::icu::math::BigDecimal pow(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1) const;
		android::icu::math::BigDecimal remainder(android::icu::math::BigDecimal arg0) const;
		android::icu::math::BigDecimal remainder(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1) const;
		jint scale() const;
		android::icu::math::BigDecimal setScale(jint arg0) const;
		android::icu::math::BigDecimal setScale(jint arg0, jint arg1) const;
		jshort shortValueExact() const;
		jint signum() const;
		android::icu::math::BigDecimal subtract(android::icu::math::BigDecimal arg0) const;
		android::icu::math::BigDecimal subtract(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1) const;
		java::math::BigDecimal toBigDecimal() const;
		java::math::BigInteger toBigInteger() const;
		java::math::BigInteger toBigIntegerExact() const;
		JCharArray toCharArray() const;
		JString toString() const;
		java::math::BigInteger unscaledValue() const;
	};
} // namespace android::icu::math

