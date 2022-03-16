#include "../../JObjectArray.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../../JObject.hpp"
#include "./HashMap.hpp"
#include "./HashSet.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	HashSet::HashSet()
		: java::util::AbstractSet(
			"java.util.HashSet",
			"()V"
		) {}
	HashSet::HashSet(jint arg0)
		: java::util::AbstractSet(
			"java.util.HashSet",
			"(I)V",
			arg0
		) {}
	HashSet::HashSet(JObject arg0)
		: java::util::AbstractSet(
			"java.util.HashSet",
			"(Ljava/util/Collection;)V",
			arg0.object()
		) {}
	HashSet::HashSet(jint arg0, jfloat arg1)
		: java::util::AbstractSet(
			"java.util.HashSet",
			"(IF)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jboolean HashSet::add(JObject arg0) const
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	void HashSet::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	JObject HashSet::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	jboolean HashSet::contains(JObject arg0) const
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean HashSet::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	JObject HashSet::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean HashSet::remove(JObject arg0) const
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint HashSet::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JObject HashSet::spliterator() const
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	JObjectArray HashSet::toArray() const
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		);
	}
	JObjectArray HashSet::toArray(JObjectArray arg0) const
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
} // namespace java::util

