#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./KeyPermanentlyInvalidatedException.def.hpp"

namespace android::security::keystore
{
	// Fields
	
	// Constructors
	inline KeyPermanentlyInvalidatedException::KeyPermanentlyInvalidatedException()
		: java::security::InvalidKeyException(
			"android.security.keystore.KeyPermanentlyInvalidatedException",
			"()V"
		) {}
	inline KeyPermanentlyInvalidatedException::KeyPermanentlyInvalidatedException(JString arg0)
		: java::security::InvalidKeyException(
			"android.security.keystore.KeyPermanentlyInvalidatedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline KeyPermanentlyInvalidatedException::KeyPermanentlyInvalidatedException(JString arg0, JThrowable arg1)
		: java::security::InvalidKeyException(
			"android.security.keystore.KeyPermanentlyInvalidatedException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::security::keystore

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "../../../java/security/GeneralSecurityException.hpp"
#include "../../../java/security/KeyException.hpp"
#include "../../../java/security/InvalidKeyException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::security::keystore;
#endif
