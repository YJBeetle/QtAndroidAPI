#pragma once

#include "./ThreadPoolExecutor.def.hpp"
#include "./ThreadPoolExecutor_AbortPolicy.def.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	inline ThreadPoolExecutor_AbortPolicy::ThreadPoolExecutor_AbortPolicy()
		: JObject(
			"java.util.concurrent.ThreadPoolExecutor$AbortPolicy",
			"()V"
		) {}
	
	// Methods
	inline void ThreadPoolExecutor_AbortPolicy::rejectedExecution(JObject arg0, java::util::concurrent::ThreadPoolExecutor arg1) const
	{
		callMethod<void>(
			"rejectedExecution",
			"(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::util::concurrent

// Base class headers

