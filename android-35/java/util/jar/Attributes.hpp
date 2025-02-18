#pragma once

#include "../../../JByteArray.hpp"
#include "../../io/DataOutputStream.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./Attributes_Name.def.hpp"
#include "./Attributes.def.hpp"

namespace java::util::jar
{
	// Fields
	
	// Constructors
	inline Attributes::Attributes()
		: JObject(
			"java.util.jar.Attributes",
			"()V"
		) {}
	inline Attributes::Attributes(jint arg0)
		: JObject(
			"java.util.jar.Attributes",
			"(I)V",
			arg0
		) {}
	inline Attributes::Attributes(java::util::jar::Attributes &arg0)
		: JObject(
			"java.util.jar.Attributes",
			"(Ljava/util/jar/Attributes;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void Attributes::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline JObject Attributes::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline jboolean Attributes::containsKey(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean Attributes::containsValue(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject Attributes::entrySet() const
	{
		return callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	inline jboolean Attributes::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject Attributes::get(JObject arg0) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline JString Attributes::getValue(JString arg0) const
	{
		return callObjectMethod(
			"getValue",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString Attributes::getValue(java::util::jar::Attributes_Name arg0) const
	{
		return callObjectMethod(
			"getValue",
			"(Ljava/util/jar/Attributes$Name;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline jint Attributes::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean Attributes::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	inline JObject Attributes::keySet() const
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	inline JObject Attributes::put(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline void Attributes::putAll(JObject arg0) const
	{
		callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.object()
		);
	}
	inline JString Attributes::putValue(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"putValue",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JObject Attributes::remove(JObject arg0) const
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline jint Attributes::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	inline JObject Attributes::values() const
	{
		return callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace java::util::jar

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::jar;
#endif
