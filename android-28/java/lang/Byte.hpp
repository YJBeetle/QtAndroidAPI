#pragma once

#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../util/Optional.def.hpp"
#include "./Byte.def.hpp"

namespace java::lang
{
	// Fields
	inline jint Byte::BYTES()
	{
		return getStaticField<jint>(
			"java.lang.Byte",
			"BYTES"
		);
	}
	inline jbyte Byte::MAX_VALUE()
	{
		return getStaticField<jbyte>(
			"java.lang.Byte",
			"MAX_VALUE"
		);
	}
	inline jbyte Byte::MIN_VALUE()
	{
		return getStaticField<jbyte>(
			"java.lang.Byte",
			"MIN_VALUE"
		);
	}
	inline jint Byte::SIZE()
	{
		return getStaticField<jint>(
			"java.lang.Byte",
			"SIZE"
		);
	}
	inline JClass Byte::TYPE()
	{
		return getStaticObjectField(
			"java.lang.Byte",
			"TYPE",
			"Ljava/lang/Class;"
		);
	}
	
	// Constructors
	inline Byte::Byte(jbyte arg0)
		: java::lang::Number(
			"java.lang.Byte",
			"(B)V",
			arg0
		) {}
	inline Byte::Byte(JString arg0)
		: java::lang::Number(
			"java.lang.Byte",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline jint Byte::compare(jbyte arg0, jbyte arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Byte",
			"compare",
			"(BB)I",
			arg0,
			arg1
		);
	}
	inline jint Byte::compareUnsigned(jbyte arg0, jbyte arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Byte",
			"compareUnsigned",
			"(BB)I",
			arg0,
			arg1
		);
	}
	inline java::lang::Byte Byte::decode(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Byte",
			"decode",
			"(Ljava/lang/String;)Ljava/lang/Byte;",
			arg0.object<jstring>()
		);
	}
	inline jint Byte::hashCode(jbyte arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Byte",
			"hashCode",
			"(B)I",
			arg0
		);
	}
	inline jbyte Byte::parseByte(JString arg0)
	{
		return callStaticMethod<jbyte>(
			"java.lang.Byte",
			"parseByte",
			"(Ljava/lang/String;)B",
			arg0.object<jstring>()
		);
	}
	inline jbyte Byte::parseByte(JString arg0, jint arg1)
	{
		return callStaticMethod<jbyte>(
			"java.lang.Byte",
			"parseByte",
			"(Ljava/lang/String;I)B",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JString Byte::toString(jbyte arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Byte",
			"toString",
			"(B)Ljava/lang/String;",
			arg0
		);
	}
	inline jint Byte::toUnsignedInt(jbyte arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Byte",
			"toUnsignedInt",
			"(B)I",
			arg0
		);
	}
	inline jlong Byte::toUnsignedLong(jbyte arg0)
	{
		return callStaticMethod<jlong>(
			"java.lang.Byte",
			"toUnsignedLong",
			"(B)J",
			arg0
		);
	}
	inline java::lang::Byte Byte::valueOf(jbyte arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Byte",
			"valueOf",
			"(B)Ljava/lang/Byte;",
			arg0
		);
	}
	inline java::lang::Byte Byte::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Byte",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Byte;",
			arg0.object<jstring>()
		);
	}
	inline java::lang::Byte Byte::valueOf(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.lang.Byte",
			"valueOf",
			"(Ljava/lang/String;I)Ljava/lang/Byte;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jbyte Byte::byteValue() const
	{
		return callMethod<jbyte>(
			"byteValue",
			"()B"
		);
	}
	inline jint Byte::compareTo(java::lang::Byte arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Byte;)I",
			arg0.object()
		);
	}
	inline jint Byte::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline java::util::Optional Byte::describeConstable() const
	{
		return callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;"
		);
	}
	inline jdouble Byte::doubleValue() const
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	inline jboolean Byte::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jfloat Byte::floatValue() const
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	inline jint Byte::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jint Byte::intValue() const
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	inline jlong Byte::longValue() const
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	inline jshort Byte::shortValue() const
	{
		return callMethod<jshort>(
			"shortValue",
			"()S"
		);
	}
	inline JString Byte::toString() const
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
