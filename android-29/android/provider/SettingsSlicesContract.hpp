#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class SettingsSlicesContract : public __JniBaseClass
	{
	public:
		// Fields
		static jstring AUTHORITY();
		static QAndroidJniObject BASE_URI();
		static jstring KEY_AIRPLANE_MODE();
		static jstring KEY_BATTERY_SAVER();
		static jstring KEY_BLUETOOTH();
		static jstring KEY_LOCATION();
		static jstring KEY_WIFI();
		static jstring PATH_SETTING_ACTION();
		static jstring PATH_SETTING_INTENT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SettingsSlicesContract(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SettingsSlicesContract(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

