#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class SettingsSlicesContract : public JObject
	{
	public:
		// Fields
		static JString AUTHORITY();
		static android::net::Uri BASE_URI();
		static JString KEY_AIRPLANE_MODE();
		static JString KEY_BATTERY_SAVER();
		static JString KEY_BLUETOOTH();
		static JString KEY_LOCATION();
		static JString KEY_WIFI();
		static JString PATH_SETTING_ACTION();
		static JString PATH_SETTING_INTENT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SettingsSlicesContract(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SettingsSlicesContract(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

