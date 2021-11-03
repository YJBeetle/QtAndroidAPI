#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JClass.hpp"
#include "./ClassLoader.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Thread_State.hpp"
#include "./ThreadGroup.hpp"
#include "../../JThrowable.hpp"
#include "./ref/ReferenceQueue.hpp"
#include "../security/AccessControlContext.hpp"
#include "./Thread.hpp"

namespace java::lang
{
	// Fields
	jint Thread::MAX_PRIORITY()
	{
		return getStaticField<jint>(
			"java.lang.Thread",
			"MAX_PRIORITY"
		);
	}
	jint Thread::MIN_PRIORITY()
	{
		return getStaticField<jint>(
			"java.lang.Thread",
			"MIN_PRIORITY"
		);
	}
	jint Thread::NORM_PRIORITY()
	{
		return getStaticField<jint>(
			"java.lang.Thread",
			"NORM_PRIORITY"
		);
	}
	
	// QJniObject forward
	Thread::Thread(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Thread::Thread()
		: JObject(
			"java.lang.Thread",
			"()V"
		) {}
	Thread::Thread(JObject arg0)
		: JObject(
			"java.lang.Thread",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		) {}
	Thread::Thread(JString arg0)
		: JObject(
			"java.lang.Thread",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	Thread::Thread(JObject arg0, JString arg1)
		: JObject(
			"java.lang.Thread",
			"(Ljava/lang/Runnable;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	Thread::Thread(java::lang::ThreadGroup arg0, JObject arg1)
		: JObject(
			"java.lang.Thread",
			"(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;)V",
			arg0.object(),
			arg1.object()
		) {}
	Thread::Thread(java::lang::ThreadGroup arg0, JString arg1)
		: JObject(
			"java.lang.Thread",
			"(Ljava/lang/ThreadGroup;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	Thread::Thread(java::lang::ThreadGroup arg0, JObject arg1, JString arg2)
		: JObject(
			"java.lang.Thread",
			"(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		) {}
	Thread::Thread(java::lang::ThreadGroup arg0, JObject arg1, JString arg2, jlong arg3)
		: JObject(
			"java.lang.Thread",
			"(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;J)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3
		) {}
	Thread::Thread(java::lang::ThreadGroup arg0, JObject arg1, JString arg2, jlong arg3, jboolean arg4)
		: JObject(
			"java.lang.Thread",
			"(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;JZ)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3,
			arg4
		) {}
	
	// Methods
	jint Thread::activeCount()
	{
		return callStaticMethod<jint>(
			"java.lang.Thread",
			"activeCount",
			"()I"
		);
	}
	java::lang::Thread Thread::currentThread()
	{
		return callStaticObjectMethod(
			"java.lang.Thread",
			"currentThread",
			"()Ljava/lang/Thread;"
		);
	}
	void Thread::dumpStack()
	{
		callStaticMethod<void>(
			"java.lang.Thread",
			"dumpStack",
			"()V"
		);
	}
	jint Thread::enumerate(JArray arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Thread",
			"enumerate",
			"([Ljava/lang/Thread;)I",
			arg0.object<jarray>()
		);
	}
	JObject Thread::getAllStackTraces()
	{
		return callStaticObjectMethod(
			"java.lang.Thread",
			"getAllStackTraces",
			"()Ljava/util/Map;"
		);
	}
	JObject Thread::getDefaultUncaughtExceptionHandler()
	{
		return callStaticObjectMethod(
			"java.lang.Thread",
			"getDefaultUncaughtExceptionHandler",
			"()Ljava/lang/Thread$UncaughtExceptionHandler;"
		);
	}
	jboolean Thread::holdsLock(JObject arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Thread",
			"holdsLock",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean Thread::interrupted()
	{
		return callStaticMethod<jboolean>(
			"java.lang.Thread",
			"interrupted",
			"()Z"
		);
	}
	void Thread::onSpinWait()
	{
		callStaticMethod<void>(
			"java.lang.Thread",
			"onSpinWait",
			"()V"
		);
	}
	void Thread::setDefaultUncaughtExceptionHandler(JObject arg0)
	{
		callStaticMethod<void>(
			"java.lang.Thread",
			"setDefaultUncaughtExceptionHandler",
			"(Ljava/lang/Thread$UncaughtExceptionHandler;)V",
			arg0.object()
		);
	}
	void Thread::sleep(jlong arg0)
	{
		callStaticMethod<void>(
			"java.lang.Thread",
			"sleep",
			"(J)V",
			arg0
		);
	}
	void Thread::sleep(jlong arg0, jint arg1)
	{
		callStaticMethod<void>(
			"java.lang.Thread",
			"sleep",
			"(JI)V",
			arg0,
			arg1
		);
	}
	void Thread::yield()
	{
		callStaticMethod<void>(
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
	JString Thread::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	jint Thread::getPriority()
	{
		return callMethod<jint>(
			"getPriority",
			"()I"
		);
	}
	JArray Thread::getStackTrace()
	{
		return callObjectMethod(
			"getStackTrace",
			"()[Ljava/lang/StackTraceElement;"
		);
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
	JObject Thread::getUncaughtExceptionHandler()
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
	void Thread::setName(JString arg0)
	{
		callMethod<void>(
			"setName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
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
	void Thread::setUncaughtExceptionHandler(JObject arg0)
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
	JString Thread::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang

