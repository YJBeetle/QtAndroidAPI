#pragma once

#include "../../../JObject.hpp"
#include "../../../JThrowable.hpp"
#include "./CountedCompleter.def.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void CountedCompleter::addToPendingCount(jint arg0) const
	{
		callMethod<void>(
			"addToPendingCount",
			"(I)V",
			arg0
		);
	}
	inline jboolean CountedCompleter::compareAndSetPendingCount(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"compareAndSetPendingCount",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline void CountedCompleter::complete(JObject arg0) const
	{
		callMethod<void>(
			"complete",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void CountedCompleter::compute() const
	{
		callMethod<void>(
			"compute",
			"()V"
		);
	}
	inline jint CountedCompleter::decrementPendingCountUnlessZero() const
	{
		return callMethod<jint>(
			"decrementPendingCountUnlessZero",
			"()I"
		);
	}
	inline java::util::concurrent::CountedCompleter CountedCompleter::firstComplete() const
	{
		return callObjectMethod(
			"firstComplete",
			"()Ljava/util/concurrent/CountedCompleter;"
		);
	}
	inline java::util::concurrent::CountedCompleter CountedCompleter::getCompleter() const
	{
		return callObjectMethod(
			"getCompleter",
			"()Ljava/util/concurrent/CountedCompleter;"
		);
	}
	inline jint CountedCompleter::getPendingCount() const
	{
		return callMethod<jint>(
			"getPendingCount",
			"()I"
		);
	}
	inline JObject CountedCompleter::getRawResult() const
	{
		return callObjectMethod(
			"getRawResult",
			"()Ljava/lang/Object;"
		);
	}
	inline java::util::concurrent::CountedCompleter CountedCompleter::getRoot() const
	{
		return callObjectMethod(
			"getRoot",
			"()Ljava/util/concurrent/CountedCompleter;"
		);
	}
	inline void CountedCompleter::helpComplete(jint arg0) const
	{
		callMethod<void>(
			"helpComplete",
			"(I)V",
			arg0
		);
	}
	inline java::util::concurrent::CountedCompleter CountedCompleter::nextComplete() const
	{
		return callObjectMethod(
			"nextComplete",
			"()Ljava/util/concurrent/CountedCompleter;"
		);
	}
	inline void CountedCompleter::onCompletion(java::util::concurrent::CountedCompleter arg0) const
	{
		callMethod<void>(
			"onCompletion",
			"(Ljava/util/concurrent/CountedCompleter;)V",
			arg0.object()
		);
	}
	inline jboolean CountedCompleter::onExceptionalCompletion(JThrowable arg0, java::util::concurrent::CountedCompleter arg1) const
	{
		return callMethod<jboolean>(
			"onExceptionalCompletion",
			"(Ljava/lang/Throwable;Ljava/util/concurrent/CountedCompleter;)Z",
			arg0.object<jthrowable>(),
			arg1.object()
		);
	}
	inline void CountedCompleter::propagateCompletion() const
	{
		callMethod<void>(
			"propagateCompletion",
			"()V"
		);
	}
	inline void CountedCompleter::quietlyCompleteRoot() const
	{
		callMethod<void>(
			"quietlyCompleteRoot",
			"()V"
		);
	}
	inline void CountedCompleter::setPendingCount(jint arg0) const
	{
		callMethod<void>(
			"setPendingCount",
			"(I)V",
			arg0
		);
	}
	inline void CountedCompleter::tryComplete() const
	{
		callMethod<void>(
			"tryComplete",
			"()V"
		);
	}
} // namespace java::util::concurrent

// Base class headers
#include "./ForkJoinTask.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::concurrent;
#endif
