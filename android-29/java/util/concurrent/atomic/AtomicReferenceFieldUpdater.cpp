#include "../../../../JClass.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./AtomicReferenceFieldUpdater.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	// QJniObject forward
	AtomicReferenceFieldUpdater::AtomicReferenceFieldUpdater(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::util::concurrent::atomic::AtomicReferenceFieldUpdater AtomicReferenceFieldUpdater::newUpdater(JClass arg0, JClass arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.atomic.AtomicReferenceFieldUpdater",
			"newUpdater",
			"(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/String;)Ljava/util/concurrent/atomic/AtomicReferenceFieldUpdater;",
			arg0.object<jclass>(),
			arg1.object<jclass>(),
			arg2.object<jstring>()
		);
	}
	JObject AtomicReferenceFieldUpdater::accumulateAndGet(JObject arg0, JObject arg1, JObject arg2)
	{
		return callObjectMethod(
			"accumulateAndGet",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>(),
			arg2.object()
		);
	}
	jboolean AtomicReferenceFieldUpdater::compareAndSet(JObject arg0, JObject arg1, JObject arg2)
	{
		return callMethod<jboolean>(
			"compareAndSet",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>(),
			arg2.object<jobject>()
		);
	}
	JObject AtomicReferenceFieldUpdater::get(JObject arg0)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	JObject AtomicReferenceFieldUpdater::getAndAccumulate(JObject arg0, JObject arg1, JObject arg2)
	{
		return callObjectMethod(
			"getAndAccumulate",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>(),
			arg2.object()
		);
	}
	JObject AtomicReferenceFieldUpdater::getAndSet(JObject arg0, JObject arg1)
	{
		return callObjectMethod(
			"getAndSet",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	JObject AtomicReferenceFieldUpdater::getAndUpdate(JObject arg0, JObject arg1)
	{
		return callObjectMethod(
			"getAndUpdate",
			"(Ljava/lang/Object;Ljava/util/function/UnaryOperator;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	void AtomicReferenceFieldUpdater::lazySet(JObject arg0, JObject arg1)
	{
		callMethod<void>(
			"lazySet",
			"(Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	void AtomicReferenceFieldUpdater::set(JObject arg0, JObject arg1)
	{
		callMethod<void>(
			"set",
			"(Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	JObject AtomicReferenceFieldUpdater::updateAndGet(JObject arg0, JObject arg1)
	{
		return callObjectMethod(
			"updateAndGet",
			"(Ljava/lang/Object;Ljava/util/function/UnaryOperator;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	jboolean AtomicReferenceFieldUpdater::weakCompareAndSet(JObject arg0, JObject arg1, JObject arg2)
	{
		return callMethod<jboolean>(
			"weakCompareAndSet",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>(),
			arg2.object<jobject>()
		);
	}
} // namespace java::util::concurrent::atomic

