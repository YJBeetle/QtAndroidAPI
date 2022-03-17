#pragma once

#include "../../JByteArray.hpp"
#include "../../JString.hpp"
#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./invoke/MethodHandles_Lookup.def.hpp"
#include "../math/BigInteger.def.hpp"
#include "../util/Optional.def.hpp"
#include "./Long.def.hpp"

namespace java::lang
{
	// Fields
	inline jint Long::BYTES()
	{
		return getStaticField<jint>(
			"java.lang.Long",
			"BYTES"
		);
	}
	inline jlong Long::MAX_VALUE()
	{
		return getStaticField<jlong>(
			"java.lang.Long",
			"MAX_VALUE"
		);
	}
	inline jlong Long::MIN_VALUE()
	{
		return getStaticField<jlong>(
			"java.lang.Long",
			"MIN_VALUE"
		);
	}
	inline jint Long::SIZE()
	{
		return getStaticField<jint>(
			"java.lang.Long",
			"SIZE"
		);
	}
	inline JClass Long::TYPE()
	{
		return getStaticObjectField(
			"java.lang.Long",
			"TYPE",
			"Ljava/lang/Class;"
		);
	}
	
	// Constructors
	inline Long::Long(JString arg0)
		: java::lang::Number(
			"java.lang.Long",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline Long::Long(jlong arg0)
		: java::lang::Number(
			"java.lang.Long",
			"(J)V",
			arg0
		) {}
	
	// Methods
	inline jint Long::bitCount(jlong arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Long",
			"bitCount",
			"(J)I",
			arg0
		);
	}
	inline jint Long::compare(jlong arg0, jlong arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Long",
			"compare",
			"(JJ)I",
			arg0,
			arg1
		);
	}
	inline jint Long::compareUnsigned(jlong arg0, jlong arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Long",
			"compareUnsigned",
			"(JJ)I",
			arg0,
			arg1
		);
	}
	inline java::lang::Long Long::decode(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Long",
			"decode",
			"(Ljava/lang/String;)Ljava/lang/Long;",
			arg0.object<jstring>()
		);
	}
	inline jlong Long::divideUnsigned(jlong arg0, jlong arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.Long",
			"divideUnsigned",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	inline java::lang::Long Long::getLong(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Long",
			"getLong",
			"(Ljava/lang/String;)Ljava/lang/Long;",
			arg0.object<jstring>()
		);
	}
	inline java::lang::Long Long::getLong(JString arg0, java::lang::Long arg1)
	{
		return callStaticObjectMethod(
			"java.lang.Long",
			"getLong",
			"(Ljava/lang/String;Ljava/lang/Long;)Ljava/lang/Long;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline java::lang::Long Long::getLong(JString arg0, jlong arg1)
	{
		return callStaticObjectMethod(
			"java.lang.Long",
			"getLong",
			"(Ljava/lang/String;J)Ljava/lang/Long;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jint Long::hashCode(jlong arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Long",
			"hashCode",
			"(J)I",
			arg0
		);
	}
	inline jlong Long::highestOneBit(jlong arg0)
	{
		return callStaticMethod<jlong>(
			"java.lang.Long",
			"highestOneBit",
			"(J)J",
			arg0
		);
	}
	inline jlong Long::lowestOneBit(jlong arg0)
	{
		return callStaticMethod<jlong>(
			"java.lang.Long",
			"lowestOneBit",
			"(J)J",
			arg0
		);
	}
	inline jlong Long::max(jlong arg0, jlong arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.Long",
			"max",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	inline jlong Long::min(jlong arg0, jlong arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.Long",
			"min",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	inline jint Long::numberOfLeadingZeros(jlong arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Long",
			"numberOfLeadingZeros",
			"(J)I",
			arg0
		);
	}
	inline jint Long::numberOfTrailingZeros(jlong arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Long",
			"numberOfTrailingZeros",
			"(J)I",
			arg0
		);
	}
	inline jlong Long::parseLong(JString arg0)
	{
		return callStaticMethod<jlong>(
			"java.lang.Long",
			"parseLong",
			"(Ljava/lang/String;)J",
			arg0.object<jstring>()
		);
	}
	inline jlong Long::parseLong(JString arg0, jint arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.Long",
			"parseLong",
			"(Ljava/lang/String;I)J",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jlong Long::parseLong(JString arg0, jint arg1, jint arg2, jint arg3)
	{
		return callStaticMethod<jlong>(
			"java.lang.Long",
			"parseLong",
			"(Ljava/lang/CharSequence;III)J",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline jlong Long::parseUnsignedLong(JString arg0)
	{
		return callStaticMethod<jlong>(
			"java.lang.Long",
			"parseUnsignedLong",
			"(Ljava/lang/String;)J",
			arg0.object<jstring>()
		);
	}
	inline jlong Long::parseUnsignedLong(JString arg0, jint arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.Long",
			"parseUnsignedLong",
			"(Ljava/lang/String;I)J",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jlong Long::parseUnsignedLong(JString arg0, jint arg1, jint arg2, jint arg3)
	{
		return callStaticMethod<jlong>(
			"java.lang.Long",
			"parseUnsignedLong",
			"(Ljava/lang/CharSequence;III)J",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline jlong Long::remainderUnsigned(jlong arg0, jlong arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.Long",
			"remainderUnsigned",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	inline jlong Long::reverse(jlong arg0)
	{
		return callStaticMethod<jlong>(
			"java.lang.Long",
			"reverse",
			"(J)J",
			arg0
		);
	}
	inline jlong Long::reverseBytes(jlong arg0)
	{
		return callStaticMethod<jlong>(
			"java.lang.Long",
			"reverseBytes",
			"(J)J",
			arg0
		);
	}
	inline jlong Long::rotateLeft(jlong arg0, jint arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.Long",
			"rotateLeft",
			"(JI)J",
			arg0,
			arg1
		);
	}
	inline jlong Long::rotateRight(jlong arg0, jint arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.Long",
			"rotateRight",
			"(JI)J",
			arg0,
			arg1
		);
	}
	inline jint Long::signum(jlong arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Long",
			"signum",
			"(J)I",
			arg0
		);
	}
	inline jlong Long::sum(jlong arg0, jlong arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.Long",
			"sum",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	inline JString Long::toBinaryString(jlong arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Long",
			"toBinaryString",
			"(J)Ljava/lang/String;",
			arg0
		);
	}
	inline JString Long::toHexString(jlong arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Long",
			"toHexString",
			"(J)Ljava/lang/String;",
			arg0
		);
	}
	inline JString Long::toOctalString(jlong arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Long",
			"toOctalString",
			"(J)Ljava/lang/String;",
			arg0
		);
	}
	inline JString Long::toString(jlong arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Long",
			"toString",
			"(J)Ljava/lang/String;",
			arg0
		);
	}
	inline JString Long::toString(jlong arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.lang.Long",
			"toString",
			"(JI)Ljava/lang/String;",
			arg0,
			arg1
		);
	}
	inline JString Long::toUnsignedString(jlong arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Long",
			"toUnsignedString",
			"(J)Ljava/lang/String;",
			arg0
		);
	}
	inline JString Long::toUnsignedString(jlong arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.lang.Long",
			"toUnsignedString",
			"(JI)Ljava/lang/String;",
			arg0,
			arg1
		);
	}
	inline java::lang::Long Long::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Long",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Long;",
			arg0.object<jstring>()
		);
	}
	inline java::lang::Long Long::valueOf(jlong arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Long",
			"valueOf",
			"(J)Ljava/lang/Long;",
			arg0
		);
	}
	inline java::lang::Long Long::valueOf(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.lang.Long",
			"valueOf",
			"(Ljava/lang/String;I)Ljava/lang/Long;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jbyte Long::byteValue() const
	{
		return callMethod<jbyte>(
			"byteValue",
			"()B"
		);
	}
	inline jint Long::compareTo(java::lang::Long arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Long;)I",
			arg0.object()
		);
	}
	inline jint Long::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline java::util::Optional Long::describeConstable() const
	{
		return callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;"
		);
	}
	inline jdouble Long::doubleValue() const
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	inline jboolean Long::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jfloat Long::floatValue() const
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	inline jint Long::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jint Long::intValue() const
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	inline jlong Long::longValue() const
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	inline java::lang::Long Long::resolveConstantDesc(java::lang::invoke::MethodHandles_Lookup arg0) const
	{
		return callObjectMethod(
			"resolveConstantDesc",
			"(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/Long;",
			arg0.object()
		);
	}
	inline jshort Long::shortValue() const
	{
		return callMethod<jshort>(
			"shortValue",
			"()S"
		);
	}
	inline JString Long::toString() const
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
