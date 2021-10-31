#include "./TransactionTooLargeException.hpp"

namespace android::os
{
	// Fields
	
	TransactionTooLargeException::TransactionTooLargeException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TransactionTooLargeException::TransactionTooLargeException()
	{
		__thiz = QAndroidJniObject(
			"android.os.TransactionTooLargeException",
			"()V"
		);
	}
	TransactionTooLargeException::TransactionTooLargeException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.TransactionTooLargeException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::os

