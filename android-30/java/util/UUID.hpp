#pragma once

#include "../../JByteArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./UUID.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline UUID::UUID(jlong arg0, jlong arg1)
		: JObject(
			"java.util.UUID",
			"(JJ)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline java::util::UUID UUID::fromString(JString arg0)
	{
		return callStaticObjectMethod(
			"java.util.UUID",
			"fromString",
			"(Ljava/lang/String;)Ljava/util/UUID;",
			arg0.object<jstring>()
		);
	}
	inline java::util::UUID UUID::nameUUIDFromBytes(JByteArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.UUID",
			"nameUUIDFromBytes",
			"([B)Ljava/util/UUID;",
			arg0.object<jbyteArray>()
		);
	}
	inline java::util::UUID UUID::randomUUID()
	{
		return callStaticObjectMethod(
			"java.util.UUID",
			"randomUUID",
			"()Ljava/util/UUID;"
		);
	}
	inline jint UUID::clockSequence() const
	{
		return callMethod<jint>(
			"clockSequence",
			"()I"
		);
	}
	inline jint UUID::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint UUID::compareTo(java::util::UUID arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/util/UUID;)I",
			arg0.object()
		);
	}
	inline jboolean UUID::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jlong UUID::getLeastSignificantBits() const
	{
		return callMethod<jlong>(
			"getLeastSignificantBits",
			"()J"
		);
	}
	inline jlong UUID::getMostSignificantBits() const
	{
		return callMethod<jlong>(
			"getMostSignificantBits",
			"()J"
		);
	}
	inline jint UUID::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jlong UUID::node() const
	{
		return callMethod<jlong>(
			"node",
			"()J"
		);
	}
	inline jlong UUID::timestamp() const
	{
		return callMethod<jlong>(
			"timestamp",
			"()J"
		);
	}
	inline JString UUID::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline jint UUID::variant() const
	{
		return callMethod<jint>(
			"variant",
			"()I"
		);
	}
	inline jint UUID::version() const
	{
		return callMethod<jint>(
			"version",
			"()I"
		);
	}
} // namespace java::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
