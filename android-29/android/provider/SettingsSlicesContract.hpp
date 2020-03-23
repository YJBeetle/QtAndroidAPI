#pragma once

#ifndef ANDROID_PROVIDER_SETTINGSSLICESCONTRACT
#define ANDROID_PROVIDER_SETTINGSSLICESCONTRACT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class SettingsSlicesContract : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject AUTHORITY();
		static QAndroidJniObject BASE_URI();
		static QAndroidJniObject KEY_AIRPLANE_MODE();
		static QAndroidJniObject KEY_BATTERY_SAVER();
		static QAndroidJniObject KEY_BLUETOOTH();
		static QAndroidJniObject KEY_LOCATION();
		static QAndroidJniObject KEY_WIFI();
		static QAndroidJniObject PATH_SETTING_ACTION();
		static QAndroidJniObject PATH_SETTING_INTENT();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject SettingsSlicesContract::AUTHORITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"AUTHORITY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SettingsSlicesContract::BASE_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"BASE_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject SettingsSlicesContract::KEY_AIRPLANE_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"KEY_AIRPLANE_MODE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SettingsSlicesContract::KEY_BATTERY_SAVER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"KEY_BATTERY_SAVER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SettingsSlicesContract::KEY_BLUETOOTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"KEY_BLUETOOTH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SettingsSlicesContract::KEY_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"KEY_LOCATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SettingsSlicesContract::KEY_WIFI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"KEY_WIFI",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SettingsSlicesContract::PATH_SETTING_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"PATH_SETTING_ACTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SettingsSlicesContract::PATH_SETTING_INTENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"PATH_SETTING_INTENT",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void SettingsSlicesContract::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.SettingsSlicesContract",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class SettingsSlicesContract : public __jni_impl::android::provider::SettingsSlicesContract
	{
	public:
		SettingsSlicesContract(QAndroidJniObject obj) { __thiz = obj; }
		SettingsSlicesContract()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_SETTINGSSLICESCONTRACT

