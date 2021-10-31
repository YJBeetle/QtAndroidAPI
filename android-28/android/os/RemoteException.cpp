#include "./RemoteException.hpp"

namespace android::os
{
	// Fields
	
	// QJniObject forward
	RemoteException::RemoteException(QJniObject obj) : android::util::AndroidException(obj) {}
	
	// Constructors
	RemoteException::RemoteException()
		: android::util::AndroidException(
			"android.os.RemoteException",
			"()V"
		) {}
	RemoteException::RemoteException(jstring arg0)
		: android::util::AndroidException(
			"android.os.RemoteException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::os

