#include "./AtomicMarkableReference.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	AtomicMarkableReference::AtomicMarkableReference(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AtomicMarkableReference::AtomicMarkableReference(jobject arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.atomic.AtomicMarkableReference",
			"(Ljava/lang/Object;Z)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jboolean AtomicMarkableReference::attemptMark(jobject arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"attemptMark",
			"(Ljava/lang/Object;Z)Z",
			arg0,
			arg1
		);
	}
	jboolean AtomicMarkableReference::compareAndSet(jobject arg0, jobject arg1, jboolean arg2, jboolean arg3)
	{
		return __thiz.callMethod<jboolean>(
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
		return __thiz.callObjectMethod(
			"get",
			"([Z)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject AtomicMarkableReference::getReference()
	{
		return __thiz.callObjectMethod(
			"getReference",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean AtomicMarkableReference::isMarked()
	{
		return __thiz.callMethod<jboolean>(
			"isMarked",
			"()Z"
		);
	}
	void AtomicMarkableReference::set(jobject arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"set",
			"(Ljava/lang/Object;Z)V",
			arg0,
			arg1
		);
	}
	jboolean AtomicMarkableReference::weakCompareAndSet(jobject arg0, jobject arg1, jboolean arg2, jboolean arg3)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSet",
			"(Ljava/lang/Object;Ljava/lang/Object;ZZ)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace java::util::concurrent::atomic

