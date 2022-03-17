#pragma once

#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./invoke/MethodHandles_Lookup.def.hpp"
#include "../util/Optional.def.hpp"
#include "./Float.def.hpp"

namespace java::lang
{
	// Fields
	inline jint Float::BYTES()
	{
		return getStaticField<jint>(
			"java.lang.Float",
			"BYTES"
		);
	}
	inline jint Float::MAX_EXPONENT()
	{
		return getStaticField<jint>(
			"java.lang.Float",
			"MAX_EXPONENT"
		);
	}
	inline jfloat Float::MAX_VALUE()
	{
		return getStaticField<jfloat>(
			"java.lang.Float",
			"MAX_VALUE"
		);
	}
	inline jint Float::MIN_EXPONENT()
	{
		return getStaticField<jint>(
			"java.lang.Float",
			"MIN_EXPONENT"
		);
	}
	inline jfloat Float::MIN_NORMAL()
	{
		return getStaticField<jfloat>(
			"java.lang.Float",
			"MIN_NORMAL"
		);
	}
	inline jfloat Float::MIN_VALUE()
	{
		return getStaticField<jfloat>(
			"java.lang.Float",
			"MIN_VALUE"
		);
	}
	inline jfloat Float::NEGATIVE_INFINITY()
	{
		return getStaticField<jfloat>(
			"java.lang.Float",
			"NEGATIVE_INFINITY"
		);
	}
	inline jfloat Float::NaN()
	{
		return getStaticField<jfloat>(
			"java.lang.Float",
			"NaN"
		);
	}
	inline jfloat Float::POSITIVE_INFINITY()
	{
		return getStaticField<jfloat>(
			"java.lang.Float",
			"POSITIVE_INFINITY"
		);
	}
	inline jint Float::SIZE()
	{
		return getStaticField<jint>(
			"java.lang.Float",
			"SIZE"
		);
	}
	inline JClass Float::TYPE()
	{
		return getStaticObjectField(
			"java.lang.Float",
			"TYPE",
			"Ljava/lang/Class;"
		);
	}
	
	// Constructors
	inline Float::Float(jdouble arg0)
		: java::lang::Number(
			"java.lang.Float",
			"(D)V",
			arg0
		) {}
	inline Float::Float(jfloat arg0)
		: java::lang::Number(
			"java.lang.Float",
			"(F)V",
			arg0
		) {}
	inline Float::Float(JString arg0)
		: java::lang::Number(
			"java.lang.Float",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline jint Float::compare(jfloat arg0, jfloat arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Float",
			"compare",
			"(FF)I",
			arg0,
			arg1
		);
	}
	inline jint Float::floatToIntBits(jfloat arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Float",
			"floatToIntBits",
			"(F)I",
			arg0
		);
	}
	inline jint Float::floatToRawIntBits(jfloat arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Float",
			"floatToRawIntBits",
			"(F)I",
			arg0
		);
	}
	inline jint Float::hashCode(jfloat arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Float",
			"hashCode",
			"(F)I",
			arg0
		);
	}
	inline jfloat Float::intBitsToFloat(jint arg0)
	{
		return callStaticMethod<jfloat>(
			"java.lang.Float",
			"intBitsToFloat",
			"(I)F",
			arg0
		);
	}
	inline jboolean Float::isFinite(jfloat arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Float",
			"isFinite",
			"(F)Z",
			arg0
		);
	}
	inline jboolean Float::isInfinite(jfloat arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Float",
			"isInfinite",
			"(F)Z",
			arg0
		);
	}
	inline jboolean Float::isNaN(jfloat arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Float",
			"isNaN",
			"(F)Z",
			arg0
		);
	}
	inline jfloat Float::max(jfloat arg0, jfloat arg1)
	{
		return callStaticMethod<jfloat>(
			"java.lang.Float",
			"max",
			"(FF)F",
			arg0,
			arg1
		);
	}
	inline jfloat Float::min(jfloat arg0, jfloat arg1)
	{
		return callStaticMethod<jfloat>(
			"java.lang.Float",
			"min",
			"(FF)F",
			arg0,
			arg1
		);
	}
	inline jfloat Float::parseFloat(JString arg0)
	{
		return callStaticMethod<jfloat>(
			"java.lang.Float",
			"parseFloat",
			"(Ljava/lang/String;)F",
			arg0.object<jstring>()
		);
	}
	inline jfloat Float::sum(jfloat arg0, jfloat arg1)
	{
		return callStaticMethod<jfloat>(
			"java.lang.Float",
			"sum",
			"(FF)F",
			arg0,
			arg1
		);
	}
	inline JString Float::toHexString(jfloat arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Float",
			"toHexString",
			"(F)Ljava/lang/String;",
			arg0
		);
	}
	inline JString Float::toString(jfloat arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Float",
			"toString",
			"(F)Ljava/lang/String;",
			arg0
		);
	}
	inline java::lang::Float Float::valueOf(jfloat arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Float",
			"valueOf",
			"(F)Ljava/lang/Float;",
			arg0
		);
	}
	inline java::lang::Float Float::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Float",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Float;",
			arg0.object<jstring>()
		);
	}
	inline jbyte Float::byteValue() const
	{
		return callMethod<jbyte>(
			"byteValue",
			"()B"
		);
	}
	inline jint Float::compareTo(java::lang::Float arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Float;)I",
			arg0.object()
		);
	}
	inline jint Float::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline java::util::Optional Float::describeConstable() const
	{
		return callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;"
		);
	}
	inline jdouble Float::doubleValue() const
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	inline jboolean Float::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jfloat Float::floatValue() const
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	inline jint Float::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jint Float::intValue() const
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	inline jboolean Float::isInfinite() const
	{
		return callMethod<jboolean>(
			"isInfinite",
			"()Z"
		);
	}
	inline jboolean Float::isNaN() const
	{
		return callMethod<jboolean>(
			"isNaN",
			"()Z"
		);
	}
	inline jlong Float::longValue() const
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	inline java::lang::Float Float::resolveConstantDesc(java::lang::invoke::MethodHandles_Lookup arg0) const
	{
		return callObjectMethod(
			"resolveConstantDesc",
			"(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/Float;",
			arg0.object()
		);
	}
	inline jshort Float::shortValue() const
	{
		return callMethod<jshort>(
			"shortValue",
			"()S"
		);
	}
	inline JString Float::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang

// Base class headers
#include "./Number.hpp"

