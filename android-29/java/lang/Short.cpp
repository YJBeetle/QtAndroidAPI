#include "../util/Optional.hpp"
#include "./Short.hpp"

namespace java::lang
{
	// Fields
	jint Short::BYTES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Short",
			"BYTES"
		);
	}
	jshort Short::MAX_VALUE()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"java.lang.Short",
			"MAX_VALUE"
		);
	}
	jshort Short::MIN_VALUE()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"java.lang.Short",
			"MIN_VALUE"
		);
	}
	jint Short::SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Short",
			"SIZE"
		);
	}
	jclass Short::TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Short",
			"TYPE",
			"Ljava/lang/Class;"
		).object<jclass>();
	}
	
	Short::Short(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Short::Short(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Short",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	Short::Short(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Short",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	Short::Short(jshort &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Short",
			"(S)V",
			arg0
		);
	}
	
	// Methods
	jint Short::compare(jshort arg0, jshort arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Short",
			"compare",
			"(SS)I",
			arg0,
			arg1
		);
	}
	jint Short::compareUnsigned(jshort arg0, jshort arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Short",
			"compareUnsigned",
			"(SS)I",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Short::decode(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Short",
			"decode",
			"(Ljava/lang/String;)Ljava/lang/Short;",
			arg0
		);
	}
	QAndroidJniObject Short::decode(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Short",
			"decode",
			"(Ljava/lang/String;)Ljava/lang/Short;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint Short::hashCode(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Short",
			"hashCode",
			"(S)I",
			arg0
		);
	}
	jshort Short::parseShort(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jshort>(
			"java.lang.Short",
			"parseShort",
			"(Ljava/lang/String;)S",
			arg0
		);
	}
	jshort Short::parseShort(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jshort>(
			"java.lang.Short",
			"parseShort",
			"(Ljava/lang/String;)S",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jshort Short::parseShort(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jshort>(
			"java.lang.Short",
			"parseShort",
			"(Ljava/lang/String;I)S",
			arg0,
			arg1
		);
	}
	jshort Short::parseShort(const QString &arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jshort>(
			"java.lang.Short",
			"parseShort",
			"(Ljava/lang/String;I)S",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jshort Short::reverseBytes(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jshort>(
			"java.lang.Short",
			"reverseBytes",
			"(S)S",
			arg0
		);
	}
	jstring Short::toString(jshort arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Short",
			"toString",
			"(S)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint Short::toUnsignedInt(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Short",
			"toUnsignedInt",
			"(S)I",
			arg0
		);
	}
	jlong Short::toUnsignedLong(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Short",
			"toUnsignedLong",
			"(S)J",
			arg0
		);
	}
	QAndroidJniObject Short::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Short",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Short;",
			arg0
		);
	}
	QAndroidJniObject Short::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Short",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Short;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Short::valueOf(jshort arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Short",
			"valueOf",
			"(S)Ljava/lang/Short;",
			arg0
		);
	}
	QAndroidJniObject Short::valueOf(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Short",
			"valueOf",
			"(Ljava/lang/String;I)Ljava/lang/Short;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Short::valueOf(const QString &arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Short",
			"valueOf",
			"(Ljava/lang/String;I)Ljava/lang/Short;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jbyte Short::byteValue()
	{
		return __thiz.callMethod<jbyte>(
			"byteValue",
			"()B"
		);
	}
	jint Short::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint Short::compareTo(java::lang::Short arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Short;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Short::describeConstable()
	{
		return __thiz.callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;"
		);
	}
	jdouble Short::doubleValue()
	{
		return __thiz.callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jboolean Short::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jfloat Short::floatValue()
	{
		return __thiz.callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jint Short::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint Short::intValue()
	{
		return __thiz.callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jlong Short::longValue()
	{
		return __thiz.callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	jshort Short::shortValue()
	{
		return __thiz.callMethod<jshort>(
			"shortValue",
			"()S"
		);
	}
	jstring Short::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::lang

