#pragma once

#ifndef ANDROID_PROVIDER_CONTACTSCONTRACT_RAWCONTACTS_DISPLAYPHOTO
#define ANDROID_PROVIDER_CONTACTSCONTRACT_RAWCONTACTS_DISPLAYPHOTO

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class ContactsContract_RawContacts_DisplayPhoto : public __JniBaseClass
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
	QAndroidJniObject ContactsContract_RawContacts_DisplayPhoto::CONTENT_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$RawContacts$DisplayPhoto",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void ContactsContract_RawContacts_DisplayPhoto::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$RawContacts$DisplayPhoto",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_RawContacts_DisplayPhoto : public __jni_impl::android::provider::ContactsContract_RawContacts_DisplayPhoto
	{
	public:
		ContactsContract_RawContacts_DisplayPhoto(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_RawContacts_DisplayPhoto()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTSCONTRACT_RAWCONTACTS_DISPLAYPHOTO

