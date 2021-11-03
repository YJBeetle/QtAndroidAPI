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
		android::icu::math::BigDecimal abs();
		android::icu::math::BigDecimal abs(android::icu::math::MathContext arg0);
		android::icu::math::BigDecimal add(android::icu::math::BigDecimal arg0);
		android::icu::math::BigDecimal add(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1);
		jbyte byteValueExact();
		jint compareTo(android::icu::math::BigDecimal arg0);
		jint compareTo(JObject arg0);
		jint compareTo(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1);
		android::icu::math::BigDecimal divide(android::icu::math::BigDecimal arg0);
		android::icu::math::BigDecimal divide(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1);
		android::icu::math::BigDecimal divide(android::icu::math::BigDecimal arg0, jint arg1);
		android::icu::math::BigDecimal divide(android::icu::math::BigDecimal arg0, jint arg1, jint arg2);
		android::icu::math::BigDecimal divideInteger(android::icu::math::BigDecimal arg0);
		android::icu::math::BigDecimal divideInteger(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1);
		jdouble doubleValue();
		jboolean equals(JObject arg0);
		jfloat floatValue();
		JString format(jint arg0, jint arg1);
		JString format(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		jint hashCode();
		jint intValue();
		jint intValueExact();
		jlong longValue();
		jlong longValueExact();
		android::icu::math::BigDecimal max(android::icu::math::BigDecimal arg0);
		android::icu::math::BigDecimal max(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1);
		android::icu::math::BigDecimal min(android::icu::math::BigDecimal arg0);
		android::icu::math::BigDecimal min(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1);
		android::icu::math::BigDecimal movePointLeft(jint arg0);
		android::icu::math::BigDecimal movePointRight(jint arg0);
		android::icu::math::BigDecimal multiply(android::icu::math::BigDecimal arg0);
		android::icu::math::BigDecimal multiply(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1);
		android::icu::math::BigDecimal negate();
		android::icu::math::BigDecimal negate(android::icu::math::MathContext arg0);
		android::icu::math::BigDecimal plus();
		android::icu::math::BigDecimal plus(android::icu::math::MathContext arg0);
		android::icu::math::BigDecimal pow(android::icu::math::BigDecimal arg0);
		android::icu::math::BigDecimal pow(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1);
		android::icu::math::BigDecimal remainder(android::icu::math::BigDecimal arg0);
		android::icu::math::BigDecimal remainder(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1);
		jint scale();
		android::icu::math::BigDecimal setScale(jint arg0);
		android::icu::math::BigDecimal setScale(jint arg0, jint arg1);
		jshort shortValueExact();
		jint signum();
		android::icu::math::BigDecimal subtract(android::icu::math::BigDecimal arg0);
		android::icu::math::BigDecimal subtract(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1);
		java::math::BigDecimal toBigDecimal();
		java::math::BigInteger toBigInteger();
		java::math::BigInteger toBigIntegerExact();
		JCharArray toCharArray();
		JString toString();
		java::math::BigInteger unscaledValue();
	};
} // namespace android::icu::math

