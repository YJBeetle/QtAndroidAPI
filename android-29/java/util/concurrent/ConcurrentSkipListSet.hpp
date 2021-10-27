#pragma once

#ifndef JAVA_UTIL_CONCURRENT_CONCURRENTSKIPLISTSET
#define JAVA_UTIL_CONCURRENT_CONCURRENTSKIPLISTSET

#include "../../../__JniBaseClass.hpp"
#include "../AbstractCollection.hpp"
#include "../AbstractSet.hpp"

namespace __jni_impl::java::lang::reflect
{
	class Field;
}

namespace __jni_impl::java::util::concurrent
{
	class ConcurrentSkipListSet : public __jni_impl::java::util::AbstractSet
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		jboolean add(jobject arg0);
		jobject ceiling(jobject arg0);
		void clear();
		QAndroidJniObject clone();
		QAndroidJniObject comparator();
		jboolean contains(jobject arg0);
		QAndroidJniObject descendingIterator();
		QAndroidJniObject descendingSet();
		jboolean equals(jobject arg0);
		jobject first();
		jobject floor(jobject arg0);
		QAndroidJniObject headSet(jobject arg0);
		QAndroidJniObject headSet(jobject arg0, jboolean arg1);
		jobject higher(jobject arg0);
		jboolean isEmpty();
		QAndroidJniObject iterator();
		jobject last();
		jobject lower(jobject arg0);
		jobject pollFirst();
		jobject pollLast();
		jboolean remove(jobject arg0);
		jboolean removeAll(__jni_impl::__JniBaseClass arg0);
		jint size();
		QAndroidJniObject spliterator();
		QAndroidJniObject subSet(jobject arg0, jobject arg1);
		QAndroidJniObject subSet(jobject arg0, jboolean arg1, jobject arg2, jboolean arg3);
		QAndroidJniObject tailSet(jobject arg0);
		QAndroidJniObject tailSet(jobject arg0, jboolean arg1);
	};
} // namespace __jni_impl::java::util::concurrent

#include "../../lang/reflect/Field.hpp"

namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void ConcurrentSkipListSet::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ConcurrentSkipListSet",
			"()V"
		);
	}
	void ConcurrentSkipListSet::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ConcurrentSkipListSet",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean ConcurrentSkipListSet::add(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject ConcurrentSkipListSet::ceiling(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"ceiling",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	void ConcurrentSkipListSet::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	QAndroidJniObject ConcurrentSkipListSet::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/util/concurrent/ConcurrentSkipListSet;"
		);
	}
	QAndroidJniObject ConcurrentSkipListSet::comparator()
	{
		return __thiz.callObjectMethod(
			"comparator",
			"()Ljava/util/Comparator;"
		);
	}
	jboolean ConcurrentSkipListSet::contains(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject ConcurrentSkipListSet::descendingIterator()
	{
		return __thiz.callObjectMethod(
			"descendingIterator",
			"()Ljava/util/Iterator;"
		);
	}
	QAndroidJniObject ConcurrentSkipListSet::descendingSet()
	{
		return __thiz.callObjectMethod(
			"descendingSet",
			"()Ljava/util/NavigableSet;"
		);
	}
	jboolean ConcurrentSkipListSet::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject ConcurrentSkipListSet::first()
	{
		return __thiz.callObjectMethod(
			"first",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject ConcurrentSkipListSet::floor(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"floor",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	QAndroidJniObject ConcurrentSkipListSet::headSet(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"headSet",
			"(Ljava/lang/Object;)Ljava/util/NavigableSet;",
			arg0
		);
	}
	QAndroidJniObject ConcurrentSkipListSet::headSet(jobject arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"headSet",
			"(Ljava/lang/Object;Z)Ljava/util/NavigableSet;",
			arg0,
			arg1
		);
	}
	jobject ConcurrentSkipListSet::higher(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"higher",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean ConcurrentSkipListSet::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	QAndroidJniObject ConcurrentSkipListSet::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jobject ConcurrentSkipListSet::last()
	{
		return __thiz.callObjectMethod(
			"last",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject ConcurrentSkipListSet::lower(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"lower",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject ConcurrentSkipListSet::pollFirst()
	{
		return __thiz.callObjectMethod(
			"pollFirst",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject ConcurrentSkipListSet::pollLast()
	{
		return __thiz.callObjectMethod(
			"pollLast",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean ConcurrentSkipListSet::remove(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean ConcurrentSkipListSet::removeAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	jint ConcurrentSkipListSet::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	QAndroidJniObject ConcurrentSkipListSet::spliterator()
	{
		return __thiz.callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	QAndroidJniObject ConcurrentSkipListSet::subSet(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"subSet",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/NavigableSet;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ConcurrentSkipListSet::subSet(jobject arg0, jboolean arg1, jobject arg2, jboolean arg3)
	{
		return __thiz.callObjectMethod(
			"subSet",
			"(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableSet;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject ConcurrentSkipListSet::tailSet(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"tailSet",
			"(Ljava/lang/Object;)Ljava/util/NavigableSet;",
			arg0
		);
	}
	QAndroidJniObject ConcurrentSkipListSet::tailSet(jobject arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"tailSet",
			"(Ljava/lang/Object;Z)Ljava/util/NavigableSet;",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class ConcurrentSkipListSet : public __jni_impl::java::util::concurrent::ConcurrentSkipListSet
	{
	public:
		ConcurrentSkipListSet(QAndroidJniObject obj) { __thiz = obj; }
		ConcurrentSkipListSet()
		{
			__constructor();
		}
		ConcurrentSkipListSet(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::concurrent

#endif // JAVA_UTIL_CONCURRENT_CONCURRENTSKIPLISTSET

