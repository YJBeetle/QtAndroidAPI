#include "../../../JObject.hpp"
#include "../../../JThrowable.hpp"
#include "./CountedCompleter.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	
	// Methods
	void CountedCompleter::addToPendingCount(jint arg0) const
	{
		callMethod<void>(
			"addToPendingCount",
			"(I)V",
			arg0
		);
	}
	jboolean CountedCompleter::compareAndSetPendingCount(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"compareAndSetPendingCount",
			"(II)Z",
			arg0,
			arg1
		);
	}
	void CountedCompleter::complete(JObject arg0) const
	{
		callMethod<void>(
			"complete",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void CountedCompleter::compute() const
	{
		callMethod<void>(
			"compute",
			"()V"
		);
	}
	jint CountedCompleter::decrementPendingCountUnlessZero() const
	{
		return callMethod<jint>(
			"decrementPendingCountUnlessZero",
			"()I"
		);
	}
	java::util::concurrent::CountedCompleter CountedCompleter::firstComplete() const
	{
		return callObjectMethod(
			"firstComplete",
			"()Ljava/util/concurrent/CountedCompleter;"
		);
	}
	java::util::concurrent::CountedCompleter CountedCompleter::getCompleter() const
	{
		return callObjectMethod(
			"getCompleter",
			"()Ljava/util/concurrent/CountedCompleter;"
		);
	}
	jint CountedCompleter::getPendingCount() const
	{
		return callMethod<jint>(
			"getPendingCount",
			"()I"
		);
	}
	JObject CountedCompleter::getRawResult() const
	{
		return callObjectMethod(
			"getRawResult",
			"()Ljava/lang/Object;"
		);
	}
	java::util::concurrent::CountedCompleter CountedCompleter::getRoot() const
	{
		return callObjectMethod(
			"getRoot",
			"()Ljava/util/concurrent/CountedCompleter;"
		);
	}
	void CountedCompleter::helpComplete(jint arg0) const
	{
		callMethod<void>(
			"helpComplete",
			"(I)V",
			arg0
		);
	}
	java::util::concurrent::CountedCompleter CountedCompleter::nextComplete() const
	{
		return callObjectMethod(
			"nextComplete",
			"()Ljava/util/concurrent/CountedCompleter;"
		);
	}
	void CountedCompleter::onCompletion(java::util::concurrent::CountedCompleter arg0) const
	{
		callMethod<void>(
			"onCompletion",
			"(Ljava/util/concurrent/CountedCompleter;)V",
			arg0.object()
		);
	}
	jboolean CountedCompleter::onExceptionalCompletion(JThrowable arg0, java::util::concurrent::CountedCompleter arg1) const
	{
		return callMethod<jboolean>(
			"onExceptionalCompletion",
			"(Ljava/lang/Throwable;Ljava/util/concurrent/CountedCompleter;)Z",
			arg0.object<jthrowable>(),
			arg1.object()
		);
	}
	void CountedCompleter::propagateCompletion() const
	{
		callMethod<void>(
			"propagateCompletion",
			"()V"
		);
	}
	void CountedCompleter::quietlyCompleteRoot() const
	{
		callMethod<void>(
			"quietlyCompleteRoot",
			"()V"
		);
	}
	void CountedCompleter::setPendingCount(jint arg0) const
	{
		callMethod<void>(
			"setPendingCount",
			"(I)V",
			arg0
		);
	}
	void CountedCompleter::tryComplete() const
	{
		callMethod<void>(
			"tryComplete",
			"()V"
		);
	}
} // namespace java::util::concurrent

