#pragma once

#include "../../java/lang/Number.def.hpp"

class JObject;
class JString;

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
		
		// QJniObject forward
		template<typename ...Ts> explicit Half(const char *className, const char *sig, Ts...agv) : java::lang::Number(className, sig, std::forward<Ts>(agv)...) {}
		Half(QJniObject obj) : java::lang::Number(obj) {}
		
		// Constructors
		Half(jdouble arg0);
		Half(jfloat arg0);
		Half(JString arg0);
		Half(jshort arg0);
		
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
		static jshort parseHalf(JString arg0);
		static jshort round(jshort arg0);
		static jfloat toFloat(jshort arg0);
		static jshort toHalf(jfloat arg0);
		static JString toHexString(jshort arg0);
		static JString toString(jshort arg0);
		static jshort trunc(jshort arg0);
		static android::util::Half valueOf(jfloat arg0);
		static android::util::Half valueOf(JString arg0);
		static android::util::Half valueOf(jshort arg0);
		jbyte byteValue() const;
		jint compareTo(android::util::Half arg0) const;
		jint compareTo(JObject arg0) const;
		jdouble doubleValue() const;
		jboolean equals(JObject arg0) const;
		jfloat floatValue() const;
		jshort halfValue() const;
		jint hashCode() const;
		jint intValue() const;
		jboolean isNaN() const;
		jlong longValue() const;
		jshort shortValue() const;
		JString toString() const;
	};
} // namespace android::util

