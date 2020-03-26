#pragma once

#ifndef ANDROID_PROVIDER_SETTINGS_PANEL
#define ANDROID_PROVIDER_SETTINGS_PANEL

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class Settings_Panel : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_INTERNET_CONNECTIVITY();
		static jstring ACTION_NFC();
		static jstring ACTION_VOLUME();
		static jstring ACTION_WIFI();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	jstring Settings_Panel::ACTION_INTERNET_CONNECTIVITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Panel",
			"ACTION_INTERNET_CONNECTIVITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Panel::ACTION_NFC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Panel",
			"ACTION_NFC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Panel::ACTION_VOLUME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Panel",
			"ACTION_VOLUME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Panel::ACTION_WIFI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Panel",
			"ACTION_WIFI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Settings_Panel::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Settings$Panel",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Settings_Panel : public __jni_impl::android::provider::Settings_Panel
	{
	public:
		Settings_Panel(QAndroidJniObject obj) { __thiz = obj; }
		Settings_Panel()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_SETTINGS_PANEL

