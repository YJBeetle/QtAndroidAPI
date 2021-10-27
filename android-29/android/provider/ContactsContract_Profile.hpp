#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class ContactsContract_Profile : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_RAW_CONTACTS_URI();
		static QAndroidJniObject CONTENT_URI();
		static QAndroidJniObject CONTENT_VCARD_URI();
		static jlong MIN_ID();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject ContactsContract_Profile::CONTENT_RAW_CONTACTS_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Profile",
			"CONTENT_RAW_CONTACTS_URI",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject ContactsContract_Profile::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Profile",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject ContactsContract_Profile::CONTENT_VCARD_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Profile",
			"CONTENT_VCARD_URI",
			"Landroid/net/Uri;"
		);
	}
	jlong ContactsContract_Profile::MIN_ID()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.provider.ContactsContract$Profile",
			"MIN_ID"
		);
	}
	
	// Constructors
	void ContactsContract_Profile::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$Profile",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_Profile : public __jni_impl::android::provider::ContactsContract_Profile
	{
	public:
		ContactsContract_Profile(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_Profile()
		{
			__constructor();
		}
	};
} // namespace android::provider

