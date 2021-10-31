#include "../../lang/Void.hpp"
#include "./RecursiveAction.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QAndroidJniObject forward
	RecursiveAction::RecursiveAction(QAndroidJniObject obj) : java::util::concurrent::ForkJoinTask(obj) {}
	
	// Constructors
	RecursiveAction::RecursiveAction()
		: java::util::concurrent::ForkJoinTask(
			"java.util.concurrent.RecursiveAction",
			"()V"
		) {}
	
	// Methods
	java::lang::Void RecursiveAction::getRawResult()
	{
		return callObjectMethod(
			"getRawResult",
			"()Ljava/lang/Void;"
		);
	}
} // namespace java::util::concurrent

