#include "../net/Uri.hpp"
#include "./ContactsContract.hpp"

namespace android::provider
{
	// Fields
	jstring ContactsContract::AUTHORITY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract",
			"AUTHORITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri ContactsContract::AUTHORITY_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract",
			"AUTHORITY_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring ContactsContract::CALLER_IS_SYNCADAPTER()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract",
			"CALLER_IS_SYNCADAPTER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract::DEFERRED_SNIPPETING()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract",
			"DEFERRED_SNIPPETING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract::DEFERRED_SNIPPETING_QUERY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract",
			"DEFERRED_SNIPPETING_QUERY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract::DIRECTORY_PARAM_KEY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract",
			"DIRECTORY_PARAM_KEY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract::LIMIT_PARAM_KEY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract",
			"LIMIT_PARAM_KEY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract::PRIMARY_ACCOUNT_NAME()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract",
			"PRIMARY_ACCOUNT_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract::PRIMARY_ACCOUNT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract",
			"PRIMARY_ACCOUNT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract::REMOVE_DUPLICATE_ENTRIES()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract",
			"REMOVE_DUPLICATE_ENTRIES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract::STREQUENT_PHONE_ONLY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract",
			"STREQUENT_PHONE_ONLY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	ContactsContract::ContactsContract(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ContactsContract::ContactsContract()
		: __JniBaseClass(
			"android.provider.ContactsContract",
			"()V"
		) {}
	
	// Methods
	jboolean ContactsContract::isProfileId(jlong arg0)
	{
		return callStaticMethod<jboolean>(
			"android.provider.ContactsContract",
			"isProfileId",
			"(J)Z",
			arg0
		);
	}
} // namespace android::provider

