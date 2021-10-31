#include "../../lang/reflect/Field.hpp"
#include "./ConcurrentSkipListSet.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QJniObject forward
	ConcurrentSkipListSet::ConcurrentSkipListSet(QJniObject obj) : java::util::AbstractSet(obj) {}
	
	// Constructors
	ConcurrentSkipListSet::ConcurrentSkipListSet()
		: java::util::AbstractSet(
			"java.util.concurrent.ConcurrentSkipListSet",
			"()V"
		) {}
	ConcurrentSkipListSet::ConcurrentSkipListSet(__JniBaseClass arg0)
		: java::util::AbstractSet(
			"java.util.concurrent.ConcurrentSkipListSet",
			"(Ljava/util/Collection;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean ConcurrentSkipListSet::add(jobject arg0)
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject ConcurrentSkipListSet::ceiling(jobject arg0)
	{
		return callObjectMethod(
			"ceiling",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	void ConcurrentSkipListSet::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	java::util::concurrent::ConcurrentSkipListSet ConcurrentSkipListSet::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/util/concurrent/ConcurrentSkipListSet;"
		);
	}
	__JniBaseClass ConcurrentSkipListSet::comparator()
	{
		return callObjectMethod(
			"comparator",
			"()Ljava/util/Comparator;"
		);
	}
	jboolean ConcurrentSkipListSet::contains(jobject arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	__JniBaseClass ConcurrentSkipListSet::descendingIterator()
	{
		return callObjectMethod(
			"descendingIterator",
			"()Ljava/util/Iterator;"
		);
	}
	__JniBaseClass ConcurrentSkipListSet::descendingSet()
	{
		return callObjectMethod(
			"descendingSet",
			"()Ljava/util/NavigableSet;"
		);
	}
	jboolean ConcurrentSkipListSet::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject ConcurrentSkipListSet::first()
	{
		return callObjectMethod(
			"first",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject ConcurrentSkipListSet::floor(jobject arg0)
	{
		return callObjectMethod(
			"floor",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	__JniBaseClass ConcurrentSkipListSet::headSet(jobject arg0)
	{
		return callObjectMethod(
			"headSet",
			"(Ljava/lang/Object;)Ljava/util/NavigableSet;",
			arg0
		);
	}
	__JniBaseClass ConcurrentSkipListSet::headSet(jobject arg0, jboolean arg1)
	{
		return callObjectMethod(
			"headSet",
			"(Ljava/lang/Object;Z)Ljava/util/NavigableSet;",
			arg0,
			arg1
		);
	}
	jobject ConcurrentSkipListSet::higher(jobject arg0)
	{
		return callObjectMethod(
			"higher",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean ConcurrentSkipListSet::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	__JniBaseClass ConcurrentSkipListSet::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jobject ConcurrentSkipListSet::last()
	{
		return callObjectMethod(
			"last",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject ConcurrentSkipListSet::lower(jobject arg0)
	{
		return callObjectMethod(
			"lower",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject ConcurrentSkipListSet::pollFirst()
	{
		return callObjectMethod(
			"pollFirst",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject ConcurrentSkipListSet::pollLast()
	{
		return callObjectMethod(
			"pollLast",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean ConcurrentSkipListSet::remove(jobject arg0)
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean ConcurrentSkipListSet::removeAll(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jint ConcurrentSkipListSet::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	__JniBaseClass ConcurrentSkipListSet::spliterator()
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	__JniBaseClass ConcurrentSkipListSet::subSet(jobject arg0, jobject arg1)
	{
		return callObjectMethod(
			"subSet",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/NavigableSet;",
			arg0,
			arg1
		);
	}
	__JniBaseClass ConcurrentSkipListSet::subSet(jobject arg0, jboolean arg1, jobject arg2, jboolean arg3)
	{
		return callObjectMethod(
			"subSet",
			"(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableSet;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	__JniBaseClass ConcurrentSkipListSet::tailSet(jobject arg0)
	{
		return callObjectMethod(
			"tailSet",
			"(Ljava/lang/Object;)Ljava/util/NavigableSet;",
			arg0
		);
	}
	__JniBaseClass ConcurrentSkipListSet::tailSet(jobject arg0, jboolean arg1)
	{
		return callObjectMethod(
			"tailSet",
			"(Ljava/lang/Object;Z)Ljava/util/NavigableSet;",
			arg0,
			arg1
		);
	}
} // namespace java::util::concurrent

