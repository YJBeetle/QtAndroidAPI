#include "../net/Uri.hpp"
#include "./ContactsContract_StatusUpdates.hpp"

namespace android::provider
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
	
	ContactsContract_StatusUpdates::ContactsContract_StatusUpdates(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
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
} // namespace android::provider

