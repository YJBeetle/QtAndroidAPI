#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class ContactsContract_CommonDataKinds_Nickname : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_ITEM_TYPE();
		static jstring EXTRA_ADDRESS_BOOK_INDEX();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static jstring NAME();
		static jint TYPE_DEFAULT();
		static jint TYPE_INITIALS();
		static jint TYPE_MAIDEN_NAME();
		static jint TYPE_MAINDEN_NAME();
		static jint TYPE_OTHER_NAME();
		static jint TYPE_SHORT_NAME();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	jstring ContactsContract_CommonDataKinds_Nickname::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Nickname",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Nickname::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Nickname",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Nickname::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Nickname",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Nickname::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Nickname",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Nickname::NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Nickname",
			"NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ContactsContract_CommonDataKinds_Nickname::TYPE_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Nickname",
			"TYPE_DEFAULT"
		);
	}
	jint ContactsContract_CommonDataKinds_Nickname::TYPE_INITIALS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Nickname",
			"TYPE_INITIALS"
		);
	}
	jint ContactsContract_CommonDataKinds_Nickname::TYPE_MAIDEN_NAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Nickname",
			"TYPE_MAIDEN_NAME"
		);
	}
	jint ContactsContract_CommonDataKinds_Nickname::TYPE_MAINDEN_NAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Nickname",
			"TYPE_MAINDEN_NAME"
		);
	}
	jint ContactsContract_CommonDataKinds_Nickname::TYPE_OTHER_NAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Nickname",
			"TYPE_OTHER_NAME"
		);
	}
	jint ContactsContract_CommonDataKinds_Nickname::TYPE_SHORT_NAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Nickname",
			"TYPE_SHORT_NAME"
		);
	}
	
	// Constructors
	void ContactsContract_CommonDataKinds_Nickname::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$CommonDataKinds$Nickname",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_CommonDataKinds_Nickname : public __jni_impl::android::provider::ContactsContract_CommonDataKinds_Nickname
	{
	public:
		ContactsContract_CommonDataKinds_Nickname(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_CommonDataKinds_Nickname()
		{
			__constructor();
		}
	};
} // namespace android::provider

