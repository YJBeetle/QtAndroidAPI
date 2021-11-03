#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./invoke/MethodHandles_Lookup.hpp"
#include "../util/Optional.hpp"
#include "./Double.hpp"

namespace java::lang
{
	// Fields
	jint Double::BYTES()
	{
		return getStaticField<jint>(
			"java.lang.Double",
			"BYTES"
		);
	}
	jint Double::MAX_EXPONENT()
	{
		return getStaticField<jint>(
			"java.lang.Double",
			"MAX_EXPONENT"
		);
	}
	jdouble Double::MAX_VALUE()
	{
		return getStaticField<jdouble>(
			"java.lang.Double",
			"MAX_VALUE"
		);
	}
	jint Double::MIN_EXPONENT()
	{
		return getStaticField<jint>(
			"java.lang.Double",
			"MIN_EXPONENT"
		);
	}
	jdouble Double::MIN_NORMAL()
	{
		return getStaticField<jdouble>(
			"java.lang.Double",
			"MIN_NORMAL"
		);
	}
	jdouble Double::MIN_VALUE()
	{
		return getStaticField<jdouble>(
			"java.lang.Double",
			"MIN_VALUE"
		);
	}
	jdouble Double::NEGATIVE_INFINITY()
	{
		return getStaticField<jdouble>(
			"java.lang.Double",
			"NEGATIVE_INFINITY"
		);
	}
	jdouble Double::NaN()
	{
		return getStaticField<jdouble>(
			"java.lang.Double",
			"NaN"
		);
	}
	jdouble Double::POSITIVE_INFINITY()
	{
		return getStaticField<jdouble>(
			"java.lang.Double",
			"POSITIVE_INFINITY"
		);
	}
	jint Double::SIZE()
	{
		return getStaticField<jint>(
			"java.lang.Double",
			"SIZE"
		);
	}
	JClass Double::TYPE()
	{
		return getStaticObjectField(
			"java.lang.Double",
			"TYPE",
			"Ljava/lang/Class;"
		);
	}
	
	// QJniObject forward
	Double::Double(QJniObject obj) : java::lang::Number(obj) {}
	
	// Constructors
	Double::Double(jdouble arg0)
		: java::lang::Number(
			"java.lang.Double",
			"(D)V",
			arg0
		) {}
	Double::Double(JString arg0)
		: java::lang::Number(
			"java.lang.Double",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	jint Double::compare(jdouble arg0, jdouble arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Double",
			"compare",
			"(DD)I",
			arg0,
			arg1
		);
	}
	jlong Double::doubleToLongBits(jdouble arg0)
	{
		return callStaticMethod<jlong>(
			"java.lang.Double",
			"doubleToLongBits",
			"(D)J",
			arg0
		);
	}
	jlong Double::doubleToRawLongBits(jdouble arg0)
	{
		return callStaticMethod<jlong>(
			"java.lang.Double",
			"doubleToRawLongBits",
			"(D)J",
			arg0
		);
	}
	jint Double::hashCode(jdouble arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Double",
			"hashCode",
			"(D)I",
			arg0
		);
	}
	jboolean Double::isFinite(jdouble arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Double",
			"isFinite",
			"(D)Z",
			arg0
		);
	}
	jboolean Double::isInfinite(jdouble arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Double",
			"isInfinite",
			"(D)Z",
			arg0
		);
	}
	jboolean Double::isNaN(jdouble arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Double",
			"isNaN",
			"(D)Z",
			arg0
		);
	}
	jdouble Double::longBitsToDouble(jlong arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Double",
			"longBitsToDouble",
			"(J)D",
			arg0
		);
	}
	jdouble Double::max(jdouble arg0, jdouble arg1)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Double",
			"max",
			"(DD)D",
			arg0,
			arg1
		);
	}
	jdouble Double::min(jdouble arg0, jdouble arg1)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Double",
			"min",
			"(DD)D",
			arg0,
			arg1
		);
	}
	jdouble Double::parseDouble(JString arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Double",
			"parseDouble",
			"(Ljava/lang/String;)D",
			arg0.object<jstring>()
		);
	}
	jdouble Double::sum(jdouble arg0, jdouble arg1)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Double",
			"sum",
			"(DD)D",
			arg0,
			arg1
		);
	}
	JString Double::toHexString(jdouble arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Double",
			"toHexString",
			"(D)Ljava/lang/String;",
			arg0
		);
	}
	JString Double::toString(jdouble arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Double",
			"toString",
			"(D)Ljava/lang/String;",
			arg0
		);
	}
	java::lang::Double Double::valueOf(jdouble arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Double",
			"valueOf",
			"(D)Ljava/lang/Double;",
			arg0
		);
	}
	java::lang::Double Double::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Double",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Double;",
			arg0.object<jstring>()
		);
	}
	jbyte Double::byteValue() const
	{
		return callMethod<jbyte>(
			"byteValue",
			"()B"
		);
	}
	jint Double::compareTo(java::lang::Double arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Double;)I",
			arg0.object()
		);
	}
	jint Double::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	java::util::Optional Double::describeConstable() const
	{
		return callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;"
		);
	}
	jdouble Double::doubleValue() const
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jboolean Double::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jfloat Double::floatValue() const
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jint Double::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint Double::intValue() const
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jboolean Double::isInfinite() const
	{
		return callMethod<jboolean>(
			"isInfinite",
			"()Z"
		);
	}
	jboolean Double::isNaN() const
	{
		return callMethod<jboolean>(
			"isNaN",
			"()Z"
		);
	}
	jlong Double::longValue() const
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	java::lang::Double Double::resolveConstantDesc(java::lang::invoke::MethodHandles_Lookup arg0) const
	{
		return callObjectMethod(
			"resolveConstantDesc",
			"(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/Double;",
			arg0.object()
		);
	}
	jshort Double::shortValue() const
	{
		return callMethod<jshort>(
			"shortValue",
			"()S"
		);
	}
	JString Double::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang

