#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::lang
{
	class ClassLoader;
}
namespace java::lang
{
	class Thread_State;
}
namespace java::lang
{
	class ThreadGroup;
}
namespace java::lang::ref
{
	class ReferenceQueue;
}
namespace java::security
{
	class AccessControlContext;
}

namespace java::lang
{
	class Thread : public __JniBaseClass
	{
	public:
		// Fields
		static jint MAX_PRIORITY();
		static jint MIN_PRIORITY();
		static jint NORM_PRIORITY();
		
		Thread(QAndroidJniObject obj);
		// Constructors
		Thread();
		Thread(__JniBaseClass arg0);
		Thread(jstring arg0);
		Thread(__JniBaseClass arg0, jstring arg1);
		Thread(java::lang::ThreadGroup arg0, __JniBaseClass arg1);
		Thread(java::lang::ThreadGroup arg0, jstring arg1);
		Thread(java::lang::ThreadGroup arg0, __JniBaseClass arg1, jstring arg2);
		Thread(java::lang::ThreadGroup arg0, __JniBaseClass arg1, jstring arg2, jlong arg3);
		Thread(java::lang::ThreadGroup arg0, __JniBaseClass arg1, jstring arg2, jlong arg3, jboolean arg4);
		
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
		static void setDefaultUncaughtExceptionHandler(__JniBaseClass arg0);
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
		void setContextClassLoader(java::lang::ClassLoader arg0);
		void setDaemon(jboolean arg0);
		void setName(jstring arg0);
		void setPriority(jint arg0);
		void setUncaughtExceptionHandler(__JniBaseClass arg0);
		void start();
		void stop();
		void suspend();
		jstring toString();
	};
} // namespace java::lang

