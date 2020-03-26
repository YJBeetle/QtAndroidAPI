#pragma once

#ifndef ANDROID_PROVIDER_CONTACTSCONTRACT_RAWCONTACTS_ENTITY
#define ANDROID_PROVIDER_CONTACTSCONTRACT_RAWCONTACTS_ENTITY

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class ContactsContract_RawContacts_Entity : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		static jstring DATA_ID();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	jstring ContactsContract_RawContacts_Entity::CONTENT_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$RawContacts$Entity",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_RawContacts_Entity::DATA_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$RawContacts$Entity",
			"DATA_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void ContactsContract_RawContacts_Entity::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$RawContacts$Entity",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_RawContacts_Entity : public __jni_impl::android::provider::ContactsContract_RawContacts_Entity
	{
	public:
		ContactsContract_RawContacts_Entity(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_RawContacts_Entity()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTSCONTRACT_RAWCONTACTS_ENTITY

