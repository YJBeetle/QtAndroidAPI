#include "./UUID.hpp"

namespace java::util
{
	// Fields
	
	UUID::UUID(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UUID::UUID(jlong arg0, jlong arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.UUID",
			"(JJ)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject UUID::fromString(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.UUID",
			"fromString",
			"(Ljava/lang/String;)Ljava/util/UUID;",
			arg0
		);
	}
	QAndroidJniObject UUID::nameUUIDFromBytes(jbyteArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.UUID",
			"nameUUIDFromBytes",
			"([B)Ljava/util/UUID;",
			arg0
		);
	}
	QAndroidJniObject UUID::randomUUID()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.UUID",
			"randomUUID",
			"()Ljava/util/UUID;"
		);
	}
	jint UUID::clockSequence()
	{
		return __thiz.callMethod<jint>(
			"clockSequence",
			"()I"
		);
	}
	jint UUID::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint UUID::compareTo(java::util::UUID arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/util/UUID;)I",
			arg0.__jniObject().object()
		);
	}
	jboolean UUID::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jlong UUID::getLeastSignificantBits()
	{
		return __thiz.callMethod<jlong>(
			"getLeastSignificantBits",
			"()J"
		);
	}
	jlong UUID::getMostSignificantBits()
	{
		return __thiz.callMethod<jlong>(
			"getMostSignificantBits",
			"()J"
		);
	}
	jint UUID::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jlong UUID::node()
	{
		return __thiz.callMethod<jlong>(
			"node",
			"()J"
		);
	}
	jlong UUID::timestamp()
	{
		return __thiz.callMethod<jlong>(
			"timestamp",
			"()J"
		);
	}
	jstring UUID::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint UUID::variant()
	{
		return __thiz.callMethod<jint>(
			"variant",
			"()I"
		);
	}
	jint UUID::version()
	{
		return __thiz.callMethod<jint>(
			"version",
			"()I"
		);
	}
} // namespace java::util

