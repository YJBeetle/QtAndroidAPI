#pragma once

#ifndef ANDROID_PROVIDER_CONTACTSCONTRACT_CONTACTS_ENTITY
#define ANDROID_PROVIDER_CONTACTSCONTRACT_CONTACTS_ENTITY

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class ContactsContract_Contacts_Entity : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_DIRECTORY();
		static QAndroidJniObject DATA_ID();
		static QAndroidJniObject RAW_CONTACT_ID();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject ContactsContract_Contacts_Entity::CONTENT_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Contacts$Entity",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_Contacts_Entity::DATA_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Contacts$Entity",
			"DATA_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_Contacts_Entity::RAW_CONTACT_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Contacts$Entity",
			"RAW_CONTACT_ID",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void ContactsContract_Contacts_Entity::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$Contacts$Entity",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_Contacts_Entity : public __jni_impl::android::provider::ContactsContract_Contacts_Entity
	{
	public:
		ContactsContract_Contacts_Entity(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_Contacts_Entity()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTSCONTRACT_CONTACTS_ENTITY

