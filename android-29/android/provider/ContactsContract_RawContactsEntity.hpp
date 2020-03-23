#pragma once

#ifndef ANDROID_PROVIDER_CONTACTSCONTRACT_RAWCONTACTSENTITY
#define ANDROID_PROVIDER_CONTACTSCONTRACT_RAWCONTACTSENTITY

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class ContactsContract_RawContactsEntity : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		static QAndroidJniObject DATA_ID();
		static QAndroidJniObject PROFILE_CONTENT_URI();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject ContactsContract_RawContactsEntity::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$RawContactsEntity",
			"CONTENT_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_RawContactsEntity::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$RawContactsEntity",
			"CONTENT_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject ContactsContract_RawContactsEntity::DATA_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$RawContactsEntity",
			"DATA_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_RawContactsEntity::PROFILE_CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$RawContactsEntity",
			"PROFILE_CONTENT_URI",
			"Landroid/net/Uri;");
	}
	
	// Constructors
	void ContactsContract_RawContactsEntity::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$RawContactsEntity",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_RawContactsEntity : public __jni_impl::android::provider::ContactsContract_RawContactsEntity
	{
	public:
		ContactsContract_RawContactsEntity(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_RawContactsEntity()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTSCONTRACT_RAWCONTACTSENTITY

