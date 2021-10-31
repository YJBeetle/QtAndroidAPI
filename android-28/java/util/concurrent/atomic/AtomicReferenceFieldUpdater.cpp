#include "./AtomicReferenceFieldUpdater.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	// QAndroidJniObject forward
	AtomicReferenceFieldUpdater::AtomicReferenceFieldUpdater(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	java::util::concurrent::atomic::AtomicReferenceFieldUpdater AtomicReferenceFieldUpdater::newUpdater(jclass arg0, jclass arg1, jstring arg2)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.atomic.AtomicReferenceFieldUpdater",
			"newUpdater",
			"(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/String;)Ljava/util/concurrent/atomic/AtomicReferenceFieldUpdater;",
			arg0,
			arg1,
			arg2
		);
	}
	jobject AtomicReferenceFieldUpdater::accumulateAndGet(jobject arg0, jobject arg1, __JniBaseClass arg2)
	{
		return callObjectMethod(
			"accumulateAndGet",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2.object()
		).object<jobject>();
	}
	jboolean AtomicReferenceFieldUpdater::compareAndSet(jobject arg0, jobject arg1, jobject arg2)
	{
		return callMethod<jboolean>(
			"compareAndSet",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jobject AtomicReferenceFieldUpdater::get(jobject arg0)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject AtomicReferenceFieldUpdater::getAndAccumulate(jobject arg0, jobject arg1, __JniBaseClass arg2)
	{
		return callObjectMethod(
			"getAndAccumulate",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2.object()
		).object<jobject>();
	}
	jobject AtomicReferenceFieldUpdater::getAndSet(jobject arg0, jobject arg1)
	{
		return callObjectMethod(
			"getAndSet",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jobject AtomicReferenceFieldUpdater::getAndUpdate(jobject arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"getAndUpdate",
			"(Ljava/lang/Object;Ljava/util/function/UnaryOperator;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	void AtomicReferenceFieldUpdater::lazySet(jobject arg0, jobject arg1)
	{
		callMethod<void>(
			"lazySet",
			"(Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void AtomicReferenceFieldUpdater::set(jobject arg0, jobject arg1)
	{
		callMethod<void>(
			"set",
			"(Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	jobject AtomicReferenceFieldUpdater::updateAndGet(jobject arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"updateAndGet",
			"(Ljava/lang/Object;Ljava/util/function/UnaryOperator;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	jboolean AtomicReferenceFieldUpdater::weakCompareAndSet(jobject arg0, jobject arg1, jobject arg2)
	{
		return callMethod<jboolean>(
			"weakCompareAndSet",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::util::concurrent::atomic

