#pragma once

#ifndef JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYSET
#define JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYSET

#include "../../../__JniBaseClass.hpp"
#include "../AbstractCollection.hpp"
#include "../AbstractSet.hpp"

namespace __jni_impl::java::util::concurrent
{
	class CopyOnWriteArrayList;
}

namespace __jni_impl::java::util::concurrent
{
	class CopyOnWriteArraySet : public __jni_impl::java::util::AbstractSet
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		jboolean add(jobject arg0);
		jboolean remove(jobject arg0);
		jboolean equals(jobject arg0);
		void clear();
		jboolean isEmpty();
		jint size();
		jobjectArray toArray(jobjectArray arg0);
		jobjectArray toArray();
		QAndroidJniObject iterator();
		jboolean contains(jobject arg0);
		QAndroidJniObject spliterator();
		jboolean addAll(__jni_impl::__JniBaseClass arg0);
		void forEach(__jni_impl::__JniBaseClass arg0);
		jboolean containsAll(__jni_impl::__JniBaseClass arg0);
		jboolean retainAll(__jni_impl::__JniBaseClass arg0);
		jboolean removeAll(__jni_impl::__JniBaseClass arg0);
		jboolean removeIf(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::java::util::concurrent

#include "CopyOnWriteArrayList.hpp"

namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void CopyOnWriteArraySet::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.CopyOnWriteArraySet",
			"()V"
		);
	}
	void CopyOnWriteArraySet::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.CopyOnWriteArraySet",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean CopyOnWriteArraySet::add(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean CopyOnWriteArraySet::remove(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean CopyOnWriteArraySet::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void CopyOnWriteArraySet::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean CopyOnWriteArraySet::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jint CopyOnWriteArraySet::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	jobjectArray CopyOnWriteArraySet::toArray(jobjectArray arg0)
	{
		return __thiz.callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0
		).object<jobjectArray>();
	}
	jobjectArray CopyOnWriteArraySet::toArray()
	{
		return __thiz.callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		).object<jobjectArray>();
	}
	QAndroidJniObject CopyOnWriteArraySet::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean CopyOnWriteArraySet::contains(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject CopyOnWriteArraySet::spliterator()
	{
		return __thiz.callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	jboolean CopyOnWriteArraySet::addAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	void CopyOnWriteArraySet::forEach(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean CopyOnWriteArraySet::containsAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean CopyOnWriteArraySet::retainAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean CopyOnWriteArraySet::removeAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean CopyOnWriteArraySet::removeIf(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class CopyOnWriteArraySet : public __jni_impl::java::util::concurrent::CopyOnWriteArraySet
	{
	public:
		CopyOnWriteArraySet(QAndroidJniObject obj) { __thiz = obj; }
		CopyOnWriteArraySet()
		{
			__constructor();
		}
		CopyOnWriteArraySet(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::concurrent

#endif // JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYSET

