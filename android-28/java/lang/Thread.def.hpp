#pragma once

#include "../../JObject.hpp"

class JObjectArray;
class JArray;
class JArray;
class JArray;
class JClass;
namespace java::lang
{
	class ClassLoader;
}
class JObject;
class JString;
namespace java::lang
{
	class Thread_State;
}
namespace java::lang
{
	class ThreadGroup;
}
class JThrowable;
namespace java::security
{
	class AccessControlContext;
}
namespace java::time
{
	class Duration;
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
		Thread(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Thread();
		Thread(JObject arg0);
		Thread(JString arg0);
		Thread(JObject arg0, JString arg1);
		Thread(java::lang::ThreadGroup arg0, JObject arg1);
		Thread(java::lang::ThreadGroup arg0, JString arg1);
		Thread(java::lang::ThreadGroup arg0, JObject arg1, JString arg2);
		Thread(java::lang::ThreadGroup arg0, JObject arg1, JString arg2, jlong arg3);
		Thread(java::lang::ThreadGroup arg0, JObject arg1, JString arg2, jlong arg3, jboolean arg4);
		
		// Methods
		static jint activeCount();
		static java::lang::Thread currentThread();
		static void dumpStack();
		static jint enumerate(JArray arg0);
		static JObject getAllStackTraces();
		static JObject getDefaultUncaughtExceptionHandler();
		static jboolean holdsLock(JObject arg0);
		static jboolean interrupted();
		static JObject ofPlatform();
		static JObject ofVirtual();
		static void onSpinWait();
		static void setDefaultUncaughtExceptionHandler(JObject arg0);
		static void sleep(java::time::Duration arg0);
		static void sleep(jlong arg0);
		static void sleep(jlong arg0, jint arg1);
		static java::lang::Thread startVirtualThread(JObject arg0);
		static void yield();
		void checkAccess() const;
		jint countStackFrames() const;
		java::lang::ClassLoader getContextClassLoader() const;
		jlong getId() const;
		JString getName() const;
		jint getPriority() const;
		JArray getStackTrace() const;
		java::lang::Thread_State getState() const;
		java::lang::ThreadGroup getThreadGroup() const;
		JObject getUncaughtExceptionHandler() const;
		void interrupt() const;
		jboolean isAlive() const;
		jboolean isDaemon() const;
		jboolean isInterrupted() const;
		jboolean isVirtual() const;
		jboolean join(java::time::Duration arg0) const;
		void join() const;
		void join(jlong arg0) const;
		void join(jlong arg0, jint arg1) const;
		void resume() const;
		void run() const;
		void setContextClassLoader(java::lang::ClassLoader arg0) const;
		void setDaemon(jboolean arg0) const;
		void setName(JString arg0) const;
		void setPriority(jint arg0) const;
		void setUncaughtExceptionHandler(JObject arg0) const;
		void start() const;
		void stop() const;
		void suspend() const;
		jlong threadId() const;
		JString toString() const;
	};
} // namespace java::lang

