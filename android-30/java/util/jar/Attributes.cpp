#include "../../io/DataOutputStream.hpp"
#include "./Attributes_Name.hpp"
#include "./Attributes.hpp"

namespace java::util::jar
{
	// Fields
	
	// QJniObject forward
	Attributes::Attributes(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Attributes::Attributes()
		: __JniBaseClass(
			"java.util.jar.Attributes",
			"()V"
		) {}
	Attributes::Attributes(jint arg0)
		: __JniBaseClass(
			"java.util.jar.Attributes",
			"(I)V",
			arg0
		) {}
	Attributes::Attributes(java::util::jar::Attributes &arg0)
		: __JniBaseClass(
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
	jobject Attributes::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean Attributes::containsKey(jobject arg0)
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean Attributes::containsValue(jobject arg0)
	{
		return callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	__JniBaseClass Attributes::entrySet()
	{
		return callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	jboolean Attributes::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject Attributes::get(jobject arg0)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jstring Attributes::getValue(jstring arg0)
	{
		return callObjectMethod(
			"getValue",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Attributes::getValue(java::util::jar::Attributes_Name arg0)
	{
		return callObjectMethod(
			"getValue",
			"(Ljava/util/jar/Attributes$Name;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
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
	__JniBaseClass Attributes::keySet()
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	jobject Attributes::put(jobject arg0, jobject arg1)
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	void Attributes::putAll(__JniBaseClass arg0)
	{
		callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.object()
		);
	}
	jstring Attributes::putValue(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"putValue",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jobject Attributes::remove(jobject arg0)
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jint Attributes::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	__JniBaseClass Attributes::values()
	{
		return callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace java::util::jar

