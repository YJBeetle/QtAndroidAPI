#include "./invoke/MethodHandles_Lookup.hpp"
#include "../math/BigInteger.hpp"
#include "../util/Optional.hpp"
#include "./Long.hpp"

namespace java::lang
{
	// Fields
	jint Long::BYTES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Long",
			"BYTES"
		);
	}
	jlong Long::MAX_VALUE()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"java.lang.Long",
			"MAX_VALUE"
		);
	}
	jlong Long::MIN_VALUE()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"java.lang.Long",
			"MIN_VALUE"
		);
	}
	jint Long::SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Long",
			"SIZE"
		);
	}
	jclass Long::TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Long",
			"TYPE",
			"Ljava/lang/Class;"
		).object<jclass>();
	}
	
	// QAndroidJniObject forward
	Long::Long(QAndroidJniObject obj) : java::lang::Number(obj) {}
	
	// Constructors
	Long::Long(jstring arg0)
		: java::lang::Number(
			"java.lang.Long",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	Long::Long(jlong arg0)
		: java::lang::Number(
			"java.lang.Long",
			"(J)V",
			arg0
		) {}
	
	// Methods
	jint Long::bitCount(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Long",
			"bitCount",
			"(J)I",
			arg0
		);
	}
	jint Long::compare(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Long",
			"compare",
			"(JJ)I",
			arg0,
			arg1
		);
	}
	jint Long::compareUnsigned(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Long",
			"compareUnsigned",
			"(JJ)I",
			arg0,
			arg1
		);
	}
	java::lang::Long Long::decode(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Long",
			"decode",
			"(Ljava/lang/String;)Ljava/lang/Long;",
			arg0
		);
	}
	jlong Long::divideUnsigned(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Long",
			"divideUnsigned",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	java::lang::Long Long::getLong(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Long",
			"getLong",
			"(Ljava/lang/String;)Ljava/lang/Long;",
			arg0
		);
	}
	java::lang::Long Long::getLong(jstring arg0, java::lang::Long arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Long",
			"getLong",
			"(Ljava/lang/String;Ljava/lang/Long;)Ljava/lang/Long;",
			arg0,
			arg1.object()
		);
	}
	java::lang::Long Long::getLong(jstring arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Long",
			"getLong",
			"(Ljava/lang/String;J)Ljava/lang/Long;",
			arg0,
			arg1
		);
	}
	jint Long::hashCode(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Long",
			"hashCode",
			"(J)I",
			arg0
		);
	}
	jlong Long::highestOneBit(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Long",
			"highestOneBit",
			"(J)J",
			arg0
		);
	}
	jlong Long::lowestOneBit(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Long",
			"lowestOneBit",
			"(J)J",
			arg0
		);
	}
	jlong Long::max(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Long",
			"max",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	jlong Long::min(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Long",
			"min",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	jint Long::numberOfLeadingZeros(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Long",
			"numberOfLeadingZeros",
			"(J)I",
			arg0
		);
	}
	jint Long::numberOfTrailingZeros(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Long",
			"numberOfTrailingZeros",
			"(J)I",
			arg0
		);
	}
	jlong Long::parseLong(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Long",
			"parseLong",
			"(Ljava/lang/String;)J",
			arg0
		);
	}
	jlong Long::parseLong(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Long",
			"parseLong",
			"(Ljava/lang/String;I)J",
			arg0,
			arg1
		);
	}
	jlong Long::parseLong(jstring arg0, jint arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Long",
			"parseLong",
			"(Ljava/lang/CharSequence;III)J",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jlong Long::parseUnsignedLong(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Long",
			"parseUnsignedLong",
			"(Ljava/lang/String;)J",
			arg0
		);
	}
	jlong Long::parseUnsignedLong(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Long",
			"parseUnsignedLong",
			"(Ljava/lang/String;I)J",
			arg0,
			arg1
		);
	}
	jlong Long::parseUnsignedLong(jstring arg0, jint arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Long",
			"parseUnsignedLong",
			"(Ljava/lang/CharSequence;III)J",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jlong Long::remainderUnsigned(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Long",
			"remainderUnsigned",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	jlong Long::reverse(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Long",
			"reverse",
			"(J)J",
			arg0
		);
	}
	jlong Long::reverseBytes(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Long",
			"reverseBytes",
			"(J)J",
			arg0
		);
	}
	jlong Long::rotateLeft(jlong arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Long",
			"rotateLeft",
			"(JI)J",
			arg0,
			arg1
		);
	}
	jlong Long::rotateRight(jlong arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Long",
			"rotateRight",
			"(JI)J",
			arg0,
			arg1
		);
	}
	jint Long::signum(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Long",
			"signum",
			"(J)I",
			arg0
		);
	}
	jlong Long::sum(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Long",
			"sum",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	jstring Long::toBinaryString(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Long",
			"toBinaryString",
			"(J)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Long::toHexString(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Long",
			"toHexString",
			"(J)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Long::toOctalString(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Long",
			"toOctalString",
			"(J)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Long::toString(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Long",
			"toString",
			"(J)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Long::toString(jlong arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Long",
			"toString",
			"(JI)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring Long::toUnsignedString(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Long",
			"toUnsignedString",
			"(J)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Long::toUnsignedString(jlong arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Long",
			"toUnsignedString",
			"(JI)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	java::lang::Long Long::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Long",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Long;",
			arg0
		);
	}
	java::lang::Long Long::valueOf(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Long",
			"valueOf",
			"(J)Ljava/lang/Long;",
			arg0
		);
	}
	java::lang::Long Long::valueOf(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Long",
			"valueOf",
			"(Ljava/lang/String;I)Ljava/lang/Long;",
			arg0,
			arg1
		);
	}
	jbyte Long::byteValue()
	{
		return callMethod<jbyte>(
			"byteValue",
			"()B"
		);
	}
	jint Long::compareTo(java::lang::Long arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Long;)I",
			arg0.object()
		);
	}
	jint Long::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	java::util::Optional Long::describeConstable()
	{
		return callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;"
		);
	}
	jdouble Long::doubleValue()
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jboolean Long::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jfloat Long::floatValue()
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jint Long::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint Long::intValue()
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jlong Long::longValue()
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	java::lang::Long Long::resolveConstantDesc(java::lang::invoke::MethodHandles_Lookup arg0)
	{
		return callObjectMethod(
			"resolveConstantDesc",
			"(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/Long;",
			arg0.object()
		);
	}
	jshort Long::shortValue()
	{
		return callMethod<jshort>(
			"shortValue",
			"()S"
		);
	}
	jstring Long::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::lang

