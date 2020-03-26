#pragma once

#ifndef ANDROID_PROVIDER_CONTACTSCONTRACT_AGGREGATIONEXCEPTIONS
#define ANDROID_PROVIDER_CONTACTSCONTRACT_AGGREGATIONEXCEPTIONS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class ContactsContract_AggregationExceptions : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		static jstring RAW_CONTACT_ID1();
		static jstring RAW_CONTACT_ID2();
		static jstring TYPE();
		static jint TYPE_AUTOMATIC();
		static jint TYPE_KEEP_SEPARATE();
		static jint TYPE_KEEP_TOGETHER();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring ContactsContract_AggregationExceptions::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$AggregationExceptions",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_AggregationExceptions::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$AggregationExceptions",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ContactsContract_AggregationExceptions::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$AggregationExceptions",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring ContactsContract_AggregationExceptions::RAW_CONTACT_ID1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$AggregationExceptions",
			"RAW_CONTACT_ID1",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_AggregationExceptions::RAW_CONTACT_ID2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$AggregationExceptions",
			"RAW_CONTACT_ID2",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_AggregationExceptions::TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$AggregationExceptions",
			"TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ContactsContract_AggregationExceptions::TYPE_AUTOMATIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$AggregationExceptions",
			"TYPE_AUTOMATIC"
		);
	}
	jint ContactsContract_AggregationExceptions::TYPE_KEEP_SEPARATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$AggregationExceptions",
			"TYPE_KEEP_SEPARATE"
		);
	}
	jint ContactsContract_AggregationExceptions::TYPE_KEEP_TOGETHER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$AggregationExceptions",
			"TYPE_KEEP_TOGETHER"
		);
	}
	
	// Constructors
	void ContactsContract_AggregationExceptions::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$AggregationExceptions",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_AggregationExceptions : public __jni_impl::android::provider::ContactsContract_AggregationExceptions
	{
	public:
		ContactsContract_AggregationExceptions(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_AggregationExceptions()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTSCONTRACT_AGGREGATIONEXCEPTIONS

