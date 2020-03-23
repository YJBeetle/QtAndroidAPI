#pragma once

#ifndef ANDROID_PROVIDER_CONTACTSCONTRACT_RAWCONTACTS_DATA
#define ANDROID_PROVIDER_CONTACTSCONTRACT_RAWCONTACTS_DATA

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class ContactsContract_RawContacts_Data : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_DIRECTORY();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject ContactsContract_RawContacts_Data::CONTENT_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$RawContacts$Data",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void ContactsContract_RawContacts_Data::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$RawContacts$Data",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_RawContacts_Data : public __jni_impl::android::provider::ContactsContract_RawContacts_Data
	{
	public:
		ContactsContract_RawContacts_Data(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_RawContacts_Data()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTSCONTRACT_RAWCONTACTS_DATA

