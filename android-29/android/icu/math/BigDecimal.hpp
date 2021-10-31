#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Number.hpp"

namespace android::icu::math
{
	class MathContext;
}
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
		
		BigDecimal(QAndroidJniObject obj);
		// Constructors
		BigDecimal(jcharArray arg0);
		BigDecimal(jdouble arg0);
		BigDecimal(jint arg0);
		BigDecimal(jstring arg0);
		BigDecimal(java::math::BigDecimal arg0);
		BigDecimal(java::math::BigInteger arg0);
		BigDecimal(jlong arg0);
		BigDecimal(java::math::BigInteger arg0, jint arg1);
		BigDecimal(jcharArray arg0, jint arg1, jint arg2);
		BigDecimal() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jdouble arg0);
		static QAndroidJniObject valueOf(jlong arg0);
		static QAndroidJniObject valueOf(jlong arg0, jint arg1);
		QAndroidJniObject abs();
		QAndroidJniObject abs(android::icu::math::MathContext arg0);
		QAndroidJniObject add(android::icu::math::BigDecimal arg0);
		QAndroidJniObject add(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1);
		jbyte byteValueExact();
		jint compareTo(android::icu::math::BigDecimal arg0);
		jint compareTo(jobject arg0);
		jint compareTo(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1);
		QAndroidJniObject divide(android::icu::math::BigDecimal arg0);
		QAndroidJniObject divide(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1);
		QAndroidJniObject divide(android::icu::math::BigDecimal arg0, jint arg1);
		QAndroidJniObject divide(android::icu::math::BigDecimal arg0, jint arg1, jint arg2);
		QAndroidJniObject divideInteger(android::icu::math::BigDecimal arg0);
		QAndroidJniObject divideInteger(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1);
		jdouble doubleValue();
		jboolean equals(jobject arg0);
		jfloat floatValue();
		jstring format(jint arg0, jint arg1);
		jstring format(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		jint hashCode();
		jint intValue();
		jint intValueExact();
		jlong longValue();
		jlong longValueExact();
		QAndroidJniObject max(android::icu::math::BigDecimal arg0);
		QAndroidJniObject max(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1);
		QAndroidJniObject min(android::icu::math::BigDecimal arg0);
		QAndroidJniObject min(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1);
		QAndroidJniObject movePointLeft(jint arg0);
		QAndroidJniObject movePointRight(jint arg0);
		QAndroidJniObject multiply(android::icu::math::BigDecimal arg0);
		QAndroidJniObject multiply(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1);
		QAndroidJniObject negate();
		QAndroidJniObject negate(android::icu::math::MathContext arg0);
		QAndroidJniObject plus();
		QAndroidJniObject plus(android::icu::math::MathContext arg0);
		QAndroidJniObject pow(android::icu::math::BigDecimal arg0);
		QAndroidJniObject pow(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1);
		QAndroidJniObject remainder(android::icu::math::BigDecimal arg0);
		QAndroidJniObject remainder(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1);
		jint scale();
		QAndroidJniObject setScale(jint arg0);
		QAndroidJniObject setScale(jint arg0, jint arg1);
		jshort shortValueExact();
		jint signum();
		QAndroidJniObject subtract(android::icu::math::BigDecimal arg0);
		QAndroidJniObject subtract(android::icu::math::BigDecimal arg0, android::icu::math::MathContext arg1);
		QAndroidJniObject toBigDecimal();
		QAndroidJniObject toBigInteger();
		QAndroidJniObject toBigIntegerExact();
		jcharArray toCharArray();
		jstring toString();
		QAndroidJniObject unscaledValue();
	};
} // namespace android::icu::math

