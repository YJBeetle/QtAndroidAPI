#pragma once

#ifndef ANDROID_PROVIDER_CONTACTSCONTRACT_RAWCONTACTS
#define ANDROID_PROVIDER_CONTACTSCONTRACT_RAWCONTACTS

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
	class ContactsContract_RawContacts : public __JniBaseClass
	{
	public:
		// Fields
		static jint AGGREGATION_MODE_DEFAULT();
		static jint AGGREGATION_MODE_DISABLED();
		static jint AGGREGATION_MODE_IMMEDIATE();
		static jint AGGREGATION_MODE_SUSPENDED();
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getContactLookupUri(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1);
		static QAndroidJniObject newEntityIterator(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"
#include "../content/ContentResolver.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jint ContactsContract_RawContacts::AGGREGATION_MODE_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$RawContacts",
			"AGGREGATION_MODE_DEFAULT"
		);
	}
	jint ContactsContract_RawContacts::AGGREGATION_MODE_DISABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$RawContacts",
			"AGGREGATION_MODE_DISABLED"
		);
	}
	jint ContactsContract_RawContacts::AGGREGATION_MODE_IMMEDIATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$RawContacts",
			"AGGREGATION_MODE_IMMEDIATE"
		);
	}
	jint ContactsContract_RawContacts::AGGREGATION_MODE_SUSPENDED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$RawContacts",
			"AGGREGATION_MODE_SUSPENDED"
		);
	}
	jstring ContactsContract_RawContacts::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$RawContacts",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_RawContacts::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$RawContacts",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ContactsContract_RawContacts::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$RawContacts",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	void ContactsContract_RawContacts::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$RawContacts",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ContactsContract_RawContacts::getContactLookupUri(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.ContactsContract$RawContacts",
			"getContactLookupUri",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ContactsContract_RawContacts::newEntityIterator(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.ContactsContract$RawContacts",
			"newEntityIterator",
			"(Landroid/database/Cursor;)Landroid/content/EntityIterator;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_RawContacts : public __jni_impl::android::provider::ContactsContract_RawContacts
	{
	public:
		ContactsContract_RawContacts(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_RawContacts()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTSCONTRACT_RAWCONTACTS

