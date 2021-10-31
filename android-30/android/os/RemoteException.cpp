#include "../../java/lang/RuntimeException.hpp"
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
	java::lang::RuntimeException RemoteException::rethrowAsRuntimeException()
	{
		return callObjectMethod(
			"rethrowAsRuntimeException",
			"()Ljava/lang/RuntimeException;"
		);
	}
	java::lang::RuntimeException RemoteException::rethrowFromSystemServer()
	{
		return callObjectMethod(
			"rethrowFromSystemServer",
			"()Ljava/lang/RuntimeException;"
		);
	}
} // namespace android::os

