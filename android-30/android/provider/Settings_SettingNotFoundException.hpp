#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"
#include "../util/AndroidException.hpp"


namespace android::provider
{
	class Settings_SettingNotFoundException : public android::util::AndroidException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Settings_SettingNotFoundException(const char *className, const char *sig, Ts...agv) : android::util::AndroidException(className, sig, std::forward<Ts>(agv)...) {}
		Settings_SettingNotFoundException(QAndroidJniObject obj);
		
		// Constructors
		Settings_SettingNotFoundException(jstring arg0);
		
		// Methods
	};
} // namespace android::provider

