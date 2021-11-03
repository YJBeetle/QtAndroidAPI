#include "../../JObjectArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AbstractCollection.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	AbstractCollection::AbstractCollection(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean AbstractCollection::add(JObject arg0)
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean AbstractCollection::addAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	void AbstractCollection::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean AbstractCollection::contains(JObject arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean AbstractCollection::containsAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"containsAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jboolean AbstractCollection::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	JObject AbstractCollection::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean AbstractCollection::remove(JObject arg0)
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean AbstractCollection::removeAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jboolean AbstractCollection::retainAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jint AbstractCollection::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JObjectArray AbstractCollection::toArray()
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		);
	}
	JObjectArray AbstractCollection::toArray(JObjectArray arg0)
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	JString AbstractCollection::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

