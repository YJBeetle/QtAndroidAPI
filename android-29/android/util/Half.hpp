#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Number.hpp"


namespace android::util
{
	class Half : public java::lang::Number
	{
	public:
		// Fields
		static jshort EPSILON();
		static jshort LOWEST_VALUE();
		static jint MAX_EXPONENT();
		static jshort MAX_VALUE();
		static jint MIN_EXPONENT();
		static jshort MIN_NORMAL();
		static jshort MIN_VALUE();
		static jshort NEGATIVE_INFINITY();
		static jshort NEGATIVE_ZERO();
		static jshort NaN();
		static jshort POSITIVE_INFINITY();
		static jshort POSITIVE_ZERO();
		static jint SIZE();
		
		Half(QAndroidJniObject obj);
		// Constructors
		Half(jdouble &arg0);
		Half(jfloat &arg0);
		Half(jstring &arg0);
		Half(const QString &arg0);
		Half(jshort &arg0);
		Half() = default;
		
		// Methods
		static jshort abs(jshort arg0);
		static jshort ceil(jshort arg0);
		static jint compare(jshort arg0, jshort arg1);
		static jshort copySign(jshort arg0, jshort arg1);
		static jboolean equals(jshort arg0, jshort arg1);
		static jshort floor(jshort arg0);
		static jint getExponent(jshort arg0);
		static jint getSign(jshort arg0);
		static jint getSignificand(jshort arg0);
		static jboolean greater(jshort arg0, jshort arg1);
		static jboolean greaterEquals(jshort arg0, jshort arg1);
		static jint halfToIntBits(jshort arg0);
		static jint halfToRawIntBits(jshort arg0);
		static jshort halfToShortBits(jshort arg0);
		static jint hashCode(jshort arg0);
		static jshort intBitsToHalf(jint arg0);
		static jboolean isInfinite(jshort arg0);
		static jboolean isNaN(jshort arg0);
		static jboolean isNormalized(jshort arg0);
		static jboolean less(jshort arg0, jshort arg1);
		static jboolean lessEquals(jshort arg0, jshort arg1);
		static jshort max(jshort arg0, jshort arg1);
		static jshort min(jshort arg0, jshort arg1);
		static jshort parseHalf(jstring arg0);
		static jshort parseHalf(const QString &arg0);
		static jshort round(jshort arg0);
		static jfloat toFloat(jshort arg0);
		static jshort toHalf(jfloat arg0);
		static jstring toHexString(jshort arg0);
		static jstring toString(jshort arg0);
		static jshort trunc(jshort arg0);
		static QAndroidJniObject valueOf(jfloat arg0);
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static QAndroidJniObject valueOf(jshort arg0);
		jbyte byteValue();
		jint compareTo(android::util::Half arg0);
		jint compareTo(jobject arg0);
		jdouble doubleValue();
		jboolean equals(jobject arg0);
		jfloat floatValue();
		jshort halfValue();
		jint hashCode();
		jint intValue();
		jboolean isNaN();
		jlong longValue();
		jshort shortValue();
		jstring toString();
	};
} // namespace android::util

