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
	inline JString Settings::ACTION_APP_NOTIFICATION_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_APP_NOTIFICATION_SETTINGS",
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
	inline JString Settings::ACTION_MANAGE_APPLICATIONS_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_MANAGE_APPLICATIONS_SETTINGS",
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
	inline JString Settings::ACTION_SHOW_REGULATORY_INFO()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"ACTION_SHOW_REGULATORY_INFO",
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
	inline JString Settings::EXTRA_CHANNEL_ID()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"EXTRA_CHANNEL_ID",
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
	inline JString Settings::EXTRA_INPUT_METHOD_ID()
	{
		return getStaticObjectField(
			"android.provider.Settings",
			"EXTRA_INPUT_METHOD_ID",
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
