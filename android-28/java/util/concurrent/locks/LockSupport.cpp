#include "../../../lang/Thread.hpp"
#include "./LockSupport.hpp"

namespace java::util::concurrent::locks
{
	// Fields
	
	// QJniObject forward
	LockSupport::LockSupport(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jobject LockSupport::getBlocker(java::lang::Thread arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.locks.LockSupport",
			"getBlocker",
			"(Ljava/lang/Thread;)Ljava/lang/Object;",
			arg0.object()
		).object<jobject>();
	}
	void LockSupport::park()
	{
		callStaticMethod<void>(
			"java.util.concurrent.locks.LockSupport",
			"park",
			"()V"
		);
	}
	void LockSupport::park(jobject arg0)
	{
		callStaticMethod<void>(
			"java.util.concurrent.locks.LockSupport",
			"park",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void LockSupport::parkNanos(jlong arg0)
	{
		callStaticMethod<void>(
			"java.util.concurrent.locks.LockSupport",
			"parkNanos",
			"(J)V",
			arg0
		);
	}
	void LockSupport::parkNanos(jobject arg0, jlong arg1)
	{
		callStaticMethod<void>(
			"java.util.concurrent.locks.LockSupport",
			"parkNanos",
			"(Ljava/lang/Object;J)V",
			arg0,
			arg1
		);
	}
	void LockSupport::parkUntil(jlong arg0)
	{
		callStaticMethod<void>(
			"java.util.concurrent.locks.LockSupport",
			"parkUntil",
			"(J)V",
			arg0
		);
	}
	void LockSupport::parkUntil(jobject arg0, jlong arg1)
	{
		callStaticMethod<void>(
			"java.util.concurrent.locks.LockSupport",
			"parkUntil",
			"(Ljava/lang/Object;J)V",
			arg0,
			arg1
		);
	}
	void LockSupport::setCurrentBlocker(jobject arg0)
	{
		callStaticMethod<void>(
			"java.util.concurrent.locks.LockSupport",
			"setCurrentBlocker",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void LockSupport::unpark(java::lang::Thread arg0)
	{
		callStaticMethod<void>(
			"java.util.concurrent.locks.LockSupport",
			"unpark",
			"(Ljava/lang/Thread;)V",
			arg0.object()
		);
	}
} // namespace java::util::concurrent::locks

