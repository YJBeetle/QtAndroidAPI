#pragma once

#include "../../JObject.hpp"


namespace android::provider
{
	class Settings_Panel : public JObject
	{
	public:
		// Fields
		static jstring ACTION_INTERNET_CONNECTIVITY();
		static jstring ACTION_NFC();
		static jstring ACTION_VOLUME();
		static jstring ACTION_WIFI();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Settings_Panel(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Settings_Panel(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

