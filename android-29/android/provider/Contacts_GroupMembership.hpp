#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class Contacts_GroupMembership : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		static jstring GROUP_ID();
		static jstring GROUP_SYNC_ACCOUNT();
		static jstring GROUP_SYNC_ACCOUNT_TYPE();
		static jstring GROUP_SYNC_ID();
		static jstring PERSON_ID();
		static QAndroidJniObject RAW_CONTENT_URI();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring Contacts_GroupMembership::CONTENT_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_GroupMembership::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_GroupMembership::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Contacts_GroupMembership::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Contacts_GroupMembership::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_GroupMembership::GROUP_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"GROUP_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_GroupMembership::GROUP_SYNC_ACCOUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"GROUP_SYNC_ACCOUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_GroupMembership::GROUP_SYNC_ACCOUNT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"GROUP_SYNC_ACCOUNT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_GroupMembership::GROUP_SYNC_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"GROUP_SYNC_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_GroupMembership::PERSON_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"PERSON_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Contacts_GroupMembership::RAW_CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"RAW_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	void Contacts_GroupMembership::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Contacts$GroupMembership",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Contacts_GroupMembership : public __jni_impl::android::provider::Contacts_GroupMembership
	{
	public:
		Contacts_GroupMembership(QAndroidJniObject obj) { __thiz = obj; }
		Contacts_GroupMembership()
		{
			__constructor();
		}
	};
} // namespace android::provider

