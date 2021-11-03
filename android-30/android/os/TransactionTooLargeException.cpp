#include "../../JString.hpp"
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
	TransactionTooLargeException::TransactionTooLargeException(JString arg0)
		: android::os::RemoteException(
			"android.os.TransactionTooLargeException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::os

