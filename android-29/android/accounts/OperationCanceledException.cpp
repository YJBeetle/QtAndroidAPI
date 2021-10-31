#include "./OperationCanceledException.hpp"

namespace android::accounts
{
	// Fields
	
	OperationCanceledException::OperationCanceledException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	OperationCanceledException::OperationCanceledException()
	{
		__thiz = QAndroidJniObject(
			"android.accounts.OperationCanceledException",
			"()V"
		);
	}
	OperationCanceledException::OperationCanceledException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.OperationCanceledException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	OperationCanceledException::OperationCanceledException(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.OperationCanceledException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	OperationCanceledException::OperationCanceledException(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.OperationCanceledException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace android::accounts

