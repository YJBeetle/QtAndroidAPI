#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../util/AndroidException.hpp"


namespace android::provider
{
	class Settings_SettingNotFoundException : public android::util::AndroidException
	{
	public:
		// Fields
		
		Settings_SettingNotFoundException(QAndroidJniObject obj);
		// Constructors
		Settings_SettingNotFoundException(jstring arg0);
		Settings_SettingNotFoundException() = default;
		
		// Methods
	};
} // namespace android::provider

