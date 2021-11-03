#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./invoke/MethodHandles_Lookup.hpp"
#include "../util/Optional.hpp"
#include "./Float.hpp"

namespace java::lang
{
	// Fields
	jint Float::BYTES()
	{
		return getStaticField<jint>(
			"java.lang.Float",
			"BYTES"
		);
	}
	jint Float::MAX_EXPONENT()
	{
		return getStaticField<jint>(
			"java.lang.Float",
			"MAX_EXPONENT"
		);
	}
	jfloat Float::MAX_VALUE()
	{
		return getStaticField<jfloat>(
			"java.lang.Float",
			"MAX_VALUE"
		);
	}
	jint Float::MIN_EXPONENT()
	{
		return getStaticField<jint>(
			"java.lang.Float",
			"MIN_EXPONENT"
		);
	}
	jfloat Float::MIN_NORMAL()
	{
		return getStaticField<jfloat>(
			"java.lang.Float",
			"MIN_NORMAL"
		);
	}
	jfloat Float::MIN_VALUE()
	{
		return getStaticField<jfloat>(
			"java.lang.Float",
			"MIN_VALUE"
		);
	}
	jfloat Float::NEGATIVE_INFINITY()
	{
		return getStaticField<jfloat>(
			"java.lang.Float",
			"NEGATIVE_INFINITY"
		);
	}
	jfloat Float::NaN()
	{
		return getStaticField<jfloat>(
			"java.lang.Float",
			"NaN"
		);
	}
	jfloat Float::POSITIVE_INFINITY()
	{
		return getStaticField<jfloat>(
			"java.lang.Float",
			"POSITIVE_INFINITY"
		);
	}
	jint Float::SIZE()
	{
		return getStaticField<jint>(
			"java.lang.Float",
			"SIZE"
		);
	}
	JClass Float::TYPE()
	{
		return getStaticObjectField(
			"java.lang.Float",
			"TYPE",
			"Ljava/lang/Class;"
		);
	}
	
	// QAndroidJniObject forward
	Float::Float(QAndroidJniObject obj) : java::lang::Number(obj) {}
	
	// Constructors
	Float::Float(jdouble arg0)
		: java::lang::Number(
			"java.lang.Float",
			"(D)V",
			arg0
		) {}
	Float::Float(jfloat arg0)
		: java::lang::Number(
			"java.lang.Float",
			"(F)V",
			arg0
		) {}
	Float::Float(JString arg0)
		: java::lang::Number(
			"java.lang.Float",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	jint Float::compare(jfloat arg0, jfloat arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Float",
			"compare",
			"(FF)I",
			arg0,
			arg1
		);
	}
	jint Float::floatToIntBits(jfloat arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Float",
			"floatToIntBits",
			"(F)I",
			arg0
		);
	}
	jint Float::floatToRawIntBits(jfloat arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Float",
			"floatToRawIntBits",
			"(F)I",
			arg0
		);
	}
	jint Float::hashCode(jfloat arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Float",
			"hashCode",
			"(F)I",
			arg0
		);
	}
	jfloat Float::intBitsToFloat(jint arg0)
	{
		return callStaticMethod<jfloat>(
			"java.lang.Float",
			"intBitsToFloat",
			"(I)F",
			arg0
		);
	}
	jboolean Float::isFinite(jfloat arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Float",
			"isFinite",
			"(F)Z",
			arg0
		);
	}
	jboolean Float::isInfinite(jfloat arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Float",
			"isInfinite",
			"(F)Z",
			arg0
		);
	}
	jboolean Float::isNaN(jfloat arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Float",
			"isNaN",
			"(F)Z",
			arg0
		);
	}
	jfloat Float::max(jfloat arg0, jfloat arg1)
	{
		return callStaticMethod<jfloat>(
			"java.lang.Float",
			"max",
			"(FF)F",
			arg0,
			arg1
		);
	}
	jfloat Float::min(jfloat arg0, jfloat arg1)
	{
		return callStaticMethod<jfloat>(
			"java.lang.Float",
			"min",
			"(FF)F",
			arg0,
			arg1
		);
	}
	jfloat Float::parseFloat(JString arg0)
	{
		return callStaticMethod<jfloat>(
			"java.lang.Float",
			"parseFloat",
			"(Ljava/lang/String;)F",
			arg0.object<jstring>()
		);
	}
	jfloat Float::sum(jfloat arg0, jfloat arg1)
	{
		return callStaticMethod<jfloat>(
			"java.lang.Float",
			"sum",
			"(FF)F",
			arg0,
			arg1
		);
	}
	JString Float::toHexString(jfloat arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Float",
			"toHexString",
			"(F)Ljava/lang/String;",
			arg0
		);
	}
	JString Float::toString(jfloat arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Float",
			"toString",
			"(F)Ljava/lang/String;",
			arg0
		);
	}
	java::lang::Float Float::valueOf(jfloat arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Float",
			"valueOf",
			"(F)Ljava/lang/Float;",
			arg0
		);
	}
	java::lang::Float Float::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Float",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Float;",
			arg0.object<jstring>()
		);
	}
	jbyte Float::byteValue() const
	{
		return callMethod<jbyte>(
			"byteValue",
			"()B"
		);
	}
	jint Float::compareTo(java::lang::Float arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Float;)I",
			arg0.object()
		);
	}
	jint Float::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	java::util::Optional Float::describeConstable() const
	{
		return callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;"
		);
	}
	jdouble Float::doubleValue() const
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jboolean Float::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jfloat Float::floatValue() const
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jint Float::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint Float::intValue() const
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jboolean Float::isInfinite() const
	{
		return callMethod<jboolean>(
			"isInfinite",
			"()Z"
		);
	}
	jboolean Float::isNaN() const
	{
		return callMethod<jboolean>(
			"isNaN",
			"()Z"
		);
	}
	jlong Float::longValue() const
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	java::lang::Float Float::resolveConstantDesc(java::lang::invoke::MethodHandles_Lookup arg0) const
	{
		return callObjectMethod(
			"resolveConstantDesc",
			"(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/Float;",
			arg0.object()
		);
	}
	jshort Float::shortValue() const
	{
		return callMethod<jshort>(
			"shortValue",
			"()S"
		);
	}
	JString Float::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang

