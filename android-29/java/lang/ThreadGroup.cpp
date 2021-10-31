#include "../io/PrintStream.hpp"
#include "./Thread.hpp"
#include "./Void.hpp"
#include "./ThreadGroup.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	ThreadGroup::ThreadGroup(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ThreadGroup::ThreadGroup(jstring arg0)
		: __JniBaseClass(
			"java.lang.ThreadGroup",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	ThreadGroup::ThreadGroup(java::lang::ThreadGroup &arg0, jstring arg1)
		: __JniBaseClass(
			"java.lang.ThreadGroup",
			"(Ljava/lang/ThreadGroup;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jint ThreadGroup::activeCount()
	{
		return callMethod<jint>(
			"activeCount",
			"()I"
		);
	}
	jint ThreadGroup::activeGroupCount()
	{
		return callMethod<jint>(
			"activeGroupCount",
			"()I"
		);
	}
	jboolean ThreadGroup::allowThreadSuspension(jboolean arg0)
	{
		return callMethod<jboolean>(
			"allowThreadSuspension",
			"(Z)Z",
			arg0
		);
	}
	void ThreadGroup::checkAccess()
	{
		callMethod<void>(
			"checkAccess",
			"()V"
		);
	}
	void ThreadGroup::destroy()
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	jint ThreadGroup::enumerate(jarray arg0)
	{
		return callMethod<jint>(
			"enumerate",
			"([Ljava/lang/Thread;)I",
			arg0
		);
	}
	jint ThreadGroup::enumerate(jarray arg0, jboolean arg1)
	{
		return callMethod<jint>(
			"enumerate",
			"([Ljava/lang/Thread;Z)I",
			arg0,
			arg1
		);
	}
	jint ThreadGroup::getMaxPriority()
	{
		return callMethod<jint>(
			"getMaxPriority",
			"()I"
		);
	}
	jstring ThreadGroup::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ThreadGroup::getParent()
	{
		return callObjectMethod(
			"getParent",
			"()Ljava/lang/ThreadGroup;"
		);
	}
	void ThreadGroup::interrupt()
	{
		callMethod<void>(
			"interrupt",
			"()V"
		);
	}
	jboolean ThreadGroup::isDaemon()
	{
		return callMethod<jboolean>(
			"isDaemon",
			"()Z"
		);
	}
	jboolean ThreadGroup::isDestroyed()
	{
		return callMethod<jboolean>(
			"isDestroyed",
			"()Z"
		);
	}
	void ThreadGroup::list()
	{
		callMethod<void>(
			"list",
			"()V"
		);
	}
	jboolean ThreadGroup::parentOf(java::lang::ThreadGroup arg0)
	{
		return callMethod<jboolean>(
			"parentOf",
			"(Ljava/lang/ThreadGroup;)Z",
			arg0.object()
		);
	}
	void ThreadGroup::resume()
	{
		callMethod<void>(
			"resume",
			"()V"
		);
	}
	void ThreadGroup::setDaemon(jboolean arg0)
	{
		callMethod<void>(
			"setDaemon",
			"(Z)V",
			arg0
		);
	}
	void ThreadGroup::setMaxPriority(jint arg0)
	{
		callMethod<void>(
			"setMaxPriority",
			"(I)V",
			arg0
		);
	}
	void ThreadGroup::stop()
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
	void ThreadGroup::suspend()
	{
		callMethod<void>(
			"suspend",
			"()V"
		);
	}
	jstring ThreadGroup::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ThreadGroup::uncaughtException(java::lang::Thread arg0, jthrowable arg1)
	{
		callMethod<void>(
			"uncaughtException",
			"(Ljava/lang/Thread;Ljava/lang/Throwable;)V",
			arg0.object(),
			arg1
		);
	}
} // namespace java::lang
