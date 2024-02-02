#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "./DevicePolicyManager_InstallSystemUpdateCallback.def.hpp"
#include "./DevicePolicyResourcesManager.def.hpp"
#include "./FactoryResetProtectionPolicy.def.hpp"
#include "./ManagedSubscriptionsPolicy.def.hpp"
#include "./PackagePolicy.def.hpp"
#include "./SystemUpdateInfo.def.hpp"
#include "./SystemUpdatePolicy.def.hpp"
#include "./WifiSsidPolicy.def.hpp"
#include "../../content/ComponentName.def.hpp"
#include "../../content/Context_BindServiceFlags.def.hpp"
#include "../../content/Intent.def.hpp"
#include "../../content/IntentFilter.def.hpp"
#include "../../graphics/Bitmap.def.hpp"
#include "../../net/ProxyInfo.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../os/PersistableBundle.def.hpp"
#include "../../os/UserHandle.def.hpp"
#include "../../security/AttestedKeyPair.def.hpp"
#include "../../security/keystore/KeyGenParameterSpec.def.hpp"
#include "../../telephony/data/ApnSetting.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "../../../java/security/cert/Certificate.def.hpp"
#include "./DevicePolicyManager.def.hpp"

namespace android::app::admin
{
	// Fields
	inline JString DevicePolicyManager::ACTION_ADD_DEVICE_ADMIN()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_ADD_DEVICE_ADMIN",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::ACTION_ADMIN_POLICY_COMPLIANCE()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_ADMIN_POLICY_COMPLIANCE",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::ACTION_APPLICATION_DELEGATION_SCOPES_CHANGED()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_APPLICATION_DELEGATION_SCOPES_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::ACTION_CHECK_POLICY_COMPLIANCE()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_CHECK_POLICY_COMPLIANCE",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::ACTION_DEVICE_ADMIN_SERVICE()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_DEVICE_ADMIN_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::ACTION_DEVICE_FINANCING_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_DEVICE_FINANCING_STATE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::ACTION_DEVICE_OWNER_CHANGED()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_DEVICE_OWNER_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::ACTION_DEVICE_POLICY_RESOURCE_UPDATED()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_DEVICE_POLICY_RESOURCE_UPDATED",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::ACTION_GET_PROVISIONING_MODE()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_GET_PROVISIONING_MODE",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::ACTION_MANAGED_PROFILE_PROVISIONED()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_MANAGED_PROFILE_PROVISIONED",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::ACTION_PROFILE_OWNER_CHANGED()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_PROFILE_OWNER_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::ACTION_PROVISIONING_SUCCESSFUL()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_PROVISIONING_SUCCESSFUL",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::ACTION_PROVISION_MANAGED_DEVICE()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_PROVISION_MANAGED_DEVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::ACTION_PROVISION_MANAGED_PROFILE()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_PROVISION_MANAGED_PROFILE",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::ACTION_SET_NEW_PARENT_PROFILE_PASSWORD()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_SET_NEW_PARENT_PROFILE_PASSWORD",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::ACTION_SET_NEW_PASSWORD()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_SET_NEW_PASSWORD",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::ACTION_START_ENCRYPTION()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_START_ENCRYPTION",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::ACTION_SYSTEM_UPDATE_POLICY_CHANGED()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_SYSTEM_UPDATE_POLICY_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::DELEGATION_APP_RESTRICTIONS()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"DELEGATION_APP_RESTRICTIONS",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::DELEGATION_BLOCK_UNINSTALL()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"DELEGATION_BLOCK_UNINSTALL",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::DELEGATION_CERT_INSTALL()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"DELEGATION_CERT_INSTALL",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::DELEGATION_CERT_SELECTION()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"DELEGATION_CERT_SELECTION",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::DELEGATION_ENABLE_SYSTEM_APP()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"DELEGATION_ENABLE_SYSTEM_APP",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::DELEGATION_INSTALL_EXISTING_PACKAGE()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"DELEGATION_INSTALL_EXISTING_PACKAGE",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::DELEGATION_KEEP_UNINSTALLED_PACKAGES()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"DELEGATION_KEEP_UNINSTALLED_PACKAGES",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::DELEGATION_NETWORK_LOGGING()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"DELEGATION_NETWORK_LOGGING",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::DELEGATION_PACKAGE_ACCESS()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"DELEGATION_PACKAGE_ACCESS",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::DELEGATION_PERMISSION_GRANT()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"DELEGATION_PERMISSION_GRANT",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::DELEGATION_SECURITY_LOGGING()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"DELEGATION_SECURITY_LOGGING",
			"Ljava/lang/String;"
		);
	}
	inline jint DevicePolicyManager::ENCRYPTION_STATUS_ACTIVATING()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"ENCRYPTION_STATUS_ACTIVATING"
		);
	}
	inline jint DevicePolicyManager::ENCRYPTION_STATUS_ACTIVE()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"ENCRYPTION_STATUS_ACTIVE"
		);
	}
	inline jint DevicePolicyManager::ENCRYPTION_STATUS_ACTIVE_DEFAULT_KEY()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"ENCRYPTION_STATUS_ACTIVE_DEFAULT_KEY"
		);
	}
	inline jint DevicePolicyManager::ENCRYPTION_STATUS_ACTIVE_PER_USER()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"ENCRYPTION_STATUS_ACTIVE_PER_USER"
		);
	}
	inline jint DevicePolicyManager::ENCRYPTION_STATUS_INACTIVE()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"ENCRYPTION_STATUS_INACTIVE"
		);
	}
	inline jint DevicePolicyManager::ENCRYPTION_STATUS_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"ENCRYPTION_STATUS_UNSUPPORTED"
		);
	}
	inline JString DevicePolicyManager::EXTRA_ADD_EXPLANATION()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_ADD_EXPLANATION",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_DELEGATION_SCOPES()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_DELEGATION_SCOPES",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_DEVICE_ADMIN()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_DEVICE_ADMIN",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_DEVICE_PASSWORD_REQUIREMENT_ONLY()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_DEVICE_PASSWORD_REQUIREMENT_ONLY",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PASSWORD_COMPLEXITY()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PASSWORD_COMPLEXITY",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_ACCOUNT_TO_MIGRATE()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_ACCOUNT_TO_MIGRATE",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_ADMIN_EXTRAS_BUNDLE()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_ADMIN_EXTRAS_BUNDLE",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_ALLOWED_PROVISIONING_MODES()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_ALLOWED_PROVISIONING_MODES",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_ALLOW_OFFLINE()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_ALLOW_OFFLINE",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_DEVICE_ADMIN_COMPONENT_NAME()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_DEVICE_ADMIN_COMPONENT_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_DEVICE_ADMIN_MINIMUM_VERSION_CODE()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_DEVICE_ADMIN_MINIMUM_VERSION_CODE",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_CHECKSUM()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_CHECKSUM",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_DOWNLOAD_COOKIE_HEADER()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_DOWNLOAD_COOKIE_HEADER",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_DOWNLOAD_LOCATION()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_DOWNLOAD_LOCATION",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_NAME()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_DEVICE_ADMIN_SIGNATURE_CHECKSUM()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_DEVICE_ADMIN_SIGNATURE_CHECKSUM",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_DISCLAIMERS()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_DISCLAIMERS",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_DISCLAIMER_CONTENT()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_DISCLAIMER_CONTENT",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_DISCLAIMER_HEADER()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_DISCLAIMER_HEADER",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_EMAIL_ADDRESS()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_EMAIL_ADDRESS",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_IMEI()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_IMEI",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_KEEP_ACCOUNT_ON_MIGRATION()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_KEEP_ACCOUNT_ON_MIGRATION",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_KEEP_SCREEN_ON()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_KEEP_SCREEN_ON",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_LEAVE_ALL_SYSTEM_APPS_ENABLED()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_LEAVE_ALL_SYSTEM_APPS_ENABLED",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_LOCALE()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_LOCALE",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_LOCAL_TIME()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_LOCAL_TIME",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_LOGO_URI()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_LOGO_URI",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_MAIN_COLOR()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_MAIN_COLOR",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_MODE()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_MODE",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_SENSORS_PERMISSION_GRANT_OPT_OUT()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_SENSORS_PERMISSION_GRANT_OPT_OUT",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_SERIAL_NUMBER()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_SERIAL_NUMBER",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_SHOULD_LAUNCH_RESULT_INTENT()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_SHOULD_LAUNCH_RESULT_INTENT",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_SKIP_EDUCATION_SCREENS()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_SKIP_EDUCATION_SCREENS",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_SKIP_ENCRYPTION()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_SKIP_ENCRYPTION",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_SKIP_USER_CONSENT()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_SKIP_USER_CONSENT",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_TIME_ZONE()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_TIME_ZONE",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_USE_MOBILE_DATA()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_USE_MOBILE_DATA",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_WIFI_ANONYMOUS_IDENTITY()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_ANONYMOUS_IDENTITY",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_WIFI_CA_CERTIFICATE()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_CA_CERTIFICATE",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_WIFI_DOMAIN()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_DOMAIN",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_WIFI_EAP_METHOD()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_EAP_METHOD",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_WIFI_HIDDEN()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_HIDDEN",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_WIFI_IDENTITY()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_IDENTITY",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_WIFI_PAC_URL()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_PAC_URL",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_WIFI_PASSWORD()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_PASSWORD",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_WIFI_PHASE2_AUTH()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_PHASE2_AUTH",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_WIFI_PROXY_BYPASS()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_PROXY_BYPASS",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_WIFI_PROXY_HOST()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_PROXY_HOST",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_WIFI_PROXY_PORT()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_PROXY_PORT",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_WIFI_SECURITY_TYPE()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_SECURITY_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_WIFI_SSID()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_SSID",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_PROVISIONING_WIFI_USER_CERTIFICATE()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_USER_CERTIFICATE",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_RESOURCE_IDS()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_RESOURCE_IDS",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::EXTRA_RESOURCE_TYPE()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_RESOURCE_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline jint DevicePolicyManager::EXTRA_RESOURCE_TYPE_DRAWABLE()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_RESOURCE_TYPE_DRAWABLE"
		);
	}
	inline jint DevicePolicyManager::EXTRA_RESOURCE_TYPE_STRING()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_RESOURCE_TYPE_STRING"
		);
	}
	inline JString DevicePolicyManager::EXTRA_RESULT_LAUNCH_INTENT()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_RESULT_LAUNCH_INTENT",
			"Ljava/lang/String;"
		);
	}
	inline jint DevicePolicyManager::FLAG_EVICT_CREDENTIAL_ENCRYPTION_KEY()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"FLAG_EVICT_CREDENTIAL_ENCRYPTION_KEY"
		);
	}
	inline jint DevicePolicyManager::FLAG_MANAGED_CAN_ACCESS_PARENT()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"FLAG_MANAGED_CAN_ACCESS_PARENT"
		);
	}
	inline jint DevicePolicyManager::FLAG_PARENT_CAN_ACCESS_MANAGED()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"FLAG_PARENT_CAN_ACCESS_MANAGED"
		);
	}
	inline jint DevicePolicyManager::ID_TYPE_BASE_INFO()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"ID_TYPE_BASE_INFO"
		);
	}
	inline jint DevicePolicyManager::ID_TYPE_IMEI()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"ID_TYPE_IMEI"
		);
	}
	inline jint DevicePolicyManager::ID_TYPE_INDIVIDUAL_ATTESTATION()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"ID_TYPE_INDIVIDUAL_ATTESTATION"
		);
	}
	inline jint DevicePolicyManager::ID_TYPE_MEID()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"ID_TYPE_MEID"
		);
	}
	inline jint DevicePolicyManager::ID_TYPE_SERIAL()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"ID_TYPE_SERIAL"
		);
	}
	inline jint DevicePolicyManager::INSTALLKEY_REQUEST_CREDENTIALS_ACCESS()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"INSTALLKEY_REQUEST_CREDENTIALS_ACCESS"
		);
	}
	inline jint DevicePolicyManager::INSTALLKEY_SET_USER_SELECTABLE()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"INSTALLKEY_SET_USER_SELECTABLE"
		);
	}
	inline jint DevicePolicyManager::KEYGUARD_DISABLE_BIOMETRICS()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"KEYGUARD_DISABLE_BIOMETRICS"
		);
	}
	inline jint DevicePolicyManager::KEYGUARD_DISABLE_FACE()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"KEYGUARD_DISABLE_FACE"
		);
	}
	inline jint DevicePolicyManager::KEYGUARD_DISABLE_FEATURES_ALL()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"KEYGUARD_DISABLE_FEATURES_ALL"
		);
	}
	inline jint DevicePolicyManager::KEYGUARD_DISABLE_FEATURES_NONE()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"KEYGUARD_DISABLE_FEATURES_NONE"
		);
	}
	inline jint DevicePolicyManager::KEYGUARD_DISABLE_FINGERPRINT()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"KEYGUARD_DISABLE_FINGERPRINT"
		);
	}
	inline jint DevicePolicyManager::KEYGUARD_DISABLE_IRIS()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"KEYGUARD_DISABLE_IRIS"
		);
	}
	inline jint DevicePolicyManager::KEYGUARD_DISABLE_REMOTE_INPUT()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"KEYGUARD_DISABLE_REMOTE_INPUT"
		);
	}
	inline jint DevicePolicyManager::KEYGUARD_DISABLE_SECURE_CAMERA()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"KEYGUARD_DISABLE_SECURE_CAMERA"
		);
	}
	inline jint DevicePolicyManager::KEYGUARD_DISABLE_SECURE_NOTIFICATIONS()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"KEYGUARD_DISABLE_SECURE_NOTIFICATIONS"
		);
	}
	inline jint DevicePolicyManager::KEYGUARD_DISABLE_SHORTCUTS_ALL()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"KEYGUARD_DISABLE_SHORTCUTS_ALL"
		);
	}
	inline jint DevicePolicyManager::KEYGUARD_DISABLE_TRUST_AGENTS()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"KEYGUARD_DISABLE_TRUST_AGENTS"
		);
	}
	inline jint DevicePolicyManager::KEYGUARD_DISABLE_UNREDACTED_NOTIFICATIONS()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"KEYGUARD_DISABLE_UNREDACTED_NOTIFICATIONS"
		);
	}
	inline jint DevicePolicyManager::KEYGUARD_DISABLE_WIDGETS_ALL()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"KEYGUARD_DISABLE_WIDGETS_ALL"
		);
	}
	inline jint DevicePolicyManager::LEAVE_ALL_SYSTEM_APPS_ENABLED()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"LEAVE_ALL_SYSTEM_APPS_ENABLED"
		);
	}
	inline jint DevicePolicyManager::LOCK_TASK_FEATURE_BLOCK_ACTIVITY_START_IN_TASK()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"LOCK_TASK_FEATURE_BLOCK_ACTIVITY_START_IN_TASK"
		);
	}
	inline jint DevicePolicyManager::LOCK_TASK_FEATURE_GLOBAL_ACTIONS()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"LOCK_TASK_FEATURE_GLOBAL_ACTIONS"
		);
	}
	inline jint DevicePolicyManager::LOCK_TASK_FEATURE_HOME()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"LOCK_TASK_FEATURE_HOME"
		);
	}
	inline jint DevicePolicyManager::LOCK_TASK_FEATURE_KEYGUARD()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"LOCK_TASK_FEATURE_KEYGUARD"
		);
	}
	inline jint DevicePolicyManager::LOCK_TASK_FEATURE_NONE()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"LOCK_TASK_FEATURE_NONE"
		);
	}
	inline jint DevicePolicyManager::LOCK_TASK_FEATURE_NOTIFICATIONS()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"LOCK_TASK_FEATURE_NOTIFICATIONS"
		);
	}
	inline jint DevicePolicyManager::LOCK_TASK_FEATURE_OVERVIEW()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"LOCK_TASK_FEATURE_OVERVIEW"
		);
	}
	inline jint DevicePolicyManager::LOCK_TASK_FEATURE_SYSTEM_INFO()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"LOCK_TASK_FEATURE_SYSTEM_INFO"
		);
	}
	inline jint DevicePolicyManager::MAKE_USER_EPHEMERAL()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"MAKE_USER_EPHEMERAL"
		);
	}
	inline JString DevicePolicyManager::MIME_TYPE_PROVISIONING_NFC()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"MIME_TYPE_PROVISIONING_NFC",
			"Ljava/lang/String;"
		);
	}
	inline jint DevicePolicyManager::MTE_DISABLED()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"MTE_DISABLED"
		);
	}
	inline jint DevicePolicyManager::MTE_ENABLED()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"MTE_ENABLED"
		);
	}
	inline jint DevicePolicyManager::MTE_NOT_CONTROLLED_BY_POLICY()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"MTE_NOT_CONTROLLED_BY_POLICY"
		);
	}
	inline jint DevicePolicyManager::NEARBY_STREAMING_DISABLED()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"NEARBY_STREAMING_DISABLED"
		);
	}
	inline jint DevicePolicyManager::NEARBY_STREAMING_ENABLED()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"NEARBY_STREAMING_ENABLED"
		);
	}
	inline jint DevicePolicyManager::NEARBY_STREAMING_NOT_CONTROLLED_BY_POLICY()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"NEARBY_STREAMING_NOT_CONTROLLED_BY_POLICY"
		);
	}
	inline jint DevicePolicyManager::NEARBY_STREAMING_SAME_MANAGED_ACCOUNT_ONLY()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"NEARBY_STREAMING_SAME_MANAGED_ACCOUNT_ONLY"
		);
	}
	inline jint DevicePolicyManager::OPERATION_SAFETY_REASON_DRIVING_DISTRACTION()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"OPERATION_SAFETY_REASON_DRIVING_DISTRACTION"
		);
	}
	inline jint DevicePolicyManager::PASSWORD_COMPLEXITY_HIGH()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PASSWORD_COMPLEXITY_HIGH"
		);
	}
	inline jint DevicePolicyManager::PASSWORD_COMPLEXITY_LOW()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PASSWORD_COMPLEXITY_LOW"
		);
	}
	inline jint DevicePolicyManager::PASSWORD_COMPLEXITY_MEDIUM()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PASSWORD_COMPLEXITY_MEDIUM"
		);
	}
	inline jint DevicePolicyManager::PASSWORD_COMPLEXITY_NONE()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PASSWORD_COMPLEXITY_NONE"
		);
	}
	inline jint DevicePolicyManager::PASSWORD_QUALITY_ALPHABETIC()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PASSWORD_QUALITY_ALPHABETIC"
		);
	}
	inline jint DevicePolicyManager::PASSWORD_QUALITY_ALPHANUMERIC()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PASSWORD_QUALITY_ALPHANUMERIC"
		);
	}
	inline jint DevicePolicyManager::PASSWORD_QUALITY_BIOMETRIC_WEAK()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PASSWORD_QUALITY_BIOMETRIC_WEAK"
		);
	}
	inline jint DevicePolicyManager::PASSWORD_QUALITY_COMPLEX()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PASSWORD_QUALITY_COMPLEX"
		);
	}
	inline jint DevicePolicyManager::PASSWORD_QUALITY_NUMERIC()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PASSWORD_QUALITY_NUMERIC"
		);
	}
	inline jint DevicePolicyManager::PASSWORD_QUALITY_NUMERIC_COMPLEX()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PASSWORD_QUALITY_NUMERIC_COMPLEX"
		);
	}
	inline jint DevicePolicyManager::PASSWORD_QUALITY_SOMETHING()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PASSWORD_QUALITY_SOMETHING"
		);
	}
	inline jint DevicePolicyManager::PASSWORD_QUALITY_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PASSWORD_QUALITY_UNSPECIFIED"
		);
	}
	inline jint DevicePolicyManager::PERMISSION_GRANT_STATE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PERMISSION_GRANT_STATE_DEFAULT"
		);
	}
	inline jint DevicePolicyManager::PERMISSION_GRANT_STATE_DENIED()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PERMISSION_GRANT_STATE_DENIED"
		);
	}
	inline jint DevicePolicyManager::PERMISSION_GRANT_STATE_GRANTED()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PERMISSION_GRANT_STATE_GRANTED"
		);
	}
	inline jint DevicePolicyManager::PERMISSION_POLICY_AUTO_DENY()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PERMISSION_POLICY_AUTO_DENY"
		);
	}
	inline jint DevicePolicyManager::PERMISSION_POLICY_AUTO_GRANT()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PERMISSION_POLICY_AUTO_GRANT"
		);
	}
	inline jint DevicePolicyManager::PERMISSION_POLICY_PROMPT()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PERMISSION_POLICY_PROMPT"
		);
	}
	inline jint DevicePolicyManager::PERSONAL_APPS_NOT_SUSPENDED()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PERSONAL_APPS_NOT_SUSPENDED"
		);
	}
	inline jint DevicePolicyManager::PERSONAL_APPS_SUSPENDED_EXPLICITLY()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PERSONAL_APPS_SUSPENDED_EXPLICITLY"
		);
	}
	inline jint DevicePolicyManager::PERSONAL_APPS_SUSPENDED_PROFILE_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PERSONAL_APPS_SUSPENDED_PROFILE_TIMEOUT"
		);
	}
	inline JString DevicePolicyManager::POLICY_DISABLE_CAMERA()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"POLICY_DISABLE_CAMERA",
			"Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::POLICY_DISABLE_SCREEN_CAPTURE()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"POLICY_DISABLE_SCREEN_CAPTURE",
			"Ljava/lang/String;"
		);
	}
	inline jint DevicePolicyManager::PRIVATE_DNS_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PRIVATE_DNS_MODE_OFF"
		);
	}
	inline jint DevicePolicyManager::PRIVATE_DNS_MODE_OPPORTUNISTIC()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PRIVATE_DNS_MODE_OPPORTUNISTIC"
		);
	}
	inline jint DevicePolicyManager::PRIVATE_DNS_MODE_PROVIDER_HOSTNAME()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PRIVATE_DNS_MODE_PROVIDER_HOSTNAME"
		);
	}
	inline jint DevicePolicyManager::PRIVATE_DNS_MODE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PRIVATE_DNS_MODE_UNKNOWN"
		);
	}
	inline jint DevicePolicyManager::PRIVATE_DNS_SET_ERROR_FAILURE_SETTING()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PRIVATE_DNS_SET_ERROR_FAILURE_SETTING"
		);
	}
	inline jint DevicePolicyManager::PRIVATE_DNS_SET_ERROR_HOST_NOT_SERVING()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PRIVATE_DNS_SET_ERROR_HOST_NOT_SERVING"
		);
	}
	inline jint DevicePolicyManager::PRIVATE_DNS_SET_NO_ERROR()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PRIVATE_DNS_SET_NO_ERROR"
		);
	}
	inline jint DevicePolicyManager::PROVISIONING_MODE_FULLY_MANAGED_DEVICE()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PROVISIONING_MODE_FULLY_MANAGED_DEVICE"
		);
	}
	inline jint DevicePolicyManager::PROVISIONING_MODE_MANAGED_PROFILE()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PROVISIONING_MODE_MANAGED_PROFILE"
		);
	}
	inline jint DevicePolicyManager::PROVISIONING_MODE_MANAGED_PROFILE_ON_PERSONAL_DEVICE()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PROVISIONING_MODE_MANAGED_PROFILE_ON_PERSONAL_DEVICE"
		);
	}
	inline jint DevicePolicyManager::RESET_PASSWORD_DO_NOT_ASK_CREDENTIALS_ON_BOOT()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"RESET_PASSWORD_DO_NOT_ASK_CREDENTIALS_ON_BOOT"
		);
	}
	inline jint DevicePolicyManager::RESET_PASSWORD_REQUIRE_ENTRY()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"RESET_PASSWORD_REQUIRE_ENTRY"
		);
	}
	inline jint DevicePolicyManager::SKIP_SETUP_WIZARD()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"SKIP_SETUP_WIZARD"
		);
	}
	inline jint DevicePolicyManager::WIFI_SECURITY_ENTERPRISE_192()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"WIFI_SECURITY_ENTERPRISE_192"
		);
	}
	inline jint DevicePolicyManager::WIFI_SECURITY_ENTERPRISE_EAP()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"WIFI_SECURITY_ENTERPRISE_EAP"
		);
	}
	inline jint DevicePolicyManager::WIFI_SECURITY_OPEN()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"WIFI_SECURITY_OPEN"
		);
	}
	inline jint DevicePolicyManager::WIFI_SECURITY_PERSONAL()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"WIFI_SECURITY_PERSONAL"
		);
	}
	inline jint DevicePolicyManager::WIPE_EUICC()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"WIPE_EUICC"
		);
	}
	inline jint DevicePolicyManager::WIPE_EXTERNAL_STORAGE()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"WIPE_EXTERNAL_STORAGE"
		);
	}
	inline jint DevicePolicyManager::WIPE_RESET_PROTECTION_DATA()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"WIPE_RESET_PROTECTION_DATA"
		);
	}
	inline jint DevicePolicyManager::WIPE_SILENTLY()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"WIPE_SILENTLY"
		);
	}
	
	// Constructors
	
	// Methods
	inline void DevicePolicyManager::acknowledgeDeviceCompliant() const
	{
		callMethod<void>(
			"acknowledgeDeviceCompliant",
			"()V"
		);
	}
	inline void DevicePolicyManager::addCrossProfileIntentFilter(android::content::ComponentName arg0, android::content::IntentFilter arg1, jint arg2) const
	{
		callMethod<void>(
			"addCrossProfileIntentFilter",
			"(Landroid/content/ComponentName;Landroid/content/IntentFilter;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline jboolean DevicePolicyManager::addCrossProfileWidgetProvider(android::content::ComponentName arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"addCrossProfileWidgetProvider",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jint DevicePolicyManager::addOverrideApn(android::content::ComponentName arg0, android::telephony::data::ApnSetting arg1) const
	{
		return callMethod<jint>(
			"addOverrideApn",
			"(Landroid/content/ComponentName;Landroid/telephony/data/ApnSetting;)I",
			arg0.object(),
			arg1.object()
		);
	}
	inline void DevicePolicyManager::addPersistentPreferredActivity(android::content::ComponentName arg0, android::content::IntentFilter arg1, android::content::ComponentName arg2) const
	{
		callMethod<void>(
			"addPersistentPreferredActivity",
			"(Landroid/content/ComponentName;Landroid/content/IntentFilter;Landroid/content/ComponentName;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void DevicePolicyManager::addUserRestriction(android::content::ComponentName arg0, JString arg1) const
	{
		callMethod<void>(
			"addUserRestriction",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void DevicePolicyManager::addUserRestrictionGlobally(JString arg0) const
	{
		callMethod<void>(
			"addUserRestrictionGlobally",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline jboolean DevicePolicyManager::bindDeviceAdminServiceAsUser(android::content::ComponentName arg0, android::content::Intent arg1, JObject arg2, android::content::Context_BindServiceFlags arg3, android::os::UserHandle arg4) const
	{
		return callMethod<jboolean>(
			"bindDeviceAdminServiceAsUser",
			"(Landroid/content/ComponentName;Landroid/content/Intent;Landroid/content/ServiceConnection;Landroid/content/Context$BindServiceFlags;Landroid/os/UserHandle;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	inline jboolean DevicePolicyManager::bindDeviceAdminServiceAsUser(android::content::ComponentName arg0, android::content::Intent arg1, JObject arg2, jint arg3, android::os::UserHandle arg4) const
	{
		return callMethod<jboolean>(
			"bindDeviceAdminServiceAsUser",
			"(Landroid/content/ComponentName;Landroid/content/Intent;Landroid/content/ServiceConnection;ILandroid/os/UserHandle;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3,
			arg4.object()
		);
	}
	inline jboolean DevicePolicyManager::canAdminGrantSensorsPermissions() const
	{
		return callMethod<jboolean>(
			"canAdminGrantSensorsPermissions",
			"()Z"
		);
	}
	inline jboolean DevicePolicyManager::canUsbDataSignalingBeDisabled() const
	{
		return callMethod<jboolean>(
			"canUsbDataSignalingBeDisabled",
			"()Z"
		);
	}
	inline void DevicePolicyManager::clearApplicationUserData(android::content::ComponentName arg0, JString arg1, JObject arg2, JObject arg3) const
	{
		callMethod<void>(
			"clearApplicationUserData",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/util/concurrent/Executor;Landroid/app/admin/DevicePolicyManager$OnClearApplicationUserDataListener;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		);
	}
	inline void DevicePolicyManager::clearCrossProfileIntentFilters(android::content::ComponentName arg0) const
	{
		callMethod<void>(
			"clearCrossProfileIntentFilters",
			"(Landroid/content/ComponentName;)V",
			arg0.object()
		);
	}
	inline void DevicePolicyManager::clearDeviceOwnerApp(JString arg0) const
	{
		callMethod<void>(
			"clearDeviceOwnerApp",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DevicePolicyManager::clearPackagePersistentPreferredActivities(android::content::ComponentName arg0, JString arg1) const
	{
		callMethod<void>(
			"clearPackagePersistentPreferredActivities",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void DevicePolicyManager::clearProfileOwner(android::content::ComponentName arg0) const
	{
		callMethod<void>(
			"clearProfileOwner",
			"(Landroid/content/ComponentName;)V",
			arg0.object()
		);
	}
	inline jboolean DevicePolicyManager::clearResetPasswordToken(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"clearResetPasswordToken",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	inline void DevicePolicyManager::clearUserRestriction(android::content::ComponentName arg0, JString arg1) const
	{
		callMethod<void>(
			"clearUserRestriction",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::content::Intent DevicePolicyManager::createAdminSupportIntent(JString arg0) const
	{
		return callObjectMethod(
			"createAdminSupportIntent",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0.object<jstring>()
		);
	}
	inline android::os::UserHandle DevicePolicyManager::createAndManageUser(android::content::ComponentName arg0, JString arg1, android::content::ComponentName arg2, android::os::PersistableBundle arg3, jint arg4) const
	{
		return callObjectMethod(
			"createAndManageUser",
			"(Landroid/content/ComponentName;Ljava/lang/String;Landroid/content/ComponentName;Landroid/os/PersistableBundle;I)Landroid/os/UserHandle;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object(),
			arg4
		);
	}
	inline jint DevicePolicyManager::enableSystemApp(android::content::ComponentName arg0, android::content::Intent arg1) const
	{
		return callMethod<jint>(
			"enableSystemApp",
			"(Landroid/content/ComponentName;Landroid/content/Intent;)I",
			arg0.object(),
			arg1.object()
		);
	}
	inline void DevicePolicyManager::enableSystemApp(android::content::ComponentName arg0, JString arg1) const
	{
		callMethod<void>(
			"enableSystemApp",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::security::AttestedKeyPair DevicePolicyManager::generateKeyPair(android::content::ComponentName arg0, JString arg1, android::security::keystore::KeyGenParameterSpec arg2, jint arg3) const
	{
		return callObjectMethod(
			"generateKeyPair",
			"(Landroid/content/ComponentName;Ljava/lang/String;Landroid/security/keystore/KeyGenParameterSpec;I)Landroid/security/AttestedKeyPair;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3
		);
	}
	inline JArray DevicePolicyManager::getAccountTypesWithManagementDisabled() const
	{
		return callObjectMethod(
			"getAccountTypesWithManagementDisabled",
			"()[Ljava/lang/String;"
		);
	}
	inline JObject DevicePolicyManager::getActiveAdmins() const
	{
		return callObjectMethod(
			"getActiveAdmins",
			"()Ljava/util/List;"
		);
	}
	inline JObject DevicePolicyManager::getAffiliationIds(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getAffiliationIds",
			"(Landroid/content/ComponentName;)Ljava/util/Set;",
			arg0.object()
		);
	}
	inline JObject DevicePolicyManager::getAlwaysOnVpnLockdownWhitelist(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getAlwaysOnVpnLockdownWhitelist",
			"(Landroid/content/ComponentName;)Ljava/util/Set;",
			arg0.object()
		);
	}
	inline JString DevicePolicyManager::getAlwaysOnVpnPackage(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getAlwaysOnVpnPackage",
			"(Landroid/content/ComponentName;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline android::os::Bundle DevicePolicyManager::getApplicationRestrictions(android::content::ComponentName arg0, JString arg1) const
	{
		return callObjectMethod(
			"getApplicationRestrictions",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Landroid/os/Bundle;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline JString DevicePolicyManager::getApplicationRestrictionsManagingPackage(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getApplicationRestrictionsManagingPackage",
			"(Landroid/content/ComponentName;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline jboolean DevicePolicyManager::getAutoTimeEnabled(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"getAutoTimeEnabled",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	inline jboolean DevicePolicyManager::getAutoTimeRequired() const
	{
		return callMethod<jboolean>(
			"getAutoTimeRequired",
			"()Z"
		);
	}
	inline jboolean DevicePolicyManager::getAutoTimeZoneEnabled(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"getAutoTimeZoneEnabled",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	inline JObject DevicePolicyManager::getBindDeviceAdminTargetUsers(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getBindDeviceAdminTargetUsers",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.object()
		);
	}
	inline jboolean DevicePolicyManager::getBluetoothContactSharingDisabled(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"getBluetoothContactSharingDisabled",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	inline jboolean DevicePolicyManager::getCameraDisabled(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"getCameraDisabled",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	inline JString DevicePolicyManager::getCertInstallerPackage(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getCertInstallerPackage",
			"(Landroid/content/ComponentName;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline android::app::admin::PackagePolicy DevicePolicyManager::getCredentialManagerPolicy() const
	{
		return callObjectMethod(
			"getCredentialManagerPolicy",
			"()Landroid/app/admin/PackagePolicy;"
		);
	}
	inline JObject DevicePolicyManager::getCrossProfileCalendarPackages(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getCrossProfileCalendarPackages",
			"(Landroid/content/ComponentName;)Ljava/util/Set;",
			arg0.object()
		);
	}
	inline jboolean DevicePolicyManager::getCrossProfileCallerIdDisabled(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"getCrossProfileCallerIdDisabled",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	inline jboolean DevicePolicyManager::getCrossProfileContactsSearchDisabled(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"getCrossProfileContactsSearchDisabled",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	inline JObject DevicePolicyManager::getCrossProfilePackages(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getCrossProfilePackages",
			"(Landroid/content/ComponentName;)Ljava/util/Set;",
			arg0.object()
		);
	}
	inline JObject DevicePolicyManager::getCrossProfileWidgetProviders(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getCrossProfileWidgetProviders",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.object()
		);
	}
	inline jint DevicePolicyManager::getCurrentFailedPasswordAttempts() const
	{
		return callMethod<jint>(
			"getCurrentFailedPasswordAttempts",
			"()I"
		);
	}
	inline JObject DevicePolicyManager::getDelegatePackages(android::content::ComponentName arg0, JString arg1) const
	{
		return callObjectMethod(
			"getDelegatePackages",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Ljava/util/List;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline JObject DevicePolicyManager::getDelegatedScopes(android::content::ComponentName arg0, JString arg1) const
	{
		return callObjectMethod(
			"getDelegatedScopes",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Ljava/util/List;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline JString DevicePolicyManager::getDeviceOwnerLockScreenInfo() const
	{
		return callObjectMethod(
			"getDeviceOwnerLockScreenInfo",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString DevicePolicyManager::getDevicePolicyManagementRoleHolderPackage() const
	{
		return callObjectMethod(
			"getDevicePolicyManagementRoleHolderPackage",
			"()Ljava/lang/String;"
		);
	}
	inline JString DevicePolicyManager::getEndUserSessionMessage(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getEndUserSessionMessage",
			"(Landroid/content/ComponentName;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	inline JString DevicePolicyManager::getEnrollmentSpecificId() const
	{
		return callObjectMethod(
			"getEnrollmentSpecificId",
			"()Ljava/lang/String;"
		);
	}
	inline android::app::admin::FactoryResetProtectionPolicy DevicePolicyManager::getFactoryResetProtectionPolicy(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getFactoryResetProtectionPolicy",
			"(Landroid/content/ComponentName;)Landroid/app/admin/FactoryResetProtectionPolicy;",
			arg0.object()
		);
	}
	inline JString DevicePolicyManager::getGlobalPrivateDnsHost(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getGlobalPrivateDnsHost",
			"(Landroid/content/ComponentName;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline jint DevicePolicyManager::getGlobalPrivateDnsMode(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"getGlobalPrivateDnsMode",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	inline JObject DevicePolicyManager::getInstalledCaCerts(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getInstalledCaCerts",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.object()
		);
	}
	inline JObject DevicePolicyManager::getKeepUninstalledPackages(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getKeepUninstalledPackages",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.object()
		);
	}
	inline JObject DevicePolicyManager::getKeyPairGrants(JString arg0) const
	{
		return callObjectMethod(
			"getKeyPairGrants",
			"(Ljava/lang/String;)Ljava/util/Map;",
			arg0.object<jstring>()
		);
	}
	inline jint DevicePolicyManager::getKeyguardDisabledFeatures(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"getKeyguardDisabledFeatures",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	inline jint DevicePolicyManager::getLockTaskFeatures(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"getLockTaskFeatures",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	inline JArray DevicePolicyManager::getLockTaskPackages(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getLockTaskPackages",
			"(Landroid/content/ComponentName;)[Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString DevicePolicyManager::getLongSupportMessage(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getLongSupportMessage",
			"(Landroid/content/ComponentName;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	inline android::app::admin::PackagePolicy DevicePolicyManager::getManagedProfileCallerIdAccessPolicy() const
	{
		return callObjectMethod(
			"getManagedProfileCallerIdAccessPolicy",
			"()Landroid/app/admin/PackagePolicy;"
		);
	}
	inline android::app::admin::PackagePolicy DevicePolicyManager::getManagedProfileContactsAccessPolicy() const
	{
		return callObjectMethod(
			"getManagedProfileContactsAccessPolicy",
			"()Landroid/app/admin/PackagePolicy;"
		);
	}
	inline jlong DevicePolicyManager::getManagedProfileMaximumTimeOff(android::content::ComponentName arg0) const
	{
		return callMethod<jlong>(
			"getManagedProfileMaximumTimeOff",
			"(Landroid/content/ComponentName;)J",
			arg0.object()
		);
	}
	inline android::app::admin::ManagedSubscriptionsPolicy DevicePolicyManager::getManagedSubscriptionsPolicy() const
	{
		return callObjectMethod(
			"getManagedSubscriptionsPolicy",
			"()Landroid/app/admin/ManagedSubscriptionsPolicy;"
		);
	}
	inline jint DevicePolicyManager::getMaximumFailedPasswordsForWipe(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"getMaximumFailedPasswordsForWipe",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	inline jlong DevicePolicyManager::getMaximumTimeToLock(android::content::ComponentName arg0) const
	{
		return callMethod<jlong>(
			"getMaximumTimeToLock",
			"(Landroid/content/ComponentName;)J",
			arg0.object()
		);
	}
	inline JObject DevicePolicyManager::getMeteredDataDisabledPackages(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getMeteredDataDisabledPackages",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.object()
		);
	}
	inline jint DevicePolicyManager::getMinimumRequiredWifiSecurityLevel() const
	{
		return callMethod<jint>(
			"getMinimumRequiredWifiSecurityLevel",
			"()I"
		);
	}
	inline jint DevicePolicyManager::getMtePolicy() const
	{
		return callMethod<jint>(
			"getMtePolicy",
			"()I"
		);
	}
	inline jint DevicePolicyManager::getNearbyAppStreamingPolicy() const
	{
		return callMethod<jint>(
			"getNearbyAppStreamingPolicy",
			"()I"
		);
	}
	inline jint DevicePolicyManager::getNearbyNotificationStreamingPolicy() const
	{
		return callMethod<jint>(
			"getNearbyNotificationStreamingPolicy",
			"()I"
		);
	}
	inline jint DevicePolicyManager::getOrganizationColor(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"getOrganizationColor",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	inline JString DevicePolicyManager::getOrganizationName(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getOrganizationName",
			"(Landroid/content/ComponentName;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	inline JObject DevicePolicyManager::getOverrideApns(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getOverrideApns",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.object()
		);
	}
	inline android::app::admin::DevicePolicyManager DevicePolicyManager::getParentProfileInstance(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getParentProfileInstance",
			"(Landroid/content/ComponentName;)Landroid/app/admin/DevicePolicyManager;",
			arg0.object()
		);
	}
	inline jint DevicePolicyManager::getPasswordComplexity() const
	{
		return callMethod<jint>(
			"getPasswordComplexity",
			"()I"
		);
	}
	inline jlong DevicePolicyManager::getPasswordExpiration(android::content::ComponentName arg0) const
	{
		return callMethod<jlong>(
			"getPasswordExpiration",
			"(Landroid/content/ComponentName;)J",
			arg0.object()
		);
	}
	inline jlong DevicePolicyManager::getPasswordExpirationTimeout(android::content::ComponentName arg0) const
	{
		return callMethod<jlong>(
			"getPasswordExpirationTimeout",
			"(Landroid/content/ComponentName;)J",
			arg0.object()
		);
	}
	inline jint DevicePolicyManager::getPasswordHistoryLength(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"getPasswordHistoryLength",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	inline jint DevicePolicyManager::getPasswordMaximumLength(jint arg0) const
	{
		return callMethod<jint>(
			"getPasswordMaximumLength",
			"(I)I",
			arg0
		);
	}
	inline jint DevicePolicyManager::getPasswordMinimumLength(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"getPasswordMinimumLength",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	inline jint DevicePolicyManager::getPasswordMinimumLetters(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"getPasswordMinimumLetters",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	inline jint DevicePolicyManager::getPasswordMinimumLowerCase(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"getPasswordMinimumLowerCase",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	inline jint DevicePolicyManager::getPasswordMinimumNonLetter(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"getPasswordMinimumNonLetter",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	inline jint DevicePolicyManager::getPasswordMinimumNumeric(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"getPasswordMinimumNumeric",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	inline jint DevicePolicyManager::getPasswordMinimumSymbols(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"getPasswordMinimumSymbols",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	inline jint DevicePolicyManager::getPasswordMinimumUpperCase(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"getPasswordMinimumUpperCase",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	inline jint DevicePolicyManager::getPasswordQuality(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"getPasswordQuality",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	inline android::app::admin::SystemUpdateInfo DevicePolicyManager::getPendingSystemUpdate(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getPendingSystemUpdate",
			"(Landroid/content/ComponentName;)Landroid/app/admin/SystemUpdateInfo;",
			arg0.object()
		);
	}
	inline jint DevicePolicyManager::getPermissionGrantState(android::content::ComponentName arg0, JString arg1, JString arg2) const
	{
		return callMethod<jint>(
			"getPermissionGrantState",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/lang/String;)I",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline jint DevicePolicyManager::getPermissionPolicy(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"getPermissionPolicy",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	inline JObject DevicePolicyManager::getPermittedAccessibilityServices(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getPermittedAccessibilityServices",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.object()
		);
	}
	inline JObject DevicePolicyManager::getPermittedCrossProfileNotificationListeners(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getPermittedCrossProfileNotificationListeners",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.object()
		);
	}
	inline JObject DevicePolicyManager::getPermittedInputMethods(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getPermittedInputMethods",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.object()
		);
	}
	inline jint DevicePolicyManager::getPersonalAppsSuspendedReasons(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"getPersonalAppsSuspendedReasons",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	inline JObject DevicePolicyManager::getPreferentialNetworkServiceConfigs() const
	{
		return callObjectMethod(
			"getPreferentialNetworkServiceConfigs",
			"()Ljava/util/List;"
		);
	}
	inline jint DevicePolicyManager::getRequiredPasswordComplexity() const
	{
		return callMethod<jint>(
			"getRequiredPasswordComplexity",
			"()I"
		);
	}
	inline jlong DevicePolicyManager::getRequiredStrongAuthTimeout(android::content::ComponentName arg0) const
	{
		return callMethod<jlong>(
			"getRequiredStrongAuthTimeout",
			"(Landroid/content/ComponentName;)J",
			arg0.object()
		);
	}
	inline android::app::admin::DevicePolicyResourcesManager DevicePolicyManager::getResources() const
	{
		return callObjectMethod(
			"getResources",
			"()Landroid/app/admin/DevicePolicyResourcesManager;"
		);
	}
	inline jboolean DevicePolicyManager::getScreenCaptureDisabled(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"getScreenCaptureDisabled",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	inline JObject DevicePolicyManager::getSecondaryUsers(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getSecondaryUsers",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.object()
		);
	}
	inline JString DevicePolicyManager::getShortSupportMessage(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getShortSupportMessage",
			"(Landroid/content/ComponentName;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	inline JString DevicePolicyManager::getStartUserSessionMessage(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getStartUserSessionMessage",
			"(Landroid/content/ComponentName;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	inline jboolean DevicePolicyManager::getStorageEncryption(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"getStorageEncryption",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	inline jint DevicePolicyManager::getStorageEncryptionStatus() const
	{
		return callMethod<jint>(
			"getStorageEncryptionStatus",
			"()I"
		);
	}
	inline android::app::admin::SystemUpdatePolicy DevicePolicyManager::getSystemUpdatePolicy() const
	{
		return callObjectMethod(
			"getSystemUpdatePolicy",
			"()Landroid/app/admin/SystemUpdatePolicy;"
		);
	}
	inline android::os::PersistableBundle DevicePolicyManager::getTransferOwnershipBundle() const
	{
		return callObjectMethod(
			"getTransferOwnershipBundle",
			"()Landroid/os/PersistableBundle;"
		);
	}
	inline JObject DevicePolicyManager::getTrustAgentConfiguration(android::content::ComponentName arg0, android::content::ComponentName arg1) const
	{
		return callObjectMethod(
			"getTrustAgentConfiguration",
			"(Landroid/content/ComponentName;Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject DevicePolicyManager::getUserControlDisabledPackages(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getUserControlDisabledPackages",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.object()
		);
	}
	inline android::os::Bundle DevicePolicyManager::getUserRestrictions(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getUserRestrictions",
			"(Landroid/content/ComponentName;)Landroid/os/Bundle;",
			arg0.object()
		);
	}
	inline android::os::Bundle DevicePolicyManager::getUserRestrictionsGlobally() const
	{
		return callObjectMethod(
			"getUserRestrictionsGlobally",
			"()Landroid/os/Bundle;"
		);
	}
	inline JString DevicePolicyManager::getWifiMacAddress(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getWifiMacAddress",
			"(Landroid/content/ComponentName;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline android::app::admin::WifiSsidPolicy DevicePolicyManager::getWifiSsidPolicy() const
	{
		return callObjectMethod(
			"getWifiSsidPolicy",
			"()Landroid/app/admin/WifiSsidPolicy;"
		);
	}
	inline jboolean DevicePolicyManager::grantKeyPairToApp(android::content::ComponentName arg0, JString arg1, JString arg2) const
	{
		return callMethod<jboolean>(
			"grantKeyPairToApp",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline jboolean DevicePolicyManager::grantKeyPairToWifiAuth(JString arg0) const
	{
		return callMethod<jboolean>(
			"grantKeyPairToWifiAuth",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean DevicePolicyManager::hasCaCertInstalled(android::content::ComponentName arg0, JByteArray arg1) const
	{
		return callMethod<jboolean>(
			"hasCaCertInstalled",
			"(Landroid/content/ComponentName;[B)Z",
			arg0.object(),
			arg1.object<jbyteArray>()
		);
	}
	inline jboolean DevicePolicyManager::hasGrantedPolicy(android::content::ComponentName arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"hasGrantedPolicy",
			"(Landroid/content/ComponentName;I)Z",
			arg0.object(),
			arg1
		);
	}
	inline jboolean DevicePolicyManager::hasKeyPair(JString arg0) const
	{
		return callMethod<jboolean>(
			"hasKeyPair",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean DevicePolicyManager::hasLockdownAdminConfiguredNetworks(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"hasLockdownAdminConfiguredNetworks",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	inline jboolean DevicePolicyManager::installCaCert(android::content::ComponentName arg0, JByteArray arg1) const
	{
		return callMethod<jboolean>(
			"installCaCert",
			"(Landroid/content/ComponentName;[B)Z",
			arg0.object(),
			arg1.object<jbyteArray>()
		);
	}
	inline jboolean DevicePolicyManager::installExistingPackage(android::content::ComponentName arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"installExistingPackage",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jboolean DevicePolicyManager::installKeyPair(android::content::ComponentName arg0, JObject arg1, java::security::cert::Certificate arg2, JString arg3) const
	{
		return callMethod<jboolean>(
			"installKeyPair",
			"(Landroid/content/ComponentName;Ljava/security/PrivateKey;Ljava/security/cert/Certificate;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object<jstring>()
		);
	}
	inline jboolean DevicePolicyManager::installKeyPair(android::content::ComponentName arg0, JObject arg1, JArray arg2, JString arg3, jboolean arg4) const
	{
		return callMethod<jboolean>(
			"installKeyPair",
			"(Landroid/content/ComponentName;Ljava/security/PrivateKey;[Ljava/security/cert/Certificate;Ljava/lang/String;Z)Z",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>(),
			arg3.object<jstring>(),
			arg4
		);
	}
	inline jboolean DevicePolicyManager::installKeyPair(android::content::ComponentName arg0, JObject arg1, JArray arg2, JString arg3, jint arg4) const
	{
		return callMethod<jboolean>(
			"installKeyPair",
			"(Landroid/content/ComponentName;Ljava/security/PrivateKey;[Ljava/security/cert/Certificate;Ljava/lang/String;I)Z",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>(),
			arg3.object<jstring>(),
			arg4
		);
	}
	inline void DevicePolicyManager::installSystemUpdate(android::content::ComponentName arg0, android::net::Uri arg1, JObject arg2, android::app::admin::DevicePolicyManager_InstallSystemUpdateCallback arg3) const
	{
		callMethod<void>(
			"installSystemUpdate",
			"(Landroid/content/ComponentName;Landroid/net/Uri;Ljava/util/concurrent/Executor;Landroid/app/admin/DevicePolicyManager$InstallSystemUpdateCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline jboolean DevicePolicyManager::isActivePasswordSufficient() const
	{
		return callMethod<jboolean>(
			"isActivePasswordSufficient",
			"()Z"
		);
	}
	inline jboolean DevicePolicyManager::isActivePasswordSufficientForDeviceRequirement() const
	{
		return callMethod<jboolean>(
			"isActivePasswordSufficientForDeviceRequirement",
			"()Z"
		);
	}
	inline jboolean DevicePolicyManager::isAdminActive(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"isAdminActive",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	inline jboolean DevicePolicyManager::isAffiliatedUser() const
	{
		return callMethod<jboolean>(
			"isAffiliatedUser",
			"()Z"
		);
	}
	inline jboolean DevicePolicyManager::isAlwaysOnVpnLockdownEnabled(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"isAlwaysOnVpnLockdownEnabled",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	inline jboolean DevicePolicyManager::isApplicationHidden(android::content::ComponentName arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"isApplicationHidden",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jboolean DevicePolicyManager::isBackupServiceEnabled(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"isBackupServiceEnabled",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	inline jboolean DevicePolicyManager::isCallerApplicationRestrictionsManagingPackage() const
	{
		return callMethod<jboolean>(
			"isCallerApplicationRestrictionsManagingPackage",
			"()Z"
		);
	}
	inline jboolean DevicePolicyManager::isCommonCriteriaModeEnabled(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"isCommonCriteriaModeEnabled",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	inline jboolean DevicePolicyManager::isComplianceAcknowledgementRequired() const
	{
		return callMethod<jboolean>(
			"isComplianceAcknowledgementRequired",
			"()Z"
		);
	}
	inline jboolean DevicePolicyManager::isDeviceFinanced() const
	{
		return callMethod<jboolean>(
			"isDeviceFinanced",
			"()Z"
		);
	}
	inline jboolean DevicePolicyManager::isDeviceIdAttestationSupported() const
	{
		return callMethod<jboolean>(
			"isDeviceIdAttestationSupported",
			"()Z"
		);
	}
	inline jboolean DevicePolicyManager::isDeviceOwnerApp(JString arg0) const
	{
		return callMethod<jboolean>(
			"isDeviceOwnerApp",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean DevicePolicyManager::isEphemeralUser(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"isEphemeralUser",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	inline jboolean DevicePolicyManager::isKeyPairGrantedToWifiAuth(JString arg0) const
	{
		return callMethod<jboolean>(
			"isKeyPairGrantedToWifiAuth",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean DevicePolicyManager::isLockTaskPermitted(JString arg0) const
	{
		return callMethod<jboolean>(
			"isLockTaskPermitted",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean DevicePolicyManager::isLogoutEnabled() const
	{
		return callMethod<jboolean>(
			"isLogoutEnabled",
			"()Z"
		);
	}
	inline jboolean DevicePolicyManager::isManagedProfile(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"isManagedProfile",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	inline jboolean DevicePolicyManager::isMasterVolumeMuted(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"isMasterVolumeMuted",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	inline jboolean DevicePolicyManager::isNetworkLoggingEnabled(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"isNetworkLoggingEnabled",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	inline jboolean DevicePolicyManager::isOrganizationOwnedDeviceWithManagedProfile() const
	{
		return callMethod<jboolean>(
			"isOrganizationOwnedDeviceWithManagedProfile",
			"()Z"
		);
	}
	inline jboolean DevicePolicyManager::isOverrideApnEnabled(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"isOverrideApnEnabled",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	inline jboolean DevicePolicyManager::isPackageSuspended(android::content::ComponentName arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"isPackageSuspended",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jboolean DevicePolicyManager::isPreferentialNetworkServiceEnabled() const
	{
		return callMethod<jboolean>(
			"isPreferentialNetworkServiceEnabled",
			"()Z"
		);
	}
	inline jboolean DevicePolicyManager::isProfileOwnerApp(JString arg0) const
	{
		return callMethod<jboolean>(
			"isProfileOwnerApp",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean DevicePolicyManager::isProvisioningAllowed(JString arg0) const
	{
		return callMethod<jboolean>(
			"isProvisioningAllowed",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean DevicePolicyManager::isResetPasswordTokenActive(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"isResetPasswordTokenActive",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	inline jboolean DevicePolicyManager::isSafeOperation(jint arg0) const
	{
		return callMethod<jboolean>(
			"isSafeOperation",
			"(I)Z",
			arg0
		);
	}
	inline jboolean DevicePolicyManager::isSecurityLoggingEnabled(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"isSecurityLoggingEnabled",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	inline jboolean DevicePolicyManager::isStatusBarDisabled() const
	{
		return callMethod<jboolean>(
			"isStatusBarDisabled",
			"()Z"
		);
	}
	inline jboolean DevicePolicyManager::isUninstallBlocked(android::content::ComponentName arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"isUninstallBlocked",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jboolean DevicePolicyManager::isUniqueDeviceAttestationSupported() const
	{
		return callMethod<jboolean>(
			"isUniqueDeviceAttestationSupported",
			"()Z"
		);
	}
	inline jboolean DevicePolicyManager::isUsbDataSignalingEnabled() const
	{
		return callMethod<jboolean>(
			"isUsbDataSignalingEnabled",
			"()Z"
		);
	}
	inline jboolean DevicePolicyManager::isUsingUnifiedPassword(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"isUsingUnifiedPassword",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	inline JObject DevicePolicyManager::listForegroundAffiliatedUsers() const
	{
		return callObjectMethod(
			"listForegroundAffiliatedUsers",
			"()Ljava/util/List;"
		);
	}
	inline void DevicePolicyManager::lockNow() const
	{
		callMethod<void>(
			"lockNow",
			"()V"
		);
	}
	inline void DevicePolicyManager::lockNow(jint arg0) const
	{
		callMethod<void>(
			"lockNow",
			"(I)V",
			arg0
		);
	}
	inline jint DevicePolicyManager::logoutUser(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"logoutUser",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	inline void DevicePolicyManager::reboot(android::content::ComponentName arg0) const
	{
		callMethod<void>(
			"reboot",
			"(Landroid/content/ComponentName;)V",
			arg0.object()
		);
	}
	inline void DevicePolicyManager::removeActiveAdmin(android::content::ComponentName arg0) const
	{
		callMethod<void>(
			"removeActiveAdmin",
			"(Landroid/content/ComponentName;)V",
			arg0.object()
		);
	}
	inline jboolean DevicePolicyManager::removeCrossProfileWidgetProvider(android::content::ComponentName arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"removeCrossProfileWidgetProvider",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jboolean DevicePolicyManager::removeKeyPair(android::content::ComponentName arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"removeKeyPair",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jboolean DevicePolicyManager::removeOverrideApn(android::content::ComponentName arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"removeOverrideApn",
			"(Landroid/content/ComponentName;I)Z",
			arg0.object(),
			arg1
		);
	}
	inline jboolean DevicePolicyManager::removeUser(android::content::ComponentName arg0, android::os::UserHandle arg1) const
	{
		return callMethod<jboolean>(
			"removeUser",
			"(Landroid/content/ComponentName;Landroid/os/UserHandle;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean DevicePolicyManager::requestBugreport(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"requestBugreport",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	inline jboolean DevicePolicyManager::resetPassword(JString arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"resetPassword",
			"(Ljava/lang/String;I)Z",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jboolean DevicePolicyManager::resetPasswordWithToken(android::content::ComponentName arg0, JString arg1, JByteArray arg2, jint arg3) const
	{
		return callMethod<jboolean>(
			"resetPasswordWithToken",
			"(Landroid/content/ComponentName;Ljava/lang/String;[BI)Z",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jbyteArray>(),
			arg3
		);
	}
	inline JObject DevicePolicyManager::retrieveNetworkLogs(android::content::ComponentName arg0, jlong arg1) const
	{
		return callObjectMethod(
			"retrieveNetworkLogs",
			"(Landroid/content/ComponentName;J)Ljava/util/List;",
			arg0.object(),
			arg1
		);
	}
	inline JObject DevicePolicyManager::retrievePreRebootSecurityLogs(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"retrievePreRebootSecurityLogs",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.object()
		);
	}
	inline JObject DevicePolicyManager::retrieveSecurityLogs(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"retrieveSecurityLogs",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.object()
		);
	}
	inline jboolean DevicePolicyManager::revokeKeyPairFromApp(android::content::ComponentName arg0, JString arg1, JString arg2) const
	{
		return callMethod<jboolean>(
			"revokeKeyPairFromApp",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline jboolean DevicePolicyManager::revokeKeyPairFromWifiAuth(JString arg0) const
	{
		return callMethod<jboolean>(
			"revokeKeyPairFromWifiAuth",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline void DevicePolicyManager::setAccountManagementDisabled(android::content::ComponentName arg0, JString arg1, jboolean arg2) const
	{
		callMethod<void>(
			"setAccountManagementDisabled",
			"(Landroid/content/ComponentName;Ljava/lang/String;Z)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline void DevicePolicyManager::setAffiliationIds(android::content::ComponentName arg0, JObject arg1) const
	{
		callMethod<void>(
			"setAffiliationIds",
			"(Landroid/content/ComponentName;Ljava/util/Set;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void DevicePolicyManager::setAlwaysOnVpnPackage(android::content::ComponentName arg0, JString arg1, jboolean arg2) const
	{
		callMethod<void>(
			"setAlwaysOnVpnPackage",
			"(Landroid/content/ComponentName;Ljava/lang/String;Z)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline void DevicePolicyManager::setAlwaysOnVpnPackage(android::content::ComponentName arg0, JString arg1, jboolean arg2, JObject arg3) const
	{
		callMethod<void>(
			"setAlwaysOnVpnPackage",
			"(Landroid/content/ComponentName;Ljava/lang/String;ZLjava/util/Set;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2,
			arg3.object()
		);
	}
	inline jboolean DevicePolicyManager::setApplicationHidden(android::content::ComponentName arg0, JString arg1, jboolean arg2) const
	{
		return callMethod<jboolean>(
			"setApplicationHidden",
			"(Landroid/content/ComponentName;Ljava/lang/String;Z)Z",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline void DevicePolicyManager::setApplicationRestrictions(android::content::ComponentName arg0, JString arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"setApplicationRestrictions",
			"(Landroid/content/ComponentName;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void DevicePolicyManager::setApplicationRestrictionsManagingPackage(android::content::ComponentName arg0, JString arg1) const
	{
		callMethod<void>(
			"setApplicationRestrictionsManagingPackage",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void DevicePolicyManager::setAutoTimeEnabled(android::content::ComponentName arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setAutoTimeEnabled",
			"(Landroid/content/ComponentName;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void DevicePolicyManager::setAutoTimeRequired(android::content::ComponentName arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setAutoTimeRequired",
			"(Landroid/content/ComponentName;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void DevicePolicyManager::setAutoTimeZoneEnabled(android::content::ComponentName arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setAutoTimeZoneEnabled",
			"(Landroid/content/ComponentName;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void DevicePolicyManager::setBackupServiceEnabled(android::content::ComponentName arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setBackupServiceEnabled",
			"(Landroid/content/ComponentName;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void DevicePolicyManager::setBluetoothContactSharingDisabled(android::content::ComponentName arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setBluetoothContactSharingDisabled",
			"(Landroid/content/ComponentName;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void DevicePolicyManager::setCameraDisabled(android::content::ComponentName arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setCameraDisabled",
			"(Landroid/content/ComponentName;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void DevicePolicyManager::setCertInstallerPackage(android::content::ComponentName arg0, JString arg1) const
	{
		callMethod<void>(
			"setCertInstallerPackage",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void DevicePolicyManager::setCommonCriteriaModeEnabled(android::content::ComponentName arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setCommonCriteriaModeEnabled",
			"(Landroid/content/ComponentName;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void DevicePolicyManager::setConfiguredNetworksLockdownState(android::content::ComponentName arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setConfiguredNetworksLockdownState",
			"(Landroid/content/ComponentName;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void DevicePolicyManager::setCredentialManagerPolicy(android::app::admin::PackagePolicy arg0) const
	{
		callMethod<void>(
			"setCredentialManagerPolicy",
			"(Landroid/app/admin/PackagePolicy;)V",
			arg0.object()
		);
	}
	inline void DevicePolicyManager::setCrossProfileCalendarPackages(android::content::ComponentName arg0, JObject arg1) const
	{
		callMethod<void>(
			"setCrossProfileCalendarPackages",
			"(Landroid/content/ComponentName;Ljava/util/Set;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void DevicePolicyManager::setCrossProfileCallerIdDisabled(android::content::ComponentName arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setCrossProfileCallerIdDisabled",
			"(Landroid/content/ComponentName;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void DevicePolicyManager::setCrossProfileContactsSearchDisabled(android::content::ComponentName arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setCrossProfileContactsSearchDisabled",
			"(Landroid/content/ComponentName;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void DevicePolicyManager::setCrossProfilePackages(android::content::ComponentName arg0, JObject arg1) const
	{
		callMethod<void>(
			"setCrossProfilePackages",
			"(Landroid/content/ComponentName;Ljava/util/Set;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void DevicePolicyManager::setDefaultDialerApplication(JString arg0) const
	{
		callMethod<void>(
			"setDefaultDialerApplication",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DevicePolicyManager::setDefaultSmsApplication(android::content::ComponentName arg0, JString arg1) const
	{
		callMethod<void>(
			"setDefaultSmsApplication",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void DevicePolicyManager::setDelegatedScopes(android::content::ComponentName arg0, JString arg1, JObject arg2) const
	{
		callMethod<void>(
			"setDelegatedScopes",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/util/List;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void DevicePolicyManager::setDeviceOwnerLockScreenInfo(android::content::ComponentName arg0, JString arg1) const
	{
		callMethod<void>(
			"setDeviceOwnerLockScreenInfo",
			"(Landroid/content/ComponentName;Ljava/lang/CharSequence;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void DevicePolicyManager::setEndUserSessionMessage(android::content::ComponentName arg0, JString arg1) const
	{
		callMethod<void>(
			"setEndUserSessionMessage",
			"(Landroid/content/ComponentName;Ljava/lang/CharSequence;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void DevicePolicyManager::setFactoryResetProtectionPolicy(android::content::ComponentName arg0, android::app::admin::FactoryResetProtectionPolicy arg1) const
	{
		callMethod<void>(
			"setFactoryResetProtectionPolicy",
			"(Landroid/content/ComponentName;Landroid/app/admin/FactoryResetProtectionPolicy;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jint DevicePolicyManager::setGlobalPrivateDnsModeOpportunistic(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"setGlobalPrivateDnsModeOpportunistic",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	inline jint DevicePolicyManager::setGlobalPrivateDnsModeSpecifiedHost(android::content::ComponentName arg0, JString arg1) const
	{
		return callMethod<jint>(
			"setGlobalPrivateDnsModeSpecifiedHost",
			"(Landroid/content/ComponentName;Ljava/lang/String;)I",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void DevicePolicyManager::setGlobalSetting(android::content::ComponentName arg0, JString arg1, JString arg2) const
	{
		callMethod<void>(
			"setGlobalSetting",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline void DevicePolicyManager::setKeepUninstalledPackages(android::content::ComponentName arg0, JObject arg1) const
	{
		callMethod<void>(
			"setKeepUninstalledPackages",
			"(Landroid/content/ComponentName;Ljava/util/List;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean DevicePolicyManager::setKeyPairCertificate(android::content::ComponentName arg0, JString arg1, JObject arg2, jboolean arg3) const
	{
		return callMethod<jboolean>(
			"setKeyPairCertificate",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/util/List;Z)Z",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3
		);
	}
	inline jboolean DevicePolicyManager::setKeyguardDisabled(android::content::ComponentName arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"setKeyguardDisabled",
			"(Landroid/content/ComponentName;Z)Z",
			arg0.object(),
			arg1
		);
	}
	inline void DevicePolicyManager::setKeyguardDisabledFeatures(android::content::ComponentName arg0, jint arg1) const
	{
		callMethod<void>(
			"setKeyguardDisabledFeatures",
			"(Landroid/content/ComponentName;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void DevicePolicyManager::setLocationEnabled(android::content::ComponentName arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setLocationEnabled",
			"(Landroid/content/ComponentName;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void DevicePolicyManager::setLockTaskFeatures(android::content::ComponentName arg0, jint arg1) const
	{
		callMethod<void>(
			"setLockTaskFeatures",
			"(Landroid/content/ComponentName;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void DevicePolicyManager::setLockTaskPackages(android::content::ComponentName arg0, JArray arg1) const
	{
		callMethod<void>(
			"setLockTaskPackages",
			"(Landroid/content/ComponentName;[Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	inline void DevicePolicyManager::setLogoutEnabled(android::content::ComponentName arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setLogoutEnabled",
			"(Landroid/content/ComponentName;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void DevicePolicyManager::setLongSupportMessage(android::content::ComponentName arg0, JString arg1) const
	{
		callMethod<void>(
			"setLongSupportMessage",
			"(Landroid/content/ComponentName;Ljava/lang/CharSequence;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void DevicePolicyManager::setManagedProfileCallerIdAccessPolicy(android::app::admin::PackagePolicy arg0) const
	{
		callMethod<void>(
			"setManagedProfileCallerIdAccessPolicy",
			"(Landroid/app/admin/PackagePolicy;)V",
			arg0.object()
		);
	}
	inline void DevicePolicyManager::setManagedProfileContactsAccessPolicy(android::app::admin::PackagePolicy arg0) const
	{
		callMethod<void>(
			"setManagedProfileContactsAccessPolicy",
			"(Landroid/app/admin/PackagePolicy;)V",
			arg0.object()
		);
	}
	inline void DevicePolicyManager::setManagedProfileMaximumTimeOff(android::content::ComponentName arg0, jlong arg1) const
	{
		callMethod<void>(
			"setManagedProfileMaximumTimeOff",
			"(Landroid/content/ComponentName;J)V",
			arg0.object(),
			arg1
		);
	}
	inline void DevicePolicyManager::setManagedSubscriptionsPolicy(android::app::admin::ManagedSubscriptionsPolicy arg0) const
	{
		callMethod<void>(
			"setManagedSubscriptionsPolicy",
			"(Landroid/app/admin/ManagedSubscriptionsPolicy;)V",
			arg0.object()
		);
	}
	inline void DevicePolicyManager::setMasterVolumeMuted(android::content::ComponentName arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setMasterVolumeMuted",
			"(Landroid/content/ComponentName;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void DevicePolicyManager::setMaximumFailedPasswordsForWipe(android::content::ComponentName arg0, jint arg1) const
	{
		callMethod<void>(
			"setMaximumFailedPasswordsForWipe",
			"(Landroid/content/ComponentName;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void DevicePolicyManager::setMaximumTimeToLock(android::content::ComponentName arg0, jlong arg1) const
	{
		callMethod<void>(
			"setMaximumTimeToLock",
			"(Landroid/content/ComponentName;J)V",
			arg0.object(),
			arg1
		);
	}
	inline JObject DevicePolicyManager::setMeteredDataDisabledPackages(android::content::ComponentName arg0, JObject arg1) const
	{
		return callObjectMethod(
			"setMeteredDataDisabledPackages",
			"(Landroid/content/ComponentName;Ljava/util/List;)Ljava/util/List;",
			arg0.object(),
			arg1.object()
		);
	}
	inline void DevicePolicyManager::setMinimumRequiredWifiSecurityLevel(jint arg0) const
	{
		callMethod<void>(
			"setMinimumRequiredWifiSecurityLevel",
			"(I)V",
			arg0
		);
	}
	inline void DevicePolicyManager::setMtePolicy(jint arg0) const
	{
		callMethod<void>(
			"setMtePolicy",
			"(I)V",
			arg0
		);
	}
	inline void DevicePolicyManager::setNearbyAppStreamingPolicy(jint arg0) const
	{
		callMethod<void>(
			"setNearbyAppStreamingPolicy",
			"(I)V",
			arg0
		);
	}
	inline void DevicePolicyManager::setNearbyNotificationStreamingPolicy(jint arg0) const
	{
		callMethod<void>(
			"setNearbyNotificationStreamingPolicy",
			"(I)V",
			arg0
		);
	}
	inline void DevicePolicyManager::setNetworkLoggingEnabled(android::content::ComponentName arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setNetworkLoggingEnabled",
			"(Landroid/content/ComponentName;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void DevicePolicyManager::setOrganizationColor(android::content::ComponentName arg0, jint arg1) const
	{
		callMethod<void>(
			"setOrganizationColor",
			"(Landroid/content/ComponentName;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void DevicePolicyManager::setOrganizationId(JString arg0) const
	{
		callMethod<void>(
			"setOrganizationId",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DevicePolicyManager::setOrganizationName(android::content::ComponentName arg0, JString arg1) const
	{
		callMethod<void>(
			"setOrganizationName",
			"(Landroid/content/ComponentName;Ljava/lang/CharSequence;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void DevicePolicyManager::setOverrideApnsEnabled(android::content::ComponentName arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setOverrideApnsEnabled",
			"(Landroid/content/ComponentName;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline JArray DevicePolicyManager::setPackagesSuspended(android::content::ComponentName arg0, JArray arg1, jboolean arg2) const
	{
		return callObjectMethod(
			"setPackagesSuspended",
			"(Landroid/content/ComponentName;[Ljava/lang/String;Z)[Ljava/lang/String;",
			arg0.object(),
			arg1.object<jarray>(),
			arg2
		);
	}
	inline void DevicePolicyManager::setPasswordExpirationTimeout(android::content::ComponentName arg0, jlong arg1) const
	{
		callMethod<void>(
			"setPasswordExpirationTimeout",
			"(Landroid/content/ComponentName;J)V",
			arg0.object(),
			arg1
		);
	}
	inline void DevicePolicyManager::setPasswordHistoryLength(android::content::ComponentName arg0, jint arg1) const
	{
		callMethod<void>(
			"setPasswordHistoryLength",
			"(Landroid/content/ComponentName;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void DevicePolicyManager::setPasswordMinimumLength(android::content::ComponentName arg0, jint arg1) const
	{
		callMethod<void>(
			"setPasswordMinimumLength",
			"(Landroid/content/ComponentName;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void DevicePolicyManager::setPasswordMinimumLetters(android::content::ComponentName arg0, jint arg1) const
	{
		callMethod<void>(
			"setPasswordMinimumLetters",
			"(Landroid/content/ComponentName;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void DevicePolicyManager::setPasswordMinimumLowerCase(android::content::ComponentName arg0, jint arg1) const
	{
		callMethod<void>(
			"setPasswordMinimumLowerCase",
			"(Landroid/content/ComponentName;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void DevicePolicyManager::setPasswordMinimumNonLetter(android::content::ComponentName arg0, jint arg1) const
	{
		callMethod<void>(
			"setPasswordMinimumNonLetter",
			"(Landroid/content/ComponentName;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void DevicePolicyManager::setPasswordMinimumNumeric(android::content::ComponentName arg0, jint arg1) const
	{
		callMethod<void>(
			"setPasswordMinimumNumeric",
			"(Landroid/content/ComponentName;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void DevicePolicyManager::setPasswordMinimumSymbols(android::content::ComponentName arg0, jint arg1) const
	{
		callMethod<void>(
			"setPasswordMinimumSymbols",
			"(Landroid/content/ComponentName;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void DevicePolicyManager::setPasswordMinimumUpperCase(android::content::ComponentName arg0, jint arg1) const
	{
		callMethod<void>(
			"setPasswordMinimumUpperCase",
			"(Landroid/content/ComponentName;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void DevicePolicyManager::setPasswordQuality(android::content::ComponentName arg0, jint arg1) const
	{
		callMethod<void>(
			"setPasswordQuality",
			"(Landroid/content/ComponentName;I)V",
			arg0.object(),
			arg1
		);
	}
	inline jboolean DevicePolicyManager::setPermissionGrantState(android::content::ComponentName arg0, JString arg1, JString arg2, jint arg3) const
	{
		return callMethod<jboolean>(
			"setPermissionGrantState",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/lang/String;I)Z",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3
		);
	}
	inline void DevicePolicyManager::setPermissionPolicy(android::content::ComponentName arg0, jint arg1) const
	{
		callMethod<void>(
			"setPermissionPolicy",
			"(Landroid/content/ComponentName;I)V",
			arg0.object(),
			arg1
		);
	}
	inline jboolean DevicePolicyManager::setPermittedAccessibilityServices(android::content::ComponentName arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"setPermittedAccessibilityServices",
			"(Landroid/content/ComponentName;Ljava/util/List;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean DevicePolicyManager::setPermittedCrossProfileNotificationListeners(android::content::ComponentName arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"setPermittedCrossProfileNotificationListeners",
			"(Landroid/content/ComponentName;Ljava/util/List;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean DevicePolicyManager::setPermittedInputMethods(android::content::ComponentName arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"setPermittedInputMethods",
			"(Landroid/content/ComponentName;Ljava/util/List;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline void DevicePolicyManager::setPersonalAppsSuspended(android::content::ComponentName arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setPersonalAppsSuspended",
			"(Landroid/content/ComponentName;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void DevicePolicyManager::setPreferentialNetworkServiceConfigs(JObject arg0) const
	{
		callMethod<void>(
			"setPreferentialNetworkServiceConfigs",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void DevicePolicyManager::setPreferentialNetworkServiceEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setPreferentialNetworkServiceEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void DevicePolicyManager::setProfileEnabled(android::content::ComponentName arg0) const
	{
		callMethod<void>(
			"setProfileEnabled",
			"(Landroid/content/ComponentName;)V",
			arg0.object()
		);
	}
	inline void DevicePolicyManager::setProfileName(android::content::ComponentName arg0, JString arg1) const
	{
		callMethod<void>(
			"setProfileName",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void DevicePolicyManager::setRecommendedGlobalProxy(android::content::ComponentName arg0, android::net::ProxyInfo arg1) const
	{
		callMethod<void>(
			"setRecommendedGlobalProxy",
			"(Landroid/content/ComponentName;Landroid/net/ProxyInfo;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void DevicePolicyManager::setRequiredPasswordComplexity(jint arg0) const
	{
		callMethod<void>(
			"setRequiredPasswordComplexity",
			"(I)V",
			arg0
		);
	}
	inline void DevicePolicyManager::setRequiredStrongAuthTimeout(android::content::ComponentName arg0, jlong arg1) const
	{
		callMethod<void>(
			"setRequiredStrongAuthTimeout",
			"(Landroid/content/ComponentName;J)V",
			arg0.object(),
			arg1
		);
	}
	inline jboolean DevicePolicyManager::setResetPasswordToken(android::content::ComponentName arg0, JByteArray arg1) const
	{
		return callMethod<jboolean>(
			"setResetPasswordToken",
			"(Landroid/content/ComponentName;[B)Z",
			arg0.object(),
			arg1.object<jbyteArray>()
		);
	}
	inline void DevicePolicyManager::setRestrictionsProvider(android::content::ComponentName arg0, android::content::ComponentName arg1) const
	{
		callMethod<void>(
			"setRestrictionsProvider",
			"(Landroid/content/ComponentName;Landroid/content/ComponentName;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void DevicePolicyManager::setScreenCaptureDisabled(android::content::ComponentName arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setScreenCaptureDisabled",
			"(Landroid/content/ComponentName;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void DevicePolicyManager::setSecureSetting(android::content::ComponentName arg0, JString arg1, JString arg2) const
	{
		callMethod<void>(
			"setSecureSetting",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline void DevicePolicyManager::setSecurityLoggingEnabled(android::content::ComponentName arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setSecurityLoggingEnabled",
			"(Landroid/content/ComponentName;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void DevicePolicyManager::setShortSupportMessage(android::content::ComponentName arg0, JString arg1) const
	{
		callMethod<void>(
			"setShortSupportMessage",
			"(Landroid/content/ComponentName;Ljava/lang/CharSequence;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void DevicePolicyManager::setStartUserSessionMessage(android::content::ComponentName arg0, JString arg1) const
	{
		callMethod<void>(
			"setStartUserSessionMessage",
			"(Landroid/content/ComponentName;Ljava/lang/CharSequence;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jboolean DevicePolicyManager::setStatusBarDisabled(android::content::ComponentName arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"setStatusBarDisabled",
			"(Landroid/content/ComponentName;Z)Z",
			arg0.object(),
			arg1
		);
	}
	inline jint DevicePolicyManager::setStorageEncryption(android::content::ComponentName arg0, jboolean arg1) const
	{
		return callMethod<jint>(
			"setStorageEncryption",
			"(Landroid/content/ComponentName;Z)I",
			arg0.object(),
			arg1
		);
	}
	inline void DevicePolicyManager::setSystemSetting(android::content::ComponentName arg0, JString arg1, JString arg2) const
	{
		callMethod<void>(
			"setSystemSetting",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline void DevicePolicyManager::setSystemUpdatePolicy(android::content::ComponentName arg0, android::app::admin::SystemUpdatePolicy arg1) const
	{
		callMethod<void>(
			"setSystemUpdatePolicy",
			"(Landroid/content/ComponentName;Landroid/app/admin/SystemUpdatePolicy;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean DevicePolicyManager::setTime(android::content::ComponentName arg0, jlong arg1) const
	{
		return callMethod<jboolean>(
			"setTime",
			"(Landroid/content/ComponentName;J)Z",
			arg0.object(),
			arg1
		);
	}
	inline jboolean DevicePolicyManager::setTimeZone(android::content::ComponentName arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"setTimeZone",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void DevicePolicyManager::setTrustAgentConfiguration(android::content::ComponentName arg0, android::content::ComponentName arg1, android::os::PersistableBundle arg2) const
	{
		callMethod<void>(
			"setTrustAgentConfiguration",
			"(Landroid/content/ComponentName;Landroid/content/ComponentName;Landroid/os/PersistableBundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void DevicePolicyManager::setUninstallBlocked(android::content::ComponentName arg0, JString arg1, jboolean arg2) const
	{
		callMethod<void>(
			"setUninstallBlocked",
			"(Landroid/content/ComponentName;Ljava/lang/String;Z)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline void DevicePolicyManager::setUsbDataSignalingEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setUsbDataSignalingEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void DevicePolicyManager::setUserControlDisabledPackages(android::content::ComponentName arg0, JObject arg1) const
	{
		callMethod<void>(
			"setUserControlDisabledPackages",
			"(Landroid/content/ComponentName;Ljava/util/List;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void DevicePolicyManager::setUserIcon(android::content::ComponentName arg0, android::graphics::Bitmap arg1) const
	{
		callMethod<void>(
			"setUserIcon",
			"(Landroid/content/ComponentName;Landroid/graphics/Bitmap;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void DevicePolicyManager::setWifiSsidPolicy(android::app::admin::WifiSsidPolicy arg0) const
	{
		callMethod<void>(
			"setWifiSsidPolicy",
			"(Landroid/app/admin/WifiSsidPolicy;)V",
			arg0.object()
		);
	}
	inline jint DevicePolicyManager::startUserInBackground(android::content::ComponentName arg0, android::os::UserHandle arg1) const
	{
		return callMethod<jint>(
			"startUserInBackground",
			"(Landroid/content/ComponentName;Landroid/os/UserHandle;)I",
			arg0.object(),
			arg1.object()
		);
	}
	inline jint DevicePolicyManager::stopUser(android::content::ComponentName arg0, android::os::UserHandle arg1) const
	{
		return callMethod<jint>(
			"stopUser",
			"(Landroid/content/ComponentName;Landroid/os/UserHandle;)I",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean DevicePolicyManager::switchUser(android::content::ComponentName arg0, android::os::UserHandle arg1) const
	{
		return callMethod<jboolean>(
			"switchUser",
			"(Landroid/content/ComponentName;Landroid/os/UserHandle;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline void DevicePolicyManager::transferOwnership(android::content::ComponentName arg0, android::content::ComponentName arg1, android::os::PersistableBundle arg2) const
	{
		callMethod<void>(
			"transferOwnership",
			"(Landroid/content/ComponentName;Landroid/content/ComponentName;Landroid/os/PersistableBundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void DevicePolicyManager::uninstallAllUserCaCerts(android::content::ComponentName arg0) const
	{
		callMethod<void>(
			"uninstallAllUserCaCerts",
			"(Landroid/content/ComponentName;)V",
			arg0.object()
		);
	}
	inline void DevicePolicyManager::uninstallCaCert(android::content::ComponentName arg0, JByteArray arg1) const
	{
		callMethod<void>(
			"uninstallCaCert",
			"(Landroid/content/ComponentName;[B)V",
			arg0.object(),
			arg1.object<jbyteArray>()
		);
	}
	inline jboolean DevicePolicyManager::updateOverrideApn(android::content::ComponentName arg0, jint arg1, android::telephony::data::ApnSetting arg2) const
	{
		return callMethod<jboolean>(
			"updateOverrideApn",
			"(Landroid/content/ComponentName;ILandroid/telephony/data/ApnSetting;)Z",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline void DevicePolicyManager::wipeData(jint arg0) const
	{
		callMethod<void>(
			"wipeData",
			"(I)V",
			arg0
		);
	}
	inline void DevicePolicyManager::wipeData(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"wipeData",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline void DevicePolicyManager::wipeDevice(jint arg0) const
	{
		callMethod<void>(
			"wipeDevice",
			"(I)V",
			arg0
		);
	}
} // namespace android::app::admin

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::admin;
#endif
