#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class ContactsContract_Contacts_Photo : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		static jstring DISPLAY_PHOTO();
		static jstring PHOTO();
		static jstring PHOTO_FILE_ID();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	jstring ContactsContract_Contacts_Photo::CONTENT_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Contacts$Photo",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Contacts_Photo::DISPLAY_PHOTO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Contacts$Photo",
			"DISPLAY_PHOTO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Contacts_Photo::PHOTO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Contacts$Photo",
			"PHOTO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Contacts_Photo::PHOTO_FILE_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Contacts$Photo",
			"PHOTO_FILE_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void ContactsContract_Contacts_Photo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$Contacts$Photo",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_Contacts_Photo : public __jni_impl::android::provider::ContactsContract_Contacts_Photo
	{
	public:
		ContactsContract_Contacts_Photo(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_Contacts_Photo()
		{
			__constructor();
		}
	};
} // namespace android::provider

