#pragma once

#include "../../../JObject.hpp"
#include "../../lang/Void.def.hpp"
#include "./RecursiveAction.def.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	inline RecursiveAction::RecursiveAction()
		: java::util::concurrent::ForkJoinTask(
			"java.util.concurrent.RecursiveAction",
			"()V"
		) {}
	
	// Methods
	inline java::lang::Void RecursiveAction::getRawResult() const
	{
		return callObjectMethod(
			"getRawResult",
			"()Ljava/lang/Void;"
		);
	}
} // namespace java::util::concurrent

// Base class headers
#include "./ForkJoinTask.hpp"

