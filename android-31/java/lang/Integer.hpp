#pragma once

#include "../../JByteArray.hpp"
#include "../../JCharArray.hpp"
#include "../../JIntArray.hpp"
#include "../../JString.hpp"
#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./invoke/MethodHandles_Lookup.def.hpp"
#include "../util/Optional.def.hpp"
#include "./Integer.def.hpp"

namespace java::lang
{
	// Fields
	inline jint Integer::BYTES()
	{
		return getStaticField<jint>(
			"java.lang.Integer",
			"BYTES"
		);
	}
	inline jint Integer::MAX_VALUE()
	{
		return getStaticField<jint>(
			"java.lang.Integer",
			"MAX_VALUE"
		);
	}
	inline jint Integer::MIN_VALUE()
	{
		return getStaticField<jint>(
			"java.lang.Integer",
			"MIN_VALUE"
		);
	}
	inline jint Integer::SIZE()
	{
		return getStaticField<jint>(
			"java.lang.Integer",
			"SIZE"
		);
	}
	inline JClass Integer::TYPE()
	{
		return getStaticObjectField(
			"java.lang.Integer",
			"TYPE",
			"Ljava/lang/Class;"
		);
	}
	
	// Constructors
	inline Integer::Integer(jint arg0)
		: java::lang::Number(
			"java.lang.Integer",
			"(I)V",
			arg0
		) {}
	inline Integer::Integer(JString arg0)
		: java::lang::Number(
			"java.lang.Integer",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline jint Integer::bitCount(jint arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"bitCount",
			"(I)I",
			arg0
		);
	}
	inline jint Integer::compare(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"compare",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jint Integer::compareUnsigned(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"compareUnsigned",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jint Integer::compress(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"compress",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline java::lang::Integer Integer::decode(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Integer",
			"decode",
			"(Ljava/lang/String;)Ljava/lang/Integer;",
			arg0.object<jstring>()
		);
	}
	inline jint Integer::divideUnsigned(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"divideUnsigned",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jint Integer::expand(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"expand",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline java::lang::Integer Integer::getInteger(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Integer",
			"getInteger",
			"(Ljava/lang/String;)Ljava/lang/Integer;",
			arg0.object<jstring>()
		);
	}
	inline java::lang::Integer Integer::getInteger(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.lang.Integer",
			"getInteger",
			"(Ljava/lang/String;I)Ljava/lang/Integer;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline java::lang::Integer Integer::getInteger(JString arg0, java::lang::Integer arg1)
	{
		return callStaticObjectMethod(
			"java.lang.Integer",
			"getInteger",
			"(Ljava/lang/String;Ljava/lang/Integer;)Ljava/lang/Integer;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline jint Integer::hashCode(jint arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"hashCode",
			"(I)I",
			arg0
		);
	}
	inline jint Integer::highestOneBit(jint arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"highestOneBit",
			"(I)I",
			arg0
		);
	}
	inline jint Integer::lowestOneBit(jint arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"lowestOneBit",
			"(I)I",
			arg0
		);
	}
	inline jint Integer::max(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"max",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jint Integer::min(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"min",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jint Integer::numberOfLeadingZeros(jint arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"numberOfLeadingZeros",
			"(I)I",
			arg0
		);
	}
	inline jint Integer::numberOfTrailingZeros(jint arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"numberOfTrailingZeros",
			"(I)I",
			arg0
		);
	}
	inline jint Integer::parseInt(JString arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"parseInt",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline jint Integer::parseInt(JString arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"parseInt",
			"(Ljava/lang/String;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jint Integer::parseInt(JString arg0, jint arg1, jint arg2, jint arg3)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"parseInt",
			"(Ljava/lang/CharSequence;III)I",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline jint Integer::parseUnsignedInt(JString arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"parseUnsignedInt",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline jint Integer::parseUnsignedInt(JString arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"parseUnsignedInt",
			"(Ljava/lang/String;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jint Integer::parseUnsignedInt(JString arg0, jint arg1, jint arg2, jint arg3)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"parseUnsignedInt",
			"(Ljava/lang/CharSequence;III)I",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline jint Integer::remainderUnsigned(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"remainderUnsigned",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jint Integer::reverse(jint arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"reverse",
			"(I)I",
			arg0
		);
	}
	inline jint Integer::reverseBytes(jint arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"reverseBytes",
			"(I)I",
			arg0
		);
	}
	inline jint Integer::rotateLeft(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"rotateLeft",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jint Integer::rotateRight(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"rotateRight",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jint Integer::signum(jint arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"signum",
			"(I)I",
			arg0
		);
	}
	inline jint Integer::sum(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"sum",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline JString Integer::toBinaryString(jint arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Integer",
			"toBinaryString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString Integer::toHexString(jint arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Integer",
			"toHexString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString Integer::toOctalString(jint arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Integer",
			"toOctalString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString Integer::toString(jint arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Integer",
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString Integer::toString(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.lang.Integer",
			"toString",
			"(II)Ljava/lang/String;",
			arg0,
			arg1
		);
	}
	inline jlong Integer::toUnsignedLong(jint arg0)
	{
		return callStaticMethod<jlong>(
			"java.lang.Integer",
			"toUnsignedLong",
			"(I)J",
			arg0
		);
	}
	inline JString Integer::toUnsignedString(jint arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Integer",
			"toUnsignedString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString Integer::toUnsignedString(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.lang.Integer",
			"toUnsignedString",
			"(II)Ljava/lang/String;",
			arg0,
			arg1
		);
	}
	inline java::lang::Integer Integer::valueOf(jint arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Integer",
			"valueOf",
			"(I)Ljava/lang/Integer;",
			arg0
		);
	}
	inline java::lang::Integer Integer::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Integer",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Integer;",
			arg0.object<jstring>()
		);
	}
	inline java::lang::Integer Integer::valueOf(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.lang.Integer",
			"valueOf",
			"(Ljava/lang/String;I)Ljava/lang/Integer;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jbyte Integer::byteValue() const
	{
		return callMethod<jbyte>(
			"byteValue",
			"()B"
		);
	}
	inline jint Integer::compareTo(java::lang::Integer arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Integer;)I",
			arg0.object()
		);
	}
	inline jint Integer::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline java::util::Optional Integer::describeConstable() const
	{
		return callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;"
		);
	}
	inline jdouble Integer::doubleValue() const
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	inline jboolean Integer::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jfloat Integer::floatValue() const
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	inline jint Integer::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jint Integer::intValue() const
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	inline jlong Integer::longValue() const
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	inline java::lang::Integer Integer::resolveConstantDesc(java::lang::invoke::MethodHandles_Lookup arg0) const
	{
		return callObjectMethod(
			"resolveConstantDesc",
			"(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/Integer;",
			arg0.object()
		);
	}
	inline jshort Integer::shortValue() const
	{
		return callMethod<jshort>(
			"shortValue",
			"()S"
		);
	}
	inline JString Integer::toString() const
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
