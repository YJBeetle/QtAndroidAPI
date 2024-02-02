#pragma once

#include "../../java/lang/RuntimeException.def.hpp"
#include "../../JString.hpp"
#include "./RemoteException.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	inline RemoteException::RemoteException()
		: android::util::AndroidException(
			"android.os.RemoteException",
			"()V"
		) {}
	inline RemoteException::RemoteException(JString arg0)
		: android::util::AndroidException(
			"android.os.RemoteException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline java::lang::RuntimeException RemoteException::rethrowAsRuntimeException() const
	{
		return callObjectMethod(
			"rethrowAsRuntimeException",
			"()Ljava/lang/RuntimeException;"
		);
	}
	inline java::lang::RuntimeException RemoteException::rethrowFromSystemServer() const
	{
		return callObjectMethod(
			"rethrowFromSystemServer",
			"()Ljava/lang/RuntimeException;"
		);
	}
} // namespace android::os

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../util/AndroidException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
