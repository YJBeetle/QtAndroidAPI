#pragma once

#include "./ThreadPoolExecutor.def.hpp"
#include "./ThreadPoolExecutor_CallerRunsPolicy.def.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	inline ThreadPoolExecutor_CallerRunsPolicy::ThreadPoolExecutor_CallerRunsPolicy()
		: JObject(
			"java.util.concurrent.ThreadPoolExecutor$CallerRunsPolicy",
			"()V"
		) {}
	
	// Methods
	inline void ThreadPoolExecutor_CallerRunsPolicy::rejectedExecution(JObject arg0, java::util::concurrent::ThreadPoolExecutor arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::concurrent;
#endif
