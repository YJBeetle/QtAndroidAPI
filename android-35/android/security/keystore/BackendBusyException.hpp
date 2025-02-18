#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./BackendBusyException.def.hpp"

namespace android::security::keystore
{
	// Fields
	
	// Constructors
	inline BackendBusyException::BackendBusyException(jlong arg0)
		: java::security::ProviderException(
			"android.security.keystore.BackendBusyException",
			"(J)V",
			arg0
		) {}
	inline BackendBusyException::BackendBusyException(jlong arg0, JString arg1)
		: java::security::ProviderException(
			"android.security.keystore.BackendBusyException",
			"(JLjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		) {}
	inline BackendBusyException::BackendBusyException(jlong arg0, JString arg1, JThrowable arg2)
		: java::security::ProviderException(
			"android.security.keystore.BackendBusyException",
			"(JLjava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jthrowable>()
		) {}
	
	// Methods
	inline jlong BackendBusyException::getBackOffHintMillis() const
	{
		return callMethod<jlong>(
			"getBackOffHintMillis",
			"()J"
		);
	}
} // namespace android::security::keystore

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../../../java/security/ProviderException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::security::keystore;
#endif
