#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class ContactsContract_StatusUpdates : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		static QAndroidJniObject PROFILE_CONTENT_URI();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jint getPresenceIconResourceId(jint arg0);
		static jint getPresencePrecedence(jint arg0);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring ContactsContract_StatusUpdates::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$StatusUpdates",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_StatusUpdates::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$StatusUpdates",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ContactsContract_StatusUpdates::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$StatusUpdates",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject ContactsContract_StatusUpdates::PROFILE_CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$StatusUpdates",
			"PROFILE_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	void ContactsContract_StatusUpdates::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$StatusUpdates",
			"(V)V");
	}
	
	// Methods
	jint ContactsContract_StatusUpdates::getPresenceIconResourceId(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.provider.ContactsContract$StatusUpdates",
			"getPresenceIconResourceId",
			"(I)I",
			arg0
		);
	}
	jint ContactsContract_StatusUpdates::getPresencePrecedence(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.provider.ContactsContract$StatusUpdates",
			"getPresencePrecedence",
			"(I)I",
			arg0
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_StatusUpdates : public __jni_impl::android::provider::ContactsContract_StatusUpdates
	{
	public:
		ContactsContract_StatusUpdates(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_StatusUpdates()
		{
			__constructor();
		}
	};
} // namespace android::provider

