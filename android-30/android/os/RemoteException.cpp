#include "../../java/lang/RuntimeException.hpp"
#include "../../JString.hpp"
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
	RemoteException::RemoteException(JString arg0)
		: android::util::AndroidException(
			"android.os.RemoteException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	java::lang::RuntimeException RemoteException::rethrowAsRuntimeException() const
	{
		return callObjectMethod(
			"rethrowAsRuntimeException",
			"()Ljava/lang/RuntimeException;"
		);
	}
	java::lang::RuntimeException RemoteException::rethrowFromSystemServer() const
	{
		return callObjectMethod(
			"rethrowFromSystemServer",
			"()Ljava/lang/RuntimeException;"
		);
	}
} // namespace android::os

