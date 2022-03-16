#pragma once

#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JClass.hpp"
#include "./ClassLoader.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Thread_State.def.hpp"
#include "./ThreadGroup.def.hpp"
#include "../../JThrowable.hpp"
#include "./ref/ReferenceQueue.def.hpp"
#include "../security/AccessControlContext.def.hpp"
#include "./Thread.def.hpp"

namespace java::lang
{
	// Fields
	inline jint Thread::MAX_PRIORITY()
	{
		return getStaticField<jint>(
			"java.lang.Thread",
			"MAX_PRIORITY"
		);
	}
	inline jint Thread::MIN_PRIORITY()
	{
		return getStaticField<jint>(
			"java.lang.Thread",
			"MIN_PRIORITY"
		);
	}
	inline jint Thread::NORM_PRIORITY()
	{
		return getStaticField<jint>(
			"java.lang.Thread",
			"NORM_PRIORITY"
		);
	}
	
	// Constructors
	inline Thread::Thread()
		: JObject(
			"java.lang.Thread",
			"()V"
		) {}
	inline Thread::Thread(JObject arg0)
		: JObject(
			"java.lang.Thread",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		) {}
	inline Thread::Thread(JString arg0)
		: JObject(
			"java.lang.Thread",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline Thread::Thread(JObject arg0, JString arg1)
		: JObject(
			"java.lang.Thread",
			"(Ljava/lang/Runnable;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	inline Thread::Thread(java::lang::ThreadGroup arg0, JObject arg1)
		: JObject(
			"java.lang.Thread",
			"(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline Thread::Thread(java::lang::ThreadGroup arg0, JString arg1)
		: JObject(
			"java.lang.Thread",
			"(Ljava/lang/ThreadGroup;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	inline Thread::Thread(java::lang::ThreadGroup arg0, JObject arg1, JString arg2)
		: JObject(
			"java.lang.Thread",
			"(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		) {}
	inline Thread::Thread(java::lang::ThreadGroup arg0, JObject arg1, JString arg2, jlong arg3)
		: JObject(
			"java.lang.Thread",
			"(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;J)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3
		) {}
	inline Thread::Thread(java::lang::ThreadGroup arg0, JObject arg1, JString arg2, jlong arg3, jboolean arg4)
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
	inline jint Thread::activeCount()
	{
		return callStaticMethod<jint>(
			"java.lang.Thread",
			"activeCount",
			"()I"
		);
	}
	inline java::lang::Thread Thread::currentThread()
	{
		return callStaticObjectMethod(
			"java.lang.Thread",
			"currentThread",
			"()Ljava/lang/Thread;"
		);
	}
	inline void Thread::dumpStack()
	{
		callStaticMethod<void>(
			"java.lang.Thread",
			"dumpStack",
			"()V"
		);
	}
	inline jint Thread::enumerate(JArray arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Thread",
			"enumerate",
			"([Ljava/lang/Thread;)I",
			arg0.object<jarray>()
		);
	}
	inline JObject Thread::getAllStackTraces()
	{
		return callStaticObjectMethod(
			"java.lang.Thread",
			"getAllStackTraces",
			"()Ljava/util/Map;"
		);
	}
	inline JObject Thread::getDefaultUncaughtExceptionHandler()
	{
		return callStaticObjectMethod(
			"java.lang.Thread",
			"getDefaultUncaughtExceptionHandler",
			"()Ljava/lang/Thread$UncaughtExceptionHandler;"
		);
	}
	inline jboolean Thread::holdsLock(JObject arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Thread",
			"holdsLock",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean Thread::interrupted()
	{
		return callStaticMethod<jboolean>(
			"java.lang.Thread",
			"interrupted",
			"()Z"
		);
	}
	inline void Thread::onSpinWait()
	{
		callStaticMethod<void>(
			"java.lang.Thread",
			"onSpinWait",
			"()V"
		);
	}
	inline void Thread::setDefaultUncaughtExceptionHandler(JObject arg0)
	{
		callStaticMethod<void>(
			"java.lang.Thread",
			"setDefaultUncaughtExceptionHandler",
			"(Ljava/lang/Thread$UncaughtExceptionHandler;)V",
			arg0.object()
		);
	}
	inline void Thread::sleep(jlong arg0)
	{
		callStaticMethod<void>(
			"java.lang.Thread",
			"sleep",
			"(J)V",
			arg0
		);
	}
	inline void Thread::sleep(jlong arg0, jint arg1)
	{
		callStaticMethod<void>(
			"java.lang.Thread",
			"sleep",
			"(JI)V",
			arg0,
			arg1
		);
	}
	inline void Thread::yield()
	{
		callStaticMethod<void>(
			"java.lang.Thread",
			"yield",
			"()V"
		);
	}
	inline void Thread::checkAccess() const
	{
		callMethod<void>(
			"checkAccess",
			"()V"
		);
	}
	inline jint Thread::countStackFrames() const
	{
		return callMethod<jint>(
			"countStackFrames",
			"()I"
		);
	}
	inline java::lang::ClassLoader Thread::getContextClassLoader() const
	{
		return callObjectMethod(
			"getContextClassLoader",
			"()Ljava/lang/ClassLoader;"
		);
	}
	inline jlong Thread::getId() const
	{
		return callMethod<jlong>(
			"getId",
			"()J"
		);
	}
	inline JString Thread::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jint Thread::getPriority() const
	{
		return callMethod<jint>(
			"getPriority",
			"()I"
		);
	}
	inline JArray Thread::getStackTrace() const
	{
		return callObjectMethod(
			"getStackTrace",
			"()[Ljava/lang/StackTraceElement;"
		);
	}
	inline java::lang::Thread_State Thread::getState() const
	{
		return callObjectMethod(
			"getState",
			"()Ljava/lang/Thread$State;"
		);
	}
	inline java::lang::ThreadGroup Thread::getThreadGroup() const
	{
		return callObjectMethod(
			"getThreadGroup",
			"()Ljava/lang/ThreadGroup;"
		);
	}
	inline JObject Thread::getUncaughtExceptionHandler() const
	{
		return callObjectMethod(
			"getUncaughtExceptionHandler",
			"()Ljava/lang/Thread$UncaughtExceptionHandler;"
		);
	}
	inline void Thread::interrupt() const
	{
		callMethod<void>(
			"interrupt",
			"()V"
		);
	}
	inline jboolean Thread::isAlive() const
	{
		return callMethod<jboolean>(
			"isAlive",
			"()Z"
		);
	}
	inline jboolean Thread::isDaemon() const
	{
		return callMethod<jboolean>(
			"isDaemon",
			"()Z"
		);
	}
	inline jboolean Thread::isInterrupted() const
	{
		return callMethod<jboolean>(
			"isInterrupted",
			"()Z"
		);
	}
	inline void Thread::join() const
	{
		callMethod<void>(
			"join",
			"()V"
		);
	}
	inline void Thread::join(jlong arg0) const
	{
		callMethod<void>(
			"join",
			"(J)V",
			arg0
		);
	}
	inline void Thread::join(jlong arg0, jint arg1) const
	{
		callMethod<void>(
			"join",
			"(JI)V",
			arg0,
			arg1
		);
	}
	inline void Thread::resume() const
	{
		callMethod<void>(
			"resume",
			"()V"
		);
	}
	inline void Thread::run() const
	{
		callMethod<void>(
			"run",
			"()V"
		);
	}
	inline void Thread::setContextClassLoader(java::lang::ClassLoader arg0) const
	{
		callMethod<void>(
			"setContextClassLoader",
			"(Ljava/lang/ClassLoader;)V",
			arg0.object()
		);
	}
	inline void Thread::setDaemon(jboolean arg0) const
	{
		callMethod<void>(
			"setDaemon",
			"(Z)V",
			arg0
		);
	}
	inline void Thread::setName(JString arg0) const
	{
		callMethod<void>(
			"setName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Thread::setPriority(jint arg0) const
	{
		callMethod<void>(
			"setPriority",
			"(I)V",
			arg0
		);
	}
	inline void Thread::setUncaughtExceptionHandler(JObject arg0) const
	{
		callMethod<void>(
			"setUncaughtExceptionHandler",
			"(Ljava/lang/Thread$UncaughtExceptionHandler;)V",
			arg0.object()
		);
	}
	inline void Thread::start() const
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	inline void Thread::stop() const
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
	inline void Thread::suspend() const
	{
		callMethod<void>(
			"suspend",
			"()V"
		);
	}
	inline JString Thread::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang

// Base class headers

