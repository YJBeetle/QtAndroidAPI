#include "./CountedCompleter.hpp"

namespace java::util::concurrent
{
	// Fields
	
	CountedCompleter::CountedCompleter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void CountedCompleter::addToPendingCount(jint arg0)
	{
		__thiz.callMethod<void>(
			"addToPendingCount",
			"(I)V",
			arg0
		);
	}
	jboolean CountedCompleter::compareAndSetPendingCount(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"compareAndSetPendingCount",
			"(II)Z",
			arg0,
			arg1
		);
	}
	void CountedCompleter::complete(jobject arg0)
	{
		__thiz.callMethod<void>(
			"complete",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void CountedCompleter::compute()
	{
		__thiz.callMethod<void>(
			"compute",
			"()V"
		);
	}
	jint CountedCompleter::decrementPendingCountUnlessZero()
	{
		return __thiz.callMethod<jint>(
			"decrementPendingCountUnlessZero",
			"()I"
		);
	}
	QAndroidJniObject CountedCompleter::firstComplete()
	{
		return __thiz.callObjectMethod(
			"firstComplete",
			"()Ljava/util/concurrent/CountedCompleter;"
		);
	}
	QAndroidJniObject CountedCompleter::getCompleter()
	{
		return __thiz.callObjectMethod(
			"getCompleter",
			"()Ljava/util/concurrent/CountedCompleter;"
		);
	}
	jint CountedCompleter::getPendingCount()
	{
		return __thiz.callMethod<jint>(
			"getPendingCount",
			"()I"
		);
	}
	jobject CountedCompleter::getRawResult()
	{
		return __thiz.callObjectMethod(
			"getRawResult",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject CountedCompleter::getRoot()
	{
		return __thiz.callObjectMethod(
			"getRoot",
			"()Ljava/util/concurrent/CountedCompleter;"
		);
	}
	void CountedCompleter::helpComplete(jint arg0)
	{
		__thiz.callMethod<void>(
			"helpComplete",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject CountedCompleter::nextComplete()
	{
		return __thiz.callObjectMethod(
			"nextComplete",
			"()Ljava/util/concurrent/CountedCompleter;"
		);
	}
	void CountedCompleter::onCompletion(java::util::concurrent::CountedCompleter arg0)
	{
		__thiz.callMethod<void>(
			"onCompletion",
			"(Ljava/util/concurrent/CountedCompleter;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean CountedCompleter::onExceptionalCompletion(jthrowable arg0, java::util::concurrent::CountedCompleter arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onExceptionalCompletion",
			"(Ljava/lang/Throwable;Ljava/util/concurrent/CountedCompleter;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void CountedCompleter::propagateCompletion()
	{
		__thiz.callMethod<void>(
			"propagateCompletion",
			"()V"
		);
	}
	void CountedCompleter::quietlyCompleteRoot()
	{
		__thiz.callMethod<void>(
			"quietlyCompleteRoot",
			"()V"
		);
	}
	void CountedCompleter::setPendingCount(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPendingCount",
			"(I)V",
			arg0
		);
	}
	void CountedCompleter::tryComplete()
	{
		__thiz.callMethod<void>(
			"tryComplete",
			"()V"
		);
	}
} // namespace java::util::concurrent

