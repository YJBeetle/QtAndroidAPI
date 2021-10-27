#include "../../../lang/Thread.hpp"
#include "./LockSupport.hpp"

namespace java::util::concurrent::locks
{
	// Fields
	
	LockSupport::LockSupport(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jobject LockSupport::getBlocker(java::lang::Thread arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.locks.LockSupport",
			"getBlocker",
			"(Ljava/lang/Thread;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	void LockSupport::park()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.concurrent.locks.LockSupport",
			"park",
			"()V"
		);
	}
	void LockSupport::park(jobject arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.concurrent.locks.LockSupport",
			"park",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void LockSupport::parkNanos(jlong arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.concurrent.locks.LockSupport",
			"parkNanos",
			"(J)V",
			arg0
		);
	}
	void LockSupport::parkNanos(jobject arg0, jlong arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.concurrent.locks.LockSupport",
			"parkNanos",
			"(Ljava/lang/Object;J)V",
			arg0,
			arg1
		);
	}
	void LockSupport::parkUntil(jlong arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.concurrent.locks.LockSupport",
			"parkUntil",
			"(J)V",
			arg0
		);
	}
	void LockSupport::parkUntil(jobject arg0, jlong arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.concurrent.locks.LockSupport",
			"parkUntil",
			"(Ljava/lang/Object;J)V",
			arg0,
			arg1
		);
	}
	void LockSupport::setCurrentBlocker(jobject arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.concurrent.locks.LockSupport",
			"setCurrentBlocker",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void LockSupport::unpark(java::lang::Thread arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.concurrent.locks.LockSupport",
			"unpark",
			"(Ljava/lang/Thread;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace java::util::concurrent::locks

