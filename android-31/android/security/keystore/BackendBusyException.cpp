#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./BackendBusyException.hpp"

namespace android::security::keystore
{
	// Fields
	
	// Constructors
	BackendBusyException::BackendBusyException(jlong arg0)
		: java::security::ProviderException(
			"android.security.keystore.BackendBusyException",
			"(J)V",
			arg0
		) {}
	BackendBusyException::BackendBusyException(jlong arg0, JString arg1)
		: java::security::ProviderException(
			"android.security.keystore.BackendBusyException",
			"(JLjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		) {}
	BackendBusyException::BackendBusyException(jlong arg0, JString arg1, JThrowable arg2)
		: java::security::ProviderException(
			"android.security.keystore.BackendBusyException",
			"(JLjava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jthrowable>()
		) {}
	
	// Methods
	jlong BackendBusyException::getBackOffHintMillis() const
	{
		return callMethod<jlong>(
			"getBackOffHintMillis",
			"()J"
		);
	}
} // namespace android::security::keystore

