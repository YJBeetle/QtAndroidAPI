#include "../../JByteArray.hpp"
#include "../../JCharArray.hpp"
#include "../../JIntArray.hpp"
#include "../../JString.hpp"
#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./invoke/MethodHandles_Lookup.hpp"
#include "../util/Optional.hpp"
#include "./Integer.hpp"

namespace java::lang
{
	// Fields
	jint Integer::BYTES()
	{
		return getStaticField<jint>(
			"java.lang.Integer",
			"BYTES"
		);
	}
	jint Integer::MAX_VALUE()
	{
		return getStaticField<jint>(
			"java.lang.Integer",
			"MAX_VALUE"
		);
	}
	jint Integer::MIN_VALUE()
	{
		return getStaticField<jint>(
			"java.lang.Integer",
			"MIN_VALUE"
		);
	}
	jint Integer::SIZE()
	{
		return getStaticField<jint>(
			"java.lang.Integer",
			"SIZE"
		);
	}
	JClass Integer::TYPE()
	{
		return getStaticObjectField(
			"java.lang.Integer",
			"TYPE",
			"Ljava/lang/Class;"
		);
	}
	
	// QAndroidJniObject forward
	Integer::Integer(QAndroidJniObject obj) : java::lang::Number(obj) {}
	
	// Constructors
	Integer::Integer(jint arg0)
		: java::lang::Number(
			"java.lang.Integer",
			"(I)V",
			arg0
		) {}
	Integer::Integer(JString arg0)
		: java::lang::Number(
			"java.lang.Integer",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	jint Integer::bitCount(jint arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"bitCount",
			"(I)I",
			arg0
		);
	}
	jint Integer::compare(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"compare",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint Integer::compareUnsigned(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"compareUnsigned",
			"(II)I",
			arg0,
			arg1
		);
	}
	java::lang::Integer Integer::decode(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Integer",
			"decode",
			"(Ljava/lang/String;)Ljava/lang/Integer;",
			arg0.object<jstring>()
		);
	}
	jint Integer::divideUnsigned(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"divideUnsigned",
			"(II)I",
			arg0,
			arg1
		);
	}
	java::lang::Integer Integer::getInteger(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Integer",
			"getInteger",
			"(Ljava/lang/String;)Ljava/lang/Integer;",
			arg0.object<jstring>()
		);
	}
	java::lang::Integer Integer::getInteger(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.lang.Integer",
			"getInteger",
			"(Ljava/lang/String;I)Ljava/lang/Integer;",
			arg0.object<jstring>(),
			arg1
		);
	}
	java::lang::Integer Integer::getInteger(JString arg0, java::lang::Integer arg1)
	{
		return callStaticObjectMethod(
			"java.lang.Integer",
			"getInteger",
			"(Ljava/lang/String;Ljava/lang/Integer;)Ljava/lang/Integer;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	jint Integer::hashCode(jint arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"hashCode",
			"(I)I",
			arg0
		);
	}
	jint Integer::highestOneBit(jint arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"highestOneBit",
			"(I)I",
			arg0
		);
	}
	jint Integer::lowestOneBit(jint arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"lowestOneBit",
			"(I)I",
			arg0
		);
	}
	jint Integer::max(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"max",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint Integer::min(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"min",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint Integer::numberOfLeadingZeros(jint arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"numberOfLeadingZeros",
			"(I)I",
			arg0
		);
	}
	jint Integer::numberOfTrailingZeros(jint arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"numberOfTrailingZeros",
			"(I)I",
			arg0
		);
	}
	jint Integer::parseInt(JString arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"parseInt",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	jint Integer::parseInt(JString arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"parseInt",
			"(Ljava/lang/String;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	jint Integer::parseInt(JString arg0, jint arg1, jint arg2, jint arg3)
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
	jint Integer::parseUnsignedInt(JString arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"parseUnsignedInt",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	jint Integer::parseUnsignedInt(JString arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"parseUnsignedInt",
			"(Ljava/lang/String;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	jint Integer::parseUnsignedInt(JString arg0, jint arg1, jint arg2, jint arg3)
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
	jint Integer::remainderUnsigned(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"remainderUnsigned",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint Integer::reverse(jint arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"reverse",
			"(I)I",
			arg0
		);
	}
	jint Integer::reverseBytes(jint arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"reverseBytes",
			"(I)I",
			arg0
		);
	}
	jint Integer::rotateLeft(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"rotateLeft",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint Integer::rotateRight(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"rotateRight",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint Integer::signum(jint arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"signum",
			"(I)I",
			arg0
		);
	}
	jint Integer::sum(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Integer",
			"sum",
			"(II)I",
			arg0,
			arg1
		);
	}
	JString Integer::toBinaryString(jint arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Integer",
			"toBinaryString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString Integer::toHexString(jint arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Integer",
			"toHexString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString Integer::toOctalString(jint arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Integer",
			"toOctalString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString Integer::toString(jint arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Integer",
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString Integer::toString(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.lang.Integer",
			"toString",
			"(II)Ljava/lang/String;",
			arg0,
			arg1
		);
	}
	jlong Integer::toUnsignedLong(jint arg0)
	{
		return callStaticMethod<jlong>(
			"java.lang.Integer",
			"toUnsignedLong",
			"(I)J",
			arg0
		);
	}
	JString Integer::toUnsignedString(jint arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Integer",
			"toUnsignedString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString Integer::toUnsignedString(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.lang.Integer",
			"toUnsignedString",
			"(II)Ljava/lang/String;",
			arg0,
			arg1
		);
	}
	java::lang::Integer Integer::valueOf(jint arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Integer",
			"valueOf",
			"(I)Ljava/lang/Integer;",
			arg0
		);
	}
	java::lang::Integer Integer::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Integer",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Integer;",
			arg0.object<jstring>()
		);
	}
	java::lang::Integer Integer::valueOf(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.lang.Integer",
			"valueOf",
			"(Ljava/lang/String;I)Ljava/lang/Integer;",
			arg0.object<jstring>(),
			arg1
		);
	}
	jbyte Integer::byteValue()
	{
		return callMethod<jbyte>(
			"byteValue",
			"()B"
		);
	}
	jint Integer::compareTo(java::lang::Integer arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Integer;)I",
			arg0.object()
		);
	}
	jint Integer::compareTo(JObject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	java::util::Optional Integer::describeConstable()
	{
		return callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;"
		);
	}
	jdouble Integer::doubleValue()
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jboolean Integer::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jfloat Integer::floatValue()
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jint Integer::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint Integer::intValue()
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jlong Integer::longValue()
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	java::lang::Integer Integer::resolveConstantDesc(java::lang::invoke::MethodHandles_Lookup arg0)
	{
		return callObjectMethod(
			"resolveConstantDesc",
			"(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/Integer;",
			arg0.object()
		);
	}
	jshort Integer::shortValue()
	{
		return callMethod<jshort>(
			"shortValue",
			"()S"
		);
	}
	JString Integer::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang

