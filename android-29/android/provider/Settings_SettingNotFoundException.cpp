#include "./Settings_SettingNotFoundException.hpp"

namespace android::provider
{
	// Fields
	
	Settings_SettingNotFoundException::Settings_SettingNotFoundException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Settings_SettingNotFoundException::Settings_SettingNotFoundException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.provider.Settings$SettingNotFoundException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::provider

