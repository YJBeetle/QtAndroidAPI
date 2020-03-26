#pragma once

#ifndef ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_STRUCTUREDNAME
#define ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_STRUCTUREDNAME

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class ContactsContract_CommonDataKinds_StructuredName : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_ITEM_TYPE();
		static jstring DISPLAY_NAME();
		static jstring EXTRA_ADDRESS_BOOK_INDEX();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static jstring FAMILY_NAME();
		static jstring FULL_NAME_STYLE();
		static jstring GIVEN_NAME();
		static jstring MIDDLE_NAME();
		static jstring PHONETIC_FAMILY_NAME();
		static jstring PHONETIC_GIVEN_NAME();
		static jstring PHONETIC_MIDDLE_NAME();
		static jstring PHONETIC_NAME_STYLE();
		static jstring PREFIX();
		static jstring SUFFIX();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	jstring ContactsContract_CommonDataKinds_StructuredName::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredName",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_StructuredName::DISPLAY_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredName",
			"DISPLAY_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_StructuredName::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredName",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_StructuredName::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredName",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_StructuredName::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredName",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_StructuredName::FAMILY_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredName",
			"FAMILY_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_StructuredName::FULL_NAME_STYLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredName",
			"FULL_NAME_STYLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_StructuredName::GIVEN_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredName",
			"GIVEN_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_StructuredName::MIDDLE_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredName",
			"MIDDLE_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_StructuredName::PHONETIC_FAMILY_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredName",
			"PHONETIC_FAMILY_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_StructuredName::PHONETIC_GIVEN_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredName",
			"PHONETIC_GIVEN_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_StructuredName::PHONETIC_MIDDLE_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredName",
			"PHONETIC_MIDDLE_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_StructuredName::PHONETIC_NAME_STYLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredName",
			"PHONETIC_NAME_STYLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_StructuredName::PREFIX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredName",
			"PREFIX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_StructuredName::SUFFIX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredName",
			"SUFFIX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void ContactsContract_CommonDataKinds_StructuredName::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$CommonDataKinds$StructuredName",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_CommonDataKinds_StructuredName : public __jni_impl::android::provider::ContactsContract_CommonDataKinds_StructuredName
	{
	public:
		ContactsContract_CommonDataKinds_StructuredName(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_CommonDataKinds_StructuredName()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_STRUCTUREDNAME

