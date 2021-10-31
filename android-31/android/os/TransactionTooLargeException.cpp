#include "./TransactionTooLargeException.hpp"

namespace android::os
{
	// Fields
	
	// QJniObject forward
	TransactionTooLargeException::TransactionTooLargeException(QJniObject obj) : android::os::RemoteException(obj) {}
	
	// Constructors
	TransactionTooLargeException::TransactionTooLargeException()
		: android::os::RemoteException(
			"android.os.TransactionTooLargeException",
			"()V"
		) {}
	TransactionTooLargeException::TransactionTooLargeException(jstring arg0)
		: android::os::RemoteException(
			"android.os.TransactionTooLargeException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::os

