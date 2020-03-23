#pragma once

#ifndef ANDROID_PROVIDER_CONTACTS_PEOPLE_PHONES
#define ANDROID_PROVIDER_CONTACTS_PEOPLE_PHONES

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class Contacts_People_Phones : public __JniBaseClass
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
	QAndroidJniObject Contacts_People_Phones::CONTENT_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$People$Phones",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_People_Phones::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$People$Phones",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void Contacts_People_Phones::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Contacts$People$Phones",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Contacts_People_Phones : public __jni_impl::android::provider::Contacts_People_Phones
	{
	public:
		Contacts_People_Phones(QAndroidJniObject obj) { __thiz = obj; }
		Contacts_People_Phones()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTS_PEOPLE_PHONES

