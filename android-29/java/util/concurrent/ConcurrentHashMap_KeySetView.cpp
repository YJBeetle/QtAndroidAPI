#include "./ConcurrentHashMap.hpp"
#include "./ConcurrentHashMap_KeySetView.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QAndroidJniObject forward
	ConcurrentHashMap_KeySetView::ConcurrentHashMap_KeySetView(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean ConcurrentHashMap_KeySetView::add(jobject arg0)
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean ConcurrentHashMap_KeySetView::addAll(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jboolean ConcurrentHashMap_KeySetView::contains(jobject arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean ConcurrentHashMap_KeySetView::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void ConcurrentHashMap_KeySetView::forEach(__JniBaseClass arg0)
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.object()
		);
	}
	java::util::concurrent::ConcurrentHashMap ConcurrentHashMap_KeySetView::getMap()
	{
		return callObjectMethod(
			"getMap",
			"()Ljava/util/concurrent/ConcurrentHashMap;"
		);
	}
	jobject ConcurrentHashMap_KeySetView::getMappedValue()
	{
		return callObjectMethod(
			"getMappedValue",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint ConcurrentHashMap_KeySetView::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	__JniBaseClass ConcurrentHashMap_KeySetView::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean ConcurrentHashMap_KeySetView::remove(jobject arg0)
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean ConcurrentHashMap_KeySetView::removeAll(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	__JniBaseClass ConcurrentHashMap_KeySetView::spliterator()
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
} // namespace java::util::concurrent

