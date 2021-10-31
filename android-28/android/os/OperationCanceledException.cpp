#include "./OperationCanceledException.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	OperationCanceledException::OperationCanceledException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	OperationCanceledException::OperationCanceledException()
		: java::lang::RuntimeException(
			"android.os.OperationCanceledException",
			"()V"
		) {}
	OperationCanceledException::OperationCanceledException(jstring arg0)
		: java::lang::RuntimeException(
			"android.os.OperationCanceledException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::os

