#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util::concurrent
{
	class ConcurrentHashMap;
}

namespace __jni_impl::java::util::concurrent
{
	class ConcurrentHashMap_KeySetView : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean add(jobject arg0);
		jboolean addAll(__jni_impl::__JniBaseClass arg0);
		jboolean contains(jobject arg0);
		jboolean equals(jobject arg0);
		void forEach(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getMap();
		jobject getMappedValue();
		jint hashCode();
		QAndroidJniObject iterator();
		jboolean remove(jobject arg0);
		jboolean removeAll(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject spliterator();
	};
} // namespace __jni_impl::java::util::concurrent

#include "ConcurrentHashMap.hpp"

namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void ConcurrentHashMap_KeySetView::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ConcurrentHashMap$KeySetView",
			"(V)V");
	}
	
	// Methods
	jboolean ConcurrentHashMap_KeySetView::add(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean ConcurrentHashMap_KeySetView::addAll(__jni_impl::__JniBaseClass arg0)
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
	void ConcurrentHashMap_KeySetView::forEach(__jni_impl::__JniBaseClass arg0)
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
	jboolean ConcurrentHashMap_KeySetView::removeAll(__jni_impl::__JniBaseClass arg0)
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
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class ConcurrentHashMap_KeySetView : public __jni_impl::java::util::concurrent::ConcurrentHashMap_KeySetView
	{
	public:
		ConcurrentHashMap_KeySetView(QAndroidJniObject obj) { __thiz = obj; }
		ConcurrentHashMap_KeySetView()
		{
			__constructor();
		}
	};
} // namespace java::util::concurrent

