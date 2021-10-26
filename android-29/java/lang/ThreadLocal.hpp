#pragma once

#ifndef JAVA_LANG_THREADLOCAL
#define JAVA_LANG_THREADLOCAL

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::util::concurrent::atomic
{
	class AtomicInteger;
}
namespace __jni_impl::java::lang
{
	class Thread;
}

namespace __jni_impl::java::lang
{
	class ThreadLocal : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void remove();
		jobject get();
		void set(jobject arg0);
		static QAndroidJniObject withInitial(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::java::lang

#include "../util/concurrent/atomic/AtomicInteger.hpp"
#include "Thread.hpp"

namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void ThreadLocal::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.ThreadLocal",
			"()V"
		);
	}
	
	// Methods
	void ThreadLocal::remove()
	{
		__thiz.callMethod<void>(
			"remove",
			"()V"
		);
	}
	jobject ThreadLocal::get()
	{
		return __thiz.callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void ThreadLocal::set(jobject arg0)
	{
		__thiz.callMethod<void>(
			"set",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	QAndroidJniObject ThreadLocal::withInitial(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.ThreadLocal",
			"withInitial",
			"(Ljava/util/function/Supplier;)Ljava/lang/ThreadLocal;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class ThreadLocal : public __jni_impl::java::lang::ThreadLocal
	{
	public:
		ThreadLocal(QAndroidJniObject obj) { __thiz = obj; }
		ThreadLocal()
		{
			__constructor();
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_THREADLOCAL

