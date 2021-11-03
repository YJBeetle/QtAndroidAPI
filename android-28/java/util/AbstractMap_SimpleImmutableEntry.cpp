#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AbstractMap_SimpleImmutableEntry.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	AbstractMap_SimpleImmutableEntry::AbstractMap_SimpleImmutableEntry(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AbstractMap_SimpleImmutableEntry::AbstractMap_SimpleImmutableEntry(JObject arg0)
		: JObject(
			"java.util.AbstractMap$SimpleImmutableEntry",
			"(Ljava/util/Map$Entry;)V",
			arg0.object()
		) {}
	AbstractMap_SimpleImmutableEntry::AbstractMap_SimpleImmutableEntry(JObject arg0, JObject arg1)
		: JObject(
			"java.util.AbstractMap$SimpleImmutableEntry",
			"(Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		) {}
	
	// Methods
	jboolean AbstractMap_SimpleImmutableEntry::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject AbstractMap_SimpleImmutableEntry::getKey()
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/Object;"
		);
	}
	JObject AbstractMap_SimpleImmutableEntry::getValue()
	{
		return callObjectMethod(
			"getValue",
			"()Ljava/lang/Object;"
		);
	}
	jint AbstractMap_SimpleImmutableEntry::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JObject AbstractMap_SimpleImmutableEntry::setValue(JObject arg0)
	{
		return callObjectMethod(
			"setValue",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	JString AbstractMap_SimpleImmutableEntry::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

