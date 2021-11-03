#pragma once

#include "../../JObject.hpp"

class JArray;
class JArray;
namespace java::io
{
	class PrintStream;
}
class JString;
namespace java::lang
{
	class Thread;
}
class JThrowable;
namespace java::lang
{
	class Void;
}

namespace java::lang
{
	class ThreadGroup : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ThreadGroup(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ThreadGroup(QJniObject obj);
		
		// Constructors
		ThreadGroup(JString arg0);
		ThreadGroup(java::lang::ThreadGroup &arg0, JString arg1);
		
		// Methods
		jint activeCount();
		jint activeGroupCount();
		jboolean allowThreadSuspension(jboolean arg0);
		void checkAccess();
		void destroy();
		jint enumerate(JArray arg0);
		jint enumerate(JArray arg0, jboolean arg1);
		jint getMaxPriority();
		JString getName();
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
		JString toString();
		void uncaughtException(java::lang::Thread arg0, JThrowable arg1);
	};
} // namespace java::lang

