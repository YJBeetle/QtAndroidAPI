#pragma once

#ifndef ANDROID_PROVIDER_CONTACTSCONTRACT_SETTINGS
#define ANDROID_PROVIDER_CONTACTSCONTRACT_SETTINGS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class ContactsContract_Settings : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_ITEM_TYPE();
		static QAndroidJniObject CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject ContactsContract_Settings::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Settings",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_Settings::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Settings",
			"CONTENT_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_Settings::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Settings",
			"CONTENT_URI",
			"Landroid/net/Uri;");
	}
	
	// Constructors
	void ContactsContract_Settings::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$Settings",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_Settings : public __jni_impl::android::provider::ContactsContract_Settings
	{
	public:
		ContactsContract_Settings(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_Settings()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTSCONTRACT_SETTINGS

