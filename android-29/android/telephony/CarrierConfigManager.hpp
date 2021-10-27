#pragma once

#ifndef ANDROID_TELEPHONY_CARRIERCONFIGMANAGER
#define ANDROID_TELEPHONY_CARRIERCONFIGMANAGER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::os
{
	class PersistableBundle;
}

namespace __jni_impl::android::telephony
{
	class CarrierConfigManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_CARRIER_CONFIG_CHANGED();
		static jint DATA_CYCLE_THRESHOLD_DISABLED();
		static jstring EXTRA_SLOT_INDEX();
		static jstring EXTRA_SUBSCRIPTION_INDEX();
		static jstring KEY_ADDITIONAL_CALL_SETTING_BOOL();
		static jstring KEY_ALLOW_ADDING_APNS_BOOL();
		static jstring KEY_ALLOW_ADD_CALL_DURING_VIDEO_CALL_BOOL();
		static jstring KEY_ALLOW_EMERGENCY_NUMBERS_IN_CALL_LOG_BOOL();
		static jstring KEY_ALLOW_EMERGENCY_VIDEO_CALLS_BOOL();
		static jstring KEY_ALLOW_LOCAL_DTMF_TONES_BOOL();
		static jstring KEY_ALLOW_MERGE_WIFI_CALLS_WHEN_VOWIFI_OFF_BOOL();
		static jstring KEY_ALLOW_NON_EMERGENCY_CALLS_IN_ECM_BOOL();
		static jstring KEY_ALWAYS_SHOW_EMERGENCY_ALERT_ONOFF_BOOL();
		static jstring KEY_APN_EXPAND_BOOL();
		static jstring KEY_AUTO_RETRY_ENABLED_BOOL();
		static jstring KEY_CALL_BARRING_SUPPORTS_DEACTIVATE_ALL_BOOL();
		static jstring KEY_CALL_BARRING_SUPPORTS_PASSWORD_CHANGE_BOOL();
		static jstring KEY_CALL_BARRING_VISIBILITY_BOOL();
		static jstring KEY_CALL_FORWARDING_BLOCKS_WHILE_ROAMING_STRING_ARRAY();
		static jstring KEY_CARRIER_ALLOW_TURNOFF_IMS_BOOL();
		static jstring KEY_CARRIER_CALL_SCREENING_APP_STRING();
		static jstring KEY_CARRIER_CONFIG_VERSION_STRING();
		static jstring KEY_CARRIER_DATA_CALL_PERMANENT_FAILURE_STRINGS();
		static jstring KEY_CARRIER_DEFAULT_WFC_IMS_MODE_INT();
		static jstring KEY_CARRIER_DEFAULT_WFC_IMS_ROAMING_MODE_INT();
		static jstring KEY_CARRIER_FORCE_DISABLE_ETWS_CMAS_TEST_BOOL();
		static jstring KEY_CARRIER_IMS_GBA_REQUIRED_BOOL();
		static jstring KEY_CARRIER_INSTANT_LETTERING_AVAILABLE_BOOL();
		static jstring KEY_CARRIER_INSTANT_LETTERING_ENCODING_STRING();
		static jstring KEY_CARRIER_INSTANT_LETTERING_ESCAPED_CHARS_STRING();
		static jstring KEY_CARRIER_INSTANT_LETTERING_INVALID_CHARS_STRING();
		static jstring KEY_CARRIER_INSTANT_LETTERING_LENGTH_LIMIT_INT();
		static jstring KEY_CARRIER_NAME_OVERRIDE_BOOL();
		static jstring KEY_CARRIER_NAME_STRING();
		static jstring KEY_CARRIER_SETTINGS_ENABLE_BOOL();
		static jstring KEY_CARRIER_SUPPORTS_SS_OVER_UT_BOOL();
		static jstring KEY_CARRIER_USE_IMS_FIRST_FOR_EMERGENCY_BOOL();
		static jstring KEY_CARRIER_UT_PROVISIONING_REQUIRED_BOOL();
		static jstring KEY_CARRIER_VOLTE_AVAILABLE_BOOL();
		static jstring KEY_CARRIER_VOLTE_PROVISIONED_BOOL();
		static jstring KEY_CARRIER_VOLTE_PROVISIONING_REQUIRED_BOOL();
		static jstring KEY_CARRIER_VOLTE_TTY_SUPPORTED_BOOL();
		static jstring KEY_CARRIER_VT_AVAILABLE_BOOL();
		static jstring KEY_CARRIER_VVM_PACKAGE_NAME_STRING();
		static jstring KEY_CARRIER_VVM_PACKAGE_NAME_STRING_ARRAY();
		static jstring KEY_CARRIER_WFC_IMS_AVAILABLE_BOOL();
		static jstring KEY_CARRIER_WFC_SUPPORTS_WIFI_ONLY_BOOL();
		static jstring KEY_CDMA_3WAYCALL_FLASH_DELAY_INT();
		static jstring KEY_CDMA_DTMF_TONE_DELAY_INT();
		static jstring KEY_CDMA_NONROAMING_NETWORKS_STRING_ARRAY();
		static jstring KEY_CDMA_ROAMING_MODE_INT();
		static jstring KEY_CDMA_ROAMING_NETWORKS_STRING_ARRAY();
		static jstring KEY_CI_ACTION_ON_SYS_UPDATE_BOOL();
		static jstring KEY_CI_ACTION_ON_SYS_UPDATE_EXTRA_STRING();
		static jstring KEY_CI_ACTION_ON_SYS_UPDATE_EXTRA_VAL_STRING();
		static jstring KEY_CI_ACTION_ON_SYS_UPDATE_INTENT_STRING();
		static jstring KEY_CONFIG_IMS_PACKAGE_OVERRIDE_STRING();
		static jstring KEY_CONFIG_PLANS_PACKAGE_OVERRIDE_STRING();
		static jstring KEY_CONFIG_TELEPHONY_USE_OWN_NUMBER_FOR_VOICEMAIL_BOOL();
		static jstring KEY_CSP_ENABLED_BOOL();
		static jstring KEY_DATA_LIMIT_THRESHOLD_BYTES_LONG();
		static jstring KEY_DATA_WARNING_THRESHOLD_BYTES_LONG();
		static jstring KEY_DEFAULT_SIM_CALL_MANAGER_STRING();
		static jstring KEY_DEFAULT_VM_NUMBER_STRING();
		static jstring KEY_DIAL_STRING_REPLACE_STRING_ARRAY();
		static jstring KEY_DISABLE_CDMA_ACTIVATION_CODE_BOOL();
		static jstring KEY_DISPLAY_HD_AUDIO_PROPERTY_BOOL();
		static jstring KEY_DROP_VIDEO_CALL_WHEN_ANSWERING_AUDIO_CALL_BOOL();
		static jstring KEY_DTMF_TYPE_ENABLED_BOOL();
		static jstring KEY_DURATION_BLOCKING_DISABLED_AFTER_EMERGENCY_INT();
		static jstring KEY_EDITABLE_ENHANCED_4G_LTE_BOOL();
		static jstring KEY_EDITABLE_VOICEMAIL_NUMBER_BOOL();
		static jstring KEY_EDITABLE_VOICEMAIL_NUMBER_SETTING_BOOL();
		static jstring KEY_EMERGENCY_NUMBER_PREFIX_STRING_ARRAY();
		static jstring KEY_ENABLE_DIALER_KEY_VIBRATION_BOOL();
		static jstring KEY_ENHANCED_4G_LTE_ON_BY_DEFAULT_BOOL();
		static jstring KEY_FORCE_HOME_NETWORK_BOOL();
		static jstring KEY_GSM_DTMF_TONE_DELAY_INT();
		static jstring KEY_GSM_NONROAMING_NETWORKS_STRING_ARRAY();
		static jstring KEY_GSM_ROAMING_NETWORKS_STRING_ARRAY();
		static jstring KEY_HAS_IN_CALL_NOISE_SUPPRESSION_BOOL();
		static jstring KEY_HIDE_CARRIER_NETWORK_SETTINGS_BOOL();
		static jstring KEY_HIDE_ENHANCED_4G_LTE_BOOL();
		static jstring KEY_HIDE_IMS_APN_BOOL();
		static jstring KEY_HIDE_PREFERRED_NETWORK_TYPE_BOOL();
		static jstring KEY_HIDE_PRESET_APN_DETAILS_BOOL();
		static jstring KEY_HIDE_SIM_LOCK_SETTINGS_BOOL();
		static jstring KEY_IGNORE_SIM_NETWORK_LOCKED_EVENTS_BOOL();
		static jstring KEY_IMS_CONFERENCE_SIZE_LIMIT_INT();
		static jstring KEY_IMS_DTMF_TONE_DELAY_INT();
		static jstring KEY_IS_IMS_CONFERENCE_SIZE_ENFORCED_BOOL();
		static jstring KEY_MDN_IS_ADDITIONAL_VOICEMAIL_NUMBER_BOOL();
		static jstring KEY_MMS_ALIAS_ENABLED_BOOL();
		static jstring KEY_MMS_ALIAS_MAX_CHARS_INT();
		static jstring KEY_MMS_ALIAS_MIN_CHARS_INT();
		static jstring KEY_MMS_ALLOW_ATTACH_AUDIO_BOOL();
		static jstring KEY_MMS_APPEND_TRANSACTION_ID_BOOL();
		static jstring KEY_MMS_EMAIL_GATEWAY_NUMBER_STRING();
		static jstring KEY_MMS_GROUP_MMS_ENABLED_BOOL();
		static jstring KEY_MMS_HTTP_PARAMS_STRING();
		static jstring KEY_MMS_HTTP_SOCKET_TIMEOUT_INT();
		static jstring KEY_MMS_MAX_IMAGE_HEIGHT_INT();
		static jstring KEY_MMS_MAX_IMAGE_WIDTH_INT();
		static jstring KEY_MMS_MAX_MESSAGE_SIZE_INT();
		static jstring KEY_MMS_MESSAGE_TEXT_MAX_SIZE_INT();
		static jstring KEY_MMS_MMS_DELIVERY_REPORT_ENABLED_BOOL();
		static jstring KEY_MMS_MMS_ENABLED_BOOL();
		static jstring KEY_MMS_MMS_READ_REPORT_ENABLED_BOOL();
		static jstring KEY_MMS_MULTIPART_SMS_ENABLED_BOOL();
		static jstring KEY_MMS_NAI_SUFFIX_STRING();
		static jstring KEY_MMS_NOTIFY_WAP_MMSC_ENABLED_BOOL();
		static jstring KEY_MMS_RECIPIENT_LIMIT_INT();
		static jstring KEY_MMS_SEND_MULTIPART_SMS_AS_SEPARATE_MESSAGES_BOOL();
		static jstring KEY_MMS_SHOW_CELL_BROADCAST_APP_LINKS_BOOL();
		static jstring KEY_MMS_SMS_DELIVERY_REPORT_ENABLED_BOOL();
		static jstring KEY_MMS_SMS_TO_MMS_TEXT_LENGTH_THRESHOLD_INT();
		static jstring KEY_MMS_SMS_TO_MMS_TEXT_THRESHOLD_INT();
		static jstring KEY_MMS_SUBJECT_MAX_LENGTH_INT();
		static jstring KEY_MMS_SUPPORT_HTTP_CHARSET_HEADER_BOOL();
		static jstring KEY_MMS_SUPPORT_MMS_CONTENT_DISPOSITION_BOOL();
		static jstring KEY_MMS_UA_PROF_TAG_NAME_STRING();
		static jstring KEY_MMS_UA_PROF_URL_STRING();
		static jstring KEY_MMS_USER_AGENT_STRING();
		static jstring KEY_MONTHLY_DATA_CYCLE_DAY_INT();
		static jstring KEY_ONLY_SINGLE_DC_ALLOWED_INT_ARRAY();
		static jstring KEY_OPERATOR_SELECTION_EXPAND_BOOL();
		static jstring KEY_OPPORTUNISTIC_NETWORK_DATA_SWITCH_HYSTERESIS_TIME_LONG();
		static jstring KEY_OPPORTUNISTIC_NETWORK_ENTRY_OR_EXIT_HYSTERESIS_TIME_LONG();
		static jstring KEY_OPPORTUNISTIC_NETWORK_ENTRY_THRESHOLD_BANDWIDTH_INT();
		static jstring KEY_OPPORTUNISTIC_NETWORK_ENTRY_THRESHOLD_RSRP_INT();
		static jstring KEY_OPPORTUNISTIC_NETWORK_ENTRY_THRESHOLD_RSSNR_INT();
		static jstring KEY_OPPORTUNISTIC_NETWORK_EXIT_THRESHOLD_RSRP_INT();
		static jstring KEY_OPPORTUNISTIC_NETWORK_EXIT_THRESHOLD_RSSNR_INT();
		static jstring KEY_PREFER_2G_BOOL();
		static jstring KEY_RADIO_RESTART_FAILURE_CAUSES_INT_ARRAY();
		static jstring KEY_RCS_CONFIG_SERVER_URL_STRING();
		static jstring KEY_REQUIRE_ENTITLEMENT_CHECKS_BOOL();
		static jstring KEY_RESTART_RADIO_ON_PDP_FAIL_REGULAR_DEACTIVATION_BOOL();
		static jstring KEY_RTT_SUPPORTED_BOOL();
		static jstring KEY_SHOW_APN_SETTING_CDMA_BOOL();
		static jstring KEY_SHOW_CALL_BLOCKING_DISABLED_NOTIFICATION_ALWAYS_BOOL();
		static jstring KEY_SHOW_CDMA_CHOICES_BOOL();
		static jstring KEY_SHOW_ICCID_IN_SIM_STATUS_BOOL();
		static jstring KEY_SHOW_ONSCREEN_DIAL_BUTTON_BOOL();
		static jstring KEY_SHOW_SIGNAL_STRENGTH_IN_SIM_STATUS_BOOL();
		static jstring KEY_SIMPLIFIED_NETWORK_SETTINGS_BOOL();
		static jstring KEY_SIM_NETWORK_UNLOCK_ALLOW_DISMISS_BOOL();
		static jstring KEY_SMS_REQUIRES_DESTINATION_NUMBER_CONVERSION_BOOL();
		static jstring KEY_SUPPORT_3GPP_CALL_FORWARDING_WHILE_ROAMING_BOOL();
		static jstring KEY_SUPPORT_CLIR_NETWORK_DEFAULT_BOOL();
		static jstring KEY_SUPPORT_CONFERENCE_CALL_BOOL();
		static jstring KEY_SUPPORT_EMERGENCY_SMS_OVER_IMS_BOOL();
		static jstring KEY_SUPPORT_PAUSE_IMS_VIDEO_CALLS_BOOL();
		static jstring KEY_SUPPORT_SWAP_AFTER_MERGE_BOOL();
		static jstring KEY_TREAT_DOWNGRADED_VIDEO_CALLS_AS_VIDEO_CALLS_BOOL();
		static jstring KEY_TTY_SUPPORTED_BOOL();
		static jstring KEY_USE_HFA_FOR_PROVISIONING_BOOL();
		static jstring KEY_USE_OTASP_FOR_PROVISIONING_BOOL();
		static jstring KEY_USE_RCS_PRESENCE_BOOL();
		static jstring KEY_VOICEMAIL_NOTIFICATION_PERSISTENT_BOOL();
		static jstring KEY_VOICE_PRIVACY_DISABLE_UI_BOOL();
		static jstring KEY_VOLTE_REPLACEMENT_RAT_INT();
		static jstring KEY_VVM_CELLULAR_DATA_REQUIRED_BOOL();
		static jstring KEY_VVM_CLIENT_PREFIX_STRING();
		static jstring KEY_VVM_DESTINATION_NUMBER_STRING();
		static jstring KEY_VVM_DISABLED_CAPABILITIES_STRING_ARRAY();
		static jstring KEY_VVM_LEGACY_MODE_ENABLED_BOOL();
		static jstring KEY_VVM_PORT_NUMBER_INT();
		static jstring KEY_VVM_PREFETCH_BOOL();
		static jstring KEY_VVM_SSL_ENABLED_BOOL();
		static jstring KEY_VVM_TYPE_STRING();
		static jstring KEY_WORLD_PHONE_BOOL();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jboolean isConfigForIdentifiedCarrier(__jni_impl::android::os::PersistableBundle arg0);
		QAndroidJniObject getConfig();
		QAndroidJniObject getConfigForSubId(jint arg0);
		void notifyConfigChangedForSubId(jint arg0);
	};
} // namespace __jni_impl::android::telephony

#include "../content/Context.hpp"
#include "../os/PersistableBundle.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	jstring CarrierConfigManager::ACTION_CARRIER_CONFIG_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"ACTION_CARRIER_CONFIG_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint CarrierConfigManager::DATA_CYCLE_THRESHOLD_DISABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.CarrierConfigManager",
			"DATA_CYCLE_THRESHOLD_DISABLED"
		);
	}
	jstring CarrierConfigManager::EXTRA_SLOT_INDEX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"EXTRA_SLOT_INDEX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::EXTRA_SUBSCRIPTION_INDEX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"EXTRA_SUBSCRIPTION_INDEX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_ADDITIONAL_CALL_SETTING_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_ADDITIONAL_CALL_SETTING_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_ALLOW_ADDING_APNS_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_ALLOW_ADDING_APNS_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_ALLOW_ADD_CALL_DURING_VIDEO_CALL_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_ALLOW_ADD_CALL_DURING_VIDEO_CALL_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_ALLOW_EMERGENCY_NUMBERS_IN_CALL_LOG_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_ALLOW_EMERGENCY_NUMBERS_IN_CALL_LOG_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_ALLOW_EMERGENCY_VIDEO_CALLS_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_ALLOW_EMERGENCY_VIDEO_CALLS_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_ALLOW_LOCAL_DTMF_TONES_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_ALLOW_LOCAL_DTMF_TONES_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_ALLOW_MERGE_WIFI_CALLS_WHEN_VOWIFI_OFF_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_ALLOW_MERGE_WIFI_CALLS_WHEN_VOWIFI_OFF_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_ALLOW_NON_EMERGENCY_CALLS_IN_ECM_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_ALLOW_NON_EMERGENCY_CALLS_IN_ECM_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_ALWAYS_SHOW_EMERGENCY_ALERT_ONOFF_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_ALWAYS_SHOW_EMERGENCY_ALERT_ONOFF_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_APN_EXPAND_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_APN_EXPAND_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_AUTO_RETRY_ENABLED_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_AUTO_RETRY_ENABLED_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CALL_BARRING_SUPPORTS_DEACTIVATE_ALL_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CALL_BARRING_SUPPORTS_DEACTIVATE_ALL_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CALL_BARRING_SUPPORTS_PASSWORD_CHANGE_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CALL_BARRING_SUPPORTS_PASSWORD_CHANGE_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CALL_BARRING_VISIBILITY_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CALL_BARRING_VISIBILITY_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CALL_FORWARDING_BLOCKS_WHILE_ROAMING_STRING_ARRAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CALL_FORWARDING_BLOCKS_WHILE_ROAMING_STRING_ARRAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CARRIER_ALLOW_TURNOFF_IMS_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_ALLOW_TURNOFF_IMS_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CARRIER_CALL_SCREENING_APP_STRING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_CALL_SCREENING_APP_STRING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CARRIER_CONFIG_VERSION_STRING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_CONFIG_VERSION_STRING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CARRIER_DATA_CALL_PERMANENT_FAILURE_STRINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_DATA_CALL_PERMANENT_FAILURE_STRINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CARRIER_DEFAULT_WFC_IMS_MODE_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_DEFAULT_WFC_IMS_MODE_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CARRIER_DEFAULT_WFC_IMS_ROAMING_MODE_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_DEFAULT_WFC_IMS_ROAMING_MODE_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CARRIER_FORCE_DISABLE_ETWS_CMAS_TEST_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_FORCE_DISABLE_ETWS_CMAS_TEST_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CARRIER_IMS_GBA_REQUIRED_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_IMS_GBA_REQUIRED_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CARRIER_INSTANT_LETTERING_AVAILABLE_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_INSTANT_LETTERING_AVAILABLE_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CARRIER_INSTANT_LETTERING_ENCODING_STRING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_INSTANT_LETTERING_ENCODING_STRING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CARRIER_INSTANT_LETTERING_ESCAPED_CHARS_STRING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_INSTANT_LETTERING_ESCAPED_CHARS_STRING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CARRIER_INSTANT_LETTERING_INVALID_CHARS_STRING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_INSTANT_LETTERING_INVALID_CHARS_STRING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CARRIER_INSTANT_LETTERING_LENGTH_LIMIT_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_INSTANT_LETTERING_LENGTH_LIMIT_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CARRIER_NAME_OVERRIDE_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_NAME_OVERRIDE_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CARRIER_NAME_STRING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_NAME_STRING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CARRIER_SETTINGS_ENABLE_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_SETTINGS_ENABLE_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CARRIER_SUPPORTS_SS_OVER_UT_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_SUPPORTS_SS_OVER_UT_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CARRIER_USE_IMS_FIRST_FOR_EMERGENCY_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_USE_IMS_FIRST_FOR_EMERGENCY_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CARRIER_UT_PROVISIONING_REQUIRED_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_UT_PROVISIONING_REQUIRED_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CARRIER_VOLTE_AVAILABLE_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_VOLTE_AVAILABLE_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CARRIER_VOLTE_PROVISIONED_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_VOLTE_PROVISIONED_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CARRIER_VOLTE_PROVISIONING_REQUIRED_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_VOLTE_PROVISIONING_REQUIRED_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CARRIER_VOLTE_TTY_SUPPORTED_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_VOLTE_TTY_SUPPORTED_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CARRIER_VT_AVAILABLE_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_VT_AVAILABLE_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CARRIER_VVM_PACKAGE_NAME_STRING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_VVM_PACKAGE_NAME_STRING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CARRIER_VVM_PACKAGE_NAME_STRING_ARRAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_VVM_PACKAGE_NAME_STRING_ARRAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CARRIER_WFC_IMS_AVAILABLE_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_WFC_IMS_AVAILABLE_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CARRIER_WFC_SUPPORTS_WIFI_ONLY_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CARRIER_WFC_SUPPORTS_WIFI_ONLY_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CDMA_3WAYCALL_FLASH_DELAY_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CDMA_3WAYCALL_FLASH_DELAY_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CDMA_DTMF_TONE_DELAY_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CDMA_DTMF_TONE_DELAY_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CDMA_NONROAMING_NETWORKS_STRING_ARRAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CDMA_NONROAMING_NETWORKS_STRING_ARRAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CDMA_ROAMING_MODE_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CDMA_ROAMING_MODE_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CDMA_ROAMING_NETWORKS_STRING_ARRAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CDMA_ROAMING_NETWORKS_STRING_ARRAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CI_ACTION_ON_SYS_UPDATE_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CI_ACTION_ON_SYS_UPDATE_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CI_ACTION_ON_SYS_UPDATE_EXTRA_STRING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CI_ACTION_ON_SYS_UPDATE_EXTRA_STRING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CI_ACTION_ON_SYS_UPDATE_EXTRA_VAL_STRING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CI_ACTION_ON_SYS_UPDATE_EXTRA_VAL_STRING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CI_ACTION_ON_SYS_UPDATE_INTENT_STRING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CI_ACTION_ON_SYS_UPDATE_INTENT_STRING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CONFIG_IMS_PACKAGE_OVERRIDE_STRING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CONFIG_IMS_PACKAGE_OVERRIDE_STRING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CONFIG_PLANS_PACKAGE_OVERRIDE_STRING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CONFIG_PLANS_PACKAGE_OVERRIDE_STRING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CONFIG_TELEPHONY_USE_OWN_NUMBER_FOR_VOICEMAIL_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CONFIG_TELEPHONY_USE_OWN_NUMBER_FOR_VOICEMAIL_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_CSP_ENABLED_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_CSP_ENABLED_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_DATA_LIMIT_THRESHOLD_BYTES_LONG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_DATA_LIMIT_THRESHOLD_BYTES_LONG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_DATA_WARNING_THRESHOLD_BYTES_LONG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_DATA_WARNING_THRESHOLD_BYTES_LONG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_DEFAULT_SIM_CALL_MANAGER_STRING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_DEFAULT_SIM_CALL_MANAGER_STRING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_DEFAULT_VM_NUMBER_STRING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_DEFAULT_VM_NUMBER_STRING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_DIAL_STRING_REPLACE_STRING_ARRAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_DIAL_STRING_REPLACE_STRING_ARRAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_DISABLE_CDMA_ACTIVATION_CODE_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_DISABLE_CDMA_ACTIVATION_CODE_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_DISPLAY_HD_AUDIO_PROPERTY_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_DISPLAY_HD_AUDIO_PROPERTY_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_DROP_VIDEO_CALL_WHEN_ANSWERING_AUDIO_CALL_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_DROP_VIDEO_CALL_WHEN_ANSWERING_AUDIO_CALL_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_DTMF_TYPE_ENABLED_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_DTMF_TYPE_ENABLED_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_DURATION_BLOCKING_DISABLED_AFTER_EMERGENCY_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_DURATION_BLOCKING_DISABLED_AFTER_EMERGENCY_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_EDITABLE_ENHANCED_4G_LTE_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_EDITABLE_ENHANCED_4G_LTE_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_EDITABLE_VOICEMAIL_NUMBER_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_EDITABLE_VOICEMAIL_NUMBER_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_EDITABLE_VOICEMAIL_NUMBER_SETTING_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_EDITABLE_VOICEMAIL_NUMBER_SETTING_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_EMERGENCY_NUMBER_PREFIX_STRING_ARRAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_EMERGENCY_NUMBER_PREFIX_STRING_ARRAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_ENABLE_DIALER_KEY_VIBRATION_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_ENABLE_DIALER_KEY_VIBRATION_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_ENHANCED_4G_LTE_ON_BY_DEFAULT_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_ENHANCED_4G_LTE_ON_BY_DEFAULT_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_FORCE_HOME_NETWORK_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_FORCE_HOME_NETWORK_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_GSM_DTMF_TONE_DELAY_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_GSM_DTMF_TONE_DELAY_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_GSM_NONROAMING_NETWORKS_STRING_ARRAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_GSM_NONROAMING_NETWORKS_STRING_ARRAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_GSM_ROAMING_NETWORKS_STRING_ARRAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_GSM_ROAMING_NETWORKS_STRING_ARRAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_HAS_IN_CALL_NOISE_SUPPRESSION_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_HAS_IN_CALL_NOISE_SUPPRESSION_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_HIDE_CARRIER_NETWORK_SETTINGS_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_HIDE_CARRIER_NETWORK_SETTINGS_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_HIDE_ENHANCED_4G_LTE_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_HIDE_ENHANCED_4G_LTE_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_HIDE_IMS_APN_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_HIDE_IMS_APN_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_HIDE_PREFERRED_NETWORK_TYPE_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_HIDE_PREFERRED_NETWORK_TYPE_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_HIDE_PRESET_APN_DETAILS_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_HIDE_PRESET_APN_DETAILS_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_HIDE_SIM_LOCK_SETTINGS_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_HIDE_SIM_LOCK_SETTINGS_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_IGNORE_SIM_NETWORK_LOCKED_EVENTS_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_IGNORE_SIM_NETWORK_LOCKED_EVENTS_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_IMS_CONFERENCE_SIZE_LIMIT_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_IMS_CONFERENCE_SIZE_LIMIT_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_IMS_DTMF_TONE_DELAY_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_IMS_DTMF_TONE_DELAY_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_IS_IMS_CONFERENCE_SIZE_ENFORCED_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_IS_IMS_CONFERENCE_SIZE_ENFORCED_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_MDN_IS_ADDITIONAL_VOICEMAIL_NUMBER_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MDN_IS_ADDITIONAL_VOICEMAIL_NUMBER_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_MMS_ALIAS_ENABLED_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_ALIAS_ENABLED_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_MMS_ALIAS_MAX_CHARS_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_ALIAS_MAX_CHARS_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_MMS_ALIAS_MIN_CHARS_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_ALIAS_MIN_CHARS_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_MMS_ALLOW_ATTACH_AUDIO_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_ALLOW_ATTACH_AUDIO_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_MMS_APPEND_TRANSACTION_ID_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_APPEND_TRANSACTION_ID_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_MMS_EMAIL_GATEWAY_NUMBER_STRING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_EMAIL_GATEWAY_NUMBER_STRING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_MMS_GROUP_MMS_ENABLED_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_GROUP_MMS_ENABLED_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_MMS_HTTP_PARAMS_STRING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_HTTP_PARAMS_STRING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_MMS_HTTP_SOCKET_TIMEOUT_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_HTTP_SOCKET_TIMEOUT_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_MMS_MAX_IMAGE_HEIGHT_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_MAX_IMAGE_HEIGHT_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_MMS_MAX_IMAGE_WIDTH_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_MAX_IMAGE_WIDTH_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_MMS_MAX_MESSAGE_SIZE_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_MAX_MESSAGE_SIZE_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_MMS_MESSAGE_TEXT_MAX_SIZE_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_MESSAGE_TEXT_MAX_SIZE_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_MMS_MMS_DELIVERY_REPORT_ENABLED_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_MMS_DELIVERY_REPORT_ENABLED_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_MMS_MMS_ENABLED_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_MMS_ENABLED_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_MMS_MMS_READ_REPORT_ENABLED_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_MMS_READ_REPORT_ENABLED_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_MMS_MULTIPART_SMS_ENABLED_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_MULTIPART_SMS_ENABLED_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_MMS_NAI_SUFFIX_STRING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_NAI_SUFFIX_STRING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_MMS_NOTIFY_WAP_MMSC_ENABLED_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_NOTIFY_WAP_MMSC_ENABLED_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_MMS_RECIPIENT_LIMIT_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_RECIPIENT_LIMIT_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_MMS_SEND_MULTIPART_SMS_AS_SEPARATE_MESSAGES_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_SEND_MULTIPART_SMS_AS_SEPARATE_MESSAGES_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_MMS_SHOW_CELL_BROADCAST_APP_LINKS_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_SHOW_CELL_BROADCAST_APP_LINKS_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_MMS_SMS_DELIVERY_REPORT_ENABLED_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_SMS_DELIVERY_REPORT_ENABLED_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_MMS_SMS_TO_MMS_TEXT_LENGTH_THRESHOLD_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_SMS_TO_MMS_TEXT_LENGTH_THRESHOLD_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_MMS_SMS_TO_MMS_TEXT_THRESHOLD_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_SMS_TO_MMS_TEXT_THRESHOLD_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_MMS_SUBJECT_MAX_LENGTH_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_SUBJECT_MAX_LENGTH_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_MMS_SUPPORT_HTTP_CHARSET_HEADER_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_SUPPORT_HTTP_CHARSET_HEADER_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_MMS_SUPPORT_MMS_CONTENT_DISPOSITION_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_SUPPORT_MMS_CONTENT_DISPOSITION_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_MMS_UA_PROF_TAG_NAME_STRING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_UA_PROF_TAG_NAME_STRING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_MMS_UA_PROF_URL_STRING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_UA_PROF_URL_STRING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_MMS_USER_AGENT_STRING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MMS_USER_AGENT_STRING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_MONTHLY_DATA_CYCLE_DAY_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_MONTHLY_DATA_CYCLE_DAY_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_ONLY_SINGLE_DC_ALLOWED_INT_ARRAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_ONLY_SINGLE_DC_ALLOWED_INT_ARRAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_OPERATOR_SELECTION_EXPAND_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_OPERATOR_SELECTION_EXPAND_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_OPPORTUNISTIC_NETWORK_DATA_SWITCH_HYSTERESIS_TIME_LONG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_OPPORTUNISTIC_NETWORK_DATA_SWITCH_HYSTERESIS_TIME_LONG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_OPPORTUNISTIC_NETWORK_ENTRY_OR_EXIT_HYSTERESIS_TIME_LONG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_OPPORTUNISTIC_NETWORK_ENTRY_OR_EXIT_HYSTERESIS_TIME_LONG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_OPPORTUNISTIC_NETWORK_ENTRY_THRESHOLD_BANDWIDTH_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_OPPORTUNISTIC_NETWORK_ENTRY_THRESHOLD_BANDWIDTH_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_OPPORTUNISTIC_NETWORK_ENTRY_THRESHOLD_RSRP_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_OPPORTUNISTIC_NETWORK_ENTRY_THRESHOLD_RSRP_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_OPPORTUNISTIC_NETWORK_ENTRY_THRESHOLD_RSSNR_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_OPPORTUNISTIC_NETWORK_ENTRY_THRESHOLD_RSSNR_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_OPPORTUNISTIC_NETWORK_EXIT_THRESHOLD_RSRP_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_OPPORTUNISTIC_NETWORK_EXIT_THRESHOLD_RSRP_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_OPPORTUNISTIC_NETWORK_EXIT_THRESHOLD_RSSNR_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_OPPORTUNISTIC_NETWORK_EXIT_THRESHOLD_RSSNR_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_PREFER_2G_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_PREFER_2G_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_RADIO_RESTART_FAILURE_CAUSES_INT_ARRAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_RADIO_RESTART_FAILURE_CAUSES_INT_ARRAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_RCS_CONFIG_SERVER_URL_STRING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_RCS_CONFIG_SERVER_URL_STRING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_REQUIRE_ENTITLEMENT_CHECKS_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_REQUIRE_ENTITLEMENT_CHECKS_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_RESTART_RADIO_ON_PDP_FAIL_REGULAR_DEACTIVATION_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_RESTART_RADIO_ON_PDP_FAIL_REGULAR_DEACTIVATION_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_RTT_SUPPORTED_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_RTT_SUPPORTED_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_SHOW_APN_SETTING_CDMA_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SHOW_APN_SETTING_CDMA_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_SHOW_CALL_BLOCKING_DISABLED_NOTIFICATION_ALWAYS_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SHOW_CALL_BLOCKING_DISABLED_NOTIFICATION_ALWAYS_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_SHOW_CDMA_CHOICES_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SHOW_CDMA_CHOICES_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_SHOW_ICCID_IN_SIM_STATUS_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SHOW_ICCID_IN_SIM_STATUS_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_SHOW_ONSCREEN_DIAL_BUTTON_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SHOW_ONSCREEN_DIAL_BUTTON_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_SHOW_SIGNAL_STRENGTH_IN_SIM_STATUS_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SHOW_SIGNAL_STRENGTH_IN_SIM_STATUS_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_SIMPLIFIED_NETWORK_SETTINGS_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SIMPLIFIED_NETWORK_SETTINGS_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_SIM_NETWORK_UNLOCK_ALLOW_DISMISS_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SIM_NETWORK_UNLOCK_ALLOW_DISMISS_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_SMS_REQUIRES_DESTINATION_NUMBER_CONVERSION_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SMS_REQUIRES_DESTINATION_NUMBER_CONVERSION_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_SUPPORT_3GPP_CALL_FORWARDING_WHILE_ROAMING_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SUPPORT_3GPP_CALL_FORWARDING_WHILE_ROAMING_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_SUPPORT_CLIR_NETWORK_DEFAULT_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SUPPORT_CLIR_NETWORK_DEFAULT_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_SUPPORT_CONFERENCE_CALL_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SUPPORT_CONFERENCE_CALL_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_SUPPORT_EMERGENCY_SMS_OVER_IMS_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SUPPORT_EMERGENCY_SMS_OVER_IMS_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_SUPPORT_PAUSE_IMS_VIDEO_CALLS_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SUPPORT_PAUSE_IMS_VIDEO_CALLS_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_SUPPORT_SWAP_AFTER_MERGE_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_SUPPORT_SWAP_AFTER_MERGE_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_TREAT_DOWNGRADED_VIDEO_CALLS_AS_VIDEO_CALLS_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_TREAT_DOWNGRADED_VIDEO_CALLS_AS_VIDEO_CALLS_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_TTY_SUPPORTED_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_TTY_SUPPORTED_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_USE_HFA_FOR_PROVISIONING_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_USE_HFA_FOR_PROVISIONING_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_USE_OTASP_FOR_PROVISIONING_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_USE_OTASP_FOR_PROVISIONING_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_USE_RCS_PRESENCE_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_USE_RCS_PRESENCE_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_VOICEMAIL_NOTIFICATION_PERSISTENT_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_VOICEMAIL_NOTIFICATION_PERSISTENT_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_VOICE_PRIVACY_DISABLE_UI_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_VOICE_PRIVACY_DISABLE_UI_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_VOLTE_REPLACEMENT_RAT_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_VOLTE_REPLACEMENT_RAT_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_VVM_CELLULAR_DATA_REQUIRED_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_VVM_CELLULAR_DATA_REQUIRED_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_VVM_CLIENT_PREFIX_STRING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_VVM_CLIENT_PREFIX_STRING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_VVM_DESTINATION_NUMBER_STRING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_VVM_DESTINATION_NUMBER_STRING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_VVM_DISABLED_CAPABILITIES_STRING_ARRAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_VVM_DISABLED_CAPABILITIES_STRING_ARRAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_VVM_LEGACY_MODE_ENABLED_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_VVM_LEGACY_MODE_ENABLED_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_VVM_PORT_NUMBER_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_VVM_PORT_NUMBER_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_VVM_PREFETCH_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_VVM_PREFETCH_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_VVM_SSL_ENABLED_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_VVM_SSL_ENABLED_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_VVM_TYPE_STRING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_VVM_TYPE_STRING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager::KEY_WORLD_PHONE_BOOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CarrierConfigManager",
			"KEY_WORLD_PHONE_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void CarrierConfigManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.CarrierConfigManager",
			"(V)V");
	}
	
	// Methods
	jboolean CarrierConfigManager::isConfigForIdentifiedCarrier(__jni_impl::android::os::PersistableBundle arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.telephony.CarrierConfigManager",
			"isConfigForIdentifiedCarrier",
			"(Landroid/os/PersistableBundle;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CarrierConfigManager::getConfig()
	{
		return __thiz.callObjectMethod(
			"getConfig",
			"()Landroid/os/PersistableBundle;"
		);
	}
	QAndroidJniObject CarrierConfigManager::getConfigForSubId(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getConfigForSubId",
			"(I)Landroid/os/PersistableBundle;",
			arg0
		);
	}
	void CarrierConfigManager::notifyConfigChangedForSubId(jint arg0)
	{
		__thiz.callMethod<void>(
			"notifyConfigChangedForSubId",
			"(I)V",
			arg0
		);
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class CarrierConfigManager : public __jni_impl::android::telephony::CarrierConfigManager
	{
	public:
		CarrierConfigManager(QAndroidJniObject obj) { __thiz = obj; }
		CarrierConfigManager()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_CARRIERCONFIGMANAGER

