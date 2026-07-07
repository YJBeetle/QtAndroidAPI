#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Half.def.hpp"

namespace android::util
{
	// Fields
	inline jshort Half::EPSILON()
	{
		return getStaticField<jshort>(
			"android.util.Half",
			"EPSILON"
		);
	}
	inline jshort Half::LOWEST_VALUE()
	{
		return getStaticField<jshort>(
			"android.util.Half",
			"LOWEST_VALUE"
		);
	}
	inline jint Half::MAX_EXPONENT()
	{
		return getStaticField<jint>(
			"android.util.Half",
			"MAX_EXPONENT"
		);
	}
	inline jshort Half::MAX_VALUE()
	{
		return getStaticField<jshort>(
			"android.util.Half",
			"MAX_VALUE"
		);
	}
	inline jint Half::MIN_EXPONENT()
	{
		return getStaticField<jint>(
			"android.util.Half",
			"MIN_EXPONENT"
		);
	}
	inline jshort Half::MIN_NORMAL()
	{
		return getStaticField<jshort>(
			"android.util.Half",
			"MIN_NORMAL"
		);
	}
	inline jshort Half::MIN_VALUE()
	{
		return getStaticField<jshort>(
			"android.util.Half",
			"MIN_VALUE"
		);
	}
	inline jshort Half::NEGATIVE_INFINITY()
	{
		return getStaticField<jshort>(
			"android.util.Half",
			"NEGATIVE_INFINITY"
		);
	}
	inline jshort Half::NEGATIVE_ZERO()
	{
		return getStaticField<jshort>(
			"android.util.Half",
			"NEGATIVE_ZERO"
		);
	}
	inline jshort Half::NaN()
	{
		return getStaticField<jshort>(
			"android.util.Half",
			"NaN"
		);
	}
	inline jshort Half::POSITIVE_INFINITY()
	{
		return getStaticField<jshort>(
			"android.util.Half",
			"POSITIVE_INFINITY"
		);
	}
	inline jshort Half::POSITIVE_ZERO()
	{
		return getStaticField<jshort>(
			"android.util.Half",
			"POSITIVE_ZERO"
		);
	}
	inline jint Half::SIZE()
	{
		return getStaticField<jint>(
			"android.util.Half",
			"SIZE"
		);
	}
	
	// Constructors
	inline Half::Half(jdouble arg0)
		: java::lang::Number(
			"android.util.Half",
			"(D)V",
			arg0
		) {}
	inline Half::Half(jfloat arg0)
		: java::lang::Number(
			"android.util.Half",
			"(F)V",
			arg0
		) {}
	inline Half::Half(JString arg0)
		: java::lang::Number(
			"android.util.Half",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline Half::Half(jshort arg0)
		: java::lang::Number(
			"android.util.Half",
			"(S)V",
			arg0
		) {}
	
	// Methods
	inline jshort Half::abs(jshort arg0)
	{
		return callStaticMethod<jshort>(
			"android.util.Half",
			"abs",
			"(S)S",
			arg0
		);
	}
	inline jshort Half::ceil(jshort arg0)
	{
		return callStaticMethod<jshort>(
			"android.util.Half",
			"ceil",
			"(S)S",
			arg0
		);
	}
	inline jint Half::compare(jshort arg0, jshort arg1)
	{
		return callStaticMethod<jint>(
			"android.util.Half",
			"compare",
			"(SS)I",
			arg0,
			arg1
		);
	}
	inline jshort Half::copySign(jshort arg0, jshort arg1)
	{
		return callStaticMethod<jshort>(
			"android.util.Half",
			"copySign",
			"(SS)S",
			arg0,
			arg1
		);
	}
	inline jboolean Half::equals(jshort arg0, jshort arg1)
	{
		return callStaticMethod<jboolean>(
			"android.util.Half",
			"equals",
			"(SS)Z",
			arg0,
			arg1
		);
	}
	inline jshort Half::floor(jshort arg0)
	{
		return callStaticMethod<jshort>(
			"android.util.Half",
			"floor",
			"(S)S",
			arg0
		);
	}
	inline jint Half::getExponent(jshort arg0)
	{
		return callStaticMethod<jint>(
			"android.util.Half",
			"getExponent",
			"(S)I",
			arg0
		);
	}
	inline jint Half::getSign(jshort arg0)
	{
		return callStaticMethod<jint>(
			"android.util.Half",
			"getSign",
			"(S)I",
			arg0
		);
	}
	inline jint Half::getSignificand(jshort arg0)
	{
		return callStaticMethod<jint>(
			"android.util.Half",
			"getSignificand",
			"(S)I",
			arg0
		);
	}
	inline jboolean Half::greater(jshort arg0, jshort arg1)
	{
		return callStaticMethod<jboolean>(
			"android.util.Half",
			"greater",
			"(SS)Z",
			arg0,
			arg1
		);
	}
	inline jboolean Half::greaterEquals(jshort arg0, jshort arg1)
	{
		return callStaticMethod<jboolean>(
			"android.util.Half",
			"greaterEquals",
			"(SS)Z",
			arg0,
			arg1
		);
	}
	inline jint Half::halfToIntBits(jshort arg0)
	{
		return callStaticMethod<jint>(
			"android.util.Half",
			"halfToIntBits",
			"(S)I",
			arg0
		);
	}
	inline jint Half::halfToRawIntBits(jshort arg0)
	{
		return callStaticMethod<jint>(
			"android.util.Half",
			"halfToRawIntBits",
			"(S)I",
			arg0
		);
	}
	inline jshort Half::halfToShortBits(jshort arg0)
	{
		return callStaticMethod<jshort>(
			"android.util.Half",
			"halfToShortBits",
			"(S)S",
			arg0
		);
	}
	inline jint Half::hashCode(jshort arg0)
	{
		return callStaticMethod<jint>(
			"android.util.Half",
			"hashCode",
			"(S)I",
			arg0
		);
	}
	inline jshort Half::intBitsToHalf(jint arg0)
	{
		return callStaticMethod<jshort>(
			"android.util.Half",
			"intBitsToHalf",
			"(I)S",
			arg0
		);
	}
	inline jboolean Half::isInfinite(jshort arg0)
	{
		return callStaticMethod<jboolean>(
			"android.util.Half",
			"isInfinite",
			"(S)Z",
			arg0
		);
	}
	inline jboolean Half::isNaN(jshort arg0)
	{
		return callStaticMethod<jboolean>(
			"android.util.Half",
			"isNaN",
			"(S)Z",
			arg0
		);
	}
	inline jboolean Half::isNormalized(jshort arg0)
	{
		return callStaticMethod<jboolean>(
			"android.util.Half",
			"isNormalized",
			"(S)Z",
			arg0
		);
	}
	inline jboolean Half::less(jshort arg0, jshort arg1)
	{
		return callStaticMethod<jboolean>(
			"android.util.Half",
			"less",
			"(SS)Z",
			arg0,
			arg1
		);
	}
	inline jboolean Half::lessEquals(jshort arg0, jshort arg1)
	{
		return callStaticMethod<jboolean>(
			"android.util.Half",
			"lessEquals",
			"(SS)Z",
			arg0,
			arg1
		);
	}
	inline jshort Half::max(jshort arg0, jshort arg1)
	{
		return callStaticMethod<jshort>(
			"android.util.Half",
			"max",
			"(SS)S",
			arg0,
			arg1
		);
	}
	inline jshort Half::min(jshort arg0, jshort arg1)
	{
		return callStaticMethod<jshort>(
			"android.util.Half",
			"min",
			"(SS)S",
			arg0,
			arg1
		);
	}
	inline jshort Half::parseHalf(JString arg0)
	{
		return callStaticMethod<jshort>(
			"android.util.Half",
			"parseHalf",
			"(Ljava/lang/String;)S",
			arg0.object<jstring>()
		);
	}
	inline jshort Half::round(jshort arg0)
	{
		return callStaticMethod<jshort>(
			"android.util.Half",
			"round",
			"(S)S",
			arg0
		);
	}
	inline jfloat Half::toFloat(jshort arg0)
	{
		return callStaticMethod<jfloat>(
			"android.util.Half",
			"toFloat",
			"(S)F",
			arg0
		);
	}
	inline jshort Half::toHalf(jfloat arg0)
	{
		return callStaticMethod<jshort>(
			"android.util.Half",
			"toHalf",
			"(F)S",
			arg0
		);
	}
	inline JString Half::toHexString(jshort arg0)
	{
		return callStaticObjectMethod(
			"android.util.Half",
			"toHexString",
			"(S)Ljava/lang/String;",
			arg0
		);
	}
	inline JString Half::toString(jshort arg0)
	{
		return callStaticObjectMethod(
			"android.util.Half",
			"toString",
			"(S)Ljava/lang/String;",
			arg0
		);
	}
	inline jshort Half::trunc(jshort arg0)
	{
		return callStaticMethod<jshort>(
			"android.util.Half",
			"trunc",
			"(S)S",
			arg0
		);
	}
	inline android::util::Half Half::valueOf(jfloat arg0)
	{
		return callStaticObjectMethod(
			"android.util.Half",
			"valueOf",
			"(F)Landroid/util/Half;",
			arg0
		);
	}
	inline android::util::Half Half::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.util.Half",
			"valueOf",
			"(Ljava/lang/String;)Landroid/util/Half;",
			arg0.object<jstring>()
		);
	}
	inline android::util::Half Half::valueOf(jshort arg0)
	{
		return callStaticObjectMethod(
			"android.util.Half",
			"valueOf",
			"(S)Landroid/util/Half;",
			arg0
		);
	}
	inline jbyte Half::byteValue() const
	{
		return callMethod<jbyte>(
			"byteValue",
			"()B"
		);
	}
	inline jint Half::compareTo(android::util::Half arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/util/Half;)I",
			arg0.object()
		);
	}
	inline jint Half::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jdouble Half::doubleValue() const
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	inline jboolean Half::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jfloat Half::floatValue() const
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	inline jshort Half::halfValue() const
	{
		return callMethod<jshort>(
			"halfValue",
			"()S"
		);
	}
	inline jint Half::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jint Half::intValue() const
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	inline jboolean Half::isNaN() const
	{
		return callMethod<jboolean>(
			"isNaN",
			"()Z"
		);
	}
	inline jlong Half::longValue() const
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	inline jshort Half::shortValue() const
	{
		return callMethod<jshort>(
			"shortValue",
			"()S"
		);
	}
	inline JString Half::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::util

// Base class headers
#include "../../java/lang/Number.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::util;
#endif
