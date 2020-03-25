#pragma once

#ifndef ANDROID_PROVIDER_SETTINGS_SETTINGNOTFOUNDEXCEPTION
#define ANDROID_PROVIDER_SETTINGS_SETTINGNOTFOUNDEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../util/AndroidException.hpp"


namespace __jni_impl::android::provider
{
	class Settings_SettingNotFoundException : public __jni_impl::android::util::AndroidException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	
	// Constructors
	void Settings_SettingNotFoundException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.provider.Settings$SettingNotFoundException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Settings_SettingNotFoundException : public __jni_impl::android::provider::Settings_SettingNotFoundException
	{
	public:
		Settings_SettingNotFoundException(QAndroidJniObject obj) { __thiz = obj; }
		Settings_SettingNotFoundException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_SETTINGS_SETTINGNOTFOUNDEXCEPTION

