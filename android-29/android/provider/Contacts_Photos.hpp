#pragma once

#ifndef ANDROID_PROVIDER_CONTACTS_PHOTOS
#define ANDROID_PROVIDER_CONTACTS_PHOTOS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class Contacts_Photos : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		static QAndroidJniObject CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring Contacts_Photos::CONTENT_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Photos",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Contacts_Photos::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Photos",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Contacts_Photos::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Photos",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Contacts_Photos::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Contacts$Photos",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Contacts_Photos : public __jni_impl::android::provider::Contacts_Photos
	{
	public:
		Contacts_Photos(QAndroidJniObject obj) { __thiz = obj; }
		Contacts_Photos()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTS_PHOTOS

