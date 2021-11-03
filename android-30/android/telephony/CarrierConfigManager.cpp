#include "../os/PersistableBundle.hpp"
#include "../../JString.hpp"
#include "./CarrierConfigManager.hpp"

namespace android::telephony
{
	// Fields
	JString CarrierConfigManager::ACTION_CARRIER_CONFIG_CHANGED()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"ACTION_CARRIER_CONFIG_CHANGED",
			"Ljava/lang/String;"
		);
	}
	jint CarrierConfigManager::DATA_CYCLE_THRESHOLD_DISABLED()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager",
			"DATA_CYCLE_THRESHOLD_DISABLED"
		);
	}
	jint CarrierConfigManager::DATA_CYCLE_USE_PLATFORM_DEFAULT()
	{
		return getStaticField<jint>(
			"android.telephony.CarrierConfigManager",
			"DATA_CYCLE_USE_PLATFORM_DEFAULT"
		);
	}
	JString CarrierConfigManager::ENABLE_EAP_METHOD_PREFIX_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"ENABLE_EAP_METHOD_PREFIX_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::EXTRA_SLOT_INDEX()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"EXTRA_SLOT_INDEX",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::EXTRA_SUBSCRIPTION_INDEX()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"EXTRA_SUBSCRIPTION_INDEX",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::IMSI_KEY_AVAILABILITY_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"IMSI_KEY_AVAILABILITY_INT",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_5G_NR_SSRSRP_THRESHOLDS_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_5G_NR_SSRSRP_THRESHOLDS_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_5G_NR_SSRSRQ_THRESHOLDS_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_5G_NR_SSRSRQ_THRESHOLDS_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_5G_NR_SSSINR_THRESHOLDS_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_5G_NR_SSSINR_THRESHOLDS_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_ADDITIONAL_CALL_SETTING_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_ADDITIONAL_CALL_SETTING_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_ALLOW_ADDING_APNS_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_ALLOW_ADDING_APNS_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_ALLOW_ADD_CALL_DURING_VIDEO_CALL_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_ALLOW_ADD_CALL_DURING_VIDEO_CALL_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_ALLOW_EMERGENCY_NUMBERS_IN_CALL_LOG_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_ALLOW_EMERGENCY_NUMBERS_IN_CALL_LOG_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_ALLOW_EMERGENCY_VIDEO_CALLS_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_ALLOW_EMERGENCY_VIDEO_CALLS_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_ALLOW_HOLD_CALL_DURING_EMERGENCY_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_ALLOW_HOLD_CALL_DURING_EMERGENCY_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_ALLOW_HOLD_VIDEO_CALL_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_ALLOW_HOLD_VIDEO_CALL_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_ALLOW_LOCAL_DTMF_TONES_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_ALLOW_LOCAL_DTMF_TONES_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_ALLOW_MERGE_WIFI_CALLS_WHEN_VOWIFI_OFF_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_ALLOW_MERGE_WIFI_CALLS_WHEN_VOWIFI_OFF_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_ALLOW_NON_EMERGENCY_CALLS_IN_ECM_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_ALLOW_NON_EMERGENCY_CALLS_IN_ECM_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_ALLOW_VIDEO_CALLING_FALLBACK_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_ALLOW_VIDEO_CALLING_FALLBACK_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_ALWAYS_SHOW_DATA_RAT_ICON_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_ALWAYS_SHOW_DATA_RAT_ICON_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_ALWAYS_SHOW_EMERGENCY_ALERT_ONOFF_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_ALWAYS_SHOW_EMERGENCY_ALERT_ONOFF_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_ALWAYS_SHOW_PRIMARY_SIGNAL_BAR_IN_OPPORTUNISTIC_NETWORK_BOOLEAN()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_ALWAYS_SHOW_PRIMARY_SIGNAL_BAR_IN_OPPORTUNISTIC_NETWORK_BOOLEAN",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_APN_EXPAND_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_APN_EXPAND_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_APN_SETTINGS_DEFAULT_APN_TYPES_STRING_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_APN_SETTINGS_DEFAULT_APN_TYPES_STRING_ARRAY",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_AUTO_RETRY_ENABLED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_AUTO_RETRY_ENABLED_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CALL_BARRING_SUPPORTS_DEACTIVATE_ALL_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CALL_BARRING_SUPPORTS_DEACTIVATE_ALL_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CALL_BARRING_SUPPORTS_PASSWORD_CHANGE_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CALL_BARRING_SUPPORTS_PASSWORD_CHANGE_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CALL_BARRING_VISIBILITY_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CALL_BARRING_VISIBILITY_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CALL_FORWARDING_BLOCKS_WHILE_ROAMING_STRING_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CALL_FORWARDING_BLOCKS_WHILE_ROAMING_STRING_ARRAY",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CALL_REDIRECTION_SERVICE_COMPONENT_NAME_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CALL_REDIRECTION_SERVICE_COMPONENT_NAME_STRING",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_ALLOW_DEFLECT_IMS_CALL_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_ALLOW_DEFLECT_IMS_CALL_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_ALLOW_TURNOFF_IMS_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_ALLOW_TURNOFF_IMS_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_APP_REQUIRED_DURING_SIM_SETUP_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_APP_REQUIRED_DURING_SIM_SETUP_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_CALL_SCREENING_APP_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_CALL_SCREENING_APP_STRING",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_CERTIFICATE_STRING_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_CERTIFICATE_STRING_ARRAY",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_CONFIG_APPLIED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_CONFIG_APPLIED_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_CONFIG_VERSION_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_CONFIG_VERSION_STRING",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_DATA_CALL_PERMANENT_FAILURE_STRINGS()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_DATA_CALL_PERMANENT_FAILURE_STRINGS",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_DEFAULT_ACTIONS_ON_DCFAILURE_STRING_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_DEFAULT_ACTIONS_ON_DCFAILURE_STRING_ARRAY",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_DEFAULT_ACTIONS_ON_DEFAULT_NETWORK_AVAILABLE()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_DEFAULT_ACTIONS_ON_DEFAULT_NETWORK_AVAILABLE",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_DEFAULT_ACTIONS_ON_REDIRECTION_STRING_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_DEFAULT_ACTIONS_ON_REDIRECTION_STRING_ARRAY",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_DEFAULT_ACTIONS_ON_RESET()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_DEFAULT_ACTIONS_ON_RESET",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_DEFAULT_REDIRECTION_URL_STRING_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_DEFAULT_REDIRECTION_URL_STRING_ARRAY",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_DEFAULT_WFC_IMS_ENABLED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_DEFAULT_WFC_IMS_ENABLED_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_DEFAULT_WFC_IMS_MODE_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_DEFAULT_WFC_IMS_MODE_INT",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_DEFAULT_WFC_IMS_ROAMING_MODE_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_DEFAULT_WFC_IMS_ROAMING_MODE_INT",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_FORCE_DISABLE_ETWS_CMAS_TEST_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_FORCE_DISABLE_ETWS_CMAS_TEST_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_IMS_GBA_REQUIRED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_IMS_GBA_REQUIRED_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_INSTANT_LETTERING_AVAILABLE_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_INSTANT_LETTERING_AVAILABLE_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_INSTANT_LETTERING_ENCODING_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_INSTANT_LETTERING_ENCODING_STRING",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_INSTANT_LETTERING_ESCAPED_CHARS_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_INSTANT_LETTERING_ESCAPED_CHARS_STRING",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_INSTANT_LETTERING_INVALID_CHARS_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_INSTANT_LETTERING_INVALID_CHARS_STRING",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_INSTANT_LETTERING_LENGTH_LIMIT_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_INSTANT_LETTERING_LENGTH_LIMIT_INT",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_NAME_OVERRIDE_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_NAME_OVERRIDE_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_NAME_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_NAME_STRING",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_RCS_PROVISIONING_REQUIRED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_RCS_PROVISIONING_REQUIRED_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_SETTINGS_ACTIVITY_COMPONENT_NAME_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_SETTINGS_ACTIVITY_COMPONENT_NAME_STRING",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_SETTINGS_ENABLE_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_SETTINGS_ENABLE_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_SUPPORTS_SS_OVER_UT_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_SUPPORTS_SS_OVER_UT_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_USE_IMS_FIRST_FOR_EMERGENCY_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_USE_IMS_FIRST_FOR_EMERGENCY_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_UT_PROVISIONING_REQUIRED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_UT_PROVISIONING_REQUIRED_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_VOLTE_AVAILABLE_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_VOLTE_AVAILABLE_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_VOLTE_OVERRIDE_WFC_PROVISIONING_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_VOLTE_OVERRIDE_WFC_PROVISIONING_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_VOLTE_PROVISIONED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_VOLTE_PROVISIONED_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_VOLTE_PROVISIONING_REQUIRED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_VOLTE_PROVISIONING_REQUIRED_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_VOLTE_TTY_SUPPORTED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_VOLTE_TTY_SUPPORTED_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_VT_AVAILABLE_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_VT_AVAILABLE_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_VVM_PACKAGE_NAME_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_VVM_PACKAGE_NAME_STRING",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_VVM_PACKAGE_NAME_STRING_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_VVM_PACKAGE_NAME_STRING_ARRAY",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_WFC_IMS_AVAILABLE_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_WFC_IMS_AVAILABLE_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CARRIER_WFC_SUPPORTS_WIFI_ONLY_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_WFC_SUPPORTS_WIFI_ONLY_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CDMA_3WAYCALL_FLASH_DELAY_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CDMA_3WAYCALL_FLASH_DELAY_INT",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CDMA_DTMF_TONE_DELAY_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CDMA_DTMF_TONE_DELAY_INT",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CDMA_NONROAMING_NETWORKS_STRING_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CDMA_NONROAMING_NETWORKS_STRING_ARRAY",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CDMA_ROAMING_MODE_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CDMA_ROAMING_MODE_INT",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CDMA_ROAMING_NETWORKS_STRING_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CDMA_ROAMING_NETWORKS_STRING_ARRAY",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CHECK_PRICING_WITH_CARRIER_FOR_DATA_ROAMING_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CHECK_PRICING_WITH_CARRIER_FOR_DATA_ROAMING_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CI_ACTION_ON_SYS_UPDATE_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CI_ACTION_ON_SYS_UPDATE_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CI_ACTION_ON_SYS_UPDATE_EXTRA_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CI_ACTION_ON_SYS_UPDATE_EXTRA_STRING",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CI_ACTION_ON_SYS_UPDATE_EXTRA_VAL_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CI_ACTION_ON_SYS_UPDATE_EXTRA_VAL_STRING",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CI_ACTION_ON_SYS_UPDATE_INTENT_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CI_ACTION_ON_SYS_UPDATE_INTENT_STRING",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CONFIG_IMS_MMTEL_PACKAGE_OVERRIDE_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CONFIG_IMS_MMTEL_PACKAGE_OVERRIDE_STRING",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CONFIG_IMS_PACKAGE_OVERRIDE_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CONFIG_IMS_PACKAGE_OVERRIDE_STRING",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CONFIG_IMS_RCS_PACKAGE_OVERRIDE_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CONFIG_IMS_RCS_PACKAGE_OVERRIDE_STRING",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CONFIG_PLANS_PACKAGE_OVERRIDE_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CONFIG_PLANS_PACKAGE_OVERRIDE_STRING",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CONFIG_TELEPHONY_USE_OWN_NUMBER_FOR_VOICEMAIL_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CONFIG_TELEPHONY_USE_OWN_NUMBER_FOR_VOICEMAIL_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CONFIG_WIFI_DISABLE_IN_ECBM()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CONFIG_WIFI_DISABLE_IN_ECBM",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_CSP_ENABLED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CSP_ENABLED_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_DATA_LIMIT_NOTIFICATION_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_DATA_LIMIT_NOTIFICATION_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_DATA_LIMIT_THRESHOLD_BYTES_LONG()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_DATA_LIMIT_THRESHOLD_BYTES_LONG",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_DATA_RAPID_NOTIFICATION_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_DATA_RAPID_NOTIFICATION_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_DATA_SWITCH_VALIDATION_TIMEOUT_LONG()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_DATA_SWITCH_VALIDATION_TIMEOUT_LONG",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_DATA_WARNING_NOTIFICATION_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_DATA_WARNING_NOTIFICATION_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_DATA_WARNING_THRESHOLD_BYTES_LONG()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_DATA_WARNING_THRESHOLD_BYTES_LONG",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_DEFAULT_SIM_CALL_MANAGER_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_DEFAULT_SIM_CALL_MANAGER_STRING",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_DEFAULT_VM_NUMBER_ROAMING_AND_IMS_UNREGISTERED_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_DEFAULT_VM_NUMBER_ROAMING_AND_IMS_UNREGISTERED_STRING",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_DEFAULT_VM_NUMBER_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_DEFAULT_VM_NUMBER_STRING",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_DIAL_STRING_REPLACE_STRING_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_DIAL_STRING_REPLACE_STRING_ARRAY",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_DISABLE_CDMA_ACTIVATION_CODE_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_DISABLE_CDMA_ACTIVATION_CODE_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_DISABLE_CHARGE_INDICATION_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_DISABLE_CHARGE_INDICATION_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_DISABLE_SUPPLEMENTARY_SERVICES_IN_AIRPLANE_MODE_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_DISABLE_SUPPLEMENTARY_SERVICES_IN_AIRPLANE_MODE_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_DISCONNECT_CAUSE_PLAY_BUSYTONE_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_DISCONNECT_CAUSE_PLAY_BUSYTONE_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_DISPLAY_HD_AUDIO_PROPERTY_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_DISPLAY_HD_AUDIO_PROPERTY_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_DROP_VIDEO_CALL_WHEN_ANSWERING_AUDIO_CALL_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_DROP_VIDEO_CALL_WHEN_ANSWERING_AUDIO_CALL_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_DTMF_TYPE_ENABLED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_DTMF_TYPE_ENABLED_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_DURATION_BLOCKING_DISABLED_AFTER_EMERGENCY_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_DURATION_BLOCKING_DISABLED_AFTER_EMERGENCY_INT",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_EDITABLE_ENHANCED_4G_LTE_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_EDITABLE_ENHANCED_4G_LTE_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_EDITABLE_VOICEMAIL_NUMBER_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_EDITABLE_VOICEMAIL_NUMBER_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_EDITABLE_VOICEMAIL_NUMBER_SETTING_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_EDITABLE_VOICEMAIL_NUMBER_SETTING_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_EDITABLE_WFC_MODE_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_EDITABLE_WFC_MODE_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_EDITABLE_WFC_ROAMING_MODE_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_EDITABLE_WFC_ROAMING_MODE_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_EMERGENCY_NOTIFICATION_DELAY_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_EMERGENCY_NOTIFICATION_DELAY_INT",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_EMERGENCY_NUMBER_PREFIX_STRING_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_EMERGENCY_NUMBER_PREFIX_STRING_ARRAY",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_ENABLE_DIALER_KEY_VIBRATION_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_ENABLE_DIALER_KEY_VIBRATION_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_ENHANCED_4G_LTE_ON_BY_DEFAULT_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_ENHANCED_4G_LTE_ON_BY_DEFAULT_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_ENHANCED_4G_LTE_TITLE_VARIANT_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_ENHANCED_4G_LTE_TITLE_VARIANT_INT",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_FORCE_HOME_NETWORK_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_FORCE_HOME_NETWORK_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_GSM_DTMF_TONE_DELAY_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_GSM_DTMF_TONE_DELAY_INT",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_GSM_NONROAMING_NETWORKS_STRING_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_GSM_NONROAMING_NETWORKS_STRING_ARRAY",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_GSM_ROAMING_NETWORKS_STRING_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_GSM_ROAMING_NETWORKS_STRING_ARRAY",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_HAS_IN_CALL_NOISE_SUPPRESSION_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_HAS_IN_CALL_NOISE_SUPPRESSION_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_HIDE_CARRIER_NETWORK_SETTINGS_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_HIDE_CARRIER_NETWORK_SETTINGS_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_HIDE_ENHANCED_4G_LTE_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_HIDE_ENHANCED_4G_LTE_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_HIDE_IMS_APN_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_HIDE_IMS_APN_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_HIDE_LTE_PLUS_DATA_ICON_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_HIDE_LTE_PLUS_DATA_ICON_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_HIDE_PREFERRED_NETWORK_TYPE_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_HIDE_PREFERRED_NETWORK_TYPE_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_HIDE_PRESET_APN_DETAILS_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_HIDE_PRESET_APN_DETAILS_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_HIDE_SIM_LOCK_SETTINGS_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_HIDE_SIM_LOCK_SETTINGS_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_IGNORE_DATA_ENABLED_CHANGED_FOR_VIDEO_CALLS()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_IGNORE_DATA_ENABLED_CHANGED_FOR_VIDEO_CALLS",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_IGNORE_RTT_MODE_SETTING_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_IGNORE_RTT_MODE_SETTING_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_IGNORE_SIM_NETWORK_LOCKED_EVENTS_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_IGNORE_SIM_NETWORK_LOCKED_EVENTS_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_IMS_CONFERENCE_SIZE_LIMIT_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_IMS_CONFERENCE_SIZE_LIMIT_INT",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_IMS_DTMF_TONE_DELAY_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_IMS_DTMF_TONE_DELAY_INT",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_IS_IMS_CONFERENCE_SIZE_ENFORCED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_IS_IMS_CONFERENCE_SIZE_ENFORCED_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_LTE_ENABLED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_LTE_ENABLED_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_LTE_RSRQ_THRESHOLDS_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_LTE_RSRQ_THRESHOLDS_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_LTE_RSSNR_THRESHOLDS_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_LTE_RSSNR_THRESHOLDS_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_MDN_IS_ADDITIONAL_VOICEMAIL_NUMBER_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MDN_IS_ADDITIONAL_VOICEMAIL_NUMBER_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_MMS_ALIAS_ENABLED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_ALIAS_ENABLED_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_MMS_ALIAS_MAX_CHARS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_ALIAS_MAX_CHARS_INT",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_MMS_ALIAS_MIN_CHARS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_ALIAS_MIN_CHARS_INT",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_MMS_ALLOW_ATTACH_AUDIO_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_ALLOW_ATTACH_AUDIO_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_MMS_APPEND_TRANSACTION_ID_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_APPEND_TRANSACTION_ID_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_MMS_CLOSE_CONNECTION_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_CLOSE_CONNECTION_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_MMS_EMAIL_GATEWAY_NUMBER_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_EMAIL_GATEWAY_NUMBER_STRING",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_MMS_GROUP_MMS_ENABLED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_GROUP_MMS_ENABLED_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_MMS_HTTP_PARAMS_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_HTTP_PARAMS_STRING",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_MMS_HTTP_SOCKET_TIMEOUT_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_HTTP_SOCKET_TIMEOUT_INT",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_MMS_MAX_IMAGE_HEIGHT_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_MAX_IMAGE_HEIGHT_INT",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_MMS_MAX_IMAGE_WIDTH_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_MAX_IMAGE_WIDTH_INT",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_MMS_MAX_MESSAGE_SIZE_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_MAX_MESSAGE_SIZE_INT",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_MMS_MESSAGE_TEXT_MAX_SIZE_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_MESSAGE_TEXT_MAX_SIZE_INT",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_MMS_MMS_DELIVERY_REPORT_ENABLED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_MMS_DELIVERY_REPORT_ENABLED_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_MMS_MMS_ENABLED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_MMS_ENABLED_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_MMS_MMS_READ_REPORT_ENABLED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_MMS_READ_REPORT_ENABLED_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_MMS_MULTIPART_SMS_ENABLED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_MULTIPART_SMS_ENABLED_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_MMS_NAI_SUFFIX_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_NAI_SUFFIX_STRING",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_MMS_NOTIFY_WAP_MMSC_ENABLED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_NOTIFY_WAP_MMSC_ENABLED_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_MMS_RECIPIENT_LIMIT_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_RECIPIENT_LIMIT_INT",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_MMS_SEND_MULTIPART_SMS_AS_SEPARATE_MESSAGES_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_SEND_MULTIPART_SMS_AS_SEPARATE_MESSAGES_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_MMS_SHOW_CELL_BROADCAST_APP_LINKS_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_SHOW_CELL_BROADCAST_APP_LINKS_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_MMS_SMS_DELIVERY_REPORT_ENABLED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_SMS_DELIVERY_REPORT_ENABLED_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_MMS_SMS_TO_MMS_TEXT_LENGTH_THRESHOLD_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_SMS_TO_MMS_TEXT_LENGTH_THRESHOLD_INT",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_MMS_SMS_TO_MMS_TEXT_THRESHOLD_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_SMS_TO_MMS_TEXT_THRESHOLD_INT",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_MMS_SUBJECT_MAX_LENGTH_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_SUBJECT_MAX_LENGTH_INT",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_MMS_SUPPORT_HTTP_CHARSET_HEADER_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_SUPPORT_HTTP_CHARSET_HEADER_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_MMS_SUPPORT_MMS_CONTENT_DISPOSITION_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_SUPPORT_MMS_CONTENT_DISPOSITION_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_MMS_UA_PROF_TAG_NAME_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_UA_PROF_TAG_NAME_STRING",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_MMS_UA_PROF_URL_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_UA_PROF_URL_STRING",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_MMS_USER_AGENT_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_USER_AGENT_STRING",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_MONTHLY_DATA_CYCLE_DAY_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MONTHLY_DATA_CYCLE_DAY_INT",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_ONLY_AUTO_SELECT_IN_HOME_NETWORK_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_ONLY_AUTO_SELECT_IN_HOME_NETWORK_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_ONLY_SINGLE_DC_ALLOWED_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_ONLY_SINGLE_DC_ALLOWED_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_OPERATOR_SELECTION_EXPAND_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_OPERATOR_SELECTION_EXPAND_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_OPPORTUNISTIC_NETWORK_BACKOFF_TIME_LONG()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_OPPORTUNISTIC_NETWORK_BACKOFF_TIME_LONG",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_OPPORTUNISTIC_NETWORK_DATA_SWITCH_EXIT_HYSTERESIS_TIME_LONG()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_OPPORTUNISTIC_NETWORK_DATA_SWITCH_EXIT_HYSTERESIS_TIME_LONG",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_OPPORTUNISTIC_NETWORK_DATA_SWITCH_HYSTERESIS_TIME_LONG()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_OPPORTUNISTIC_NETWORK_DATA_SWITCH_HYSTERESIS_TIME_LONG",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_OPPORTUNISTIC_NETWORK_ENTRY_OR_EXIT_HYSTERESIS_TIME_LONG()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_OPPORTUNISTIC_NETWORK_ENTRY_OR_EXIT_HYSTERESIS_TIME_LONG",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_OPPORTUNISTIC_NETWORK_ENTRY_THRESHOLD_BANDWIDTH_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_OPPORTUNISTIC_NETWORK_ENTRY_THRESHOLD_BANDWIDTH_INT",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_OPPORTUNISTIC_NETWORK_ENTRY_THRESHOLD_RSRP_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_OPPORTUNISTIC_NETWORK_ENTRY_THRESHOLD_RSRP_INT",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_OPPORTUNISTIC_NETWORK_ENTRY_THRESHOLD_RSSNR_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_OPPORTUNISTIC_NETWORK_ENTRY_THRESHOLD_RSSNR_INT",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_OPPORTUNISTIC_NETWORK_EXIT_THRESHOLD_RSRP_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_OPPORTUNISTIC_NETWORK_EXIT_THRESHOLD_RSRP_INT",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_OPPORTUNISTIC_NETWORK_EXIT_THRESHOLD_RSSNR_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_OPPORTUNISTIC_NETWORK_EXIT_THRESHOLD_RSSNR_INT",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_OPPORTUNISTIC_NETWORK_MAX_BACKOFF_TIME_LONG()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_OPPORTUNISTIC_NETWORK_MAX_BACKOFF_TIME_LONG",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_OPPORTUNISTIC_NETWORK_PING_PONG_TIME_LONG()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_OPPORTUNISTIC_NETWORK_PING_PONG_TIME_LONG",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_PING_TEST_BEFORE_DATA_SWITCH_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_PING_TEST_BEFORE_DATA_SWITCH_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_PREFER_2G_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_PREFER_2G_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_PREVENT_CLIR_ACTIVATION_AND_DEACTIVATION_CODE_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_PREVENT_CLIR_ACTIVATION_AND_DEACTIVATION_CODE_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_RADIO_RESTART_FAILURE_CAUSES_INT_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_RADIO_RESTART_FAILURE_CAUSES_INT_ARRAY",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_RCS_CONFIG_SERVER_URL_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_RCS_CONFIG_SERVER_URL_STRING",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_READ_ONLY_APN_FIELDS_STRING_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_READ_ONLY_APN_FIELDS_STRING_ARRAY",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_READ_ONLY_APN_TYPES_STRING_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_READ_ONLY_APN_TYPES_STRING_ARRAY",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_REQUIRE_ENTITLEMENT_CHECKS_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_REQUIRE_ENTITLEMENT_CHECKS_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_RESTART_RADIO_ON_PDP_FAIL_REGULAR_DEACTIVATION_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_RESTART_RADIO_ON_PDP_FAIL_REGULAR_DEACTIVATION_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_RTT_SUPPORTED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_RTT_SUPPORTED_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_SHOW_4G_FOR_3G_DATA_ICON_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SHOW_4G_FOR_3G_DATA_ICON_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_SHOW_4G_FOR_LTE_DATA_ICON_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SHOW_4G_FOR_LTE_DATA_ICON_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_SHOW_APN_SETTING_CDMA_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SHOW_APN_SETTING_CDMA_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_SHOW_BLOCKING_PAY_PHONE_OPTION_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SHOW_BLOCKING_PAY_PHONE_OPTION_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_SHOW_CALL_BLOCKING_DISABLED_NOTIFICATION_ALWAYS_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SHOW_CALL_BLOCKING_DISABLED_NOTIFICATION_ALWAYS_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_SHOW_CDMA_CHOICES_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SHOW_CDMA_CHOICES_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_SHOW_FORWARDED_NUMBER_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SHOW_FORWARDED_NUMBER_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_SHOW_ICCID_IN_SIM_STATUS_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SHOW_ICCID_IN_SIM_STATUS_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_SHOW_IMS_REGISTRATION_STATUS_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SHOW_IMS_REGISTRATION_STATUS_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_SHOW_ONSCREEN_DIAL_BUTTON_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SHOW_ONSCREEN_DIAL_BUTTON_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_SHOW_SIGNAL_STRENGTH_IN_SIM_STATUS_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SHOW_SIGNAL_STRENGTH_IN_SIM_STATUS_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_SHOW_VIDEO_CALL_CHARGES_ALERT_DIALOG_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SHOW_VIDEO_CALL_CHARGES_ALERT_DIALOG_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_SHOW_WFC_LOCATION_PRIVACY_POLICY_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SHOW_WFC_LOCATION_PRIVACY_POLICY_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_SIMPLIFIED_NETWORK_SETTINGS_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SIMPLIFIED_NETWORK_SETTINGS_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_SIM_NETWORK_UNLOCK_ALLOW_DISMISS_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SIM_NETWORK_UNLOCK_ALLOW_DISMISS_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_SMS_REQUIRES_DESTINATION_NUMBER_CONVERSION_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SMS_REQUIRES_DESTINATION_NUMBER_CONVERSION_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_SUPPORT_3GPP_CALL_FORWARDING_WHILE_ROAMING_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SUPPORT_3GPP_CALL_FORWARDING_WHILE_ROAMING_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_SUPPORT_CLIR_NETWORK_DEFAULT_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SUPPORT_CLIR_NETWORK_DEFAULT_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_SUPPORT_CONFERENCE_CALL_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SUPPORT_CONFERENCE_CALL_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_SUPPORT_EMERGENCY_SMS_OVER_IMS_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SUPPORT_EMERGENCY_SMS_OVER_IMS_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_SUPPORT_ENHANCED_CALL_BLOCKING_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SUPPORT_ENHANCED_CALL_BLOCKING_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_SUPPORT_IMS_CONFERENCE_EVENT_PACKAGE_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SUPPORT_IMS_CONFERENCE_EVENT_PACKAGE_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_SUPPORT_PAUSE_IMS_VIDEO_CALLS_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SUPPORT_PAUSE_IMS_VIDEO_CALLS_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_SUPPORT_SWAP_AFTER_MERGE_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SUPPORT_SWAP_AFTER_MERGE_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_SUPPORT_TDSCDMA_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SUPPORT_TDSCDMA_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_SUPPORT_TDSCDMA_ROAMING_NETWORKS_STRING_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SUPPORT_TDSCDMA_ROAMING_NETWORKS_STRING_ARRAY",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_SWITCH_DATA_TO_PRIMARY_IF_PRIMARY_IS_OOS_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SWITCH_DATA_TO_PRIMARY_IF_PRIMARY_IS_OOS_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_TREAT_DOWNGRADED_VIDEO_CALLS_AS_VIDEO_CALLS_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_TREAT_DOWNGRADED_VIDEO_CALLS_AS_VIDEO_CALLS_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_TTY_SUPPORTED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_TTY_SUPPORTED_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_UNLOGGABLE_NUMBERS_STRING_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_UNLOGGABLE_NUMBERS_STRING_ARRAY",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_USE_HFA_FOR_PROVISIONING_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_USE_HFA_FOR_PROVISIONING_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_USE_OTASP_FOR_PROVISIONING_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_USE_OTASP_FOR_PROVISIONING_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_USE_RCS_PRESENCE_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_USE_RCS_PRESENCE_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_USE_RCS_SIP_OPTIONS_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_USE_RCS_SIP_OPTIONS_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_USE_WFC_HOME_NETWORK_MODE_IN_ROAMING_NETWORK_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_USE_WFC_HOME_NETWORK_MODE_IN_ROAMING_NETWORK_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_VOICEMAIL_NOTIFICATION_PERSISTENT_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_VOICEMAIL_NOTIFICATION_PERSISTENT_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_VOICE_PRIVACY_DISABLE_UI_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_VOICE_PRIVACY_DISABLE_UI_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_VOLTE_REPLACEMENT_RAT_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_VOLTE_REPLACEMENT_RAT_INT",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_VVM_CELLULAR_DATA_REQUIRED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_VVM_CELLULAR_DATA_REQUIRED_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_VVM_CLIENT_PREFIX_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_VVM_CLIENT_PREFIX_STRING",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_VVM_DESTINATION_NUMBER_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_VVM_DESTINATION_NUMBER_STRING",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_VVM_DISABLED_CAPABILITIES_STRING_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_VVM_DISABLED_CAPABILITIES_STRING_ARRAY",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_VVM_LEGACY_MODE_ENABLED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_VVM_LEGACY_MODE_ENABLED_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_VVM_PORT_NUMBER_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_VVM_PORT_NUMBER_INT",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_VVM_PREFETCH_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_VVM_PREFETCH_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_VVM_SSL_ENABLED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_VVM_SSL_ENABLED_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_VVM_TYPE_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_VVM_TYPE_STRING",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_WFC_EMERGENCY_ADDRESS_CARRIER_APP_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_WFC_EMERGENCY_ADDRESS_CARRIER_APP_STRING",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_WORLD_MODE_ENABLED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_WORLD_MODE_ENABLED_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager::KEY_WORLD_PHONE_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_WORLD_PHONE_BOOL",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	CarrierConfigManager::CarrierConfigManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean CarrierConfigManager::isConfigForIdentifiedCarrier(android::os::PersistableBundle arg0)
	{
		return callStaticMethod<jboolean>(
			"android.telephony.CarrierConfigManager",
			"isConfigForIdentifiedCarrier",
			"(Landroid/os/PersistableBundle;)Z",
			arg0.object()
		);
	}
	android::os::PersistableBundle CarrierConfigManager::getConfig()
	{
		return callObjectMethod(
			"getConfig",
			"()Landroid/os/PersistableBundle;"
		);
	}
	android::os::PersistableBundle CarrierConfigManager::getConfigByComponentForSubId(JString arg0, jint arg1)
	{
		return callObjectMethod(
			"getConfigByComponentForSubId",
			"(Ljava/lang/String;I)Landroid/os/PersistableBundle;",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::os::PersistableBundle CarrierConfigManager::getConfigForSubId(jint arg0)
	{
		return callObjectMethod(
			"getConfigForSubId",
			"(I)Landroid/os/PersistableBundle;",
			arg0
		);
	}
	void CarrierConfigManager::notifyConfigChangedForSubId(jint arg0)
	{
		callMethod<void>(
			"notifyConfigChangedForSubId",
			"(I)V",
			arg0
		);
	}
} // namespace android::telephony

