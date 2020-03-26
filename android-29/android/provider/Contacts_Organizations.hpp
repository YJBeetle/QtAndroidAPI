#pragma once

#ifndef ANDROID_PROVIDER_CONTACTS_ORGANIZATIONS
#define ANDROID_PROVIDER_CONTACTS_ORGANIZATIONS

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
	class Contacts_Organizations : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		static QAndroidJniObject CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jstring getDisplayLabel(__jni_impl::android::content::Context arg0, jint arg1, jstring arg2);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"
#include "../content/Context.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring Contacts_Organizations::CONTENT_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Organizations",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Contacts_Organizations::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Organizations",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Contacts_Organizations::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Organizations",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Contacts_Organizations::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Contacts$Organizations",
			"(V)V");
	}
	
	// Methods
	jstring Contacts_Organizations::getDisplayLabel(__jni_impl::android::content::Context arg0, jint arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Contacts$Organizations",
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
	class Contacts_Organizations : public __jni_impl::android::provider::Contacts_Organizations
	{
	public:
		Contacts_Organizations(QAndroidJniObject obj) { __thiz = obj; }
		Contacts_Organizations()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTS_ORGANIZATIONS

