#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class Thread;
}
namespace __jni_impl::java::util::concurrent::atomic
{
	class AtomicInteger;
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
		static QAndroidJniObject withInitial(__jni_impl::__JniBaseClass arg0);
		jobject get();
		void remove();
		void set(jobject arg0);
	};
} // namespace __jni_impl::java::lang

#include "Thread.hpp"
#include "../util/concurrent/atomic/AtomicInteger.hpp"

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
	QAndroidJniObject ThreadLocal::withInitial(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.ThreadLocal",
			"withInitial",
			"(Ljava/util/function/Supplier;)Ljava/lang/ThreadLocal;",
			arg0.__jniObject().object()
		);
	}
	jobject ThreadLocal::get()
	{
		return __thiz.callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void ThreadLocal::remove()
	{
		__thiz.callMethod<void>(
			"remove",
			"()V"
		);
	}
	void ThreadLocal::set(jobject arg0)
	{
		__thiz.callMethod<void>(
			"set",
			"(Ljava/lang/Object;)V",
			arg0
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

