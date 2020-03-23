#pragma once

#ifndef ANDROID_PROVIDER_CONTACTSCONTRACT_CONTACTS
#define ANDROID_PROVIDER_CONTACTSCONTRACT_CONTACTS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::content
{
	class ContentResolver;
}
namespace __jni_impl::java::io
{
	class InputStream;
}

namespace __jni_impl::android::provider
{
	class ContactsContract_Contacts : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_FILTER_URI();
		static QAndroidJniObject CONTENT_FREQUENT_URI();
		static QAndroidJniObject CONTENT_GROUP_URI();
		static QAndroidJniObject CONTENT_ITEM_TYPE();
		static QAndroidJniObject CONTENT_LOOKUP_URI();
		static QAndroidJniObject CONTENT_MULTI_VCARD_URI();
		static QAndroidJniObject CONTENT_STREQUENT_FILTER_URI();
		static QAndroidJniObject CONTENT_STREQUENT_URI();
		static QAndroidJniObject CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		static QAndroidJniObject CONTENT_VCARD_TYPE();
		static QAndroidJniObject CONTENT_VCARD_URI();
		static QAndroidJniObject ENTERPRISE_CONTENT_FILTER_URI();
		static QAndroidJniObject EXTRA_ADDRESS_BOOK_INDEX();
		static QAndroidJniObject EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static QAndroidJniObject EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static QAndroidJniObject QUERY_PARAMETER_VCARD_NO_PHOTO();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getLookupUri(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1);
		static QAndroidJniObject getLookupUri(jlong arg0, jstring arg1);
		static QAndroidJniObject lookupContact(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1);
		static void markAsContacted(__jni_impl::android::content::ContentResolver arg0, jlong arg1);
		static jboolean isEnterpriseContactId(jlong arg0);
		static QAndroidJniObject openContactPhotoInputStream(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1);
		static QAndroidJniObject openContactPhotoInputStream(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1, jboolean arg2);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"
#include "../content/ContentResolver.hpp"
#include "../../java/io/InputStream.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject ContactsContract_Contacts::CONTENT_FILTER_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Contacts",
			"CONTENT_FILTER_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject ContactsContract_Contacts::CONTENT_FREQUENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Contacts",
			"CONTENT_FREQUENT_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject ContactsContract_Contacts::CONTENT_GROUP_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Contacts",
			"CONTENT_GROUP_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject ContactsContract_Contacts::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Contacts",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_Contacts::CONTENT_LOOKUP_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Contacts",
			"CONTENT_LOOKUP_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject ContactsContract_Contacts::CONTENT_MULTI_VCARD_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Contacts",
			"CONTENT_MULTI_VCARD_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject ContactsContract_Contacts::CONTENT_STREQUENT_FILTER_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Contacts",
			"CONTENT_STREQUENT_FILTER_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject ContactsContract_Contacts::CONTENT_STREQUENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Contacts",
			"CONTENT_STREQUENT_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject ContactsContract_Contacts::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Contacts",
			"CONTENT_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_Contacts::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Contacts",
			"CONTENT_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject ContactsContract_Contacts::CONTENT_VCARD_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Contacts",
			"CONTENT_VCARD_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_Contacts::CONTENT_VCARD_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Contacts",
			"CONTENT_VCARD_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject ContactsContract_Contacts::ENTERPRISE_CONTENT_FILTER_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Contacts",
			"ENTERPRISE_CONTENT_FILTER_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject ContactsContract_Contacts::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Contacts",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_Contacts::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Contacts",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_Contacts::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Contacts",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_Contacts::QUERY_PARAMETER_VCARD_NO_PHOTO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Contacts",
			"QUERY_PARAMETER_VCARD_NO_PHOTO",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void ContactsContract_Contacts::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$Contacts",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ContactsContract_Contacts::getLookupUri(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.ContactsContract$Contacts",
			"getLookupUri",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject ContactsContract_Contacts::getLookupUri(jlong arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.ContactsContract$Contacts",
			"getLookupUri",
			"(JLjava/lang/String;)Landroid/net/Uri;",
			arg0,
			arg1);
	}
	QAndroidJniObject ContactsContract_Contacts::lookupContact(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.ContactsContract$Contacts",
			"lookupContact",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void ContactsContract_Contacts::markAsContacted(__jni_impl::android::content::ContentResolver arg0, jlong arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.ContactsContract$Contacts",
			"markAsContacted",
			"(Landroid/content/ContentResolver;J)V",
			arg0.__jniObject().object(),
			arg1);
	}
	jboolean ContactsContract_Contacts::isEnterpriseContactId(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.ContactsContract$Contacts",
			"isEnterpriseContactId",
			"(J)Z",
			arg0);
	}
	QAndroidJniObject ContactsContract_Contacts::openContactPhotoInputStream(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.ContactsContract$Contacts",
			"openContactPhotoInputStream",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)Ljava/io/InputStream;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject ContactsContract_Contacts::openContactPhotoInputStream(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1, jboolean arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.ContactsContract$Contacts",
			"openContactPhotoInputStream",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;Z)Ljava/io/InputStream;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_Contacts : public __jni_impl::android::provider::ContactsContract_Contacts
	{
	public:
		ContactsContract_Contacts(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_Contacts()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTSCONTRACT_CONTACTS

