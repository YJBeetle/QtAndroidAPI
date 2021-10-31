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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BigDecimal(const char *className, const char *sig, Ts...agv) : java::lang::Number(className, sig, std::forward<Ts>(agv)...) {}
		BigDecimal(QAndroidJniObject obj);
		
		// Constructors
		BigDecimal(jcharArray arg0);
		BigDecimal(jdouble arg0);
		BigDecimal(jint arg0);
		BigDecimal(jstring arg0);
		BigDecimal(java::math::BigInteger arg0);
		BigDecimal(jlong arg0);
		BigDecimal(jcharArray arg0, java::math::MathContext arg1);
		BigDecimal(jdouble arg0, java::math::MathContext arg1);
		BigDecimal(jint arg0, java::math::MathContext arg1);
		BigDecimal(jstring arg0, java::math::MathContext arg1);
		BigDecimal(java::math::BigInteger arg0, jint arg1);
		BigDecimal(java::math::BigInteger arg0, java::math::MathContext arg1);
		BigDecimal(jlong arg0, java::math::MathContext arg1);
		BigDecimal(jcharArray arg0, jint arg1, jint arg2);
		BigDecimal(java::math::BigInteger arg0, jint arg1, java::math::MathContext arg2);
		BigDecimal(jcharArray arg0, jint arg1, jint arg2, java::math::MathContext arg3);
		
		// Methods
		static QAndroidJniObject valueOf(jdouble arg0);
		static QAndroidJniObject valueOf(jlong arg0);
		static QAndroidJniObject valueOf(jlong arg0, jint arg1);
		QAndroidJniObject abs();
		QAndroidJniObject abs(java::math::MathContext arg0);
		QAndroidJniObject add(java::math::BigDecimal arg0);
		QAndroidJniObject add(java::math::BigDecimal arg0, java::math::MathContext arg1);
		jbyte byteValueExact();
		jint compareTo(jobject arg0);
		jint compareTo(java::math::BigDecimal arg0);
		QAndroidJniObject divide(java::math::BigDecimal arg0);
		QAndroidJniObject divide(java::math::BigDecimal arg0, jint arg1);
		QAndroidJniObject divide(java::math::BigDecimal arg0, java::math::MathContext arg1);
		QAndroidJniObject divide(java::math::BigDecimal arg0, java::math::RoundingMode arg1);
		QAndroidJniObject divide(java::math::BigDecimal arg0, jint arg1, jint arg2);
		QAndroidJniObject divide(java::math::BigDecimal arg0, jint arg1, java::math::RoundingMode arg2);
		jarray divideAndRemainder(java::math::BigDecimal arg0);
		jarray divideAndRemainder(java::math::BigDecimal arg0, java::math::MathContext arg1);
		QAndroidJniObject divideToIntegralValue(java::math::BigDecimal arg0);
		QAndroidJniObject divideToIntegralValue(java::math::BigDecimal arg0, java::math::MathContext arg1);
		jdouble doubleValue();
		jboolean equals(jobject arg0);
		jfloat floatValue();
		jint hashCode();
		jint intValue();
		jint intValueExact();
		jlong longValue();
		jlong longValueExact();
		QAndroidJniObject max(java::math::BigDecimal arg0);
		QAndroidJniObject min(java::math::BigDecimal arg0);
		QAndroidJniObject movePointLeft(jint arg0);
		QAndroidJniObject movePointRight(jint arg0);
		QAndroidJniObject multiply(java::math::BigDecimal arg0);
		QAndroidJniObject multiply(java::math::BigDecimal arg0, java::math::MathContext arg1);
		QAndroidJniObject negate();
		QAndroidJniObject negate(java::math::MathContext arg0);
		QAndroidJniObject plus();
		QAndroidJniObject plus(java::math::MathContext arg0);
		QAndroidJniObject pow(jint arg0);
		QAndroidJniObject pow(jint arg0, java::math::MathContext arg1);
		jint precision();
		QAndroidJniObject remainder(java::math::BigDecimal arg0);
		QAndroidJniObject remainder(java::math::BigDecimal arg0, java::math::MathContext arg1);
		QAndroidJniObject round(java::math::MathContext arg0);
		jint scale();
		QAndroidJniObject scaleByPowerOfTen(jint arg0);
		QAndroidJniObject setScale(jint arg0);
		QAndroidJniObject setScale(jint arg0, jint arg1);
		QAndroidJniObject setScale(jint arg0, java::math::RoundingMode arg1);
		jshort shortValueExact();
		jint signum();
		QAndroidJniObject sqrt(java::math::MathContext arg0);
		QAndroidJniObject stripTrailingZeros();
		QAndroidJniObject subtract(java::math::BigDecimal arg0);
		QAndroidJniObject subtract(java::math::BigDecimal arg0, java::math::MathContext arg1);
		QAndroidJniObject toBigInteger();
		QAndroidJniObject toBigIntegerExact();
		jstring toEngineeringString();
		jstring toPlainString();
		jstring toString();
		QAndroidJniObject ulp();
		QAndroidJniObject unscaledValue();
	};
} // namespace java::math

