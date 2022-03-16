#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./StrongBoxUnavailableException.hpp"

namespace android::security::keystore
{
	// Fields
	
	// Constructors
	StrongBoxUnavailableException::StrongBoxUnavailableException()
		: java::security::ProviderException(
			"android.security.keystore.StrongBoxUnavailableException",
			"()V"
		) {}
	StrongBoxUnavailableException::StrongBoxUnavailableException(JString arg0)
		: java::security::ProviderException(
			"android.security.keystore.StrongBoxUnavailableException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	StrongBoxUnavailableException::StrongBoxUnavailableException(JThrowable arg0)
		: java::security::ProviderException(
			"android.security.keystore.StrongBoxUnavailableException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	StrongBoxUnavailableException::StrongBoxUnavailableException(JString arg0, JThrowable arg1)
		: java::security::ProviderException(
			"android.security.keystore.StrongBoxUnavailableException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::security::keystore

