#pragma once

#ifndef ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_EMAIL
#define ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_EMAIL

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::content::res
{
	class Resources;
}

namespace __jni_impl::android::provider
{
	class ContactsContract_CommonDataKinds_Email : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ADDRESS();
		static QAndroidJniObject CONTENT_FILTER_URI();
		static jstring CONTENT_ITEM_TYPE();
		static QAndroidJniObject CONTENT_LOOKUP_URI();
		static jstring CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		static jstring DISPLAY_NAME();
		static QAndroidJniObject ENTERPRISE_CONTENT_FILTER_URI();
		static QAndroidJniObject ENTERPRISE_CONTENT_LOOKUP_URI();
		static jstring EXTRA_ADDRESS_BOOK_INDEX();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static jint TYPE_HOME();
		static jint TYPE_MOBILE();
		static jint TYPE_OTHER();
		static jint TYPE_WORK();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jint getTypeLabelResource(jint arg0);
		static jstring getTypeLabel(__jni_impl::android::content::res::Resources arg0, jint arg1, jstring arg2);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"
#include "../content/res/Resources.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring ContactsContract_CommonDataKinds_Email::ADDRESS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"ADDRESS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ContactsContract_CommonDataKinds_Email::CONTENT_FILTER_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"CONTENT_FILTER_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring ContactsContract_CommonDataKinds_Email::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ContactsContract_CommonDataKinds_Email::CONTENT_LOOKUP_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"CONTENT_LOOKUP_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring ContactsContract_CommonDataKinds_Email::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ContactsContract_CommonDataKinds_Email::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring ContactsContract_CommonDataKinds_Email::DISPLAY_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"DISPLAY_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ContactsContract_CommonDataKinds_Email::ENTERPRISE_CONTENT_FILTER_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"ENTERPRISE_CONTENT_FILTER_URI",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject ContactsContract_CommonDataKinds_Email::ENTERPRISE_CONTENT_LOOKUP_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"ENTERPRISE_CONTENT_LOOKUP_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring ContactsContract_CommonDataKinds_Email::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Email::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Email::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ContactsContract_CommonDataKinds_Email::TYPE_HOME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"TYPE_HOME"
		);
	}
	jint ContactsContract_CommonDataKinds_Email::TYPE_MOBILE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"TYPE_MOBILE"
		);
	}
	jint ContactsContract_CommonDataKinds_Email::TYPE_OTHER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"TYPE_OTHER"
		);
	}
	jint ContactsContract_CommonDataKinds_Email::TYPE_WORK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"TYPE_WORK"
		);
	}
	
	// Constructors
	void ContactsContract_CommonDataKinds_Email::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"(V)V");
	}
	
	// Methods
	jint ContactsContract_CommonDataKinds_Email::getTypeLabelResource(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"getTypeLabelResource",
			"(I)I",
			arg0
		);
	}
	jstring ContactsContract_CommonDataKinds_Email::getTypeLabel(__jni_impl::android::content::res::Resources arg0, jint arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"getTypeLabel",
			"(Landroid/content/res/Resources;ILjava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		).object<jstring>();
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_CommonDataKinds_Email : public __jni_impl::android::provider::ContactsContract_CommonDataKinds_Email
	{
	public:
		ContactsContract_CommonDataKinds_Email(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_CommonDataKinds_Email()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_EMAIL

