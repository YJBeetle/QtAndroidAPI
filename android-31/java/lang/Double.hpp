#pragma once

#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./invoke/MethodHandles_Lookup.def.hpp"
#include "../util/Optional.def.hpp"
#include "./Double.def.hpp"

namespace java::lang
{
	// Fields
	inline jint Double::BYTES()
	{
		return getStaticField<jint>(
			"java.lang.Double",
			"BYTES"
		);
	}
	inline jint Double::MAX_EXPONENT()
	{
		return getStaticField<jint>(
			"java.lang.Double",
			"MAX_EXPONENT"
		);
	}
	inline jdouble Double::MAX_VALUE()
	{
		return getStaticField<jdouble>(
			"java.lang.Double",
			"MAX_VALUE"
		);
	}
	inline jint Double::MIN_EXPONENT()
	{
		return getStaticField<jint>(
			"java.lang.Double",
			"MIN_EXPONENT"
		);
	}
	inline jdouble Double::MIN_NORMAL()
	{
		return getStaticField<jdouble>(
			"java.lang.Double",
			"MIN_NORMAL"
		);
	}
	inline jdouble Double::MIN_VALUE()
	{
		return getStaticField<jdouble>(
			"java.lang.Double",
			"MIN_VALUE"
		);
	}
	inline jdouble Double::NEGATIVE_INFINITY()
	{
		return getStaticField<jdouble>(
			"java.lang.Double",
			"NEGATIVE_INFINITY"
		);
	}
	inline jdouble Double::NaN()
	{
		return getStaticField<jdouble>(
			"java.lang.Double",
			"NaN"
		);
	}
	inline jdouble Double::POSITIVE_INFINITY()
	{
		return getStaticField<jdouble>(
			"java.lang.Double",
			"POSITIVE_INFINITY"
		);
	}
	inline jint Double::PRECISION()
	{
		return getStaticField<jint>(
			"java.lang.Double",
			"PRECISION"
		);
	}
	inline jint Double::SIZE()
	{
		return getStaticField<jint>(
			"java.lang.Double",
			"SIZE"
		);
	}
	inline JClass Double::TYPE()
	{
		return getStaticObjectField(
			"java.lang.Double",
			"TYPE",
			"Ljava/lang/Class;"
		);
	}
	
	// Constructors
	inline Double::Double(jdouble arg0)
		: java::lang::Number(
			"java.lang.Double",
			"(D)V",
			arg0
		) {}
	inline Double::Double(JString arg0)
		: java::lang::Number(
			"java.lang.Double",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline jint Double::compare(jdouble arg0, jdouble arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Double",
			"compare",
			"(DD)I",
			arg0,
			arg1
		);
	}
	inline jlong Double::doubleToLongBits(jdouble arg0)
	{
		return callStaticMethod<jlong>(
			"java.lang.Double",
			"doubleToLongBits",
			"(D)J",
			arg0
		);
	}
	inline jlong Double::doubleToRawLongBits(jdouble arg0)
	{
		return callStaticMethod<jlong>(
			"java.lang.Double",
			"doubleToRawLongBits",
			"(D)J",
			arg0
		);
	}
	inline jint Double::hashCode(jdouble arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Double",
			"hashCode",
			"(D)I",
			arg0
		);
	}
	inline jboolean Double::isFinite(jdouble arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Double",
			"isFinite",
			"(D)Z",
			arg0
		);
	}
	inline jboolean Double::isInfinite(jdouble arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Double",
			"isInfinite",
			"(D)Z",
			arg0
		);
	}
	inline jboolean Double::isNaN(jdouble arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Double",
			"isNaN",
			"(D)Z",
			arg0
		);
	}
	inline jdouble Double::longBitsToDouble(jlong arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Double",
			"longBitsToDouble",
			"(J)D",
			arg0
		);
	}
	inline jdouble Double::max(jdouble arg0, jdouble arg1)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Double",
			"max",
			"(DD)D",
			arg0,
			arg1
		);
	}
	inline jdouble Double::min(jdouble arg0, jdouble arg1)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Double",
			"min",
			"(DD)D",
			arg0,
			arg1
		);
	}
	inline jdouble Double::parseDouble(JString arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Double",
			"parseDouble",
			"(Ljava/lang/String;)D",
			arg0.object<jstring>()
		);
	}
	inline jdouble Double::sum(jdouble arg0, jdouble arg1)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Double",
			"sum",
			"(DD)D",
			arg0,
			arg1
		);
	}
	inline JString Double::toHexString(jdouble arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Double",
			"toHexString",
			"(D)Ljava/lang/String;",
			arg0
		);
	}
	inline JString Double::toString(jdouble arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Double",
			"toString",
			"(D)Ljava/lang/String;",
			arg0
		);
	}
	inline java::lang::Double Double::valueOf(jdouble arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Double",
			"valueOf",
			"(D)Ljava/lang/Double;",
			arg0
		);
	}
	inline java::lang::Double Double::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Double",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Double;",
			arg0.object<jstring>()
		);
	}
	inline jbyte Double::byteValue() const
	{
		return callMethod<jbyte>(
			"byteValue",
			"()B"
		);
	}
	inline jint Double::compareTo(java::lang::Double arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Double;)I",
			arg0.object()
		);
	}
	inline jint Double::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline java::util::Optional Double::describeConstable() const
	{
		return callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;"
		);
	}
	inline jdouble Double::doubleValue() const
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	inline jboolean Double::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jfloat Double::floatValue() const
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	inline jint Double::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jint Double::intValue() const
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	inline jboolean Double::isInfinite() const
	{
		return callMethod<jboolean>(
			"isInfinite",
			"()Z"
		);
	}
	inline jboolean Double::isNaN() const
	{
		return callMethod<jboolean>(
			"isNaN",
			"()Z"
		);
	}
	inline jlong Double::longValue() const
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	inline java::lang::Double Double::resolveConstantDesc(java::lang::invoke::MethodHandles_Lookup arg0) const
	{
		return callObjectMethod(
			"resolveConstantDesc",
			"(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/Double;",
			arg0.object()
		);
	}
	inline jshort Double::shortValue() const
	{
		return callMethod<jshort>(
			"shortValue",
			"()S"
		);
	}
	inline JString Double::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang

// Base class headers
#include "./Number.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang;
#endif
