#pragma once

#include "../../java/lang/Number.def.hpp"

class JObject;
class JString;

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
		
		// QJniObject forward
		template<typename ...Ts> explicit Rational(const char *className, const char *sig, Ts...agv) : java::lang::Number(className, sig, std::forward<Ts>(agv)...) {}
		Rational(QJniObject obj) : java::lang::Number(obj) {}
		
		// Constructors
		Rational(jint arg0, jint arg1);
		
		// Methods
		static android::util::Rational parseRational(JString arg0);
		jint compareTo(android::util::Rational arg0) const;
		jint compareTo(JObject arg0) const;
		jdouble doubleValue() const;
		jboolean equals(JObject arg0) const;
		jfloat floatValue() const;
		jint getDenominator() const;
		jint getNumerator() const;
		jint hashCode() const;
		jint intValue() const;
		jboolean isFinite() const;
		jboolean isInfinite() const;
		jboolean isNaN() const;
		jboolean isZero() const;
		jlong longValue() const;
		jshort shortValue() const;
		JString toString() const;
	};
} // namespace android::util

