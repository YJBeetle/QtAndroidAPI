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
	
	Thread::Thread(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Thread::Thread()
	{
		__thiz = QAndroidJniObject(
			"java.lang.Thread",
			"()V"
		);
	}
	Thread::Thread(__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Thread",
			"(Ljava/lang/Runnable;)V",
			arg0.__jniObject().object()
		);
	}
	Thread::Thread(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Thread",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	Thread::Thread(__JniBaseClass arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Thread",
			"(Ljava/lang/Runnable;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	Thread::Thread(java::lang::ThreadGroup arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Thread",
			"(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	Thread::Thread(java::lang::ThreadGroup arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Thread",
			"(Ljava/lang/ThreadGroup;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	Thread::Thread(java::lang::ThreadGroup arg0, __JniBaseClass arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Thread",
			"(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	Thread::Thread(java::lang::ThreadGroup arg0, __JniBaseClass arg1, jstring arg2, jlong arg3)
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
	Thread::Thread(java::lang::ThreadGroup arg0, __JniBaseClass arg1, jstring arg2, jlong arg3, jboolean arg4)
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
	void Thread::setDefaultUncaughtExceptionHandler(__JniBaseClass arg0)
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
	void Thread::setContextClassLoader(java::lang::ClassLoader arg0)
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
	void Thread::setPriority(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPriority",
			"(I)V",
			arg0
		);
	}
	void Thread::setUncaughtExceptionHandler(__JniBaseClass arg0)
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
} // namespace java::lang

