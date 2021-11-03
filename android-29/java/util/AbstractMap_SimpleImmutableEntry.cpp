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
	AbstractMap_SimpleImmutableEntry::AbstractMap_SimpleImmutableEntry(jobject arg0, jobject arg1)
		: JObject(
			"java.util.AbstractMap$SimpleImmutableEntry",
			"(Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jboolean AbstractMap_SimpleImmutableEntry::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject AbstractMap_SimpleImmutableEntry::getKey()
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject AbstractMap_SimpleImmutableEntry::getValue()
	{
		return callObjectMethod(
			"getValue",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint AbstractMap_SimpleImmutableEntry::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jobject AbstractMap_SimpleImmutableEntry::setValue(jobject arg0)
	{
		return callObjectMethod(
			"setValue",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jstring AbstractMap_SimpleImmutableEntry::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

