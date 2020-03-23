#pragma once

#ifndef ANDROID_PROVIDER_CONTACTS_SETTINGS
#define ANDROID_PROVIDER_CONTACTS_SETTINGS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::content
{
	class ContentResolver;
}

namespace __jni_impl::android::provider
{
	class Contacts_Settings : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_DIRECTORY();
		static QAndroidJniObject CONTENT_URI();
		static QAndroidJniObject DEFAULT_SORT_ORDER();
		static QAndroidJniObject SYNC_EVERYTHING();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getSetting(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jstring arg2);
		static void setSetting(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jstring arg2, jstring arg3);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"
#include "../content/ContentResolver.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject Contacts_Settings::CONTENT_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Settings",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_Settings::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Settings",
			"CONTENT_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject Contacts_Settings::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Settings",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_Settings::SYNC_EVERYTHING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Settings",
			"SYNC_EVERYTHING",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void Contacts_Settings::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Contacts$Settings",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Contacts_Settings::getSetting(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Contacts$Settings",
			"getSetting",
			"(Landroid/content/ContentResolver;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	void Contacts_Settings::setSetting(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jstring arg2, jstring arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.Contacts$Settings",
			"setSetting",
			"(Landroid/content/ContentResolver;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Contacts_Settings : public __jni_impl::android::provider::Contacts_Settings
	{
	public:
		Contacts_Settings(QAndroidJniObject obj) { __thiz = obj; }
		Contacts_Settings()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTS_SETTINGS

