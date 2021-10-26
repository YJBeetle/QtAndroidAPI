#pragma once

#ifndef ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_EVENT
#define ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_EVENT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content::res
{
	class Resources;
}
namespace __jni_impl::java::lang
{
	class Integer;
}

namespace __jni_impl::android::provider
{
	class ContactsContract_CommonDataKinds_Event : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_ITEM_TYPE();
		static jstring EXTRA_ADDRESS_BOOK_INDEX();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static jstring START_DATE();
		static jint TYPE_ANNIVERSARY();
		static jint TYPE_BIRTHDAY();
		static jint TYPE_OTHER();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jstring getTypeLabel(__jni_impl::android::content::res::Resources arg0, jint arg1, jstring arg2);
		static jstring getTypeLabel(__jni_impl::android::content::res::Resources arg0, jint arg1, const QString &arg2);
		static jint getTypeResource(__jni_impl::java::lang::Integer arg0);
	};
} // namespace __jni_impl::android::provider

#include "../content/res/Resources.hpp"
#include "../../java/lang/Integer.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring ContactsContract_CommonDataKinds_Event::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Event",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Event::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Event",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Event::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Event",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Event::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Event",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Event::START_DATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Event",
			"START_DATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ContactsContract_CommonDataKinds_Event::TYPE_ANNIVERSARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Event",
			"TYPE_ANNIVERSARY"
		);
	}
	jint ContactsContract_CommonDataKinds_Event::TYPE_BIRTHDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Event",
			"TYPE_BIRTHDAY"
		);
	}
	jint ContactsContract_CommonDataKinds_Event::TYPE_OTHER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Event",
			"TYPE_OTHER"
		);
	}
	
	// Constructors
	void ContactsContract_CommonDataKinds_Event::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$CommonDataKinds$Event",
			"(V)V");
	}
	
	// Methods
	jstring ContactsContract_CommonDataKinds_Event::getTypeLabel(__jni_impl::android::content::res::Resources arg0, jint arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.ContactsContract$CommonDataKinds$Event",
			"getTypeLabel",
			"(Landroid/content/res/Resources;ILjava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Event::getTypeLabel(__jni_impl::android::content::res::Resources arg0, jint arg1, const QString &arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.ContactsContract$CommonDataKinds$Event",
			"getTypeLabel",
			"(Landroid/content/res/Resources;ILjava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>()
		).object<jstring>();
	}
	jint ContactsContract_CommonDataKinds_Event::getTypeResource(__jni_impl::java::lang::Integer arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Event",
			"getTypeResource",
			"(Ljava/lang/Integer;)I",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_CommonDataKinds_Event : public __jni_impl::android::provider::ContactsContract_CommonDataKinds_Event
	{
	public:
		ContactsContract_CommonDataKinds_Event(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_CommonDataKinds_Event()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_EVENT

