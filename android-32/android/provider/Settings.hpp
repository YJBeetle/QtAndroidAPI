#pragma once

#include "../content/Context.def.hpp"
#include "../../JString.hpp"
#include "./Settings.def.hpp"

namespace android::provider
{
	// Fields
	inline JString Settings::ACTION_ACCESSIBILITY_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_ACCESSIBILITY_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_ADD_ACCOUNT()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_ADD_ACCOUNT",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_AIRPLANE_MODE_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_AIRPLANE_MODE_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_APN_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_APN_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_APPLICATION_DETAILS_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_APPLICATION_DETAILS_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_APPLICATION_DEVELOPMENT_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_APPLICATION_DEVELOPMENT_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_APPLICATION_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_APPLICATION_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_APP_NOTIFICATION_BUBBLE_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_APP_NOTIFICATION_BUBBLE_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_APP_NOTIFICATION_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_APP_NOTIFICATION_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_APP_OPEN_BY_DEFAULT_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_APP_OPEN_BY_DEFAULT_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_APP_SEARCH_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_APP_SEARCH_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_APP_USAGE_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_APP_USAGE_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_AUTO_ROTATE_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_AUTO_ROTATE_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_BATTERY_SAVER_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_BATTERY_SAVER_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_BIOMETRIC_ENROLL()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_BIOMETRIC_ENROLL",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_BLUETOOTH_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_BLUETOOTH_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_CAPTIONING_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_CAPTIONING_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_CAST_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_CAST_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_CHANNEL_NOTIFICATION_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_CHANNEL_NOTIFICATION_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_CONDITION_PROVIDER_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_CONDITION_PROVIDER_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_DATA_ROAMING_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_DATA_ROAMING_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_DATA_USAGE_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_DATA_USAGE_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_DATE_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_DATE_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_DEVICE_INFO_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_DEVICE_INFO_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_DISPLAY_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_DISPLAY_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_DREAM_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_DREAM_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_FINGERPRINT_ENROLL()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_FINGERPRINT_ENROLL",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_HARD_KEYBOARD_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_HARD_KEYBOARD_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_HOME_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_HOME_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_IGNORE_BACKGROUND_DATA_RESTRICTIONS_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_IGNORE_BACKGROUND_DATA_RESTRICTIONS_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_IGNORE_BATTERY_OPTIMIZATION_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_IGNORE_BATTERY_OPTIMIZATION_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_INPUT_METHOD_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_INPUT_METHOD_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_INPUT_METHOD_SUBTYPE_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_INPUT_METHOD_SUBTYPE_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_INTERNAL_STORAGE_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_INTERNAL_STORAGE_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_LOCALE_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_LOCALE_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_LOCATION_SOURCE_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_LOCATION_SOURCE_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_MANAGE_ALL_APPLICATIONS_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_MANAGE_ALL_APPLICATIONS_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_MANAGE_ALL_FILES_ACCESS_PERMISSION()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_MANAGE_ALL_FILES_ACCESS_PERMISSION",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_MANAGE_ALL_SIM_PROFILES_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_MANAGE_ALL_SIM_PROFILES_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_MANAGE_APPLICATIONS_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_MANAGE_APPLICATIONS_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_MANAGE_APP_ALL_FILES_ACCESS_PERMISSION()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_MANAGE_APP_ALL_FILES_ACCESS_PERMISSION",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_MANAGE_DEFAULT_APPS_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_MANAGE_DEFAULT_APPS_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_MANAGE_OVERLAY_PERMISSION()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_MANAGE_OVERLAY_PERMISSION",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_MANAGE_UNKNOWN_APP_SOURCES()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_MANAGE_UNKNOWN_APP_SOURCES",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_MANAGE_WRITE_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_MANAGE_WRITE_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_MEMORY_CARD_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_MEMORY_CARD_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_NETWORK_OPERATOR_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_NETWORK_OPERATOR_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_NFCSHARING_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_NFCSHARING_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_NFC_PAYMENT_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_NFC_PAYMENT_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_NFC_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_NFC_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_NIGHT_DISPLAY_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_NIGHT_DISPLAY_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_NOTIFICATION_ASSISTANT_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_NOTIFICATION_ASSISTANT_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_NOTIFICATION_LISTENER_DETAIL_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_NOTIFICATION_LISTENER_DETAIL_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_NOTIFICATION_LISTENER_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_NOTIFICATION_LISTENER_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_NOTIFICATION_POLICY_ACCESS_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_NOTIFICATION_POLICY_ACCESS_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_PRINT_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_PRINT_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_PRIVACY_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_PRIVACY_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_PROCESS_WIFI_EASY_CONNECT_URI()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_PROCESS_WIFI_EASY_CONNECT_URI",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_QUICK_ACCESS_WALLET_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_QUICK_ACCESS_WALLET_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_QUICK_LAUNCH_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_QUICK_LAUNCH_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_REQUEST_IGNORE_BATTERY_OPTIMIZATIONS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_REQUEST_IGNORE_BATTERY_OPTIMIZATIONS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_REQUEST_MANAGE_MEDIA()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_REQUEST_MANAGE_MEDIA",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_REQUEST_SCHEDULE_EXACT_ALARM()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_REQUEST_SCHEDULE_EXACT_ALARM",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_REQUEST_SET_AUTOFILL_SERVICE()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_REQUEST_SET_AUTOFILL_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_SEARCH_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_SEARCH_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_SECURITY_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_SECURITY_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_SETTINGS_EMBED_DEEP_LINK_ACTIVITY()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_SETTINGS_EMBED_DEEP_LINK_ACTIVITY",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_SHOW_REGULATORY_INFO()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_SHOW_REGULATORY_INFO",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_SHOW_WORK_POLICY_INFO()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_SHOW_WORK_POLICY_INFO",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_SOUND_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_SOUND_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_STORAGE_VOLUME_ACCESS_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_STORAGE_VOLUME_ACCESS_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_SYNC_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_SYNC_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_USAGE_ACCESS_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_USAGE_ACCESS_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_USER_DICTIONARY_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_USER_DICTIONARY_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_VOICE_CONTROL_AIRPLANE_MODE()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_VOICE_CONTROL_AIRPLANE_MODE",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_VOICE_CONTROL_BATTERY_SAVER_MODE()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_VOICE_CONTROL_BATTERY_SAVER_MODE",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_VOICE_CONTROL_DO_NOT_DISTURB_MODE()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_VOICE_CONTROL_DO_NOT_DISTURB_MODE",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_VOICE_INPUT_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_VOICE_INPUT_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_VPN_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_VPN_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_VR_LISTENER_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_VR_LISTENER_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_WEBVIEW_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_WEBVIEW_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_WIFI_ADD_NETWORKS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_WIFI_ADD_NETWORKS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_WIFI_IP_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_WIFI_IP_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_WIFI_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_WIFI_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_WIRELESS_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_WIRELESS_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::ACTION_ZEN_MODE_PRIORITY_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_ZEN_MODE_PRIORITY_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline jint Settings::ADD_WIFI_RESULT_ADD_OR_UPDATE_FAILED()
	{
		return getStaticField<jint>(
			"android.provider.Settings",
			"ADD_WIFI_RESULT_ADD_OR_UPDATE_FAILED"
		);
	}
	inline jint Settings::ADD_WIFI_RESULT_ALREADY_EXISTS()
	{
		return getStaticField<jint>(
			"android.provider.Settings",
			"ADD_WIFI_RESULT_ALREADY_EXISTS"
		);
	}
	inline jint Settings::ADD_WIFI_RESULT_SUCCESS()
	{
		return getStaticField<jint>(
			"android.provider.Settings",
			"ADD_WIFI_RESULT_SUCCESS"
		);
	}
	inline JString Settings::AUTHORITY()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"AUTHORITY",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::EXTRA_ACCOUNT_TYPES()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"EXTRA_ACCOUNT_TYPES",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::EXTRA_AIRPLANE_MODE_ENABLED()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"EXTRA_AIRPLANE_MODE_ENABLED",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::EXTRA_APP_PACKAGE()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"EXTRA_APP_PACKAGE",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::EXTRA_AUTHORITIES()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"EXTRA_AUTHORITIES",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::EXTRA_BATTERY_SAVER_MODE_ENABLED()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"EXTRA_BATTERY_SAVER_MODE_ENABLED",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::EXTRA_BIOMETRIC_AUTHENTICATORS_ALLOWED()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"EXTRA_BIOMETRIC_AUTHENTICATORS_ALLOWED",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::EXTRA_CHANNEL_FILTER_LIST()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"EXTRA_CHANNEL_FILTER_LIST",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::EXTRA_CHANNEL_ID()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"EXTRA_CHANNEL_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::EXTRA_CONVERSATION_ID()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"EXTRA_CONVERSATION_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::EXTRA_DO_NOT_DISTURB_MODE_ENABLED()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"EXTRA_DO_NOT_DISTURB_MODE_ENABLED",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::EXTRA_DO_NOT_DISTURB_MODE_MINUTES()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"EXTRA_DO_NOT_DISTURB_MODE_MINUTES",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::EXTRA_EASY_CONNECT_ATTEMPTED_SSID()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"EXTRA_EASY_CONNECT_ATTEMPTED_SSID",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::EXTRA_EASY_CONNECT_BAND_LIST()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"EXTRA_EASY_CONNECT_BAND_LIST",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::EXTRA_EASY_CONNECT_CHANNEL_LIST()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"EXTRA_EASY_CONNECT_CHANNEL_LIST",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::EXTRA_EASY_CONNECT_ERROR_CODE()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"EXTRA_EASY_CONNECT_ERROR_CODE",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::EXTRA_INPUT_METHOD_ID()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"EXTRA_INPUT_METHOD_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::EXTRA_NOTIFICATION_LISTENER_COMPONENT_NAME()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"EXTRA_NOTIFICATION_LISTENER_COMPONENT_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::EXTRA_SETTINGS_EMBEDDED_DEEP_LINK_HIGHLIGHT_MENU_KEY()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"EXTRA_SETTINGS_EMBEDDED_DEEP_LINK_HIGHLIGHT_MENU_KEY",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::EXTRA_SETTINGS_EMBEDDED_DEEP_LINK_INTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"EXTRA_SETTINGS_EMBEDDED_DEEP_LINK_INTENT_URI",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::EXTRA_SUB_ID()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"EXTRA_SUB_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::EXTRA_WIFI_NETWORK_LIST()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"EXTRA_WIFI_NETWORK_LIST",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::EXTRA_WIFI_NETWORK_RESULT_LIST()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"EXTRA_WIFI_NETWORK_RESULT_LIST",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::INTENT_CATEGORY_USAGE_ACCESS_CONFIG()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"INTENT_CATEGORY_USAGE_ACCESS_CONFIG",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings::METADATA_USAGE_ACCESS_REASON()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"METADATA_USAGE_ACCESS_REASON",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline Settings::Settings()
		: JObject(
			"android.provider.Settings",
			"()V"
		) {}
	
	// Methods
	inline jboolean Settings::canDrawOverlays(android::content::Context arg0)
	{
		return callStaticMethod<jboolean>(
			"android.provider.Settings",
			"canDrawOverlays",
			"(Landroid/content/Context;)Z",
			arg0.object()
		);
	}
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
