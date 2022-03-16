#pragma once

#include "../../../JObject.hpp"
#include "./RecursiveTask.def.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	inline RecursiveTask::RecursiveTask()
		: java::util::concurrent::ForkJoinTask(
			"java.util.concurrent.RecursiveTask",
			"()V"
		) {}
	
	// Methods
	inline JObject RecursiveTask::getRawResult() const
	{
		return callObjectMethod(
			"getRawResult",
			"()Ljava/lang/Object;"
		);
	}
} // namespace java::util::concurrent

// Base class headers
#include "./ForkJoinTask.hpp"

