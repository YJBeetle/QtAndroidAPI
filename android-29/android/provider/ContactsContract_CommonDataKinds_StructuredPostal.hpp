#pragma once

#ifndef ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_STRUCTUREDPOSTAL
#define ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_STRUCTUREDPOSTAL

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
	class ContactsContract_CommonDataKinds_StructuredPostal : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CITY();
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		static jstring COUNTRY();
		static jstring EXTRA_ADDRESS_BOOK_INDEX();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static jstring FORMATTED_ADDRESS();
		static jstring NEIGHBORHOOD();
		static jstring POBOX();
		static jstring POSTCODE();
		static jstring REGION();
		static jstring STREET();
		static jint TYPE_HOME();
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
	jstring ContactsContract_CommonDataKinds_StructuredPostal::CITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"CITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_StructuredPostal::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_StructuredPostal::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ContactsContract_CommonDataKinds_StructuredPostal::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring ContactsContract_CommonDataKinds_StructuredPostal::COUNTRY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"COUNTRY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_StructuredPostal::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_StructuredPostal::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_StructuredPostal::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_StructuredPostal::FORMATTED_ADDRESS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"FORMATTED_ADDRESS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_StructuredPostal::NEIGHBORHOOD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"NEIGHBORHOOD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_StructuredPostal::POBOX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"POBOX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_StructuredPostal::POSTCODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"POSTCODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_StructuredPostal::REGION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"REGION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_StructuredPostal::STREET()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"STREET",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ContactsContract_CommonDataKinds_StructuredPostal::TYPE_HOME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"TYPE_HOME"
		);
	}
	jint ContactsContract_CommonDataKinds_StructuredPostal::TYPE_OTHER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"TYPE_OTHER"
		);
	}
	jint ContactsContract_CommonDataKinds_StructuredPostal::TYPE_WORK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"TYPE_WORK"
		);
	}
	
	// Constructors
	void ContactsContract_CommonDataKinds_StructuredPostal::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"(V)V");
	}
	
	// Methods
	jint ContactsContract_CommonDataKinds_StructuredPostal::getTypeLabelResource(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"getTypeLabelResource",
			"(I)I",
			arg0
		);
	}
	jstring ContactsContract_CommonDataKinds_StructuredPostal::getTypeLabel(__jni_impl::android::content::res::Resources arg0, jint arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
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
	class ContactsContract_CommonDataKinds_StructuredPostal : public __jni_impl::android::provider::ContactsContract_CommonDataKinds_StructuredPostal
	{
	public:
		ContactsContract_CommonDataKinds_StructuredPostal(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_CommonDataKinds_StructuredPostal()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_STRUCTUREDPOSTAL

