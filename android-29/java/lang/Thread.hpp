#pragma once

#ifndef JAVA_LANG_THREAD
#define JAVA_LANG_THREAD

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class ClassLoader;
}
namespace __jni_impl::java::lang
{
	class Thread_State;
}
namespace __jni_impl::java::lang
{
	class ThreadGroup;
}
namespace __jni_impl::java::lang::ref
{
	class ReferenceQueue;
}
namespace __jni_impl::java::security
{
	class AccessControlContext;
}

namespace __jni_impl::java::lang
{
	class Thread : public __JniBaseClass
	{
	public:
		// Fields
		static jint MAX_PRIORITY();
		static jint MIN_PRIORITY();
		static jint NORM_PRIORITY();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(__jni_impl::__JniBaseClass arg0, jstring arg1);
		void __constructor(__jni_impl::__JniBaseClass arg0, const QString &arg1);
		void __constructor(__jni_impl::java::lang::ThreadGroup arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::java::lang::ThreadGroup arg0, jstring arg1);
		void __constructor(__jni_impl::java::lang::ThreadGroup arg0, const QString &arg1);
		void __constructor(__jni_impl::java::lang::ThreadGroup arg0, __jni_impl::__JniBaseClass arg1, jstring arg2);
		void __constructor(__jni_impl::java::lang::ThreadGroup arg0, __jni_impl::__JniBaseClass arg1, const QString &arg2);
		void __constructor(__jni_impl::java::lang::ThreadGroup arg0, __jni_impl::__JniBaseClass arg1, jstring arg2, jlong arg3);
		void __constructor(__jni_impl::java::lang::ThreadGroup arg0, __jni_impl::__JniBaseClass arg1, const QString &arg2, jlong arg3);
		void __constructor(__jni_impl::java::lang::ThreadGroup arg0, __jni_impl::__JniBaseClass arg1, jstring arg2, jlong arg3, jboolean arg4);
		void __constructor(__jni_impl::java::lang::ThreadGroup arg0, __jni_impl::__JniBaseClass arg1, const QString &arg2, jlong arg3, jboolean arg4);
		
		// Methods
		static jint activeCount();
		static QAndroidJniObject currentThread();
		static void dumpStack();
		static jint enumerate(jarray arg0);
		static QAndroidJniObject getAllStackTraces();
		static QAndroidJniObject getDefaultUncaughtExceptionHandler();
		static jboolean holdsLock(jobject arg0);
		static jboolean interrupted();
		static void onSpinWait();
		static void setDefaultUncaughtExceptionHandler(__jni_impl::__JniBaseClass arg0);
		static void sleep(jlong arg0);
		static void sleep(jlong arg0, jint arg1);
		static void yield();
		void checkAccess();
		jint countStackFrames();
		QAndroidJniObject getContextClassLoader();
		jlong getId();
		jstring getName();
		jint getPriority();
		jarray getStackTrace();
		QAndroidJniObject getState();
		QAndroidJniObject getThreadGroup();
		QAndroidJniObject getUncaughtExceptionHandler();
		void interrupt();
		jboolean isAlive();
		jboolean isDaemon();
		jboolean isInterrupted();
		void join();
		void join(jlong arg0);
		void join(jlong arg0, jint arg1);
		void resume();
		void run();
		void setContextClassLoader(__jni_impl::java::lang::ClassLoader arg0);
		void setDaemon(jboolean arg0);
		void setName(jstring arg0);
		void setName(const QString &arg0);
		void setPriority(jint arg0);
		void setUncaughtExceptionHandler(__jni_impl::__JniBaseClass arg0);
		void start();
		void stop();
		void suspend();
		jstring toString();
	};
} // namespace __jni_impl::java::lang

#include "ClassLoader.hpp"
#include "Thread_State.hpp"
#include "ThreadGroup.hpp"
#include "ref/ReferenceQueue.hpp"
#include "../security/AccessControlContext.hpp"

namespace __jni_impl::java::lang
{
	// Fields
	jint Thread::MAX_PRIORITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Thread",
			"MAX_PRIORITY"
		);
	}
	jint Thread::MIN_PRIORITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Thread",
			"MIN_PRIORITY"
		);
	}
	jint Thread::NORM_PRIORITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Thread",
			"NORM_PRIORITY"
		);
	}
	
	// Constructors
	void Thread::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.Thread",
			"()V"
		);
	}
	void Thread::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Thread",
			"(Ljava/lang/Runnable;)V",
			arg0.__jniObject().object()
		);
	}
	void Thread::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Thread",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Thread::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Thread",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Thread::__constructor(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Thread",
			"(Ljava/lang/Runnable;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Thread::__constructor(__jni_impl::__JniBaseClass arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Thread",
			"(Ljava/lang/Runnable;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void Thread::__constructor(__jni_impl::java::lang::ThreadGroup arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Thread",
			"(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Thread::__constructor(__jni_impl::java::lang::ThreadGroup arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Thread",
			"(Ljava/lang/ThreadGroup;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Thread::__constructor(__jni_impl::java::lang::ThreadGroup arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Thread",
			"(Ljava/lang/ThreadGroup;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void Thread::__constructor(__jni_impl::java::lang::ThreadGroup arg0, __jni_impl::__JniBaseClass arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Thread",
			"(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void Thread::__constructor(__jni_impl::java::lang::ThreadGroup arg0, __jni_impl::__JniBaseClass arg1, const QString &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Thread",
			"(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void Thread::__constructor(__jni_impl::java::lang::ThreadGroup arg0, __jni_impl::__JniBaseClass arg1, jstring arg2, jlong arg3)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Thread",
			"(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;J)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	void Thread::__constructor(__jni_impl::java::lang::ThreadGroup arg0, __jni_impl::__JniBaseClass arg1, const QString &arg2, jlong arg3)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Thread",
			"(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;J)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3
		);
	}
	void Thread::__constructor(__jni_impl::java::lang::ThreadGroup arg0, __jni_impl::__JniBaseClass arg1, jstring arg2, jlong arg3, jboolean arg4)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Thread",
			"(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;JZ)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4
		);
	}
	void Thread::__constructor(__jni_impl::java::lang::ThreadGroup arg0, __jni_impl::__JniBaseClass arg1, const QString &arg2, jlong arg3, jboolean arg4)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Thread",
			"(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;JZ)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3,
			arg4
		);
	}
	
	// Methods
	jint Thread::activeCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Thread",
			"activeCount",
			"()I"
		);
	}
	QAndroidJniObject Thread::currentThread()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Thread",
			"currentThread",
			"()Ljava/lang/Thread;"
		);
	}
	void Thread::dumpStack()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.Thread",
			"dumpStack",
			"()V"
		);
	}
	jint Thread::enumerate(jarray arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Thread",
			"enumerate",
			"([Ljava/lang/Thread;)I",
			arg0
		);
	}
	QAndroidJniObject Thread::getAllStackTraces()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Thread",
			"getAllStackTraces",
			"()Ljava/util/Map;"
		);
	}
	QAndroidJniObject Thread::getDefaultUncaughtExceptionHandler()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Thread",
			"getDefaultUncaughtExceptionHandler",
			"()Ljava/lang/Thread$UncaughtExceptionHandler;"
		);
	}
	jboolean Thread::holdsLock(jobject arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Thread",
			"holdsLock",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean Thread::interrupted()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Thread",
			"interrupted",
			"()Z"
		);
	}
	void Thread::onSpinWait()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.Thread",
			"onSpinWait",
			"()V"
		);
	}
	void Thread::setDefaultUncaughtExceptionHandler(__jni_impl::__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.Thread",
			"setDefaultUncaughtExceptionHandler",
			"(Ljava/lang/Thread$UncaughtExceptionHandler;)V",
			arg0.__jniObject().object()
		);
	}
	void Thread::sleep(jlong arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.Thread",
			"sleep",
			"(J)V",
			arg0
		);
	}
	void Thread::sleep(jlong arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.Thread",
			"sleep",
			"(JI)V",
			arg0,
			arg1
		);
	}
	void Thread::yield()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.Thread",
			"yield",
			"()V"
		);
	}
	void Thread::checkAccess()
	{
		__thiz.callMethod<void>(
			"checkAccess",
			"()V"
		);
	}
	jint Thread::countStackFrames()
	{
		return __thiz.callMethod<jint>(
			"countStackFrames",
			"()I"
		);
	}
	QAndroidJniObject Thread::getContextClassLoader()
	{
		return __thiz.callObjectMethod(
			"getContextClassLoader",
			"()Ljava/lang/ClassLoader;"
		);
	}
	jlong Thread::getId()
	{
		return __thiz.callMethod<jlong>(
			"getId",
			"()J"
		);
	}
	jstring Thread::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Thread::getPriority()
	{
		return __thiz.callMethod<jint>(
			"getPriority",
			"()I"
		);
	}
	jarray Thread::getStackTrace()
	{
		return __thiz.callObjectMethod(
			"getStackTrace",
			"()[Ljava/lang/StackTraceElement;"
		).object<jarray>();
	}
	QAndroidJniObject Thread::getState()
	{
		return __thiz.callObjectMethod(
			"getState",
			"()Ljava/lang/Thread$State;"
		);
	}
	QAndroidJniObject Thread::getThreadGroup()
	{
		return __thiz.callObjectMethod(
			"getThreadGroup",
			"()Ljava/lang/ThreadGroup;"
		);
	}
	QAndroidJniObject Thread::getUncaughtExceptionHandler()
	{
		return __thiz.callObjectMethod(
			"getUncaughtExceptionHandler",
			"()Ljava/lang/Thread$UncaughtExceptionHandler;"
		);
	}
	void Thread::interrupt()
	{
		__thiz.callMethod<void>(
			"interrupt",
			"()V"
		);
	}
	jboolean Thread::isAlive()
	{
		return __thiz.callMethod<jboolean>(
			"isAlive",
			"()Z"
		);
	}
	jboolean Thread::isDaemon()
	{
		return __thiz.callMethod<jboolean>(
			"isDaemon",
			"()Z"
		);
	}
	jboolean Thread::isInterrupted()
	{
		return __thiz.callMethod<jboolean>(
			"isInterrupted",
			"()Z"
		);
	}
	void Thread::join()
	{
		__thiz.callMethod<void>(
			"join",
			"()V"
		);
	}
	void Thread::join(jlong arg0)
	{
		__thiz.callMethod<void>(
			"join",
			"(J)V",
			arg0
		);
	}
	void Thread::join(jlong arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"join",
			"(JI)V",
			arg0,
			arg1
		);
	}
	void Thread::resume()
	{
		__thiz.callMethod<void>(
			"resume",
			"()V"
		);
	}
	void Thread::run()
	{
		__thiz.callMethod<void>(
			"run",
			"()V"
		);
	}
	void Thread::setContextClassLoader(__jni_impl::java::lang::ClassLoader arg0)
	{
		__thiz.callMethod<void>(
			"setContextClassLoader",
			"(Ljava/lang/ClassLoader;)V",
			arg0.__jniObject().object()
		);
	}
	void Thread::setDaemon(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDaemon",
			"(Z)V",
			arg0
		);
	}
	void Thread::setName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Thread::setName(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setName",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Thread::setPriority(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPriority",
			"(I)V",
			arg0
		);
	}
	void Thread::setUncaughtExceptionHandler(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setUncaughtExceptionHandler",
			"(Ljava/lang/Thread$UncaughtExceptionHandler;)V",
			arg0.__jniObject().object()
		);
	}
	void Thread::start()
	{
		__thiz.callMethod<void>(
			"start",
			"()V"
		);
	}
	void Thread::stop()
	{
		__thiz.callMethod<void>(
			"stop",
			"()V"
		);
	}
	void Thread::suspend()
	{
		__thiz.callMethod<void>(
			"suspend",
			"()V"
		);
	}
	jstring Thread::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class Thread : public __jni_impl::java::lang::Thread
	{
	public:
		Thread(QAndroidJniObject obj) { __thiz = obj; }
		Thread()
		{
			__constructor();
		}
		Thread(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		Thread(jstring arg0)
		{
			__constructor(
				arg0);
		}
		Thread(__jni_impl::__JniBaseClass arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Thread(__jni_impl::java::lang::ThreadGroup arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Thread(__jni_impl::java::lang::ThreadGroup arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Thread(__jni_impl::java::lang::ThreadGroup arg0, __jni_impl::__JniBaseClass arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		Thread(__jni_impl::java::lang::ThreadGroup arg0, __jni_impl::__JniBaseClass arg1, jstring arg2, jlong arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		Thread(__jni_impl::java::lang::ThreadGroup arg0, __jni_impl::__JniBaseClass arg1, jstring arg2, jlong arg3, jboolean arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_THREAD

