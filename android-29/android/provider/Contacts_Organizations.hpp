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
		static QAndroidJniObject CONTENT_DIRECTORY();
		static QAndroidJniObject CONTENT_URI();
		static QAndroidJniObject DEFAULT_SORT_ORDER();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getDisplayLabel(__jni_impl::android::content::Context arg0, jint arg1, jstring arg2);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"
#include "../content/Context.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject Contacts_Organizations::CONTENT_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Organizations",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_Organizations::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Organizations",
			"CONTENT_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject Contacts_Organizations::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Organizations",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void Contacts_Organizations::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Contacts$Organizations",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Contacts_Organizations::getDisplayLabel(__jni_impl::android::content::Context arg0, jint arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Contacts$Organizations",
			"getDisplayLabel",
			"(Landroid/content/Context;ILjava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object(),
			arg1,
			arg2);
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

