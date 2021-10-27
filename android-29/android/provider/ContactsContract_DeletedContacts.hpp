#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class ContactsContract_DeletedContacts : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_URI();
		static jlong DAYS_KEPT_MILLISECONDS();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject ContactsContract_DeletedContacts::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$DeletedContacts",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jlong ContactsContract_DeletedContacts::DAYS_KEPT_MILLISECONDS()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.provider.ContactsContract$DeletedContacts",
			"DAYS_KEPT_MILLISECONDS"
		);
	}
	
	// Constructors
	void ContactsContract_DeletedContacts::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$DeletedContacts",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_DeletedContacts : public __jni_impl::android::provider::ContactsContract_DeletedContacts
	{
	public:
		ContactsContract_DeletedContacts(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_DeletedContacts()
		{
			__constructor();
		}
	};
} // namespace android::provider

