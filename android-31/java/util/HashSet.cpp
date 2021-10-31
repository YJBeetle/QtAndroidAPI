#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "./HashMap.hpp"
#include "./HashSet.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	HashSet::HashSet(QAndroidJniObject obj) : java::util::AbstractSet(obj) {}
	
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
	HashSet::HashSet(__JniBaseClass arg0)
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
	jboolean HashSet::add(jobject arg0)
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void HashSet::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jobject HashSet::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean HashSet::contains(jobject arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean HashSet::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	__JniBaseClass HashSet::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean HashSet::remove(jobject arg0)
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint HashSet::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	__JniBaseClass HashSet::spliterator()
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	jobjectArray HashSet::toArray()
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		).object<jobjectArray>();
	}
	jobjectArray HashSet::toArray(jobjectArray arg0)
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0
		).object<jobjectArray>();
	}
} // namespace java::util

