#include "../../../JObject.hpp"
#include "./ConcurrentHashMap.hpp"
#include "./ConcurrentHashMap_KeySetView.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QJniObject forward
	ConcurrentHashMap_KeySetView::ConcurrentHashMap_KeySetView(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean ConcurrentHashMap_KeySetView::add(JObject arg0)
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean ConcurrentHashMap_KeySetView::addAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jboolean ConcurrentHashMap_KeySetView::contains(JObject arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean ConcurrentHashMap_KeySetView::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	void ConcurrentHashMap_KeySetView::forEach(JObject arg0)
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
	JObject ConcurrentHashMap_KeySetView::getMappedValue()
	{
		return callObjectMethod(
			"getMappedValue",
			"()Ljava/lang/Object;"
		);
	}
	jint ConcurrentHashMap_KeySetView::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JObject ConcurrentHashMap_KeySetView::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean ConcurrentHashMap_KeySetView::remove(JObject arg0)
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean ConcurrentHashMap_KeySetView::removeAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	JObject ConcurrentHashMap_KeySetView::spliterator()
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
} // namespace java::util::concurrent

