#pragma once

#include "../../../JObject.hpp"

namespace android::app::admin
{
	class SecurityLog : public JObject
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
		
		// QJniObject forward
		template<typename ...Ts> explicit SecurityLog(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SecurityLog(QJniObject obj);
		
		// Constructors
		SecurityLog();
		
		// Methods
	};
} // namespace android::app::admin

