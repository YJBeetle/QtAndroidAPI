#include "../../JByteArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./UUID.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	UUID::UUID(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	UUID::UUID(jlong arg0, jlong arg1)
		: JObject(
			"java.util.UUID",
			"(JJ)V",
			arg0,
			arg1
		) {}
	
	// Methods
	java::util::UUID UUID::fromString(JString arg0)
	{
		return callStaticObjectMethod(
			"java.util.UUID",
			"fromString",
			"(Ljava/lang/String;)Ljava/util/UUID;",
			arg0.object<jstring>()
		);
	}
	java::util::UUID UUID::nameUUIDFromBytes(JByteArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.UUID",
			"nameUUIDFromBytes",
			"([B)Ljava/util/UUID;",
			arg0.object<jbyteArray>()
		);
	}
	java::util::UUID UUID::randomUUID()
	{
		return callStaticObjectMethod(
			"java.util.UUID",
			"randomUUID",
			"()Ljava/util/UUID;"
		);
	}
	jint UUID::clockSequence()
	{
		return callMethod<jint>(
			"clockSequence",
			"()I"
		);
	}
	jint UUID::compareTo(JObject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint UUID::compareTo(java::util::UUID arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/util/UUID;)I",
			arg0.object()
		);
	}
	jboolean UUID::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jlong UUID::getLeastSignificantBits()
	{
		return callMethod<jlong>(
			"getLeastSignificantBits",
			"()J"
		);
	}
	jlong UUID::getMostSignificantBits()
	{
		return callMethod<jlong>(
			"getMostSignificantBits",
			"()J"
		);
	}
	jint UUID::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jlong UUID::node()
	{
		return callMethod<jlong>(
			"node",
			"()J"
		);
	}
	jlong UUID::timestamp()
	{
		return callMethod<jlong>(
			"timestamp",
			"()J"
		);
	}
	JString UUID::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	jint UUID::variant()
	{
		return callMethod<jint>(
			"variant",
			"()I"
		);
	}
	jint UUID::version()
	{
		return callMethod<jint>(
			"version",
			"()I"
		);
	}
} // namespace java::util

