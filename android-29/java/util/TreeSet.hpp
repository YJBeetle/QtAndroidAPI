#pragma once

#ifndef JAVA_UTIL_TREESET
#define JAVA_UTIL_TREESET

#include "AbstractSet.hpp"

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
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor();
		
		// Methods
		jboolean add(jobject arg0);
		jboolean remove(jobject arg0);
		QAndroidJniObject clone();
		void clear();
		jboolean isEmpty();
		jint size();
		QAndroidJniObject iterator();
		jboolean contains(jobject arg0);
		QAndroidJniObject last();
		QAndroidJniObject spliterator();
		jboolean addAll(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject first();
		QAndroidJniObject lower(jobject arg0);
		QAndroidJniObject comparator();
		QAndroidJniObject floor(jobject arg0);
		QAndroidJniObject pollFirst();
		QAndroidJniObject pollLast();
		QAndroidJniObject descendingIterator();
		QAndroidJniObject subSet(jobject arg0, jobject arg1);
		QAndroidJniObject subSet(jobject arg0, jboolean arg1, jobject arg2, jboolean arg3);
		QAndroidJniObject headSet(jobject arg0);
		QAndroidJniObject headSet(jobject arg0, jboolean arg1);
		QAndroidJniObject tailSet(jobject arg0, jboolean arg1);
		QAndroidJniObject tailSet(jobject arg0);
		QAndroidJniObject ceiling(jobject arg0);
		QAndroidJniObject higher(jobject arg0);
		QAndroidJniObject descendingSet();
	};
} // namespace __jni_impl::java::util

#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void TreeSet::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.TreeSet",
			"(Ljava/util/SortedSet;)V",
			arg0.__jniObject().object());
	}
	void TreeSet::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.TreeSet",
			"()V");
	}
	
	// Methods
	jboolean TreeSet::add(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jboolean TreeSet::remove(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject TreeSet::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;");
	}
	void TreeSet::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V");
	}
	jboolean TreeSet::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z");
	}
	jint TreeSet::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I");
	}
	QAndroidJniObject TreeSet::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;");
	}
	jboolean TreeSet::contains(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject TreeSet::last()
	{
		return __thiz.callObjectMethod(
			"last",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject TreeSet::spliterator()
	{
		return __thiz.callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;");
	}
	jboolean TreeSet::addAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject TreeSet::first()
	{
		return __thiz.callObjectMethod(
			"first",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject TreeSet::lower(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"lower",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject TreeSet::comparator()
	{
		return __thiz.callObjectMethod(
			"comparator",
			"()Ljava/util/Comparator;");
	}
	QAndroidJniObject TreeSet::floor(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"floor",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject TreeSet::pollFirst()
	{
		return __thiz.callObjectMethod(
			"pollFirst",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject TreeSet::pollLast()
	{
		return __thiz.callObjectMethod(
			"pollLast",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject TreeSet::descendingIterator()
	{
		return __thiz.callObjectMethod(
			"descendingIterator",
			"()Ljava/util/Iterator;");
	}
	QAndroidJniObject TreeSet::subSet(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"subSet",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;",
			arg0,
			arg1);
	}
	QAndroidJniObject TreeSet::subSet(jobject arg0, jboolean arg1, jobject arg2, jboolean arg3)
	{
		return __thiz.callObjectMethod(
			"subSet",
			"(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableSet;",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	QAndroidJniObject TreeSet::headSet(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"headSet",
			"(Ljava/lang/Object;)Ljava/util/SortedSet;",
			arg0);
	}
	QAndroidJniObject TreeSet::headSet(jobject arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"headSet",
			"(Ljava/lang/Object;Z)Ljava/util/NavigableSet;",
			arg0,
			arg1);
	}
	QAndroidJniObject TreeSet::tailSet(jobject arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"tailSet",
			"(Ljava/lang/Object;Z)Ljava/util/NavigableSet;",
			arg0,
			arg1);
	}
	QAndroidJniObject TreeSet::tailSet(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"tailSet",
			"(Ljava/lang/Object;)Ljava/util/SortedSet;",
			arg0);
	}
	QAndroidJniObject TreeSet::ceiling(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"ceiling",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject TreeSet::higher(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"higher",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject TreeSet::descendingSet()
	{
		return __thiz.callObjectMethod(
			"descendingSet",
			"()Ljava/util/NavigableSet;");
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class TreeSet : public __jni_impl::java::util::TreeSet
	{
	public:
		TreeSet(QAndroidJniObject obj) { __thiz = obj; }
		TreeSet(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		TreeSet()
		{
			__constructor();
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_TREESET

