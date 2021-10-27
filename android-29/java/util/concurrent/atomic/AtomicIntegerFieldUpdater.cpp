#include "./AtomicIntegerFieldUpdater.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	AtomicIntegerFieldUpdater::AtomicIntegerFieldUpdater(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject AtomicIntegerFieldUpdater::newUpdater(jclass arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.atomic.AtomicIntegerFieldUpdater",
			"newUpdater",
			"(Ljava/lang/Class;Ljava/lang/String;)Ljava/util/concurrent/atomic/AtomicIntegerFieldUpdater;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject AtomicIntegerFieldUpdater::newUpdater(jclass arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.atomic.AtomicIntegerFieldUpdater",
			"newUpdater",
			"(Ljava/lang/Class;Ljava/lang/String;)Ljava/util/concurrent/atomic/AtomicIntegerFieldUpdater;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jint AtomicIntegerFieldUpdater::accumulateAndGet(jobject arg0, jint arg1, __JniBaseClass arg2)
	{
		return __thiz.callMethod<jint>(
			"accumulateAndGet",
			"(Ljava/lang/Object;ILjava/util/function/IntBinaryOperator;)I",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jint AtomicIntegerFieldUpdater::addAndGet(jobject arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"addAndGet",
			"(Ljava/lang/Object;I)I",
			arg0,
			arg1
		);
	}
	jboolean AtomicIntegerFieldUpdater::compareAndSet(jobject arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"compareAndSet",
			"(Ljava/lang/Object;II)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jint AtomicIntegerFieldUpdater::decrementAndGet(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"decrementAndGet",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint AtomicIntegerFieldUpdater::get(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"get",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint AtomicIntegerFieldUpdater::getAndAccumulate(jobject arg0, jint arg1, __JniBaseClass arg2)
	{
		return __thiz.callMethod<jint>(
			"getAndAccumulate",
			"(Ljava/lang/Object;ILjava/util/function/IntBinaryOperator;)I",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jint AtomicIntegerFieldUpdater::getAndAdd(jobject arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getAndAdd",
			"(Ljava/lang/Object;I)I",
			arg0,
			arg1
		);
	}
	jint AtomicIntegerFieldUpdater::getAndDecrement(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"getAndDecrement",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint AtomicIntegerFieldUpdater::getAndIncrement(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"getAndIncrement",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint AtomicIntegerFieldUpdater::getAndSet(jobject arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getAndSet",
			"(Ljava/lang/Object;I)I",
			arg0,
			arg1
		);
	}
	jint AtomicIntegerFieldUpdater::getAndUpdate(jobject arg0, __JniBaseClass arg1)
	{
		return __thiz.callMethod<jint>(
			"getAndUpdate",
			"(Ljava/lang/Object;Ljava/util/function/IntUnaryOperator;)I",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint AtomicIntegerFieldUpdater::incrementAndGet(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"incrementAndGet",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	void AtomicIntegerFieldUpdater::lazySet(jobject arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"lazySet",
			"(Ljava/lang/Object;I)V",
			arg0,
			arg1
		);
	}
	void AtomicIntegerFieldUpdater::set(jobject arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"set",
			"(Ljava/lang/Object;I)V",
			arg0,
			arg1
		);
	}
	jint AtomicIntegerFieldUpdater::updateAndGet(jobject arg0, __JniBaseClass arg1)
	{
		return __thiz.callMethod<jint>(
			"updateAndGet",
			"(Ljava/lang/Object;Ljava/util/function/IntUnaryOperator;)I",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean AtomicIntegerFieldUpdater::weakCompareAndSet(jobject arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSet",
			"(Ljava/lang/Object;II)Z",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::util::concurrent::atomic

