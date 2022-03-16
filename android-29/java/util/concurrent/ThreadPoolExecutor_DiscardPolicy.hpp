#pragma once

#include "./ThreadPoolExecutor.def.hpp"
#include "./ThreadPoolExecutor_DiscardPolicy.def.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	inline ThreadPoolExecutor_DiscardPolicy::ThreadPoolExecutor_DiscardPolicy()
		: JObject(
			"java.util.concurrent.ThreadPoolExecutor$DiscardPolicy",
			"()V"
		) {}
	
	// Methods
	inline void ThreadPoolExecutor_DiscardPolicy::rejectedExecution(JObject arg0, java::util::concurrent::ThreadPoolExecutor arg1) const
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

