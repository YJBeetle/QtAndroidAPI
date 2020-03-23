#pragma once

#ifndef JAVA_UTIL_CONCURRENT_LOCKS_LOCKSUPPORT
#define JAVA_UTIL_CONCURRENT_LOCKS_LOCKSUPPORT

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class Thread;
}

namespace __jni_impl::java::util::concurrent::locks
{
	class LockSupport : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static void park();
		static void park(jobject arg0);
		static void unpark(__jni_impl::java::lang::Thread arg0);
		static void parkNanos(jlong arg0);
		static void parkNanos(jobject arg0, jlong arg1);
		static void parkUntil(jlong arg0);
		static void parkUntil(jobject arg0, jlong arg1);
		static QAndroidJniObject getBlocker(__jni_impl::java::lang::Thread arg0);
	};
} // namespace __jni_impl::java::util::concurrent::locks

#include "../../../lang/Thread.hpp"

namespace __jni_impl::java::util::concurrent::locks
{
	// Fields
	
	// Constructors
	void LockSupport::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.locks.LockSupport",
			"(V)V");
	}
	
	// Methods
	void LockSupport::park()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.concurrent.locks.LockSupport",
			"park",
			"()V");
	}
	void LockSupport::park(jobject arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.concurrent.locks.LockSupport",
			"park",
			"(Ljava/lang/Object;)V",
			arg0);
	}
	void LockSupport::unpark(__jni_impl::java::lang::Thread arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.concurrent.locks.LockSupport",
			"unpark",
			"(Ljava/lang/Thread;)V",
			arg0.__jniObject().object());
	}
	void LockSupport::parkNanos(jlong arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.concurrent.locks.LockSupport",
			"parkNanos",
			"(J)V",
			arg0);
	}
	void LockSupport::parkNanos(jobject arg0, jlong arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.concurrent.locks.LockSupport",
			"parkNanos",
			"(Ljava/lang/Object;J)V",
			arg0,
			arg1);
	}
	void LockSupport::parkUntil(jlong arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.concurrent.locks.LockSupport",
			"parkUntil",
			"(J)V",
			arg0);
	}
	void LockSupport::parkUntil(jobject arg0, jlong arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.concurrent.locks.LockSupport",
			"parkUntil",
			"(Ljava/lang/Object;J)V",
			arg0,
			arg1);
	}
	QAndroidJniObject LockSupport::getBlocker(__jni_impl::java::lang::Thread arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.locks.LockSupport",
			"getBlocker",
			"(Ljava/lang/Thread;)Ljava/lang/Object;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::java::util::concurrent::locks

namespace java::util::concurrent::locks
{
	class LockSupport : public __jni_impl::java::util::concurrent::locks::LockSupport
	{
	public:
		LockSupport(QAndroidJniObject obj) { __thiz = obj; }
		LockSupport()
		{
			__constructor();
		}
	};
} // namespace java::util::concurrent::locks

#endif // JAVA_UTIL_CONCURRENT_LOCKS_LOCKSUPPORT

