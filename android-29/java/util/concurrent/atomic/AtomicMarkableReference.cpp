#include "../../../../JBooleanArray.hpp"
#include "../../../../JObject.hpp"
#include "./AtomicMarkableReference.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	// Constructors
	AtomicMarkableReference::AtomicMarkableReference(JObject arg0, jboolean arg1)
		: JObject(
			"java.util.concurrent.atomic.AtomicMarkableReference",
			"(Ljava/lang/Object;Z)V",
			arg0.object<jobject>(),
			arg1
		) {}
	
	// Methods
	jboolean AtomicMarkableReference::attemptMark(JObject arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"attemptMark",
			"(Ljava/lang/Object;Z)Z",
			arg0.object<jobject>(),
			arg1
		);
	}
	jboolean AtomicMarkableReference::compareAndSet(JObject arg0, JObject arg1, jboolean arg2, jboolean arg3) const
	{
		return callMethod<jboolean>(
			"compareAndSet",
			"(Ljava/lang/Object;Ljava/lang/Object;ZZ)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>(),
			arg2,
			arg3
		);
	}
	JObject AtomicMarkableReference::get(JBooleanArray arg0) const
	{
		return callObjectMethod(
			"get",
			"([Z)Ljava/lang/Object;",
			arg0.object<jbooleanArray>()
		);
	}
	JObject AtomicMarkableReference::getReference() const
	{
		return callObjectMethod(
			"getReference",
			"()Ljava/lang/Object;"
		);
	}
	jboolean AtomicMarkableReference::isMarked() const
	{
		return callMethod<jboolean>(
			"isMarked",
			"()Z"
		);
	}
	void AtomicMarkableReference::set(JObject arg0, jboolean arg1) const
	{
		callMethod<void>(
			"set",
			"(Ljava/lang/Object;Z)V",
			arg0.object<jobject>(),
			arg1
		);
	}
	jboolean AtomicMarkableReference::weakCompareAndSet(JObject arg0, JObject arg1, jboolean arg2, jboolean arg3) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSet",
			"(Ljava/lang/Object;Ljava/lang/Object;ZZ)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>(),
			arg2,
			arg3
		);
	}
} // namespace java::util::concurrent::atomic

