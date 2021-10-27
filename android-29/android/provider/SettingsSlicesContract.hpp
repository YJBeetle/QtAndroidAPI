#pragma once

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
		static jstring AUTHORITY();
		static QAndroidJniObject BASE_URI();
		static jstring KEY_AIRPLANE_MODE();
		static jstring KEY_BATTERY_SAVER();
		static jstring KEY_BLUETOOTH();
		static jstring KEY_LOCATION();
		static jstring KEY_WIFI();
		static jstring PATH_SETTING_ACTION();
		static jstring PATH_SETTING_INTENT();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring SettingsSlicesContract::AUTHORITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"AUTHORITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SettingsSlicesContract::BASE_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"BASE_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring SettingsSlicesContract::KEY_AIRPLANE_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"KEY_AIRPLANE_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SettingsSlicesContract::KEY_BATTERY_SAVER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"KEY_BATTERY_SAVER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SettingsSlicesContract::KEY_BLUETOOTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"KEY_BLUETOOTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SettingsSlicesContract::KEY_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"KEY_LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SettingsSlicesContract::KEY_WIFI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"KEY_WIFI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SettingsSlicesContract::PATH_SETTING_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"PATH_SETTING_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SettingsSlicesContract::PATH_SETTING_INTENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"PATH_SETTING_INTENT",
			"Ljava/lang/String;"
		).object<jstring>();
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

