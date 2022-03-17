#pragma once

#include "../../JString.hpp"
#include "./TransactionTooLargeException.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	inline TransactionTooLargeException::TransactionTooLargeException()
		: android::os::RemoteException(
			"android.os.TransactionTooLargeException",
			"()V"
		) {}
	inline TransactionTooLargeException::TransactionTooLargeException(JString arg0)
		: android::os::RemoteException(
			"android.os.TransactionTooLargeException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::os

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../util/AndroidException.hpp"
#include "./RemoteException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
