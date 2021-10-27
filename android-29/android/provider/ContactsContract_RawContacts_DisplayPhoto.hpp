#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class ContactsContract_RawContacts_DisplayPhoto : public __JniBaseClass
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
	jstring ContactsContract_RawContacts_DisplayPhoto::CONTENT_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$RawContacts$DisplayPhoto",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		).object<jstring>();
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

