#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class Contacts_Groups : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		static QAndroidJniObject DELETED_CONTENT_URI();
		static jstring GROUP_ANDROID_STARRED();
		static jstring GROUP_MY_CONTACTS();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring Contacts_Groups::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Groups",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_Groups::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Groups",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Contacts_Groups::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Groups",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Contacts_Groups::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Groups",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Contacts_Groups::DELETED_CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Groups",
			"DELETED_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Contacts_Groups::GROUP_ANDROID_STARRED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Groups",
			"GROUP_ANDROID_STARRED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_Groups::GROUP_MY_CONTACTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Groups",
			"GROUP_MY_CONTACTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Contacts_Groups::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Contacts$Groups",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Contacts_Groups : public __jni_impl::android::provider::Contacts_Groups
	{
	public:
		Contacts_Groups(QAndroidJniObject obj) { __thiz = obj; }
		Contacts_Groups()
		{
			__constructor();
		}
	};
} // namespace android::provider

