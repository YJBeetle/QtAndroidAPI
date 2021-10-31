#include "../util/Optional.hpp"
#include "./Short.hpp"

namespace java::lang
{
	// Fields
	jint Short::BYTES()
	{
		return getStaticField<jint>(
			"java.lang.Short",
			"BYTES"
		);
	}
	jshort Short::MAX_VALUE()
	{
		return getStaticField<jshort>(
			"java.lang.Short",
			"MAX_VALUE"
		);
	}
	jshort Short::MIN_VALUE()
	{
		return getStaticField<jshort>(
			"java.lang.Short",
			"MIN_VALUE"
		);
	}
	jint Short::SIZE()
	{
		return getStaticField<jint>(
			"java.lang.Short",
			"SIZE"
		);
	}
	jclass Short::TYPE()
	{
		return getStaticObjectField(
			"java.lang.Short",
			"TYPE",
			"Ljava/lang/Class;"
		).object<jclass>();
	}
	
	// QAndroidJniObject forward
	Short::Short(QAndroidJniObject obj) : java::lang::Number(obj) {}
	
	// Constructors
	Short::Short(jstring arg0)
		: java::lang::Number(
			"java.lang.Short",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	Short::Short(jshort arg0)
		: java::lang::Number(
			"java.lang.Short",
			"(S)V",
			arg0
		) {}
	
	// Methods
	jint Short::compare(jshort arg0, jshort arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Short",
			"compare",
			"(SS)I",
			arg0,
			arg1
		);
	}
	jint Short::compareUnsigned(jshort arg0, jshort arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Short",
			"compareUnsigned",
			"(SS)I",
			arg0,
			arg1
		);
	}
	java::lang::Short Short::decode(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Short",
			"decode",
			"(Ljava/lang/String;)Ljava/lang/Short;",
			arg0
		);
	}
	jint Short::hashCode(jshort arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Short",
			"hashCode",
			"(S)I",
			arg0
		);
	}
	jshort Short::parseShort(jstring arg0)
	{
		return callStaticMethod<jshort>(
			"java.lang.Short",
			"parseShort",
			"(Ljava/lang/String;)S",
			arg0
		);
	}
	jshort Short::parseShort(jstring arg0, jint arg1)
	{
		return callStaticMethod<jshort>(
			"java.lang.Short",
			"parseShort",
			"(Ljava/lang/String;I)S",
			arg0,
			arg1
		);
	}
	jshort Short::reverseBytes(jshort arg0)
	{
		return callStaticMethod<jshort>(
			"java.lang.Short",
			"reverseBytes",
			"(S)S",
			arg0
		);
	}
	jstring Short::toString(jshort arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Short",
			"toString",
			"(S)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint Short::toUnsignedInt(jshort arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Short",
			"toUnsignedInt",
			"(S)I",
			arg0
		);
	}
	jlong Short::toUnsignedLong(jshort arg0)
	{
		return callStaticMethod<jlong>(
			"java.lang.Short",
			"toUnsignedLong",
			"(S)J",
			arg0
		);
	}
	java::lang::Short Short::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Short",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Short;",
			arg0
		);
	}
	java::lang::Short Short::valueOf(jshort arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Short",
			"valueOf",
			"(S)Ljava/lang/Short;",
			arg0
		);
	}
	java::lang::Short Short::valueOf(jstring arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.lang.Short",
			"valueOf",
			"(Ljava/lang/String;I)Ljava/lang/Short;",
			arg0,
			arg1
		);
	}
	jbyte Short::byteValue()
	{
		return callMethod<jbyte>(
			"byteValue",
			"()B"
		);
	}
	jint Short::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint Short::compareTo(java::lang::Short arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Short;)I",
			arg0.object()
		);
	}
	java::util::Optional Short::describeConstable()
	{
		return callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;"
		);
	}
	jdouble Short::doubleValue()
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jboolean Short::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jfloat Short::floatValue()
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jint Short::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint Short::intValue()
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jlong Short::longValue()
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	jshort Short::shortValue()
	{
		return callMethod<jshort>(
			"shortValue",
			"()S"
		);
	}
	jstring Short::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::lang
