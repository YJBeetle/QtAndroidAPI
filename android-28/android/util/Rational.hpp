#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Rational.def.hpp"

namespace android::util
{
	// Fields
	inline android::util::Rational Rational::NEGATIVE_INFINITY()
	{
		return getStaticObjectField(
			"android.util.Rational",
			"NEGATIVE_INFINITY",
			"Landroid/util/Rational;"
		);
	}
	inline android::util::Rational Rational::NaN()
	{
		return getStaticObjectField(
			"android.util.Rational",
			"NaN",
			"Landroid/util/Rational;"
		);
	}
	inline android::util::Rational Rational::POSITIVE_INFINITY()
	{
		return getStaticObjectField(
			"android.util.Rational",
			"POSITIVE_INFINITY",
			"Landroid/util/Rational;"
		);
	}
	inline android::util::Rational Rational::ZERO()
	{
		return getStaticObjectField(
			"android.util.Rational",
			"ZERO",
			"Landroid/util/Rational;"
		);
	}
	
	// Constructors
	inline Rational::Rational(jint arg0, jint arg1)
		: java::lang::Number(
			"android.util.Rational",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline android::util::Rational Rational::parseRational(JString arg0)
	{
		return callStaticObjectMethod(
			"android.util.Rational",
			"parseRational",
			"(Ljava/lang/String;)Landroid/util/Rational;",
			arg0.object<jstring>()
		);
	}
	inline jint Rational::compareTo(android::util::Rational arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/util/Rational;)I",
			arg0.object()
		);
	}
	inline jint Rational::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jdouble Rational::doubleValue() const
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	inline jboolean Rational::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jfloat Rational::floatValue() const
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	inline jint Rational::getDenominator() const
	{
		return callMethod<jint>(
			"getDenominator",
			"()I"
		);
	}
	inline jint Rational::getNumerator() const
	{
		return callMethod<jint>(
			"getNumerator",
			"()I"
		);
	}
	inline jint Rational::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jint Rational::intValue() const
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	inline jboolean Rational::isFinite() const
	{
		return callMethod<jboolean>(
			"isFinite",
			"()Z"
		);
	}
	inline jboolean Rational::isInfinite() const
	{
		return callMethod<jboolean>(
			"isInfinite",
			"()Z"
		);
	}
	inline jboolean Rational::isNaN() const
	{
		return callMethod<jboolean>(
			"isNaN",
			"()Z"
		);
	}
	inline jboolean Rational::isZero() const
	{
		return callMethod<jboolean>(
			"isZero",
			"()Z"
		);
	}
	inline jlong Rational::longValue() const
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	inline jshort Rational::shortValue() const
	{
		return callMethod<jshort>(
			"shortValue",
			"()S"
		);
	}
	inline JString Rational::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::util

// Base class headers
#include "../../java/lang/Number.hpp"

