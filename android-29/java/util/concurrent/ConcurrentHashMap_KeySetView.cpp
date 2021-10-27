#include "./ConcurrentHashMap.hpp"
#include "./ConcurrentHashMap_KeySetView.hpp"

namespace java::util::concurrent
{
	// Fields
	
	ConcurrentHashMap_KeySetView::ConcurrentHashMap_KeySetView(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean ConcurrentHashMap_KeySetView::add(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean ConcurrentHashMap_KeySetView::addAll(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean ConcurrentHashMap_KeySetView::contains(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean ConcurrentHashMap_KeySetView::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void ConcurrentHashMap_KeySetView::forEach(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ConcurrentHashMap_KeySetView::getMap()
	{
		return __thiz.callObjectMethod(
			"getMap",
			"()Ljava/util/concurrent/ConcurrentHashMap;"
		);
	}
	jobject ConcurrentHashMap_KeySetView::getMappedValue()
	{
		return __thiz.callObjectMethod(
			"getMappedValue",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint ConcurrentHashMap_KeySetView::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject ConcurrentHashMap_KeySetView::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean ConcurrentHashMap_KeySetView::remove(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean ConcurrentHashMap_KeySetView::removeAll(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ConcurrentHashMap_KeySetView::spliterator()
	{
		return __thiz.callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
} // namespace java::util::concurrent

