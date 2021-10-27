#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class Settings_Panel : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_INTERNET_CONNECTIVITY();
		static jstring ACTION_NFC();
		static jstring ACTION_VOLUME();
		static jstring ACTION_WIFI();
		
		Settings_Panel(QAndroidJniObject obj);
		// Constructors
		Settings_Panel() = default;
		
		// Methods
	};
} // namespace android::provider

