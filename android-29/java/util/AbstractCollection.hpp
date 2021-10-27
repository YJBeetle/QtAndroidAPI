#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::util
{
	class AbstractCollection : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean add(jobject arg0);
		jboolean addAll(__jni_impl::__JniBaseClass arg0);
		void clear();
		jboolean contains(jobject arg0);
		jboolean containsAll(__jni_impl::__JniBaseClass arg0);
		jboolean isEmpty();
		QAndroidJniObject iterator();
		jboolean remove(jobject arg0);
		jboolean removeAll(__jni_impl::__JniBaseClass arg0);
		jboolean retainAll(__jni_impl::__JniBaseClass arg0);
		jint size();
		jobjectArray toArray();
		jobjectArray toArray(jobjectArray arg0);
		jstring toString();
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void AbstractCollection::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.AbstractCollection",
			"(V)V");
	}
	
	// Methods
	jboolean AbstractCollection::add(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean AbstractCollection::addAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	void AbstractCollection::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean AbstractCollection::contains(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean AbstractCollection::containsAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean AbstractCollection::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	QAndroidJniObject AbstractCollection::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean AbstractCollection::remove(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean AbstractCollection::removeAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean AbstractCollection::retainAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	jint AbstractCollection::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	jobjectArray AbstractCollection::toArray()
	{
		return __thiz.callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		).object<jobjectArray>();
	}
	jobjectArray AbstractCollection::toArray(jobjectArray arg0)
	{
		return __thiz.callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0
		).object<jobjectArray>();
	}
	jstring AbstractCollection::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class AbstractCollection : public __jni_impl::java::util::AbstractCollection
	{
	public:
		AbstractCollection(QAndroidJniObject obj) { __thiz = obj; }
		AbstractCollection()
		{
			__constructor();
		}
	};
} // namespace java::util

