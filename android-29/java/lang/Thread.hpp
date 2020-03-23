#pragma once

#ifndef JAVA_LANG_THREAD
#define JAVA_LANG_THREAD

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class ThreadGroup;
}
namespace __jni_impl::java::lang
{
	class ClassLoader;
}
namespace __jni_impl::java::security
{
	class AccessControlContext;
}
namespace __jni_impl::java::lang::ref
{
	class ReferenceQueue;
}
namespace __jni_impl::java::lang
{
	class Thread_State;
}

namespace __jni_impl::java::lang
{
	class Thread : public __JniBaseClass
	{
	public:
		// Fields
		static jint MIN_PRIORITY();
		static jint NORM_PRIORITY();
		static jint MAX_PRIORITY();
		
		// Constructors
		void __constructor(__jni_impl::java::lang::ThreadGroup arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(jstring arg0);
		void __constructor();
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor(__jni_impl::java::lang::ThreadGroup arg0, __jni_impl::__JniBaseClass arg1, jstring arg2, jlong arg3, jboolean arg4);
		void __constructor(__jni_impl::java::lang::ThreadGroup arg0, __jni_impl::__JniBaseClass arg1, jstring arg2, jlong arg3);
		void __constructor(__jni_impl::java::lang::ThreadGroup arg0, __jni_impl::__JniBaseClass arg1, jstring arg2);
		void __constructor(__jni_impl::__JniBaseClass arg0, jstring arg1);
		void __constructor(__jni_impl::java::lang::ThreadGroup arg0, jstring arg1);
		
		// Methods
		QAndroidJniObject getName();
		void run();
		QAndroidJniObject toString();
		jboolean isInterrupted();
		static QAndroidJniObject currentThread();
		static void onSpinWait();
		void join(jlong arg0, jint arg1);
		void join(jlong arg0);
		void join();
		QAndroidJniObject getThreadGroup();
		void setContextClassLoader(__jni_impl::java::lang::ClassLoader arg0);
		static jboolean holdsLock(jobject arg0);
		QAndroidJniObject getStackTrace();
		void checkAccess();
		static void dumpStack();
		void setPriority(jint arg0);
		void setDaemon(jboolean arg0);
		void start();
		static void sleep(jlong arg0);
		static void sleep(jlong arg0, jint arg1);
		jboolean isDaemon();
		jint getPriority();
		QAndroidJniObject getContextClassLoader();
		void resume();
		void interrupt();
		static jint activeCount();
		static jint enumerate(jarray arg0);
		jboolean isAlive();
		static void setDefaultUncaughtExceptionHandler(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getUncaughtExceptionHandler();
		static void yield();
		void stop();
		static jboolean interrupted();
		void suspend();
		void setName(jstring arg0);
		jint countStackFrames();
		static QAndroidJniObject getAllStackTraces();
		jlong getId();
		QAndroidJniObject getState();
		static QAndroidJniObject getDefaultUncaughtExceptionHandler();
		void setUncaughtExceptionHandler(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::java::lang

#include "ThreadGroup.hpp"
#include "ClassLoader.hpp"
#include "../security/AccessControlContext.hpp"
#include "ref/ReferenceQueue.hpp"
#include "Thread_State.hpp"

namespace __jni_impl::java::lang
{
	// Fields
	jint Thread::MIN_PRIORITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Thread",
			"MIN_PRIORITY");
	}
	jint Thread::NORM_PRIORITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Thread",
			"NORM_PRIORITY");
	}
	jint Thread::MAX_PRIORITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Thread",
			"MAX_PRIORITY");
	}
	
	// Constructors
	void Thread::__constructor(__jni_impl::java::lang::ThreadGroup arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Thread",
			"(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void Thread::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Thread",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void Thread::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.Thread",
			"()V");
	}
	void Thread::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Thread",
			"(Ljava/lang/Runnable;)V",
			arg0.__jniObject().object());
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
			arg4);
	}
	void Thread::__constructor(__jni_impl::java::lang::ThreadGroup arg0, __jni_impl::__JniBaseClass arg1, jstring arg2, jlong arg3)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Thread",
			"(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;J)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	void Thread::__constructor(__jni_impl::java::lang::ThreadGroup arg0, __jni_impl::__JniBaseClass arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Thread",
			"(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void Thread::__constructor(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Thread",
			"(Ljava/lang/Runnable;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void Thread::__constructor(__jni_impl::java::lang::ThreadGroup arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Thread",
			"(Ljava/lang/ThreadGroup;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	
	// Methods
	QAndroidJniObject Thread::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;");
	}
	void Thread::run()
	{
		__thiz.callMethod<void>(
			"run",
			"()V");
	}
	QAndroidJniObject Thread::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jboolean Thread::isInterrupted()
	{
		return __thiz.callMethod<jboolean>(
			"isInterrupted",
			"()Z");
	}
	QAndroidJniObject Thread::currentThread()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Thread",
			"currentThread",
			"()Ljava/lang/Thread;");
	}
	void Thread::onSpinWait()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.Thread",
			"onSpinWait",
			"()V");
	}
	void Thread::join(jlong arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"join",
			"(JI)V",
			arg0,
			arg1);
	}
	void Thread::join(jlong arg0)
	{
		__thiz.callMethod<void>(
			"join",
			"(J)V",
			arg0);
	}
	void Thread::join()
	{
		__thiz.callMethod<void>(
			"join",
			"()V");
	}
	QAndroidJniObject Thread::getThreadGroup()
	{
		return __thiz.callObjectMethod(
			"getThreadGroup",
			"()Ljava/lang/ThreadGroup;");
	}
	void Thread::setContextClassLoader(__jni_impl::java::lang::ClassLoader arg0)
	{
		__thiz.callMethod<void>(
			"setContextClassLoader",
			"(Ljava/lang/ClassLoader;)V",
			arg0.__jniObject().object());
	}
	jboolean Thread::holdsLock(jobject arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Thread",
			"holdsLock",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject Thread::getStackTrace()
	{
		return __thiz.callObjectMethod(
			"getStackTrace",
			"()[Ljava/lang/StackTraceElement;");
	}
	void Thread::checkAccess()
	{
		__thiz.callMethod<void>(
			"checkAccess",
			"()V");
	}
	void Thread::dumpStack()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.Thread",
			"dumpStack",
			"()V");
	}
	void Thread::setPriority(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPriority",
			"(I)V",
			arg0);
	}
	void Thread::setDaemon(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDaemon",
			"(Z)V",
			arg0);
	}
	void Thread::start()
	{
		__thiz.callMethod<void>(
			"start",
			"()V");
	}
	void Thread::sleep(jlong arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.Thread",
			"sleep",
			"(J)V",
			arg0);
	}
	void Thread::sleep(jlong arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.Thread",
			"sleep",
			"(JI)V",
			arg0,
			arg1);
	}
	jboolean Thread::isDaemon()
	{
		return __thiz.callMethod<jboolean>(
			"isDaemon",
			"()Z");
	}
	jint Thread::getPriority()
	{
		return __thiz.callMethod<jint>(
			"getPriority",
			"()I");
	}
	QAndroidJniObject Thread::getContextClassLoader()
	{
		return __thiz.callObjectMethod(
			"getContextClassLoader",
			"()Ljava/lang/ClassLoader;");
	}
	void Thread::resume()
	{
		__thiz.callMethod<void>(
			"resume",
			"()V");
	}
	void Thread::interrupt()
	{
		__thiz.callMethod<void>(
			"interrupt",
			"()V");
	}
	jint Thread::activeCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Thread",
			"activeCount",
			"()I");
	}
	jint Thread::enumerate(jarray arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Thread",
			"enumerate",
			"([Ljava/lang/Thread;)I",
			arg0);
	}
	jboolean Thread::isAlive()
	{
		return __thiz.callMethod<jboolean>(
			"isAlive",
			"()Z");
	}
	void Thread::setDefaultUncaughtExceptionHandler(__jni_impl::__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.Thread",
			"setDefaultUncaughtExceptionHandler",
			"(Ljava/lang/Thread$UncaughtExceptionHandler;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Thread::getUncaughtExceptionHandler()
	{
		return __thiz.callObjectMethod(
			"getUncaughtExceptionHandler",
			"()Ljava/lang/Thread$UncaughtExceptionHandler;");
	}
	void Thread::yield()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.Thread",
			"yield",
			"()V");
	}
	void Thread::stop()
	{
		__thiz.callMethod<void>(
			"stop",
			"()V");
	}
	jboolean Thread::interrupted()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Thread",
			"interrupted",
			"()Z");
	}
	void Thread::suspend()
	{
		__thiz.callMethod<void>(
			"suspend",
			"()V");
	}
	void Thread::setName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setName",
			"(Ljava/lang/String;)V",
			arg0);
	}
	jint Thread::countStackFrames()
	{
		return __thiz.callMethod<jint>(
			"countStackFrames",
			"()I");
	}
	QAndroidJniObject Thread::getAllStackTraces()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Thread",
			"getAllStackTraces",
			"()Ljava/util/Map;");
	}
	jlong Thread::getId()
	{
		return __thiz.callMethod<jlong>(
			"getId",
			"()J");
	}
	QAndroidJniObject Thread::getState()
	{
		return __thiz.callObjectMethod(
			"getState",
			"()Ljava/lang/Thread$State;");
	}
	QAndroidJniObject Thread::getDefaultUncaughtExceptionHandler()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Thread",
			"getDefaultUncaughtExceptionHandler",
			"()Ljava/lang/Thread$UncaughtExceptionHandler;");
	}
	void Thread::setUncaughtExceptionHandler(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setUncaughtExceptionHandler",
			"(Ljava/lang/Thread$UncaughtExceptionHandler;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class Thread : public __jni_impl::java::lang::Thread
	{
	public:
		Thread(QAndroidJniObject obj) { __thiz = obj; }
		Thread(__jni_impl::java::lang::ThreadGroup arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Thread(jstring arg0)
		{
			__constructor(
				arg0);
		}
		Thread()
		{
			__constructor();
		}
		Thread(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
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
		Thread(__jni_impl::java::lang::ThreadGroup arg0, __jni_impl::__JniBaseClass arg1, jstring arg2, jlong arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		Thread(__jni_impl::java::lang::ThreadGroup arg0, __jni_impl::__JniBaseClass arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		Thread(__jni_impl::__JniBaseClass arg0, jstring arg1)
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
	};
} // namespace java::lang

#endif // JAVA_LANG_THREAD

