#pragma once

#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../util/Optional.def.hpp"
#include "./Short.def.hpp"

namespace java::lang
{
	// Fields
	inline jint Short::BYTES()
	{
		return getStaticField<jint>(
			"java.lang.Short",
			"BYTES"
		);
	}
	inline jshort Short::MAX_VALUE()
	{
		return getStaticField<jshort>(
			"java.lang.Short",
			"MAX_VALUE"
		);
	}
	inline jshort Short::MIN_VALUE()
	{
		return getStaticField<jshort>(
			"java.lang.Short",
			"MIN_VALUE"
		);
	}
	inline jint Short::SIZE()
	{
		return getStaticField<jint>(
			"java.lang.Short",
			"SIZE"
		);
	}
	inline JClass Short::TYPE()
	{
		return getStaticObjectField(
			"java.lang.Short",
			"TYPE",
			"Ljava/lang/Class;"
		);
	}
	
	// Constructors
	inline Short::Short(JString arg0)
		: java::lang::Number(
			"java.lang.Short",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline Short::Short(jshort arg0)
		: java::lang::Number(
			"java.lang.Short",
			"(S)V",
			arg0
		) {}
	
	// Methods
	inline jint Short::compare(jshort arg0, jshort arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Short",
			"compare",
			"(SS)I",
			arg0,
			arg1
		);
	}
	inline jint Short::compareUnsigned(jshort arg0, jshort arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Short",
			"compareUnsigned",
			"(SS)I",
			arg0,
			arg1
		);
	}
	inline java::lang::Short Short::decode(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Short",
			"decode",
			"(Ljava/lang/String;)Ljava/lang/Short;",
			arg0.object<jstring>()
		);
	}
	inline jint Short::hashCode(jshort arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Short",
			"hashCode",
			"(S)I",
			arg0
		);
	}
	inline jshort Short::parseShort(JString arg0)
	{
		return callStaticMethod<jshort>(
			"java.lang.Short",
			"parseShort",
			"(Ljava/lang/String;)S",
			arg0.object<jstring>()
		);
	}
	inline jshort Short::parseShort(JString arg0, jint arg1)
	{
		return callStaticMethod<jshort>(
			"java.lang.Short",
			"parseShort",
			"(Ljava/lang/String;I)S",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jshort Short::reverseBytes(jshort arg0)
	{
		return callStaticMethod<jshort>(
			"java.lang.Short",
			"reverseBytes",
			"(S)S",
			arg0
		);
	}
	inline JString Short::toString(jshort arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Short",
			"toString",
			"(S)Ljava/lang/String;",
			arg0
		);
	}
	inline jint Short::toUnsignedInt(jshort arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Short",
			"toUnsignedInt",
			"(S)I",
			arg0
		);
	}
	inline jlong Short::toUnsignedLong(jshort arg0)
	{
		return callStaticMethod<jlong>(
			"java.lang.Short",
			"toUnsignedLong",
			"(S)J",
			arg0
		);
	}
	inline java::lang::Short Short::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Short",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Short;",
			arg0.object<jstring>()
		);
	}
	inline java::lang::Short Short::valueOf(jshort arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Short",
			"valueOf",
			"(S)Ljava/lang/Short;",
			arg0
		);
	}
	inline java::lang::Short Short::valueOf(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.lang.Short",
			"valueOf",
			"(Ljava/lang/String;I)Ljava/lang/Short;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jbyte Short::byteValue() const
	{
		return callMethod<jbyte>(
			"byteValue",
			"()B"
		);
	}
	inline jint Short::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint Short::compareTo(java::lang::Short arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Short;)I",
			arg0.object()
		);
	}
	inline java::util::Optional Short::describeConstable() const
	{
		return callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;"
		);
	}
	inline jdouble Short::doubleValue() const
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	inline jboolean Short::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jfloat Short::floatValue() const
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	inline jint Short::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jint Short::intValue() const
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	inline jlong Short::longValue() const
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	inline jshort Short::shortValue() const
	{
		return callMethod<jshort>(
			"shortValue",
			"()S"
		);
	}
	inline JString Short::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang

// Base class headers
#include "./Number.hpp"

