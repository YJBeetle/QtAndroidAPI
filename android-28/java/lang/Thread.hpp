#pragma once

#include "../../JObject.hpp"

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
	class Thread : public JObject
	{
	public:
		// Fields
		static jint MAX_PRIORITY();
		static jint MIN_PRIORITY();
		static jint NORM_PRIORITY();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Thread(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Thread(QAndroidJniObject obj);
		
		// Constructors
		Thread();
		Thread(JObject arg0);
		Thread(jstring arg0);
		Thread(JObject arg0, jstring arg1);
		Thread(java::lang::ThreadGroup arg0, JObject arg1);
		Thread(java::lang::ThreadGroup arg0, jstring arg1);
		Thread(java::lang::ThreadGroup arg0, JObject arg1, jstring arg2);
		Thread(java::lang::ThreadGroup arg0, JObject arg1, jstring arg2, jlong arg3);
		Thread(java::lang::ThreadGroup arg0, JObject arg1, jstring arg2, jlong arg3, jboolean arg4);
		
		// Methods
		static jint activeCount();
		static java::lang::Thread currentThread();
		static void dumpStack();
		static jint enumerate(jarray arg0);
		static JObject getAllStackTraces();
		static JObject getDefaultUncaughtExceptionHandler();
		static jboolean holdsLock(jobject arg0);
		static jboolean interrupted();
		static void onSpinWait();
		static void setDefaultUncaughtExceptionHandler(JObject arg0);
		static void sleep(jlong arg0);
		static void sleep(jlong arg0, jint arg1);
		static void yield();
		void checkAccess();
		jint countStackFrames();
		java::lang::ClassLoader getContextClassLoader();
		jlong getId();
		jstring getName();
		jint getPriority();
		jarray getStackTrace();
		java::lang::Thread_State getState();
		java::lang::ThreadGroup getThreadGroup();
		JObject getUncaughtExceptionHandler();
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
		void setUncaughtExceptionHandler(JObject arg0);
		void start();
		void stop();
		void suspend();
		jstring toString();
	};
} // namespace java::lang

