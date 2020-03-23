#pragma once

#ifndef ANDROID_PROVIDER_CONTACTS_PEOPLE_CONTACTMETHODS
#define ANDROID_PROVIDER_CONTACTS_PEOPLE_CONTACTMETHODS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class Contacts_People_ContactMethods : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_DIRECTORY();
		static QAndroidJniObject DEFAULT_SORT_ORDER();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject Contacts_People_ContactMethods::CONTENT_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$People$ContactMethods",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_People_ContactMethods::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$People$ContactMethods",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void Contacts_People_ContactMethods::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Contacts$People$ContactMethods",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Contacts_People_ContactMethods : public __jni_impl::android::provider::Contacts_People_ContactMethods
	{
	public:
		Contacts_People_ContactMethods(QAndroidJniObject obj) { __thiz = obj; }
		Contacts_People_ContactMethods()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTS_PEOPLE_CONTACTMETHODS

