#include "../util/Optional.hpp"
#include "./Byte.hpp"

namespace java::lang
{
	// Fields
	jint Byte::BYTES()
	{
		return getStaticField<jint>(
			"java.lang.Byte",
			"BYTES"
		);
	}
	jbyte Byte::MAX_VALUE()
	{
		return getStaticField<jbyte>(
			"java.lang.Byte",
			"MAX_VALUE"
		);
	}
	jbyte Byte::MIN_VALUE()
	{
		return getStaticField<jbyte>(
			"java.lang.Byte",
			"MIN_VALUE"
		);
	}
	jint Byte::SIZE()
	{
		return getStaticField<jint>(
			"java.lang.Byte",
			"SIZE"
		);
	}
	jclass Byte::TYPE()
	{
		return getStaticObjectField(
			"java.lang.Byte",
			"TYPE",
			"Ljava/lang/Class;"
		).object<jclass>();
	}
	
	// QJniObject forward
	Byte::Byte(QJniObject obj) : java::lang::Number(obj) {}
	
	// Constructors
	Byte::Byte(jbyte arg0)
		: java::lang::Number(
			"java.lang.Byte",
			"(B)V",
			arg0
		) {}
	Byte::Byte(jstring arg0)
		: java::lang::Number(
			"java.lang.Byte",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jint Byte::compare(jbyte arg0, jbyte arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Byte",
			"compare",
			"(BB)I",
			arg0,
			arg1
		);
	}
	jint Byte::compareUnsigned(jbyte arg0, jbyte arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Byte",
			"compareUnsigned",
			"(BB)I",
			arg0,
			arg1
		);
	}
	java::lang::Byte Byte::decode(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Byte",
			"decode",
			"(Ljava/lang/String;)Ljava/lang/Byte;",
			arg0
		);
	}
	jint Byte::hashCode(jbyte arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Byte",
			"hashCode",
			"(B)I",
			arg0
		);
	}
	jbyte Byte::parseByte(jstring arg0)
	{
		return callStaticMethod<jbyte>(
			"java.lang.Byte",
			"parseByte",
			"(Ljava/lang/String;)B",
			arg0
		);
	}
	jbyte Byte::parseByte(jstring arg0, jint arg1)
	{
		return callStaticMethod<jbyte>(
			"java.lang.Byte",
			"parseByte",
			"(Ljava/lang/String;I)B",
			arg0,
			arg1
		);
	}
	jstring Byte::toString(jbyte arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Byte",
			"toString",
			"(B)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint Byte::toUnsignedInt(jbyte arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Byte",
			"toUnsignedInt",
			"(B)I",
			arg0
		);
	}
	jlong Byte::toUnsignedLong(jbyte arg0)
	{
		return callStaticMethod<jlong>(
			"java.lang.Byte",
			"toUnsignedLong",
			"(B)J",
			arg0
		);
	}
	java::lang::Byte Byte::valueOf(jbyte arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Byte",
			"valueOf",
			"(B)Ljava/lang/Byte;",
			arg0
		);
	}
	java::lang::Byte Byte::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Byte",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Byte;",
			arg0
		);
	}
	java::lang::Byte Byte::valueOf(jstring arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.lang.Byte",
			"valueOf",
			"(Ljava/lang/String;I)Ljava/lang/Byte;",
			arg0,
			arg1
		);
	}
	jbyte Byte::byteValue()
	{
		return callMethod<jbyte>(
			"byteValue",
			"()B"
		);
	}
	jint Byte::compareTo(java::lang::Byte arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Byte;)I",
			arg0.object()
		);
	}
	jint Byte::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	java::util::Optional Byte::describeConstable()
	{
		return callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;"
		);
	}
	jdouble Byte::doubleValue()
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jboolean Byte::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jfloat Byte::floatValue()
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jint Byte::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint Byte::intValue()
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jlong Byte::longValue()
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	jshort Byte::shortValue()
	{
		return callMethod<jshort>(
			"shortValue",
			"()S"
		);
	}
	jstring Byte::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::lang

