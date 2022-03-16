#include "../../JString.hpp"
#include "./OperationCanceledException.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	OperationCanceledException::OperationCanceledException()
		: java::lang::RuntimeException(
			"android.os.OperationCanceledException",
			"()V"
		) {}
	OperationCanceledException::OperationCanceledException(JString arg0)
		: java::lang::RuntimeException(
			"android.os.OperationCanceledException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::os

