#pragma once

#ifndef JAVA_LANG_THREADGROUP
#define JAVA_LANG_THREADGROUP

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class Void;
}
namespace __jni_impl::java::lang
{
	class Thread;
}
namespace __jni_impl::java::io
{
	class PrintStream;
}

namespace __jni_impl::java::lang
{
	class ThreadGroup : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(__jni_impl::java::lang::ThreadGroup arg0, jstring arg1);
		void __constructor(__jni_impl::java::lang::ThreadGroup arg0, const QString &arg1);
		
		// Methods
		jstring getName();
		jstring toString();
		void list();
		QAndroidJniObject getParent();
		void checkAccess();
		void setDaemon(jboolean arg0);
		jboolean isDaemon();
		void resume();
		void interrupt();
		jint getMaxPriority();
		jint activeCount();
		jint enumerate(jarray arg0, jboolean arg1);
		jint enumerate(jarray arg0);
		void uncaughtException(__jni_impl::java::lang::Thread arg0, jthrowable arg1);
		void stop();
		void suspend();
		void setMaxPriority(jint arg0);
		jint activeGroupCount();
		void destroy();
		jboolean isDestroyed();
		jboolean parentOf(__jni_impl::java::lang::ThreadGroup arg0);
		jboolean allowThreadSuspension(jboolean arg0);
	};
} // namespace __jni_impl::java::lang

#include "Void.hpp"
#include "Thread.hpp"
#include "../io/PrintStream.hpp"

namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void ThreadGroup::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ThreadGroup",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ThreadGroup::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ThreadGroup",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void ThreadGroup::__constructor(__jni_impl::java::lang::ThreadGroup arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ThreadGroup",
			"(Ljava/lang/ThreadGroup;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ThreadGroup::__constructor(__jni_impl::java::lang::ThreadGroup arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ThreadGroup",
			"(Ljava/lang/ThreadGroup;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	jstring ThreadGroup::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ThreadGroup::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ThreadGroup::list()
	{
		__thiz.callMethod<void>(
			"list",
			"()V"
		);
	}
	QAndroidJniObject ThreadGroup::getParent()
	{
		return __thiz.callObjectMethod(
			"getParent",
			"()Ljava/lang/ThreadGroup;"
		);
	}
	void ThreadGroup::checkAccess()
	{
		__thiz.callMethod<void>(
			"checkAccess",
			"()V"
		);
	}
	void ThreadGroup::setDaemon(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDaemon",
			"(Z)V",
			arg0
		);
	}
	jboolean ThreadGroup::isDaemon()
	{
		return __thiz.callMethod<jboolean>(
			"isDaemon",
			"()Z"
		);
	}
	void ThreadGroup::resume()
	{
		__thiz.callMethod<void>(
			"resume",
			"()V"
		);
	}
	void ThreadGroup::interrupt()
	{
		__thiz.callMethod<void>(
			"interrupt",
			"()V"
		);
	}
	jint ThreadGroup::getMaxPriority()
	{
		return __thiz.callMethod<jint>(
			"getMaxPriority",
			"()I"
		);
	}
	jint ThreadGroup::activeCount()
	{
		return __thiz.callMethod<jint>(
			"activeCount",
			"()I"
		);
	}
	jint ThreadGroup::enumerate(jarray arg0, jboolean arg1)
	{
		return __thiz.callMethod<jint>(
			"enumerate",
			"([Ljava/lang/ThreadGroup;Z)I",
			arg0,
			arg1
		);
	}
	jint ThreadGroup::enumerate(jarray arg0)
	{
		return __thiz.callMethod<jint>(
			"enumerate",
			"([Ljava/lang/ThreadGroup;)I",
			arg0
		);
	}
	void ThreadGroup::uncaughtException(__jni_impl::java::lang::Thread arg0, jthrowable arg1)
	{
		__thiz.callMethod<void>(
			"uncaughtException",
			"(Ljava/lang/Thread;Ljava/lang/Throwable;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ThreadGroup::stop()
	{
		__thiz.callMethod<void>(
			"stop",
			"()V"
		);
	}
	void ThreadGroup::suspend()
	{
		__thiz.callMethod<void>(
			"suspend",
			"()V"
		);
	}
	void ThreadGroup::setMaxPriority(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaxPriority",
			"(I)V",
			arg0
		);
	}
	jint ThreadGroup::activeGroupCount()
	{
		return __thiz.callMethod<jint>(
			"activeGroupCount",
			"()I"
		);
	}
	void ThreadGroup::destroy()
	{
		__thiz.callMethod<void>(
			"destroy",
			"()V"
		);
	}
	jboolean ThreadGroup::isDestroyed()
	{
		return __thiz.callMethod<jboolean>(
			"isDestroyed",
			"()Z"
		);
	}
	jboolean ThreadGroup::parentOf(__jni_impl::java::lang::ThreadGroup arg0)
	{
		return __thiz.callMethod<jboolean>(
			"parentOf",
			"(Ljava/lang/ThreadGroup;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean ThreadGroup::allowThreadSuspension(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"allowThreadSuspension",
			"(Z)Z",
			arg0
		);
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class ThreadGroup : public __jni_impl::java::lang::ThreadGroup
	{
	public:
		ThreadGroup(QAndroidJniObject obj) { __thiz = obj; }
		ThreadGroup(jstring arg0)
		{
			__constructor(
				arg0);
		}
		ThreadGroup(__jni_impl::java::lang::ThreadGroup arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_THREADGROUP

