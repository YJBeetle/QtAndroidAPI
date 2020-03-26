#pragma once

#ifndef ANDROID_APP_ADMIN_SECURITYLOG
#define ANDROID_APP_ADMIN_SECURITYLOG

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::app::admin
{
	class SecurityLog : public __JniBaseClass
	{
	public:
		// Fields
		static jint LEVEL_ERROR();
		static jint LEVEL_INFO();
		static jint LEVEL_WARNING();
		static jint TAG_ADB_SHELL_CMD();
		static jint TAG_ADB_SHELL_INTERACTIVE();
		static jint TAG_APP_PROCESS_START();
		static jint TAG_CERT_AUTHORITY_INSTALLED();
		static jint TAG_CERT_AUTHORITY_REMOVED();
		static jint TAG_CERT_VALIDATION_FAILURE();
		static jint TAG_CRYPTO_SELF_TEST_COMPLETED();
		static jint TAG_KEYGUARD_DISABLED_FEATURES_SET();
		static jint TAG_KEYGUARD_DISMISSED();
		static jint TAG_KEYGUARD_DISMISS_AUTH_ATTEMPT();
		static jint TAG_KEYGUARD_SECURED();
		static jint TAG_KEY_DESTRUCTION();
		static jint TAG_KEY_GENERATED();
		static jint TAG_KEY_IMPORT();
		static jint TAG_KEY_INTEGRITY_VIOLATION();
		static jint TAG_LOGGING_STARTED();
		static jint TAG_LOGGING_STOPPED();
		static jint TAG_LOG_BUFFER_SIZE_CRITICAL();
		static jint TAG_MAX_PASSWORD_ATTEMPTS_SET();
		static jint TAG_MAX_SCREEN_LOCK_TIMEOUT_SET();
		static jint TAG_MEDIA_MOUNT();
		static jint TAG_MEDIA_UNMOUNT();
		static jint TAG_OS_SHUTDOWN();
		static jint TAG_OS_STARTUP();
		static jint TAG_PASSWORD_COMPLEXITY_SET();
		static jint TAG_PASSWORD_EXPIRATION_SET();
		static jint TAG_PASSWORD_HISTORY_LENGTH_SET();
		static jint TAG_REMOTE_LOCK();
		static jint TAG_SYNC_RECV_FILE();
		static jint TAG_SYNC_SEND_FILE();
		static jint TAG_USER_RESTRICTION_ADDED();
		static jint TAG_USER_RESTRICTION_REMOVED();
		static jint TAG_WIPE_FAILURE();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::app::admin


namespace __jni_impl::android::app::admin
{
	// Fields
	jint SecurityLog::LEVEL_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"LEVEL_ERROR"
		);
	}
	jint SecurityLog::LEVEL_INFO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"LEVEL_INFO"
		);
	}
	jint SecurityLog::LEVEL_WARNING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"LEVEL_WARNING"
		);
	}
	jint SecurityLog::TAG_ADB_SHELL_CMD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_ADB_SHELL_CMD"
		);
	}
	jint SecurityLog::TAG_ADB_SHELL_INTERACTIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_ADB_SHELL_INTERACTIVE"
		);
	}
	jint SecurityLog::TAG_APP_PROCESS_START()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_APP_PROCESS_START"
		);
	}
	jint SecurityLog::TAG_CERT_AUTHORITY_INSTALLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_CERT_AUTHORITY_INSTALLED"
		);
	}
	jint SecurityLog::TAG_CERT_AUTHORITY_REMOVED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_CERT_AUTHORITY_REMOVED"
		);
	}
	jint SecurityLog::TAG_CERT_VALIDATION_FAILURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_CERT_VALIDATION_FAILURE"
		);
	}
	jint SecurityLog::TAG_CRYPTO_SELF_TEST_COMPLETED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_CRYPTO_SELF_TEST_COMPLETED"
		);
	}
	jint SecurityLog::TAG_KEYGUARD_DISABLED_FEATURES_SET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_KEYGUARD_DISABLED_FEATURES_SET"
		);
	}
	jint SecurityLog::TAG_KEYGUARD_DISMISSED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_KEYGUARD_DISMISSED"
		);
	}
	jint SecurityLog::TAG_KEYGUARD_DISMISS_AUTH_ATTEMPT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_KEYGUARD_DISMISS_AUTH_ATTEMPT"
		);
	}
	jint SecurityLog::TAG_KEYGUARD_SECURED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_KEYGUARD_SECURED"
		);
	}
	jint SecurityLog::TAG_KEY_DESTRUCTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_KEY_DESTRUCTION"
		);
	}
	jint SecurityLog::TAG_KEY_GENERATED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_KEY_GENERATED"
		);
	}
	jint SecurityLog::TAG_KEY_IMPORT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_KEY_IMPORT"
		);
	}
	jint SecurityLog::TAG_KEY_INTEGRITY_VIOLATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_KEY_INTEGRITY_VIOLATION"
		);
	}
	jint SecurityLog::TAG_LOGGING_STARTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_LOGGING_STARTED"
		);
	}
	jint SecurityLog::TAG_LOGGING_STOPPED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_LOGGING_STOPPED"
		);
	}
	jint SecurityLog::TAG_LOG_BUFFER_SIZE_CRITICAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_LOG_BUFFER_SIZE_CRITICAL"
		);
	}
	jint SecurityLog::TAG_MAX_PASSWORD_ATTEMPTS_SET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_MAX_PASSWORD_ATTEMPTS_SET"
		);
	}
	jint SecurityLog::TAG_MAX_SCREEN_LOCK_TIMEOUT_SET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_MAX_SCREEN_LOCK_TIMEOUT_SET"
		);
	}
	jint SecurityLog::TAG_MEDIA_MOUNT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_MEDIA_MOUNT"
		);
	}
	jint SecurityLog::TAG_MEDIA_UNMOUNT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_MEDIA_UNMOUNT"
		);
	}
	jint SecurityLog::TAG_OS_SHUTDOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_OS_SHUTDOWN"
		);
	}
	jint SecurityLog::TAG_OS_STARTUP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_OS_STARTUP"
		);
	}
	jint SecurityLog::TAG_PASSWORD_COMPLEXITY_SET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_PASSWORD_COMPLEXITY_SET"
		);
	}
	jint SecurityLog::TAG_PASSWORD_EXPIRATION_SET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_PASSWORD_EXPIRATION_SET"
		);
	}
	jint SecurityLog::TAG_PASSWORD_HISTORY_LENGTH_SET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_PASSWORD_HISTORY_LENGTH_SET"
		);
	}
	jint SecurityLog::TAG_REMOTE_LOCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_REMOTE_LOCK"
		);
	}
	jint SecurityLog::TAG_SYNC_RECV_FILE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_SYNC_RECV_FILE"
		);
	}
	jint SecurityLog::TAG_SYNC_SEND_FILE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_SYNC_SEND_FILE"
		);
	}
	jint SecurityLog::TAG_USER_RESTRICTION_ADDED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_USER_RESTRICTION_ADDED"
		);
	}
	jint SecurityLog::TAG_USER_RESTRICTION_REMOVED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_USER_RESTRICTION_REMOVED"
		);
	}
	jint SecurityLog::TAG_WIPE_FAILURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SecurityLog",
			"TAG_WIPE_FAILURE"
		);
	}
	
	// Constructors
	void SecurityLog::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.admin.SecurityLog",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android::app::admin

namespace android::app::admin
{
	class SecurityLog : public __jni_impl::android::app::admin::SecurityLog
	{
	public:
		SecurityLog(QAndroidJniObject obj) { __thiz = obj; }
		SecurityLog()
		{
			__constructor();
		}
	};
} // namespace android::app::admin

#endif // ANDROID_APP_ADMIN_SECURITYLOG

