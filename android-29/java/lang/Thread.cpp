#include "./ClassLoader.hpp"
#include "./Thread_State.hpp"
#include "./ThreadGroup.hpp"
#include "./ref/ReferenceQueue.hpp"
#include "../security/AccessControlContext.hpp"
#include "./Thread.hpp"

namespace java::lang
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
	
	// QAndroidJniObject forward
	Thread::Thread(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Thread::Thread()
		: __JniBaseClass(
			"java.lang.Thread",
			"()V"
		) {}
	Thread::Thread(__JniBaseClass arg0)
		: __JniBaseClass(
			"java.lang.Thread",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		) {}
	Thread::Thread(jstring arg0)
		: __JniBaseClass(
			"java.lang.Thread",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	Thread::Thread(__JniBaseClass arg0, jstring arg1)
		: __JniBaseClass(
			"java.lang.Thread",
			"(Ljava/lang/Runnable;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	Thread::Thread(java::lang::ThreadGroup arg0, __JniBaseClass arg1)
		: __JniBaseClass(
			"java.lang.Thread",
			"(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;)V",
			arg0.object(),
			arg1.object()
		) {}
	Thread::Thread(java::lang::ThreadGroup arg0, jstring arg1)
		: __JniBaseClass(
			"java.lang.Thread",
			"(Ljava/lang/ThreadGroup;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	Thread::Thread(java::lang::ThreadGroup arg0, __JniBaseClass arg1, jstring arg2)
		: __JniBaseClass(
			"java.lang.Thread",
			"(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	Thread::Thread(java::lang::ThreadGroup arg0, __JniBaseClass arg1, jstring arg2, jlong arg3)
		: __JniBaseClass(
			"java.lang.Thread",
			"(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;J)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	Thread::Thread(java::lang::ThreadGroup arg0, __JniBaseClass arg1, jstring arg2, jlong arg3, jboolean arg4)
		: __JniBaseClass(
			"java.lang.Thread",
			"(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;JZ)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4
		) {}
	
	// Methods
	jint Thread::activeCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Thread",
			"activeCount",
			"()I"
		);
	}
	java::lang::Thread Thread::currentThread()
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
	__JniBaseClass Thread::getAllStackTraces()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Thread",
			"getAllStackTraces",
			"()Ljava/util/Map;"
		);
	}
	__JniBaseClass Thread::getDefaultUncaughtExceptionHandler()
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
	void Thread::setDefaultUncaughtExceptionHandler(__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.Thread",
			"setDefaultUncaughtExceptionHandler",
			"(Ljava/lang/Thread$UncaughtExceptionHandler;)V",
			arg0.object()
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
		callMethod<void>(
			"checkAccess",
			"()V"
		);
	}
	jint Thread::countStackFrames()
	{
		return callMethod<jint>(
			"countStackFrames",
			"()I"
		);
	}
	java::lang::ClassLoader Thread::getContextClassLoader()
	{
		return callObjectMethod(
			"getContextClassLoader",
			"()Ljava/lang/ClassLoader;"
		);
	}
	jlong Thread::getId()
	{
		return callMethod<jlong>(
			"getId",
			"()J"
		);
	}
	jstring Thread::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Thread::getPriority()
	{
		return callMethod<jint>(
			"getPriority",
			"()I"
		);
	}
	jarray Thread::getStackTrace()
	{
		return callObjectMethod(
			"getStackTrace",
			"()[Ljava/lang/StackTraceElement;"
		).object<jarray>();
	}
	java::lang::Thread_State Thread::getState()
	{
		return callObjectMethod(
			"getState",
			"()Ljava/lang/Thread$State;"
		);
	}
	java::lang::ThreadGroup Thread::getThreadGroup()
	{
		return callObjectMethod(
			"getThreadGroup",
			"()Ljava/lang/ThreadGroup;"
		);
	}
	__JniBaseClass Thread::getUncaughtExceptionHandler()
	{
		return callObjectMethod(
			"getUncaughtExceptionHandler",
			"()Ljava/lang/Thread$UncaughtExceptionHandler;"
		);
	}
	void Thread::interrupt()
	{
		callMethod<void>(
			"interrupt",
			"()V"
		);
	}
	jboolean Thread::isAlive()
	{
		return callMethod<jboolean>(
			"isAlive",
			"()Z"
		);
	}
	jboolean Thread::isDaemon()
	{
		return callMethod<jboolean>(
			"isDaemon",
			"()Z"
		);
	}
	jboolean Thread::isInterrupted()
	{
		return callMethod<jboolean>(
			"isInterrupted",
			"()Z"
		);
	}
	void Thread::join()
	{
		callMethod<void>(
			"join",
			"()V"
		);
	}
	void Thread::join(jlong arg0)
	{
		callMethod<void>(
			"join",
			"(J)V",
			arg0
		);
	}
	void Thread::join(jlong arg0, jint arg1)
	{
		callMethod<void>(
			"join",
			"(JI)V",
			arg0,
			arg1
		);
	}
	void Thread::resume()
	{
		callMethod<void>(
			"resume",
			"()V"
		);
	}
	void Thread::run()
	{
		callMethod<void>(
			"run",
			"()V"
		);
	}
	void Thread::setContextClassLoader(java::lang::ClassLoader arg0)
	{
		callMethod<void>(
			"setContextClassLoader",
			"(Ljava/lang/ClassLoader;)V",
			arg0.object()
		);
	}
	void Thread::setDaemon(jboolean arg0)
	{
		callMethod<void>(
			"setDaemon",
			"(Z)V",
			arg0
		);
	}
	void Thread::setName(jstring arg0)
	{
		callMethod<void>(
			"setName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Thread::setPriority(jint arg0)
	{
		callMethod<void>(
			"setPriority",
			"(I)V",
			arg0
		);
	}
	void Thread::setUncaughtExceptionHandler(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setUncaughtExceptionHandler",
			"(Ljava/lang/Thread$UncaughtExceptionHandler;)V",
			arg0.object()
		);
	}
	void Thread::start()
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	void Thread::stop()
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
	void Thread::suspend()
	{
		callMethod<void>(
			"suspend",
			"()V"
		);
	}
	jstring Thread::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::lang

