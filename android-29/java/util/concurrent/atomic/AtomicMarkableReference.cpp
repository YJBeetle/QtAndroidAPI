#include "./AtomicMarkableReference.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	// QAndroidJniObject forward
	AtomicMarkableReference::AtomicMarkableReference(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AtomicMarkableReference::AtomicMarkableReference(jobject arg0, jboolean arg1)
		: JObject(
			"java.util.concurrent.atomic.AtomicMarkableReference",
			"(Ljava/lang/Object;Z)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jboolean AtomicMarkableReference::attemptMark(jobject arg0, jboolean arg1)
	{
		return callMethod<jboolean>(
			"attemptMark",
			"(Ljava/lang/Object;Z)Z",
			arg0,
			arg1
		);
	}
	jboolean AtomicMarkableReference::compareAndSet(jobject arg0, jobject arg1, jboolean arg2, jboolean arg3)
	{
		return callMethod<jboolean>(
			"compareAndSet",
			"(Ljava/lang/Object;Ljava/lang/Object;ZZ)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jobject AtomicMarkableReference::get(jbooleanArray arg0)
	{
		return callObjectMethod(
			"get",
			"([Z)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject AtomicMarkableReference::getReference()
	{
		return callObjectMethod(
			"getReference",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean AtomicMarkableReference::isMarked()
	{
		return callMethod<jboolean>(
			"isMarked",
			"()Z"
		);
	}
	void AtomicMarkableReference::set(jobject arg0, jboolean arg1)
	{
		callMethod<void>(
			"set",
			"(Ljava/lang/Object;Z)V",
			arg0,
			arg1
		);
	}
	jboolean AtomicMarkableReference::weakCompareAndSet(jobject arg0, jobject arg1, jboolean arg2, jboolean arg3)
	{
		return callMethod<jboolean>(
			"weakCompareAndSet",
			"(Ljava/lang/Object;Ljava/lang/Object;ZZ)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace java::util::concurrent::atomic

