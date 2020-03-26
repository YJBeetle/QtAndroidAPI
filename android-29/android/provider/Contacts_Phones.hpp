#pragma once

#ifndef ANDROID_PROVIDER_CONTACTS_PHONES
#define ANDROID_PROVIDER_CONTACTS_PHONES

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::provider
{
	class Contacts_Phones : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_FILTER_URL();
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		static jstring PERSON_ID();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jstring getDisplayLabel(__jni_impl::android::content::Context arg0, jint arg1, jstring arg2, jarray arg3);
		static jstring getDisplayLabel(__jni_impl::android::content::Context arg0, jint arg1, jstring arg2);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"
#include "../content/Context.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject Contacts_Phones::CONTENT_FILTER_URL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Phones",
			"CONTENT_FILTER_URL",
			"Landroid/net/Uri;"
		);
	}
	jstring Contacts_Phones::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Phones",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_Phones::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Phones",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Contacts_Phones::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Phones",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Contacts_Phones::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Phones",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_Phones::PERSON_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Phones",
			"PERSON_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Contacts_Phones::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Contacts$Phones",
			"(V)V");
	}
	
	// Methods
	jstring Contacts_Phones::getDisplayLabel(__jni_impl::android::content::Context arg0, jint arg1, jstring arg2, jarray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Contacts$Phones",
			"getDisplayLabel",
			"(Landroid/content/Context;ILjava/lang/CharSequence;[Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		).object<jstring>();
	}
	jstring Contacts_Phones::getDisplayLabel(__jni_impl::android::content::Context arg0, jint arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Contacts$Phones",
			"getDisplayLabel",
			"(Landroid/content/Context;ILjava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		).object<jstring>();
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Contacts_Phones : public __jni_impl::android::provider::Contacts_Phones
	{
	public:
		Contacts_Phones(QAndroidJniObject obj) { __thiz = obj; }
		Contacts_Phones()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTS_PHONES

