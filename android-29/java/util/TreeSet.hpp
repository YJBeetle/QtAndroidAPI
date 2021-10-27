#pragma once

#include "../../__JniBaseClass.hpp"
#include "./AbstractCollection.hpp"
#include "./AbstractSet.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}

namespace __jni_impl::java::util
{
	class TreeSet : public __jni_impl::java::util::AbstractSet
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		jboolean add(jobject arg0);
		jboolean addAll(__jni_impl::__JniBaseClass arg0);
		jobject ceiling(jobject arg0);
		void clear();
		jobject clone();
		QAndroidJniObject comparator();
		jboolean contains(jobject arg0);
		QAndroidJniObject descendingIterator();
		QAndroidJniObject descendingSet();
		jobject first();
		jobject floor(jobject arg0);
		QAndroidJniObject headSet(jobject arg0, jboolean arg1);
		QAndroidJniObject headSet(jobject arg0);
		jobject higher(jobject arg0);
		jboolean isEmpty();
		QAndroidJniObject iterator();
		jobject last();
		jobject lower(jobject arg0);
		jobject pollFirst();
		jobject pollLast();
		jboolean remove(jobject arg0);
		jint size();
		QAndroidJniObject spliterator();
		QAndroidJniObject subSet(jobject arg0, jboolean arg1, jobject arg2, jboolean arg3);
		QAndroidJniObject subSet(jobject arg0, jobject arg1);
		QAndroidJniObject tailSet(jobject arg0, jboolean arg1);
		QAndroidJniObject tailSet(jobject arg0);
	};
} // namespace __jni_impl::java::util

#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void TreeSet::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.TreeSet",
			"()V"
		);
	}
	void TreeSet::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.TreeSet",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean TreeSet::add(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean TreeSet::addAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	jobject TreeSet::ceiling(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"ceiling",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	void TreeSet::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jobject TreeSet::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject TreeSet::comparator()
	{
		return __thiz.callObjectMethod(
			"comparator",
			"()Ljava/util/Comparator;"
		);
	}
	jboolean TreeSet::contains(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject TreeSet::descendingIterator()
	{
		return __thiz.callObjectMethod(
			"descendingIterator",
			"()Ljava/util/Iterator;"
		);
	}
	QAndroidJniObject TreeSet::descendingSet()
	{
		return __thiz.callObjectMethod(
			"descendingSet",
			"()Ljava/util/NavigableSet;"
		);
	}
	jobject TreeSet::first()
	{
		return __thiz.callObjectMethod(
			"first",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject TreeSet::floor(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"floor",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	QAndroidJniObject TreeSet::headSet(jobject arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"headSet",
			"(Ljava/lang/Object;Z)Ljava/util/NavigableSet;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject TreeSet::headSet(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"headSet",
			"(Ljava/lang/Object;)Ljava/util/SortedSet;",
			arg0
		);
	}
	jobject TreeSet::higher(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"higher",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean TreeSet::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	QAndroidJniObject TreeSet::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jobject TreeSet::last()
	{
		return __thiz.callObjectMethod(
			"last",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject TreeSet::lower(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"lower",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject TreeSet::pollFirst()
	{
		return __thiz.callObjectMethod(
			"pollFirst",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject TreeSet::pollLast()
	{
		return __thiz.callObjectMethod(
			"pollLast",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean TreeSet::remove(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint TreeSet::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	QAndroidJniObject TreeSet::spliterator()
	{
		return __thiz.callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	QAndroidJniObject TreeSet::subSet(jobject arg0, jboolean arg1, jobject arg2, jboolean arg3)
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
	QAndroidJniObject TreeSet::subSet(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"subSet",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject TreeSet::tailSet(jobject arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"tailSet",
			"(Ljava/lang/Object;Z)Ljava/util/NavigableSet;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject TreeSet::tailSet(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"tailSet",
			"(Ljava/lang/Object;)Ljava/util/SortedSet;",
			arg0
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class TreeSet : public __jni_impl::java::util::TreeSet
	{
	public:
		TreeSet(QAndroidJniObject obj) { __thiz = obj; }
		TreeSet()
		{
			__constructor();
		}
		TreeSet(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util

