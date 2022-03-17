#pragma once

#include "./SecurityLog.def.hpp"

namespace android::app::admin
{
	// Fields
	inline jint SecurityLog::LEVEL_ERROR()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"LEVEL_ERROR"
		);
	}
	inline jint SecurityLog::LEVEL_INFO()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"LEVEL_INFO"
		);
	}
	inline jint SecurityLog::LEVEL_WARNING()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"LEVEL_WARNING"
		);
	}
	inline jint SecurityLog::TAG_ADB_SHELL_CMD()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_ADB_SHELL_CMD"
		);
	}
	inline jint SecurityLog::TAG_ADB_SHELL_INTERACTIVE()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_ADB_SHELL_INTERACTIVE"
		);
	}
	inline jint SecurityLog::TAG_APP_PROCESS_START()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_APP_PROCESS_START"
		);
	}
	inline jint SecurityLog::TAG_CAMERA_POLICY_SET()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_CAMERA_POLICY_SET"
		);
	}
	inline jint SecurityLog::TAG_CERT_AUTHORITY_INSTALLED()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_CERT_AUTHORITY_INSTALLED"
		);
	}
	inline jint SecurityLog::TAG_CERT_AUTHORITY_REMOVED()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_CERT_AUTHORITY_REMOVED"
		);
	}
	inline jint SecurityLog::TAG_CERT_VALIDATION_FAILURE()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_CERT_VALIDATION_FAILURE"
		);
	}
	inline jint SecurityLog::TAG_CRYPTO_SELF_TEST_COMPLETED()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_CRYPTO_SELF_TEST_COMPLETED"
		);
	}
	inline jint SecurityLog::TAG_KEYGUARD_DISABLED_FEATURES_SET()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_KEYGUARD_DISABLED_FEATURES_SET"
		);
	}
	inline jint SecurityLog::TAG_KEYGUARD_DISMISSED()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_KEYGUARD_DISMISSED"
		);
	}
	inline jint SecurityLog::TAG_KEYGUARD_DISMISS_AUTH_ATTEMPT()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_KEYGUARD_DISMISS_AUTH_ATTEMPT"
		);
	}
	inline jint SecurityLog::TAG_KEYGUARD_SECURED()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_KEYGUARD_SECURED"
		);
	}
	inline jint SecurityLog::TAG_KEY_DESTRUCTION()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_KEY_DESTRUCTION"
		);
	}
	inline jint SecurityLog::TAG_KEY_GENERATED()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_KEY_GENERATED"
		);
	}
	inline jint SecurityLog::TAG_KEY_IMPORT()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_KEY_IMPORT"
		);
	}
	inline jint SecurityLog::TAG_KEY_INTEGRITY_VIOLATION()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_KEY_INTEGRITY_VIOLATION"
		);
	}
	inline jint SecurityLog::TAG_LOGGING_STARTED()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_LOGGING_STARTED"
		);
	}
	inline jint SecurityLog::TAG_LOGGING_STOPPED()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_LOGGING_STOPPED"
		);
	}
	inline jint SecurityLog::TAG_LOG_BUFFER_SIZE_CRITICAL()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_LOG_BUFFER_SIZE_CRITICAL"
		);
	}
	inline jint SecurityLog::TAG_MAX_PASSWORD_ATTEMPTS_SET()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_MAX_PASSWORD_ATTEMPTS_SET"
		);
	}
	inline jint SecurityLog::TAG_MAX_SCREEN_LOCK_TIMEOUT_SET()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_MAX_SCREEN_LOCK_TIMEOUT_SET"
		);
	}
	inline jint SecurityLog::TAG_MEDIA_MOUNT()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_MEDIA_MOUNT"
		);
	}
	inline jint SecurityLog::TAG_MEDIA_UNMOUNT()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_MEDIA_UNMOUNT"
		);
	}
	inline jint SecurityLog::TAG_OS_SHUTDOWN()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_OS_SHUTDOWN"
		);
	}
	inline jint SecurityLog::TAG_OS_STARTUP()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_OS_STARTUP"
		);
	}
	inline jint SecurityLog::TAG_PASSWORD_COMPLEXITY_SET()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_PASSWORD_COMPLEXITY_SET"
		);
	}
	inline jint SecurityLog::TAG_PASSWORD_EXPIRATION_SET()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_PASSWORD_EXPIRATION_SET"
		);
	}
	inline jint SecurityLog::TAG_PASSWORD_HISTORY_LENGTH_SET()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_PASSWORD_HISTORY_LENGTH_SET"
		);
	}
	inline jint SecurityLog::TAG_REMOTE_LOCK()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_REMOTE_LOCK"
		);
	}
	inline jint SecurityLog::TAG_SYNC_RECV_FILE()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_SYNC_RECV_FILE"
		);
	}
	inline jint SecurityLog::TAG_SYNC_SEND_FILE()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_SYNC_SEND_FILE"
		);
	}
	inline jint SecurityLog::TAG_USER_RESTRICTION_ADDED()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_USER_RESTRICTION_ADDED"
		);
	}
	inline jint SecurityLog::TAG_USER_RESTRICTION_REMOVED()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_USER_RESTRICTION_REMOVED"
		);
	}
	inline jint SecurityLog::TAG_WIPE_FAILURE()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_WIPE_FAILURE"
		);
	}
	
	// Constructors
	inline SecurityLog::SecurityLog()
		: JObject(
			"android.app.admin.SecurityLog",
			"()V"
		) {}
	
	// Methods
} // namespace android::app::admin

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::admin;
#endif
