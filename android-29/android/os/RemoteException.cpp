#include "./RemoteException.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	RemoteException::RemoteException(QAndroidJniObject obj) : android::util::AndroidException(obj) {}
	
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

