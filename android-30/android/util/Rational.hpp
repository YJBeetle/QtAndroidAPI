#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Number.hpp"


namespace android::util
{
	class Rational : public java::lang::Number
	{
	public:
		// Fields
		static android::util::Rational NEGATIVE_INFINITY();
		static android::util::Rational NaN();
		static android::util::Rational POSITIVE_INFINITY();
		static android::util::Rational ZERO();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Rational(const char *className, const char *sig, Ts...agv) : java::lang::Number(className, sig, std::forward<Ts>(agv)...) {}
		Rational(QAndroidJniObject obj);
		
		// Constructors
		Rational(jint arg0, jint arg1);
		
		// Methods
		static android::util::Rational parseRational(jstring arg0);
		jint compareTo(android::util::Rational arg0);
		jint compareTo(jobject arg0);
		jdouble doubleValue();
		jboolean equals(jobject arg0);
		jfloat floatValue();
		jint getDenominator();
		jint getNumerator();
		jint hashCode();
		jint intValue();
		jboolean isFinite();
		jboolean isInfinite();
		jboolean isNaN();
		jboolean isZero();
		jlong longValue();
		jshort shortValue();
		jstring toString();
	};
} // namespace android::util

