#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::app::admin
{
	class DevicePolicyIdentifiers : public JObject
	{
	public:
		// Fields
		static JString ACCOUNT_MANAGEMENT_DISABLED_POLICY();
		static JString APPLICATION_HIDDEN_POLICY();
		static JString APPLICATION_RESTRICTIONS_POLICY();
		static JString AUTO_TIMEZONE_POLICY();
		static JString AUTO_TIME_POLICY();
		static JString BACKUP_SERVICE_POLICY();
		static JString CAMERA_DISABLED_POLICY();
		static JString KEYGUARD_DISABLED_FEATURES_POLICY();
		static JString LOCK_TASK_POLICY();
		static JString PACKAGES_SUSPENDED_POLICY();
		static JString PACKAGE_UNINSTALL_BLOCKED_POLICY();
		static JString PERMISSION_GRANT_POLICY();
		static JString PERSISTENT_PREFERRED_ACTIVITY_POLICY();
		static JString RESET_PASSWORD_TOKEN_POLICY();
		static JString STATUS_BAR_DISABLED_POLICY();
		static JString USER_CONTROL_DISABLED_PACKAGES_POLICY();
		
		// QJniObject forward
		template<typename ...Ts> explicit DevicePolicyIdentifiers(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DevicePolicyIdentifiers(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JString getIdentifierForUserRestriction(JString arg0);
	};
} // namespace android::app::admin

