#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Half.hpp"

namespace android::util
{
	// Fields
	jshort Half::EPSILON()
	{
		return getStaticField<jshort>(
			"android.util.Half",
			"EPSILON"
		);
	}
	jshort Half::LOWEST_VALUE()
	{
		return getStaticField<jshort>(
			"android.util.Half",
			"LOWEST_VALUE"
		);
	}
	jint Half::MAX_EXPONENT()
	{
		return getStaticField<jint>(
			"android.util.Half",
			"MAX_EXPONENT"
		);
	}
	jshort Half::MAX_VALUE()
	{
		return getStaticField<jshort>(
			"android.util.Half",
			"MAX_VALUE"
		);
	}
	jint Half::MIN_EXPONENT()
	{
		return getStaticField<jint>(
			"android.util.Half",
			"MIN_EXPONENT"
		);
	}
	jshort Half::MIN_NORMAL()
	{
		return getStaticField<jshort>(
			"android.util.Half",
			"MIN_NORMAL"
		);
	}
	jshort Half::MIN_VALUE()
	{
		return getStaticField<jshort>(
			"android.util.Half",
			"MIN_VALUE"
		);
	}
	jshort Half::NEGATIVE_INFINITY()
	{
		return getStaticField<jshort>(
			"android.util.Half",
			"NEGATIVE_INFINITY"
		);
	}
	jshort Half::NEGATIVE_ZERO()
	{
		return getStaticField<jshort>(
			"android.util.Half",
			"NEGATIVE_ZERO"
		);
	}
	jshort Half::NaN()
	{
		return getStaticField<jshort>(
			"android.util.Half",
			"NaN"
		);
	}
	jshort Half::POSITIVE_INFINITY()
	{
		return getStaticField<jshort>(
			"android.util.Half",
			"POSITIVE_INFINITY"
		);
	}
	jshort Half::POSITIVE_ZERO()
	{
		return getStaticField<jshort>(
			"android.util.Half",
			"POSITIVE_ZERO"
		);
	}
	jint Half::SIZE()
	{
		return getStaticField<jint>(
			"android.util.Half",
			"SIZE"
		);
	}
	
	// QAndroidJniObject forward
	Half::Half(QAndroidJniObject obj) : java::lang::Number(obj) {}
	
	// Constructors
	Half::Half(jdouble arg0)
		: java::lang::Number(
			"android.util.Half",
			"(D)V",
			arg0
		) {}
	Half::Half(jfloat arg0)
		: java::lang::Number(
			"android.util.Half",
			"(F)V",
			arg0
		) {}
	Half::Half(JString arg0)
		: java::lang::Number(
			"android.util.Half",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	Half::Half(jshort arg0)
		: java::lang::Number(
			"android.util.Half",
			"(S)V",
			arg0
		) {}
	
	// Methods
	jshort Half::abs(jshort arg0)
	{
		return callStaticMethod<jshort>(
			"android.util.Half",
			"abs",
			"(S)S",
			arg0
		);
	}
	jshort Half::ceil(jshort arg0)
	{
		return callStaticMethod<jshort>(
			"android.util.Half",
			"ceil",
			"(S)S",
			arg0
		);
	}
	jint Half::compare(jshort arg0, jshort arg1)
	{
		return callStaticMethod<jint>(
			"android.util.Half",
			"compare",
			"(SS)I",
			arg0,
			arg1
		);
	}
	jshort Half::copySign(jshort arg0, jshort arg1)
	{
		return callStaticMethod<jshort>(
			"android.util.Half",
			"copySign",
			"(SS)S",
			arg0,
			arg1
		);
	}
	jboolean Half::equals(jshort arg0, jshort arg1)
	{
		return callStaticMethod<jboolean>(
			"android.util.Half",
			"equals",
			"(SS)Z",
			arg0,
			arg1
		);
	}
	jshort Half::floor(jshort arg0)
	{
		return callStaticMethod<jshort>(
			"android.util.Half",
			"floor",
			"(S)S",
			arg0
		);
	}
	jint Half::getExponent(jshort arg0)
	{
		return callStaticMethod<jint>(
			"android.util.Half",
			"getExponent",
			"(S)I",
			arg0
		);
	}
	jint Half::getSign(jshort arg0)
	{
		return callStaticMethod<jint>(
			"android.util.Half",
			"getSign",
			"(S)I",
			arg0
		);
	}
	jint Half::getSignificand(jshort arg0)
	{
		return callStaticMethod<jint>(
			"android.util.Half",
			"getSignificand",
			"(S)I",
			arg0
		);
	}
	jboolean Half::greater(jshort arg0, jshort arg1)
	{
		return callStaticMethod<jboolean>(
			"android.util.Half",
			"greater",
			"(SS)Z",
			arg0,
			arg1
		);
	}
	jboolean Half::greaterEquals(jshort arg0, jshort arg1)
	{
		return callStaticMethod<jboolean>(
			"android.util.Half",
			"greaterEquals",
			"(SS)Z",
			arg0,
			arg1
		);
	}
	jint Half::halfToIntBits(jshort arg0)
	{
		return callStaticMethod<jint>(
			"android.util.Half",
			"halfToIntBits",
			"(S)I",
			arg0
		);
	}
	jint Half::halfToRawIntBits(jshort arg0)
	{
		return callStaticMethod<jint>(
			"android.util.Half",
			"halfToRawIntBits",
			"(S)I",
			arg0
		);
	}
	jshort Half::halfToShortBits(jshort arg0)
	{
		return callStaticMethod<jshort>(
			"android.util.Half",
			"halfToShortBits",
			"(S)S",
			arg0
		);
	}
	jint Half::hashCode(jshort arg0)
	{
		return callStaticMethod<jint>(
			"android.util.Half",
			"hashCode",
			"(S)I",
			arg0
		);
	}
	jshort Half::intBitsToHalf(jint arg0)
	{
		return callStaticMethod<jshort>(
			"android.util.Half",
			"intBitsToHalf",
			"(I)S",
			arg0
		);
	}
	jboolean Half::isInfinite(jshort arg0)
	{
		return callStaticMethod<jboolean>(
			"android.util.Half",
			"isInfinite",
			"(S)Z",
			arg0
		);
	}
	jboolean Half::isNaN(jshort arg0)
	{
		return callStaticMethod<jboolean>(
			"android.util.Half",
			"isNaN",
			"(S)Z",
			arg0
		);
	}
	jboolean Half::isNormalized(jshort arg0)
	{
		return callStaticMethod<jboolean>(
			"android.util.Half",
			"isNormalized",
			"(S)Z",
			arg0
		);
	}
	jboolean Half::less(jshort arg0, jshort arg1)
	{
		return callStaticMethod<jboolean>(
			"android.util.Half",
			"less",
			"(SS)Z",
			arg0,
			arg1
		);
	}
	jboolean Half::lessEquals(jshort arg0, jshort arg1)
	{
		return callStaticMethod<jboolean>(
			"android.util.Half",
			"lessEquals",
			"(SS)Z",
			arg0,
			arg1
		);
	}
	jshort Half::max(jshort arg0, jshort arg1)
	{
		return callStaticMethod<jshort>(
			"android.util.Half",
			"max",
			"(SS)S",
			arg0,
			arg1
		);
	}
	jshort Half::min(jshort arg0, jshort arg1)
	{
		return callStaticMethod<jshort>(
			"android.util.Half",
			"min",
			"(SS)S",
			arg0,
			arg1
		);
	}
	jshort Half::parseHalf(JString arg0)
	{
		return callStaticMethod<jshort>(
			"android.util.Half",
			"parseHalf",
			"(Ljava/lang/String;)S",
			arg0.object<jstring>()
		);
	}
	jshort Half::round(jshort arg0)
	{
		return callStaticMethod<jshort>(
			"android.util.Half",
			"round",
			"(S)S",
			arg0
		);
	}
	jfloat Half::toFloat(jshort arg0)
	{
		return callStaticMethod<jfloat>(
			"android.util.Half",
			"toFloat",
			"(S)F",
			arg0
		);
	}
	jshort Half::toHalf(jfloat arg0)
	{
		return callStaticMethod<jshort>(
			"android.util.Half",
			"toHalf",
			"(F)S",
			arg0
		);
	}
	JString Half::toHexString(jshort arg0)
	{
		return callStaticObjectMethod(
			"android.util.Half",
			"toHexString",
			"(S)Ljava/lang/String;",
			arg0
		);
	}
	JString Half::toString(jshort arg0)
	{
		return callStaticObjectMethod(
			"android.util.Half",
			"toString",
			"(S)Ljava/lang/String;",
			arg0
		);
	}
	jshort Half::trunc(jshort arg0)
	{
		return callStaticMethod<jshort>(
			"android.util.Half",
			"trunc",
			"(S)S",
			arg0
		);
	}
	android::util::Half Half::valueOf(jfloat arg0)
	{
		return callStaticObjectMethod(
			"android.util.Half",
			"valueOf",
			"(F)Landroid/util/Half;",
			arg0
		);
	}
	android::util::Half Half::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.util.Half",
			"valueOf",
			"(Ljava/lang/String;)Landroid/util/Half;",
			arg0.object<jstring>()
		);
	}
	android::util::Half Half::valueOf(jshort arg0)
	{
		return callStaticObjectMethod(
			"android.util.Half",
			"valueOf",
			"(S)Landroid/util/Half;",
			arg0
		);
	}
	jbyte Half::byteValue() const
	{
		return callMethod<jbyte>(
			"byteValue",
			"()B"
		);
	}
	jint Half::compareTo(android::util::Half arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/util/Half;)I",
			arg0.object()
		);
	}
	jint Half::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jdouble Half::doubleValue() const
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jboolean Half::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jfloat Half::floatValue() const
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jshort Half::halfValue() const
	{
		return callMethod<jshort>(
			"halfValue",
			"()S"
		);
	}
	jint Half::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint Half::intValue() const
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jboolean Half::isNaN() const
	{
		return callMethod<jboolean>(
			"isNaN",
			"()Z"
		);
	}
	jlong Half::longValue() const
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	jshort Half::shortValue() const
	{
		return callMethod<jshort>(
			"shortValue",
			"()S"
		);
	}
	JString Half::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::util

