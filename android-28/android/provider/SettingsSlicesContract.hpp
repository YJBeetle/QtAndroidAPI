#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./SettingsSlicesContract.def.hpp"

namespace android::provider
{
	// Fields
	inline JString SettingsSlicesContract::AUTHORITY()
	{
		return getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"AUTHORITY",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri SettingsSlicesContract::BASE_URI()
	{
		return getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"BASE_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString SettingsSlicesContract::KEY_AIRPLANE_MODE()
	{
		return getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"KEY_AIRPLANE_MODE",
			"Ljava/lang/String;"
		);
	}
	inline JString SettingsSlicesContract::KEY_BATTERY_SAVER()
	{
		return getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"KEY_BATTERY_SAVER",
			"Ljava/lang/String;"
		);
	}
	inline JString SettingsSlicesContract::KEY_BLUETOOTH()
	{
		return getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"KEY_BLUETOOTH",
			"Ljava/lang/String;"
		);
	}
	inline JString SettingsSlicesContract::KEY_LOCATION()
	{
		return getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"KEY_LOCATION",
			"Ljava/lang/String;"
		);
	}
	inline JString SettingsSlicesContract::KEY_WIFI()
	{
		return getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"KEY_WIFI",
			"Ljava/lang/String;"
		);
	}
	inline JString SettingsSlicesContract::PATH_SETTING_ACTION()
	{
		return getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"PATH_SETTING_ACTION",
			"Ljava/lang/String;"
		);
	}
	inline JString SettingsSlicesContract::PATH_SETTING_INTENT()
	{
		return getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"PATH_SETTING_INTENT",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

// Base class headers

