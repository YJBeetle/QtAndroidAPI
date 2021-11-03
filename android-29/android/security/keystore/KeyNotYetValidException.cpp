#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./KeyNotYetValidException.hpp"

namespace android::security::keystore
{
	// Fields
	
	// QJniObject forward
	KeyNotYetValidException::KeyNotYetValidException(QJniObject obj) : java::security::InvalidKeyException(obj) {}
	
	// Constructors
	KeyNotYetValidException::KeyNotYetValidException()
		: java::security::InvalidKeyException(
			"android.security.keystore.KeyNotYetValidException",
			"()V"
		) {}
	KeyNotYetValidException::KeyNotYetValidException(JString arg0)
		: java::security::InvalidKeyException(
			"android.security.keystore.KeyNotYetValidException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	KeyNotYetValidException::KeyNotYetValidException(JString arg0, JThrowable arg1)
		: java::security::InvalidKeyException(
			"android.security.keystore.KeyNotYetValidException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::security::keystore

