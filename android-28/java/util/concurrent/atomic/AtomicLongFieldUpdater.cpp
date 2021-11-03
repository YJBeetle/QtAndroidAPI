#include "../../../../JClass.hpp"
#include "../../../lang/ClassLoader.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./AtomicLongFieldUpdater.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	// QJniObject forward
	AtomicLongFieldUpdater::AtomicLongFieldUpdater(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::util::concurrent::atomic::AtomicLongFieldUpdater AtomicLongFieldUpdater::newUpdater(JClass arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.atomic.AtomicLongFieldUpdater",
			"newUpdater",
			"(Ljava/lang/Class;Ljava/lang/String;)Ljava/util/concurrent/atomic/AtomicLongFieldUpdater;",
			arg0.object<jclass>(),
			arg1.object<jstring>()
		);
	}
	jlong AtomicLongFieldUpdater::accumulateAndGet(JObject arg0, jlong arg1, JObject arg2)
	{
		return callMethod<jlong>(
			"accumulateAndGet",
			"(Ljava/lang/Object;JLjava/util/function/LongBinaryOperator;)J",
			arg0.object<jobject>(),
			arg1,
			arg2.object()
		);
	}
	jlong AtomicLongFieldUpdater::addAndGet(JObject arg0, jlong arg1)
	{
		return callMethod<jlong>(
			"addAndGet",
			"(Ljava/lang/Object;J)J",
			arg0.object<jobject>(),
			arg1
		);
	}
	jboolean AtomicLongFieldUpdater::compareAndSet(JObject arg0, jlong arg1, jlong arg2)
	{
		return callMethod<jboolean>(
			"compareAndSet",
			"(Ljava/lang/Object;JJ)Z",
			arg0.object<jobject>(),
			arg1,
			arg2
		);
	}
	jlong AtomicLongFieldUpdater::decrementAndGet(JObject arg0)
	{
		return callMethod<jlong>(
			"decrementAndGet",
			"(Ljava/lang/Object;)J",
			arg0.object<jobject>()
		);
	}
	jlong AtomicLongFieldUpdater::get(JObject arg0)
	{
		return callMethod<jlong>(
			"get",
			"(Ljava/lang/Object;)J",
			arg0.object<jobject>()
		);
	}
	jlong AtomicLongFieldUpdater::getAndAccumulate(JObject arg0, jlong arg1, JObject arg2)
	{
		return callMethod<jlong>(
			"getAndAccumulate",
			"(Ljava/lang/Object;JLjava/util/function/LongBinaryOperator;)J",
			arg0.object<jobject>(),
			arg1,
			arg2.object()
		);
	}
	jlong AtomicLongFieldUpdater::getAndAdd(JObject arg0, jlong arg1)
	{
		return callMethod<jlong>(
			"getAndAdd",
			"(Ljava/lang/Object;J)J",
			arg0.object<jobject>(),
			arg1
		);
	}
	jlong AtomicLongFieldUpdater::getAndDecrement(JObject arg0)
	{
		return callMethod<jlong>(
			"getAndDecrement",
			"(Ljava/lang/Object;)J",
			arg0.object<jobject>()
		);
	}
	jlong AtomicLongFieldUpdater::getAndIncrement(JObject arg0)
	{
		return callMethod<jlong>(
			"getAndIncrement",
			"(Ljava/lang/Object;)J",
			arg0.object<jobject>()
		);
	}
	jlong AtomicLongFieldUpdater::getAndSet(JObject arg0, jlong arg1)
	{
		return callMethod<jlong>(
			"getAndSet",
			"(Ljava/lang/Object;J)J",
			arg0.object<jobject>(),
			arg1
		);
	}
	jlong AtomicLongFieldUpdater::getAndUpdate(JObject arg0, JObject arg1)
	{
		return callMethod<jlong>(
			"getAndUpdate",
			"(Ljava/lang/Object;Ljava/util/function/LongUnaryOperator;)J",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	jlong AtomicLongFieldUpdater::incrementAndGet(JObject arg0)
	{
		return callMethod<jlong>(
			"incrementAndGet",
			"(Ljava/lang/Object;)J",
			arg0.object<jobject>()
		);
	}
	void AtomicLongFieldUpdater::lazySet(JObject arg0, jlong arg1)
	{
		callMethod<void>(
			"lazySet",
			"(Ljava/lang/Object;J)V",
			arg0.object<jobject>(),
			arg1
		);
	}
	void AtomicLongFieldUpdater::set(JObject arg0, jlong arg1)
	{
		callMethod<void>(
			"set",
			"(Ljava/lang/Object;J)V",
			arg0.object<jobject>(),
			arg1
		);
	}
	jlong AtomicLongFieldUpdater::updateAndGet(JObject arg0, JObject arg1)
	{
		return callMethod<jlong>(
			"updateAndGet",
			"(Ljava/lang/Object;Ljava/util/function/LongUnaryOperator;)J",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	jboolean AtomicLongFieldUpdater::weakCompareAndSet(JObject arg0, jlong arg1, jlong arg2)
	{
		return callMethod<jboolean>(
			"weakCompareAndSet",
			"(Ljava/lang/Object;JJ)Z",
			arg0.object<jobject>(),
			arg1,
			arg2
		);
	}
} // namespace java::util::concurrent::atomic

