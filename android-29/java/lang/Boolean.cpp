#include "../util/Optional.hpp"
#include "./Boolean.hpp"

namespace java::lang
{
	// Fields
	QAndroidJniObject Boolean::FALSE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Boolean",
			"FALSE",
			"Ljava/lang/Boolean;"
		);
	}
	QAndroidJniObject Boolean::TRUE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Boolean",
			"TRUE",
			"Ljava/lang/Boolean;"
		);
	}
	jclass Boolean::TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Boolean",
			"TYPE",
			"Ljava/lang/Class;"
		).object<jclass>();
	}
	
	Boolean::Boolean(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Boolean::Boolean(jboolean &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Boolean",
			"(Z)V",
			arg0
		);
	}
	Boolean::Boolean(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Boolean",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	Boolean::Boolean(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Boolean",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jint Boolean::compare(jboolean arg0, jboolean arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Boolean",
			"compare",
			"(ZZ)I",
			arg0,
			arg1
		);
	}
	jboolean Boolean::getBoolean(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Boolean",
			"getBoolean",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean Boolean::getBoolean(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Boolean",
			"getBoolean",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint Boolean::hashCode(jboolean arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Boolean",
			"hashCode",
			"(Z)I",
			arg0
		);
	}
	jboolean Boolean::logicalAnd(jboolean arg0, jboolean arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Boolean",
			"logicalAnd",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	jboolean Boolean::logicalOr(jboolean arg0, jboolean arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Boolean",
			"logicalOr",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	jboolean Boolean::logicalXor(jboolean arg0, jboolean arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Boolean",
			"logicalXor",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	jboolean Boolean::parseBoolean(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Boolean",
			"parseBoolean",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean Boolean::parseBoolean(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Boolean",
			"parseBoolean",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring Boolean::toString(jboolean arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Boolean",
			"toString",
			"(Z)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject Boolean::valueOf(jboolean arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Boolean",
			"valueOf",
			"(Z)Ljava/lang/Boolean;",
			arg0
		);
	}
	QAndroidJniObject Boolean::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Boolean",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Boolean;",
			arg0
		);
	}
	QAndroidJniObject Boolean::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Boolean",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Boolean;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean Boolean::booleanValue()
	{
		return __thiz.callMethod<jboolean>(
			"booleanValue",
			"()Z"
		);
	}
	jint Boolean::compareTo(java::lang::Boolean arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Boolean;)I",
			arg0.__jniObject().object()
		);
	}
	jint Boolean::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	QAndroidJniObject Boolean::describeConstable()
	{
		return __thiz.callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;"
		);
	}
	jboolean Boolean::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Boolean::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring Boolean::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::lang

