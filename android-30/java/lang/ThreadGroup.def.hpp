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
		ThreadGroup(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ThreadGroup(JString arg0);
		ThreadGroup(java::lang::ThreadGroup &arg0, JString arg1);
		
		// Methods
		jint activeCount() const;
		jint activeGroupCount() const;
		jboolean allowThreadSuspension(jboolean arg0) const;
		void checkAccess() const;
		void destroy() const;
		jint enumerate(JArray arg0) const;
		jint enumerate(JArray arg0, jboolean arg1) const;
		jint getMaxPriority() const;
		JString getName() const;
		java::lang::ThreadGroup getParent() const;
		void interrupt() const;
		jboolean isDaemon() const;
		jboolean isDestroyed() const;
		void list() const;
		jboolean parentOf(java::lang::ThreadGroup arg0) const;
		void resume() const;
		void setDaemon(jboolean arg0) const;
		void setMaxPriority(jint arg0) const;
		void stop() const;
		void suspend() const;
		JString toString() const;
		void uncaughtException(java::lang::Thread arg0, JThrowable arg1) const;
	};
} // namespace java::lang

