#pragma once

#ifndef JAVA_UTIL_CONCURRENT_LINKEDTRANSFERQUEUE
#define JAVA_UTIL_CONCURRENT_LINKEDTRANSFERQUEUE

#include "../AbstractQueue.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}
namespace __jni_impl::java::util::concurrent
{
	class TimeUnit;
}

namespace __jni_impl::java::util::concurrent
{
	class LinkedTransferQueue : public __jni_impl::java::util::AbstractQueue
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		jboolean add(jobject arg0);
		jboolean remove(jobject arg0);
		void put(jobject arg0);
		QAndroidJniObject toString();
		void clear();
		jboolean isEmpty();
		jint size();
		QAndroidJniObject toArray();
		QAndroidJniObject toArray(jobjectArray arg0);
		QAndroidJniObject iterator();
		jboolean contains(jobject arg0);
		QAndroidJniObject spliterator();
		void forEach(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject poll(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1);
		QAndroidJniObject poll();
		QAndroidJniObject peek();
		jboolean retainAll(__jni_impl::__JniBaseClass arg0);
		jboolean removeAll(__jni_impl::__JniBaseClass arg0);
		jboolean removeIf(__jni_impl::__JniBaseClass arg0);
		void transfer(jobject arg0);
		QAndroidJniObject take();
		jboolean offer(jobject arg0);
		jboolean offer(jobject arg0, jlong arg1, __jni_impl::java::util::concurrent::TimeUnit arg2);
		jboolean tryTransfer(jobject arg0);
		jboolean tryTransfer(jobject arg0, jlong arg1, __jni_impl::java::util::concurrent::TimeUnit arg2);
		jboolean hasWaitingConsumer();
		jint getWaitingConsumerCount();
		jint remainingCapacity();
		jint drainTo(__jni_impl::__JniBaseClass arg0, jint arg1);
		jint drainTo(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::java::util::concurrent

#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "TimeUnit.hpp"

namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void LinkedTransferQueue::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.LinkedTransferQueue",
			"()V");
	}
	void LinkedTransferQueue::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.LinkedTransferQueue",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jboolean LinkedTransferQueue::add(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jboolean LinkedTransferQueue::remove(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	void LinkedTransferQueue::put(jobject arg0)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/Object;)V",
			arg0);
	}
	QAndroidJniObject LinkedTransferQueue::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	void LinkedTransferQueue::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V");
	}
	jboolean LinkedTransferQueue::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z");
	}
	jint LinkedTransferQueue::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I");
	}
	QAndroidJniObject LinkedTransferQueue::toArray()
	{
		return __thiz.callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;");
	}
	QAndroidJniObject LinkedTransferQueue::toArray(jobjectArray arg0)
	{
		return __thiz.callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject LinkedTransferQueue::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;");
	}
	jboolean LinkedTransferQueue::contains(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject LinkedTransferQueue::spliterator()
	{
		return __thiz.callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;");
	}
	void LinkedTransferQueue::forEach(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject LinkedTransferQueue::poll(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callObjectMethod(
			"poll",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject LinkedTransferQueue::poll()
	{
		return __thiz.callObjectMethod(
			"poll",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject LinkedTransferQueue::peek()
	{
		return __thiz.callObjectMethod(
			"peek",
			"()Ljava/lang/Object;");
	}
	jboolean LinkedTransferQueue::retainAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object());
	}
	jboolean LinkedTransferQueue::removeAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object());
	}
	jboolean LinkedTransferQueue::removeIf(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.__jniObject().object());
	}
	void LinkedTransferQueue::transfer(jobject arg0)
	{
		__thiz.callMethod<void>(
			"transfer",
			"(Ljava/lang/Object;)V",
			arg0);
	}
	QAndroidJniObject LinkedTransferQueue::take()
	{
		return __thiz.callObjectMethod(
			"take",
			"()Ljava/lang/Object;");
	}
	jboolean LinkedTransferQueue::offer(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jboolean LinkedTransferQueue::offer(jobject arg0, jlong arg1, __jni_impl::java::util::concurrent::TimeUnit arg2)
	{
		return __thiz.callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	jboolean LinkedTransferQueue::tryTransfer(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"tryTransfer",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jboolean LinkedTransferQueue::tryTransfer(jobject arg0, jlong arg1, __jni_impl::java::util::concurrent::TimeUnit arg2)
	{
		return __thiz.callMethod<jboolean>(
			"tryTransfer",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	jboolean LinkedTransferQueue::hasWaitingConsumer()
	{
		return __thiz.callMethod<jboolean>(
			"hasWaitingConsumer",
			"()Z");
	}
	jint LinkedTransferQueue::getWaitingConsumerCount()
	{
		return __thiz.callMethod<jint>(
			"getWaitingConsumerCount",
			"()I");
	}
	jint LinkedTransferQueue::remainingCapacity()
	{
		return __thiz.callMethod<jint>(
			"remainingCapacity",
			"()I");
	}
	jint LinkedTransferQueue::drainTo(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;I)I",
			arg0.__jniObject().object(),
			arg1);
	}
	jint LinkedTransferQueue::drainTo(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;)I",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class LinkedTransferQueue : public __jni_impl::java::util::concurrent::LinkedTransferQueue
	{
	public:
		LinkedTransferQueue(QAndroidJniObject obj) { __thiz = obj; }
		LinkedTransferQueue()
		{
			__constructor();
		}
		LinkedTransferQueue(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::concurrent

#endif // JAVA_UTIL_CONCURRENT_LINKEDTRANSFERQUEUE

