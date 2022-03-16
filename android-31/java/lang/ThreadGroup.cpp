#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../io/PrintStream.hpp"
#include "../../JString.hpp"
#include "./Thread.hpp"
#include "../../JThrowable.hpp"
#include "./Void.hpp"
#include "./ThreadGroup.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	ThreadGroup::ThreadGroup(JString arg0)
		: JObject(
			"java.lang.ThreadGroup",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	ThreadGroup::ThreadGroup(java::lang::ThreadGroup &arg0, JString arg1)
		: JObject(
			"java.lang.ThreadGroup",
			"(Ljava/lang/ThreadGroup;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	jint ThreadGroup::activeCount() const
	{
		return callMethod<jint>(
			"activeCount",
			"()I"
		);
	}
	jint ThreadGroup::activeGroupCount() const
	{
		return callMethod<jint>(
			"activeGroupCount",
			"()I"
		);
	}
	jboolean ThreadGroup::allowThreadSuspension(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"allowThreadSuspension",
			"(Z)Z",
			arg0
		);
	}
	void ThreadGroup::checkAccess() const
	{
		callMethod<void>(
			"checkAccess",
			"()V"
		);
	}
	void ThreadGroup::destroy() const
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	jint ThreadGroup::enumerate(JArray arg0) const
	{
		return callMethod<jint>(
			"enumerate",
			"([Ljava/lang/Thread;)I",
			arg0.object<jarray>()
		);
	}
	jint ThreadGroup::enumerate(JArray arg0, jboolean arg1) const
	{
		return callMethod<jint>(
			"enumerate",
			"([Ljava/lang/Thread;Z)I",
			arg0.object<jarray>(),
			arg1
		);
	}
	jint ThreadGroup::getMaxPriority() const
	{
		return callMethod<jint>(
			"getMaxPriority",
			"()I"
		);
	}
	JString ThreadGroup::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	java::lang::ThreadGroup ThreadGroup::getParent() const
	{
		return callObjectMethod(
			"getParent",
			"()Ljava/lang/ThreadGroup;"
		);
	}
	void ThreadGroup::interrupt() const
	{
		callMethod<void>(
			"interrupt",
			"()V"
		);
	}
	jboolean ThreadGroup::isDaemon() const
	{
		return callMethod<jboolean>(
			"isDaemon",
			"()Z"
		);
	}
	jboolean ThreadGroup::isDestroyed() const
	{
		return callMethod<jboolean>(
			"isDestroyed",
			"()Z"
		);
	}
	void ThreadGroup::list() const
	{
		callMethod<void>(
			"list",
			"()V"
		);
	}
	jboolean ThreadGroup::parentOf(java::lang::ThreadGroup arg0) const
	{
		return callMethod<jboolean>(
			"parentOf",
			"(Ljava/lang/ThreadGroup;)Z",
			arg0.object()
		);
	}
	void ThreadGroup::resume() const
	{
		callMethod<void>(
			"resume",
			"()V"
		);
	}
	void ThreadGroup::setDaemon(jboolean arg0) const
	{
		callMethod<void>(
			"setDaemon",
			"(Z)V",
			arg0
		);
	}
	void ThreadGroup::setMaxPriority(jint arg0) const
	{
		callMethod<void>(
			"setMaxPriority",
			"(I)V",
			arg0
		);
	}
	void ThreadGroup::stop() const
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
	void ThreadGroup::suspend() const
	{
		callMethod<void>(
			"suspend",
			"()V"
		);
	}
	JString ThreadGroup::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ThreadGroup::uncaughtException(java::lang::Thread arg0, JThrowable arg1) const
	{
		callMethod<void>(
			"uncaughtException",
			"(Ljava/lang/Thread;Ljava/lang/Throwable;)V",
			arg0.object(),
			arg1.object<jthrowable>()
		);
	}
} // namespace java::lang

