#include "../net/Uri.hpp"
#include "./ContactsContract.hpp"

namespace android::provider
{
	// Fields
	jstring ContactsContract::AUTHORITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract",
			"AUTHORITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ContactsContract::AUTHORITY_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract",
			"AUTHORITY_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring ContactsContract::CALLER_IS_SYNCADAPTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract",
			"CALLER_IS_SYNCADAPTER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract::DEFERRED_SNIPPETING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract",
			"DEFERRED_SNIPPETING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract::DEFERRED_SNIPPETING_QUERY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract",
			"DEFERRED_SNIPPETING_QUERY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract::DIRECTORY_PARAM_KEY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract",
			"DIRECTORY_PARAM_KEY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract::LIMIT_PARAM_KEY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract",
			"LIMIT_PARAM_KEY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract::PRIMARY_ACCOUNT_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract",
			"PRIMARY_ACCOUNT_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract::PRIMARY_ACCOUNT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract",
			"PRIMARY_ACCOUNT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract::REMOVE_DUPLICATE_ENTRIES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract",
			"REMOVE_DUPLICATE_ENTRIES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract::STREQUENT_PHONE_ONLY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract",
			"STREQUENT_PHONE_ONLY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	ContactsContract::ContactsContract(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ContactsContract::ContactsContract()
		: __JniBaseClass(
			"android.provider.ContactsContract",
			"()V"
		) {}
	
	// Methods
	jboolean ContactsContract::isProfileId(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.ContactsContract",
			"isProfileId",
			"(J)Z",
			arg0
		);
	}
} // namespace android::provider

