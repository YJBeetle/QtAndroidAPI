#pragma once

#include "../../java/lang/Exception.def.hpp"

class JString;

namespace android::security
{
	class KeyStoreException : public java::lang::Exception
	{
	public:
		// Fields
		static jint ERROR_ATTESTATION_CHALLENGE_TOO_LARGE();
		static jint ERROR_ATTESTATION_KEYS_UNAVAILABLE();
		static jint ERROR_ID_ATTESTATION_FAILURE();
		static jint ERROR_INCORRECT_USAGE();
		static jint ERROR_INTERNAL_SYSTEM_ERROR();
		static jint ERROR_KEYMINT_FAILURE();
		static jint ERROR_KEYSTORE_FAILURE();
		static jint ERROR_KEYSTORE_UNINITIALIZED();
		static jint ERROR_KEY_CORRUPTED();
		static jint ERROR_KEY_DOES_NOT_EXIST();
		static jint ERROR_KEY_NOT_TEMPORALLY_VALID();
		static jint ERROR_KEY_OPERATION_EXPIRED();
		static jint ERROR_OTHER();
		static jint ERROR_PERMISSION_DENIED();
		static jint ERROR_UNIMPLEMENTED();
		static jint ERROR_USER_AUTHENTICATION_REQUIRED();
		static jint RETRY_NEVER();
		static jint RETRY_WHEN_CONNECTIVITY_AVAILABLE();
		static jint RETRY_WITH_EXPONENTIAL_BACKOFF();
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyStoreException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		KeyStoreException(QJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		
		// Methods
		jint getNumericErrorCode() const;
		jint getRetryPolicy() const;
		jboolean isSystemError() const;
		jboolean isTransientFailure() const;
		jboolean requiresUserAuthentication() const;
		JString toString() const;
	};
} // namespace android::security

