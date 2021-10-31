#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class PrintStream;
}
namespace java::lang
{
	class Thread;
}
namespace java::lang
{
	class Void;
}

namespace java::lang
{
	class ThreadGroup : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ThreadGroup(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ThreadGroup(QAndroidJniObject obj);
		
		// Constructors
		ThreadGroup(jstring arg0);
		ThreadGroup(java::lang::ThreadGroup &arg0, jstring arg1);
		
		// Methods
		jint activeCount();
		jint activeGroupCount();
		jboolean allowThreadSuspension(jboolean arg0);
		void checkAccess();
		void destroy();
		jint enumerate(jarray arg0);
		jint enumerate(jarray arg0, jboolean arg1);
		jint getMaxPriority();
		jstring getName();
		java::lang::ThreadGroup getParent();
		void interrupt();
		jboolean isDaemon();
		jboolean isDestroyed();
		void list();
		jboolean parentOf(java::lang::ThreadGroup arg0);
		void resume();
		void setDaemon(jboolean arg0);
		void setMaxPriority(jint arg0);
		void stop();
		void suspend();
		jstring toString();
		void uncaughtException(java::lang::Thread arg0, jthrowable arg1);
	};
} // namespace java::lang

