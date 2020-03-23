#pragma once

#ifndef JAVA_UTIL_ABSTRACTQUEUE
#define JAVA_UTIL_ABSTRACTQUEUE

#include "AbstractCollection.hpp"


namespace __jni_impl::java::util
{
	class AbstractQueue : public __jni_impl::java::util::AbstractCollection
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean add(jobject arg0);
		QAndroidJniObject remove();
		void clear();
		jboolean addAll(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject element();
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void AbstractQueue::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.AbstractQueue",
			"(V)V");
	}
	
	// Methods
	jboolean AbstractQueue::add(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject AbstractQueue::remove()
	{
		return __thiz.callObjectMethod(
			"remove",
			"()Ljava/lang/Object;");
	}
	void AbstractQueue::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V");
	}
	jboolean AbstractQueue::addAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject AbstractQueue::element()
	{
		return __thiz.callObjectMethod(
			"element",
			"()Ljava/lang/Object;");
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class AbstractQueue : public __jni_impl::java::util::AbstractQueue
	{
	public:
		AbstractQueue(QAndroidJniObject obj) { __thiz = obj; }
		AbstractQueue()
		{
			__constructor();
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_ABSTRACTQUEUE

