#include "./OperationCanceledException.hpp"

namespace android::os
{
	// Fields
	
	OperationCanceledException::OperationCanceledException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	OperationCanceledException::OperationCanceledException()
	{
		__thiz = QAndroidJniObject(
			"android.os.OperationCanceledException",
			"()V"
		);
	}
	OperationCanceledException::OperationCanceledException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.OperationCanceledException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::os

