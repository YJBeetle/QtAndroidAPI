#include "./SecurityLog.hpp"

namespace android::app::admin
{
	// Fields
	jint SecurityLog::LEVEL_ERROR()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"LEVEL_ERROR"
		);
	}
	jint SecurityLog::LEVEL_INFO()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"LEVEL_INFO"
		);
	}
	jint SecurityLog::LEVEL_WARNING()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"LEVEL_WARNING"
		);
	}
	jint SecurityLog::TAG_ADB_SHELL_CMD()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_ADB_SHELL_CMD"
		);
	}
	jint SecurityLog::TAG_ADB_SHELL_INTERACTIVE()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_ADB_SHELL_INTERACTIVE"
		);
	}
	jint SecurityLog::TAG_APP_PROCESS_START()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_APP_PROCESS_START"
		);
	}
	jint SecurityLog::TAG_CAMERA_POLICY_SET()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_CAMERA_POLICY_SET"
		);
	}
	jint SecurityLog::TAG_CERT_AUTHORITY_INSTALLED()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_CERT_AUTHORITY_INSTALLED"
		);
	}
	jint SecurityLog::TAG_CERT_AUTHORITY_REMOVED()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_CERT_AUTHORITY_REMOVED"
		);
	}
	jint SecurityLog::TAG_CERT_VALIDATION_FAILURE()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_CERT_VALIDATION_FAILURE"
		);
	}
	jint SecurityLog::TAG_CRYPTO_SELF_TEST_COMPLETED()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_CRYPTO_SELF_TEST_COMPLETED"
		);
	}
	jint SecurityLog::TAG_KEYGUARD_DISABLED_FEATURES_SET()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_KEYGUARD_DISABLED_FEATURES_SET"
		);
	}
	jint SecurityLog::TAG_KEYGUARD_DISMISSED()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_KEYGUARD_DISMISSED"
		);
	}
	jint SecurityLog::TAG_KEYGUARD_DISMISS_AUTH_ATTEMPT()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_KEYGUARD_DISMISS_AUTH_ATTEMPT"
		);
	}
	jint SecurityLog::TAG_KEYGUARD_SECURED()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_KEYGUARD_SECURED"
		);
	}
	jint SecurityLog::TAG_KEY_DESTRUCTION()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_KEY_DESTRUCTION"
		);
	}
	jint SecurityLog::TAG_KEY_GENERATED()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_KEY_GENERATED"
		);
	}
	jint SecurityLog::TAG_KEY_IMPORT()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_KEY_IMPORT"
		);
	}
	jint SecurityLog::TAG_KEY_INTEGRITY_VIOLATION()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_KEY_INTEGRITY_VIOLATION"
		);
	}
	jint SecurityLog::TAG_LOGGING_STARTED()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_LOGGING_STARTED"
		);
	}
	jint SecurityLog::TAG_LOGGING_STOPPED()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_LOGGING_STOPPED"
		);
	}
	jint SecurityLog::TAG_LOG_BUFFER_SIZE_CRITICAL()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_LOG_BUFFER_SIZE_CRITICAL"
		);
	}
	jint SecurityLog::TAG_MAX_PASSWORD_ATTEMPTS_SET()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_MAX_PASSWORD_ATTEMPTS_SET"
		);
	}
	jint SecurityLog::TAG_MAX_SCREEN_LOCK_TIMEOUT_SET()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_MAX_SCREEN_LOCK_TIMEOUT_SET"
		);
	}
	jint SecurityLog::TAG_MEDIA_MOUNT()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_MEDIA_MOUNT"
		);
	}
	jint SecurityLog::TAG_MEDIA_UNMOUNT()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_MEDIA_UNMOUNT"
		);
	}
	jint SecurityLog::TAG_OS_SHUTDOWN()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_OS_SHUTDOWN"
		);
	}
	jint SecurityLog::TAG_OS_STARTUP()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_OS_STARTUP"
		);
	}
	jint SecurityLog::TAG_PASSWORD_COMPLEXITY_SET()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_PASSWORD_COMPLEXITY_SET"
		);
	}
	jint SecurityLog::TAG_PASSWORD_EXPIRATION_SET()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_PASSWORD_EXPIRATION_SET"
		);
	}
	jint SecurityLog::TAG_PASSWORD_HISTORY_LENGTH_SET()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_PASSWORD_HISTORY_LENGTH_SET"
		);
	}
	jint SecurityLog::TAG_REMOTE_LOCK()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_REMOTE_LOCK"
		);
	}
	jint SecurityLog::TAG_SYNC_RECV_FILE()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_SYNC_RECV_FILE"
		);
	}
	jint SecurityLog::TAG_SYNC_SEND_FILE()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_SYNC_SEND_FILE"
		);
	}
	jint SecurityLog::TAG_USER_RESTRICTION_ADDED()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_USER_RESTRICTION_ADDED"
		);
	}
	jint SecurityLog::TAG_USER_RESTRICTION_REMOVED()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_USER_RESTRICTION_REMOVED"
		);
	}
	jint SecurityLog::TAG_WIPE_FAILURE()
	{
		return getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_WIPE_FAILURE"
		);
	}
	
	// QJniObject forward
	SecurityLog::SecurityLog(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SecurityLog::SecurityLog()
		: JObject(
			"android.app.admin.SecurityLog",
			"()V"
		) {}
	
	// Methods
} // namespace android::app::admin

