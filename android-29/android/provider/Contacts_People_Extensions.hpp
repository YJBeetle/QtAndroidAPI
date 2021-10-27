#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class Contacts_People_Extensions : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		static jstring DEFAULT_SORT_ORDER();
		static jstring PERSON_ID();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	jstring Contacts_People_Extensions::CONTENT_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$People$Extensions",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_People_Extensions::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$People$Extensions",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_People_Extensions::PERSON_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$People$Extensions",
			"PERSON_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Contacts_People_Extensions::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Contacts$People$Extensions",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Contacts_People_Extensions : public __jni_impl::android::provider::Contacts_People_Extensions
	{
	public:
		Contacts_People_Extensions(QAndroidJniObject obj) { __thiz = obj; }
		Contacts_People_Extensions()
		{
			__constructor();
		}
	};
} // namespace android::provider

