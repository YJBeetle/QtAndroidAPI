#include "../../../lang/ClassLoader.hpp"
#include "./AtomicLongFieldUpdater.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	AtomicLongFieldUpdater::AtomicLongFieldUpdater(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject AtomicLongFieldUpdater::newUpdater(jclass arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.atomic.AtomicLongFieldUpdater",
			"newUpdater",
			"(Ljava/lang/Class;Ljava/lang/String;)Ljava/util/concurrent/atomic/AtomicLongFieldUpdater;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject AtomicLongFieldUpdater::newUpdater(jclass arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.atomic.AtomicLongFieldUpdater",
			"newUpdater",
			"(Ljava/lang/Class;Ljava/lang/String;)Ljava/util/concurrent/atomic/AtomicLongFieldUpdater;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jlong AtomicLongFieldUpdater::accumulateAndGet(jobject arg0, jlong arg1, __JniBaseClass arg2)
	{
		return __thiz.callMethod<jlong>(
			"accumulateAndGet",
			"(Ljava/lang/Object;JLjava/util/function/LongBinaryOperator;)J",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jlong AtomicLongFieldUpdater::addAndGet(jobject arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"addAndGet",
			"(Ljava/lang/Object;J)J",
			arg0,
			arg1
		);
	}
	jboolean AtomicLongFieldUpdater::compareAndSet(jobject arg0, jlong arg1, jlong arg2)
	{
		return __thiz.callMethod<jboolean>(
			"compareAndSet",
			"(Ljava/lang/Object;JJ)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jlong AtomicLongFieldUpdater::decrementAndGet(jobject arg0)
	{
		return __thiz.callMethod<jlong>(
			"decrementAndGet",
			"(Ljava/lang/Object;)J",
			arg0
		);
	}
	jlong AtomicLongFieldUpdater::get(jobject arg0)
	{
		return __thiz.callMethod<jlong>(
			"get",
			"(Ljava/lang/Object;)J",
			arg0
		);
	}
	jlong AtomicLongFieldUpdater::getAndAccumulate(jobject arg0, jlong arg1, __JniBaseClass arg2)
	{
		return __thiz.callMethod<jlong>(
			"getAndAccumulate",
			"(Ljava/lang/Object;JLjava/util/function/LongBinaryOperator;)J",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jlong AtomicLongFieldUpdater::getAndAdd(jobject arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"getAndAdd",
			"(Ljava/lang/Object;J)J",
			arg0,
			arg1
		);
	}
	jlong AtomicLongFieldUpdater::getAndDecrement(jobject arg0)
	{
		return __thiz.callMethod<jlong>(
			"getAndDecrement",
			"(Ljava/lang/Object;)J",
			arg0
		);
	}
	jlong AtomicLongFieldUpdater::getAndIncrement(jobject arg0)
	{
		return __thiz.callMethod<jlong>(
			"getAndIncrement",
			"(Ljava/lang/Object;)J",
			arg0
		);
	}
	jlong AtomicLongFieldUpdater::getAndSet(jobject arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"getAndSet",
			"(Ljava/lang/Object;J)J",
			arg0,
			arg1
		);
	}
	jlong AtomicLongFieldUpdater::getAndUpdate(jobject arg0, __JniBaseClass arg1)
	{
		return __thiz.callMethod<jlong>(
			"getAndUpdate",
			"(Ljava/lang/Object;Ljava/util/function/LongUnaryOperator;)J",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jlong AtomicLongFieldUpdater::incrementAndGet(jobject arg0)
	{
		return __thiz.callMethod<jlong>(
			"incrementAndGet",
			"(Ljava/lang/Object;)J",
			arg0
		);
	}
	void AtomicLongFieldUpdater::lazySet(jobject arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"lazySet",
			"(Ljava/lang/Object;J)V",
			arg0,
			arg1
		);
	}
	void AtomicLongFieldUpdater::set(jobject arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"set",
			"(Ljava/lang/Object;J)V",
			arg0,
			arg1
		);
	}
	jlong AtomicLongFieldUpdater::updateAndGet(jobject arg0, __JniBaseClass arg1)
	{
		return __thiz.callMethod<jlong>(
			"updateAndGet",
			"(Ljava/lang/Object;Ljava/util/function/LongUnaryOperator;)J",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean AtomicLongFieldUpdater::weakCompareAndSet(jobject arg0, jlong arg1, jlong arg2)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSet",
			"(Ljava/lang/Object;JJ)Z",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::util::concurrent::atomic

