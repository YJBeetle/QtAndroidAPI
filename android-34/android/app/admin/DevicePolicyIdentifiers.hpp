#pragma once

#include "../../../JString.hpp"
#include "./DevicePolicyIdentifiers.def.hpp"

namespace android::app::admin
{
	// Fields
	inline JString DevicePolicyIdentifiers::ACCOUNT_MANAGEMENT_DISABLED_POLICY()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyIdentifiers",
			"ACCOUNT_MANAGEMENT_DISABLED_POLICY",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyIdentifiers::APPLICATION_HIDDEN_POLICY()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyIdentifiers",
			"APPLICATION_HIDDEN_POLICY",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyIdentifiers::APPLICATION_RESTRICTIONS_POLICY()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyIdentifiers",
			"APPLICATION_RESTRICTIONS_POLICY",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyIdentifiers::AUTO_TIMEZONE_POLICY()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyIdentifiers",
			"AUTO_TIMEZONE_POLICY",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyIdentifiers::AUTO_TIME_POLICY()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyIdentifiers",
			"AUTO_TIME_POLICY",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyIdentifiers::BACKUP_SERVICE_POLICY()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyIdentifiers",
			"BACKUP_SERVICE_POLICY",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyIdentifiers::CAMERA_DISABLED_POLICY()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyIdentifiers",
			"CAMERA_DISABLED_POLICY",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyIdentifiers::KEYGUARD_DISABLED_FEATURES_POLICY()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyIdentifiers",
			"KEYGUARD_DISABLED_FEATURES_POLICY",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyIdentifiers::LOCK_TASK_POLICY()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyIdentifiers",
			"LOCK_TASK_POLICY",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyIdentifiers::PACKAGES_SUSPENDED_POLICY()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyIdentifiers",
			"PACKAGES_SUSPENDED_POLICY",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyIdentifiers::PACKAGE_UNINSTALL_BLOCKED_POLICY()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyIdentifiers",
			"PACKAGE_UNINSTALL_BLOCKED_POLICY",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyIdentifiers::PERMISSION_GRANT_POLICY()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyIdentifiers",
			"PERMISSION_GRANT_POLICY",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyIdentifiers::PERSISTENT_PREFERRED_ACTIVITY_POLICY()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyIdentifiers",
			"PERSISTENT_PREFERRED_ACTIVITY_POLICY",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyIdentifiers::RESET_PASSWORD_TOKEN_POLICY()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyIdentifiers",
			"RESET_PASSWORD_TOKEN_POLICY",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyIdentifiers::STATUS_BAR_DISABLED_POLICY()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyIdentifiers",
			"STATUS_BAR_DISABLED_POLICY",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyIdentifiers::USER_CONTROL_DISABLED_PACKAGES_POLICY()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyIdentifiers",
			"USER_CONTROL_DISABLED_PACKAGES_POLICY",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline JString DevicePolicyIdentifiers::getIdentifierForUserRestriction(JString arg0)
	{
		return callStaticObjectMethod(
			"android.app.admin.DevicePolicyIdentifiers",
			"getIdentifierForUserRestriction",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
} // namespace android::app::admin

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::admin;
#endif
