#pragma once

#ifndef ANDROID_PROVIDER_CONTACTSCONTRACT_CONTACTS_DATA
#define ANDROID_PROVIDER_CONTACTSCONTRACT_CONTACTS_DATA

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class ContactsContract_Contacts_Data : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	jstring ContactsContract_Contacts_Data::CONTENT_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Contacts$Data",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void ContactsContract_Contacts_Data::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$Contacts$Data",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_Contacts_Data : public __jni_impl::android::provider::ContactsContract_Contacts_Data
	{
	public:
		ContactsContract_Contacts_Data(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_Contacts_Data()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTSCONTRACT_CONTACTS_DATA

