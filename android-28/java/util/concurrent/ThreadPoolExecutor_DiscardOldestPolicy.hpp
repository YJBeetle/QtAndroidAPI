#pragma once

#include "./ThreadPoolExecutor.def.hpp"
#include "./ThreadPoolExecutor_DiscardOldestPolicy.def.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	inline ThreadPoolExecutor_DiscardOldestPolicy::ThreadPoolExecutor_DiscardOldestPolicy()
		: JObject(
			"java.util.concurrent.ThreadPoolExecutor$DiscardOldestPolicy",
			"()V"
		) {}
	
	// Methods
	inline void ThreadPoolExecutor_DiscardOldestPolicy::rejectedExecution(JObject arg0, java::util::concurrent::ThreadPoolExecutor arg1) const
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

