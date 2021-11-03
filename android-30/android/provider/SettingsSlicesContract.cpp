#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./SettingsSlicesContract.hpp"

namespace android::provider
{
	// Fields
	JString SettingsSlicesContract::AUTHORITY()
	{
		return getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"AUTHORITY",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri SettingsSlicesContract::BASE_URI()
	{
		return getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"BASE_URI",
			"Landroid/net/Uri;"
		);
	}
	JString SettingsSlicesContract::KEY_AIRPLANE_MODE()
	{
		return getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"KEY_AIRPLANE_MODE",
			"Ljava/lang/String;"
		);
	}
	JString SettingsSlicesContract::KEY_BATTERY_SAVER()
	{
		return getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"KEY_BATTERY_SAVER",
			"Ljava/lang/String;"
		);
	}
	JString SettingsSlicesContract::KEY_BLUETOOTH()
	{
		return getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"KEY_BLUETOOTH",
			"Ljava/lang/String;"
		);
	}
	JString SettingsSlicesContract::KEY_LOCATION()
	{
		return getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"KEY_LOCATION",
			"Ljava/lang/String;"
		);
	}
	JString SettingsSlicesContract::KEY_WIFI()
	{
		return getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"KEY_WIFI",
			"Ljava/lang/String;"
		);
	}
	JString SettingsSlicesContract::PATH_SETTING_ACTION()
	{
		return getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"PATH_SETTING_ACTION",
			"Ljava/lang/String;"
		);
	}
	JString SettingsSlicesContract::PATH_SETTING_INTENT()
	{
		return getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"PATH_SETTING_INTENT",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	SettingsSlicesContract::SettingsSlicesContract(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

