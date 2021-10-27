#include "../../lang/Void.hpp"
#include "./RecursiveAction.hpp"

namespace java::util::concurrent
{
	// Fields
	
	RecursiveAction::RecursiveAction(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RecursiveAction::RecursiveAction()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.RecursiveAction",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject RecursiveAction::getRawResult()
	{
		return __thiz.callObjectMethod(
			"getRawResult",
			"()Ljava/lang/Void;"
		);
	}
} // namespace java::util::concurrent

