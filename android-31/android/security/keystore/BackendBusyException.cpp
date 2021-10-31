#include "./BackendBusyException.hpp"

namespace android::security::keystore
{
	// Fields
	
	// QAndroidJniObject forward
	BackendBusyException::BackendBusyException(QAndroidJniObject obj) : java::security::ProviderException(obj) {}
	
	// Constructors
	BackendBusyException::BackendBusyException(jlong arg0)
		: java::security::ProviderException(
			"android.security.keystore.BackendBusyException",
			"(J)V",
			arg0
		) {}
	BackendBusyException::BackendBusyException(jlong arg0, jstring arg1)
		: java::security::ProviderException(
			"android.security.keystore.BackendBusyException",
			"(JLjava/lang/String;)V",
			arg0,
			arg1
		) {}
	BackendBusyException::BackendBusyException(jlong arg0, jstring arg1, jthrowable arg2)
		: java::security::ProviderException(
			"android.security.keystore.BackendBusyException",
			"(JLjava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jlong BackendBusyException::getBackOffHintMillis()
	{
		return callMethod<jlong>(
			"getBackOffHintMillis",
			"()J"
		);
	}
} // namespace android::security::keystore

