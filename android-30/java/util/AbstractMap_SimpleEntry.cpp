#include "./AbstractMap_SimpleEntry.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	AbstractMap_SimpleEntry::AbstractMap_SimpleEntry(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AbstractMap_SimpleEntry::AbstractMap_SimpleEntry(JObject arg0)
		: JObject(
			"java.util.AbstractMap$SimpleEntry",
			"(Ljava/util/Map$Entry;)V",
			arg0.object()
		) {}
	AbstractMap_SimpleEntry::AbstractMap_SimpleEntry(jobject arg0, jobject arg1)
		: JObject(
			"java.util.AbstractMap$SimpleEntry",
			"(Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jboolean AbstractMap_SimpleEntry::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject AbstractMap_SimpleEntry::getKey()
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject AbstractMap_SimpleEntry::getValue()
	{
		return callObjectMethod(
			"getValue",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint AbstractMap_SimpleEntry::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jobject AbstractMap_SimpleEntry::setValue(jobject arg0)
	{
		return callObjectMethod(
			"setValue",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jstring AbstractMap_SimpleEntry::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

