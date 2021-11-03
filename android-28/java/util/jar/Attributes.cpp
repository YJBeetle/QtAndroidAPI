#include "../../../JByteArray.hpp"
#include "../../io/DataOutputStream.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./Attributes_Name.hpp"
#include "./Attributes.hpp"

namespace java::util::jar
{
	// Fields
	
	// QAndroidJniObject forward
	Attributes::Attributes(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Attributes::Attributes()
		: JObject(
			"java.util.jar.Attributes",
			"()V"
		) {}
	Attributes::Attributes(jint arg0)
		: JObject(
			"java.util.jar.Attributes",
			"(I)V",
			arg0
		) {}
	Attributes::Attributes(java::util::jar::Attributes &arg0)
		: JObject(
			"java.util.jar.Attributes",
			"(Ljava/util/jar/Attributes;)V",
			arg0.object()
		) {}
	
	// Methods
	void Attributes::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	JObject Attributes::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	jboolean Attributes::containsKey(JObject arg0)
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean Attributes::containsValue(JObject arg0)
	{
		return callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject Attributes::entrySet()
	{
		return callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	jboolean Attributes::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject Attributes::get(JObject arg0)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	JString Attributes::getValue(JString arg0)
	{
		return callObjectMethod(
			"getValue",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString Attributes::getValue(java::util::jar::Attributes_Name arg0)
	{
		return callObjectMethod(
			"getValue",
			"(Ljava/util/jar/Attributes$Name;)Ljava/lang/String;",
			arg0.object()
		);
	}
	jint Attributes::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Attributes::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	JObject Attributes::keySet()
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	JObject Attributes::put(JObject arg0, JObject arg1)
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	void Attributes::putAll(JObject arg0)
	{
		callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.object()
		);
	}
	JString Attributes::putValue(JString arg0, JString arg1)
	{
		return callObjectMethod(
			"putValue",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JObject Attributes::remove(JObject arg0)
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	jint Attributes::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JObject Attributes::values()
	{
		return callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace java::util::jar

