#pragma once

#include "../../JString.hpp"
#include "./KeyStoreException.def.hpp"

namespace android::security
{
	// Fields
	inline jint KeyStoreException::ERROR_ATTESTATION_CHALLENGE_TOO_LARGE()
	{
		return getStaticField<jint>(
			"android.security.KeyStoreException",
			"ERROR_ATTESTATION_CHALLENGE_TOO_LARGE"
		);
	}
	inline jint KeyStoreException::ERROR_ATTESTATION_KEYS_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.security.KeyStoreException",
			"ERROR_ATTESTATION_KEYS_UNAVAILABLE"
		);
	}
	inline jint KeyStoreException::ERROR_ID_ATTESTATION_FAILURE()
	{
		return getStaticField<jint>(
			"android.security.KeyStoreException",
			"ERROR_ID_ATTESTATION_FAILURE"
		);
	}
	inline jint KeyStoreException::ERROR_INCORRECT_USAGE()
	{
		return getStaticField<jint>(
			"android.security.KeyStoreException",
			"ERROR_INCORRECT_USAGE"
		);
	}
	inline jint KeyStoreException::ERROR_INTERNAL_SYSTEM_ERROR()
	{
		return getStaticField<jint>(
			"android.security.KeyStoreException",
			"ERROR_INTERNAL_SYSTEM_ERROR"
		);
	}
	inline jint KeyStoreException::ERROR_KEYMINT_FAILURE()
	{
		return getStaticField<jint>(
			"android.security.KeyStoreException",
			"ERROR_KEYMINT_FAILURE"
		);
	}
	inline jint KeyStoreException::ERROR_KEYSTORE_FAILURE()
	{
		return getStaticField<jint>(
			"android.security.KeyStoreException",
			"ERROR_KEYSTORE_FAILURE"
		);
	}
	inline jint KeyStoreException::ERROR_KEYSTORE_UNINITIALIZED()
	{
		return getStaticField<jint>(
			"android.security.KeyStoreException",
			"ERROR_KEYSTORE_UNINITIALIZED"
		);
	}
	inline jint KeyStoreException::ERROR_KEY_CORRUPTED()
	{
		return getStaticField<jint>(
			"android.security.KeyStoreException",
			"ERROR_KEY_CORRUPTED"
		);
	}
	inline jint KeyStoreException::ERROR_KEY_DOES_NOT_EXIST()
	{
		return getStaticField<jint>(
			"android.security.KeyStoreException",
			"ERROR_KEY_DOES_NOT_EXIST"
		);
	}
	inline jint KeyStoreException::ERROR_KEY_NOT_TEMPORALLY_VALID()
	{
		return getStaticField<jint>(
			"android.security.KeyStoreException",
			"ERROR_KEY_NOT_TEMPORALLY_VALID"
		);
	}
	inline jint KeyStoreException::ERROR_KEY_OPERATION_EXPIRED()
	{
		return getStaticField<jint>(
			"android.security.KeyStoreException",
			"ERROR_KEY_OPERATION_EXPIRED"
		);
	}
	inline jint KeyStoreException::ERROR_OTHER()
	{
		return getStaticField<jint>(
			"android.security.KeyStoreException",
			"ERROR_OTHER"
		);
	}
	inline jint KeyStoreException::ERROR_PERMISSION_DENIED()
	{
		return getStaticField<jint>(
			"android.security.KeyStoreException",
			"ERROR_PERMISSION_DENIED"
		);
	}
	inline jint KeyStoreException::ERROR_UNIMPLEMENTED()
	{
		return getStaticField<jint>(
			"android.security.KeyStoreException",
			"ERROR_UNIMPLEMENTED"
		);
	}
	inline jint KeyStoreException::ERROR_USER_AUTHENTICATION_REQUIRED()
	{
		return getStaticField<jint>(
			"android.security.KeyStoreException",
			"ERROR_USER_AUTHENTICATION_REQUIRED"
		);
	}
	inline jint KeyStoreException::RETRY_AFTER_NEXT_REBOOT()
	{
		return getStaticField<jint>(
			"android.security.KeyStoreException",
			"RETRY_AFTER_NEXT_REBOOT"
		);
	}
	inline jint KeyStoreException::RETRY_NEVER()
	{
		return getStaticField<jint>(
			"android.security.KeyStoreException",
			"RETRY_NEVER"
		);
	}
	inline jint KeyStoreException::RETRY_WHEN_CONNECTIVITY_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.security.KeyStoreException",
			"RETRY_WHEN_CONNECTIVITY_AVAILABLE"
		);
	}
	inline jint KeyStoreException::RETRY_WITH_EXPONENTIAL_BACKOFF()
	{
		return getStaticField<jint>(
			"android.security.KeyStoreException",
			"RETRY_WITH_EXPONENTIAL_BACKOFF"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint KeyStoreException::getNumericErrorCode() const
	{
		return callMethod<jint>(
			"getNumericErrorCode",
			"()I"
		);
	}
	inline jint KeyStoreException::getRetryPolicy() const
	{
		return callMethod<jint>(
			"getRetryPolicy",
			"()I"
		);
	}
	inline jboolean KeyStoreException::isSystemError() const
	{
		return callMethod<jboolean>(
			"isSystemError",
			"()Z"
		);
	}
	inline jboolean KeyStoreException::isTransientFailure() const
	{
		return callMethod<jboolean>(
			"isTransientFailure",
			"()Z"
		);
	}
	inline jboolean KeyStoreException::requiresUserAuthentication() const
	{
		return callMethod<jboolean>(
			"requiresUserAuthentication",
			"()Z"
		);
	}
	inline JString KeyStoreException::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::security

// Base class headers
#include "../../java/lang/Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::security;
#endif
