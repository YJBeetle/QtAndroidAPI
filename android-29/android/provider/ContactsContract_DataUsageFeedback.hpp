#pragma once

#ifndef ANDROID_PROVIDER_CONTACTSCONTRACT_DATAUSAGEFEEDBACK
#define ANDROID_PROVIDER_CONTACTSCONTRACT_DATAUSAGEFEEDBACK

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class ContactsContract_DataUsageFeedback : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject DELETE_USAGE_URI();
		static QAndroidJniObject FEEDBACK_URI();
		static jstring USAGE_TYPE();
		static jstring USAGE_TYPE_CALL();
		static jstring USAGE_TYPE_LONG_TEXT();
		static jstring USAGE_TYPE_SHORT_TEXT();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject ContactsContract_DataUsageFeedback::DELETE_USAGE_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$DataUsageFeedback",
			"DELETE_USAGE_URI",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject ContactsContract_DataUsageFeedback::FEEDBACK_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$DataUsageFeedback",
			"FEEDBACK_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring ContactsContract_DataUsageFeedback::USAGE_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$DataUsageFeedback",
			"USAGE_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_DataUsageFeedback::USAGE_TYPE_CALL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$DataUsageFeedback",
			"USAGE_TYPE_CALL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_DataUsageFeedback::USAGE_TYPE_LONG_TEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$DataUsageFeedback",
			"USAGE_TYPE_LONG_TEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_DataUsageFeedback::USAGE_TYPE_SHORT_TEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$DataUsageFeedback",
			"USAGE_TYPE_SHORT_TEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void ContactsContract_DataUsageFeedback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$DataUsageFeedback",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_DataUsageFeedback : public __jni_impl::android::provider::ContactsContract_DataUsageFeedback
	{
	public:
		ContactsContract_DataUsageFeedback(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_DataUsageFeedback()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTSCONTRACT_DATAUSAGEFEEDBACK

