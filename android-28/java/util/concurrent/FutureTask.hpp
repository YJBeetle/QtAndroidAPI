#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../lang/Thread.def.hpp"
#include "../../../JThrowable.hpp"
#include "./TimeUnit.def.hpp"
#include "./FutureTask.def.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	inline FutureTask::FutureTask(JObject arg0)
		: JObject(
			"java.util.concurrent.FutureTask",
			"(Ljava/util/concurrent/Callable;)V",
			arg0.object()
		) {}
	inline FutureTask::FutureTask(JObject arg0, JObject arg1)
		: JObject(
			"java.util.concurrent.FutureTask",
			"(Ljava/lang/Runnable;Ljava/lang/Object;)V",
			arg0.object(),
			arg1.object<jobject>()
		) {}
	
	// Methods
	inline jboolean FutureTask::cancel(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"cancel",
			"(Z)Z",
			arg0
		);
	}
	inline JThrowable FutureTask::exceptionNow() const
	{
		return callObjectMethod(
			"exceptionNow",
			"()Ljava/lang/Throwable;"
		);
	}
	inline JObject FutureTask::get() const
	{
		return callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject FutureTask::get(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callObjectMethod(
			"get",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		);
	}
	inline jboolean FutureTask::isCancelled() const
	{
		return callMethod<jboolean>(
			"isCancelled",
			"()Z"
		);
	}
	inline jboolean FutureTask::isDone() const
	{
		return callMethod<jboolean>(
			"isDone",
			"()Z"
		);
	}
	inline JObject FutureTask::resultNow() const
	{
		return callObjectMethod(
			"resultNow",
			"()Ljava/lang/Object;"
		);
	}
	inline void FutureTask::run() const
	{
		callMethod<void>(
			"run",
			"()V"
		);
	}
	inline JObject FutureTask::state() const
	{
		return callObjectMethod(
			"state",
			"()Ljava/util/concurrent/Future$State;"
		);
	}
	inline JString FutureTask::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::concurrent

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::concurrent;
#endif
