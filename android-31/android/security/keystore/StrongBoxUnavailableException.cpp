#include "./StrongBoxUnavailableException.hpp"

namespace android::security::keystore
{
	// Fields
	
	// QAndroidJniObject forward
	StrongBoxUnavailableException::StrongBoxUnavailableException(QAndroidJniObject obj) : java::security::ProviderException(obj) {}
	
	// Constructors
	StrongBoxUnavailableException::StrongBoxUnavailableException()
		: java::security::ProviderException(
			"android.security.keystore.StrongBoxUnavailableException",
			"()V"
		) {}
	StrongBoxUnavailableException::StrongBoxUnavailableException(jstring arg0)
		: java::security::ProviderException(
			"android.security.keystore.StrongBoxUnavailableException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	StrongBoxUnavailableException::StrongBoxUnavailableException(jthrowable arg0)
		: java::security::ProviderException(
			"android.security.keystore.StrongBoxUnavailableException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	StrongBoxUnavailableException::StrongBoxUnavailableException(jstring arg0, jthrowable arg1)
		: java::security::ProviderException(
			"android.security.keystore.StrongBoxUnavailableException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::security::keystore

