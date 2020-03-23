#pragma once

#ifndef ANDROID_PROVIDER_CONTACTS_GROUPMEMBERSHIP
#define ANDROID_PROVIDER_CONTACTS_GROUPMEMBERSHIP

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
		static QAndroidJniObject CONTENT_DIRECTORY();
		static QAndroidJniObject CONTENT_ITEM_TYPE();
		static QAndroidJniObject CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		static QAndroidJniObject DEFAULT_SORT_ORDER();
		static QAndroidJniObject GROUP_ID();
		static QAndroidJniObject GROUP_SYNC_ACCOUNT();
		static QAndroidJniObject GROUP_SYNC_ACCOUNT_TYPE();
		static QAndroidJniObject GROUP_SYNC_ID();
		static QAndroidJniObject PERSON_ID();
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
	QAndroidJniObject Contacts_GroupMembership::CONTENT_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_GroupMembership::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_GroupMembership::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"CONTENT_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_GroupMembership::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"CONTENT_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject Contacts_GroupMembership::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_GroupMembership::GROUP_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"GROUP_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_GroupMembership::GROUP_SYNC_ACCOUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"GROUP_SYNC_ACCOUNT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_GroupMembership::GROUP_SYNC_ACCOUNT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"GROUP_SYNC_ACCOUNT_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_GroupMembership::GROUP_SYNC_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"GROUP_SYNC_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_GroupMembership::PERSON_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"PERSON_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_GroupMembership::RAW_CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"RAW_CONTENT_URI",
			"Landroid/net/Uri;");
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

#endif // ANDROID_PROVIDER_CONTACTS_GROUPMEMBERSHIP

