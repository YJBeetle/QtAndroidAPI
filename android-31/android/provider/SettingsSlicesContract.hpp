#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class SettingsSlicesContract : public JObject
	{
	public:
		// Fields
		static jstring AUTHORITY();
		static android::net::Uri BASE_URI();
		static jstring KEY_AIRPLANE_MODE();
		static jstring KEY_BATTERY_SAVER();
		static jstring KEY_BLUETOOTH();
		static jstring KEY_LOCATION();
		static jstring KEY_WIFI();
		static jstring PATH_SETTING_ACTION();
		static jstring PATH_SETTING_INTENT();
		
		// QJniObject forward
		template<typename ...Ts> explicit SettingsSlicesContract(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SettingsSlicesContract(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

