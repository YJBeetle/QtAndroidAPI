#include "./DeadObjectException.hpp"

namespace android::os
{
	// Fields
	
	// QJniObject forward
	DeadObjectException::DeadObjectException(QJniObject obj) : android::os::RemoteException(obj) {}
	
	// Constructors
	DeadObjectException::DeadObjectException()
		: android::os::RemoteException(
			"android.os.DeadObjectException",
			"()V"
		) {}
	DeadObjectException::DeadObjectException(jstring arg0)
		: android::os::RemoteException(
			"android.os.DeadObjectException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::os

