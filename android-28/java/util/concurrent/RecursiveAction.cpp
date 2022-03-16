#include "../../../JObject.hpp"
#include "../../lang/Void.hpp"
#include "./RecursiveAction.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	RecursiveAction::RecursiveAction()
		: java::util::concurrent::ForkJoinTask(
			"java.util.concurrent.RecursiveAction",
			"()V"
		) {}
	
	// Methods
	java::lang::Void RecursiveAction::getRawResult() const
	{
		return callObjectMethod(
			"getRawResult",
			"()Ljava/lang/Void;"
		);
	}
} // namespace java::util::concurrent

