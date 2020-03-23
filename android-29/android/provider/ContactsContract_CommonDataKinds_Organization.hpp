#pragma once

#ifndef ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_ORGANIZATION
#define ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_ORGANIZATION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content::res
{
	class Resources;
}

namespace __jni_impl::android::provider
{
	class ContactsContract_CommonDataKinds_Organization : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject COMPANY();
		static QAndroidJniObject CONTENT_ITEM_TYPE();
		static QAndroidJniObject DEPARTMENT();
		static QAndroidJniObject EXTRA_ADDRESS_BOOK_INDEX();
		static QAndroidJniObject EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static QAndroidJniObject EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static QAndroidJniObject JOB_DESCRIPTION();
		static QAndroidJniObject OFFICE_LOCATION();
		static QAndroidJniObject PHONETIC_NAME();
		static QAndroidJniObject PHONETIC_NAME_STYLE();
		static QAndroidJniObject SYMBOL();
		static QAndroidJniObject TITLE();
		static jint TYPE_OTHER();
		static jint TYPE_WORK();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jint getTypeLabelResource(jint arg0);
		static QAndroidJniObject getTypeLabel(__jni_impl::android::content::res::Resources arg0, jint arg1, jstring arg2);
	};
} // namespace __jni_impl::android::provider

#include "../content/res/Resources.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject ContactsContract_CommonDataKinds_Organization::COMPANY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Organization",
			"COMPANY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_CommonDataKinds_Organization::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Organization",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_CommonDataKinds_Organization::DEPARTMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Organization",
			"DEPARTMENT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_CommonDataKinds_Organization::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Organization",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_CommonDataKinds_Organization::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Organization",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_CommonDataKinds_Organization::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Organization",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_CommonDataKinds_Organization::JOB_DESCRIPTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Organization",
			"JOB_DESCRIPTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_CommonDataKinds_Organization::OFFICE_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Organization",
			"OFFICE_LOCATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_CommonDataKinds_Organization::PHONETIC_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Organization",
			"PHONETIC_NAME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_CommonDataKinds_Organization::PHONETIC_NAME_STYLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Organization",
			"PHONETIC_NAME_STYLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_CommonDataKinds_Organization::SYMBOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Organization",
			"SYMBOL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_CommonDataKinds_Organization::TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Organization",
			"TITLE",
			"Ljava/lang/String;");
	}
	jint ContactsContract_CommonDataKinds_Organization::TYPE_OTHER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Organization",
			"TYPE_OTHER");
	}
	jint ContactsContract_CommonDataKinds_Organization::TYPE_WORK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Organization",
			"TYPE_WORK");
	}
	
	// Constructors
	void ContactsContract_CommonDataKinds_Organization::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$CommonDataKinds$Organization",
			"(V)V");
	}
	
	// Methods
	jint ContactsContract_CommonDataKinds_Organization::getTypeLabelResource(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Organization",
			"getTypeLabelResource",
			"(I)I",
			arg0);
	}
	QAndroidJniObject ContactsContract_CommonDataKinds_Organization::getTypeLabel(__jni_impl::android::content::res::Resources arg0, jint arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.ContactsContract$CommonDataKinds$Organization",
			"getTypeLabel",
			"(Landroid/content/res/Resources;ILjava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_CommonDataKinds_Organization : public __jni_impl::android::provider::ContactsContract_CommonDataKinds_Organization
	{
	public:
		ContactsContract_CommonDataKinds_Organization(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_CommonDataKinds_Organization()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_ORGANIZATION

