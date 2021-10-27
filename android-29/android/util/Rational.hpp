#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Number.hpp"


namespace android::util
{
	class Rational : public java::lang::Number
	{
	public:
		// Fields
		static QAndroidJniObject NEGATIVE_INFINITY();
		static QAndroidJniObject NaN();
		static QAndroidJniObject POSITIVE_INFINITY();
		static QAndroidJniObject ZERO();
		
		Rational(QAndroidJniObject obj);
		// Constructors
		Rational(jint &arg0, jint &arg1);
		Rational() = default;
		
		// Methods
		static QAndroidJniObject parseRational(jstring arg0);
		static QAndroidJniObject parseRational(const QString &arg0);
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

