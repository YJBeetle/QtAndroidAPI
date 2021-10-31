#include "../io/PrintStream.hpp"
#include "./Thread.hpp"
#include "./Void.hpp"
#include "./ThreadGroup.hpp"

namespace java::lang
{
	// Fields
	
	ThreadGroup::ThreadGroup(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ThreadGroup::ThreadGroup(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ThreadGroup",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	ThreadGroup::ThreadGroup(java::lang::ThreadGroup &arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ThreadGroup",
			"(Ljava/lang/ThreadGroup;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	jint ThreadGroup::activeCount()
	{
		return __thiz.callMethod<jint>(
			"activeCount",
			"()I"
		);
	}
	jint ThreadGroup::activeGroupCount()
	{
		return __thiz.callMethod<jint>(
			"activeGroupCount",
			"()I"
		);
	}
	jboolean ThreadGroup::allowThreadSuspension(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"allowThreadSuspension",
			"(Z)Z",
			arg0
		);
	}
	void ThreadGroup::checkAccess()
	{
		__thiz.callMethod<void>(
			"checkAccess",
			"()V"
		);
	}
	void ThreadGroup::destroy()
	{
		__thiz.callMethod<void>(
			"destroy",
			"()V"
		);
	}
	jint ThreadGroup::enumerate(jarray arg0)
	{
		return __thiz.callMethod<jint>(
			"enumerate",
			"([Ljava/lang/Thread;)I",
			arg0
		);
	}
	jint ThreadGroup::enumerate(jarray arg0, jboolean arg1)
	{
		return __thiz.callMethod<jint>(
			"enumerate",
			"([Ljava/lang/Thread;Z)I",
			arg0,
			arg1
		);
	}
	jint ThreadGroup::getMaxPriority()
	{
		return __thiz.callMethod<jint>(
			"getMaxPriority",
			"()I"
		);
	}
	jstring ThreadGroup::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ThreadGroup::getParent()
	{
		return __thiz.callObjectMethod(
			"getParent",
			"()Ljava/lang/ThreadGroup;"
		);
	}
	void ThreadGroup::interrupt()
	{
		__thiz.callMethod<void>(
			"interrupt",
			"()V"
		);
	}
	jboolean ThreadGroup::isDaemon()
	{
		return __thiz.callMethod<jboolean>(
			"isDaemon",
			"()Z"
		);
	}
	jboolean ThreadGroup::isDestroyed()
	{
		return __thiz.callMethod<jboolean>(
			"isDestroyed",
			"()Z"
		);
	}
	void ThreadGroup::list()
	{
		__thiz.callMethod<void>(
			"list",
			"()V"
		);
	}
	jboolean ThreadGroup::parentOf(java::lang::ThreadGroup arg0)
	{
		return __thiz.callMethod<jboolean>(
			"parentOf",
			"(Ljava/lang/ThreadGroup;)Z",
			arg0.__jniObject().object()
		);
	}
	void ThreadGroup::resume()
	{
		__thiz.callMethod<void>(
			"resume",
			"()V"
		);
	}
	void ThreadGroup::setDaemon(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDaemon",
			"(Z)V",
			arg0
		);
	}
	void ThreadGroup::setMaxPriority(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaxPriority",
			"(I)V",
			arg0
		);
	}
	void ThreadGroup::stop()
	{
		__thiz.callMethod<void>(
			"stop",
			"()V"
		);
	}
	void ThreadGroup::suspend()
	{
		__thiz.callMethod<void>(
			"suspend",
			"()V"
		);
	}
	jstring ThreadGroup::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ThreadGroup::uncaughtException(java::lang::Thread arg0, jthrowable arg1)
	{
		__thiz.callMethod<void>(
			"uncaughtException",
			"(Ljava/lang/Thread;Ljava/lang/Throwable;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace java::lang

