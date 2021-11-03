#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./ContactsContract.hpp"

namespace android::provider
{
	// Fields
	JString ContactsContract::AUTHORITY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract",
			"AUTHORITY",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri ContactsContract::AUTHORITY_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract",
			"AUTHORITY_URI",
			"Landroid/net/Uri;"
		);
	}
	JString ContactsContract::CALLER_IS_SYNCADAPTER()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract",
			"CALLER_IS_SYNCADAPTER",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract::DEFERRED_SNIPPETING()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract",
			"DEFERRED_SNIPPETING",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract::DEFERRED_SNIPPETING_QUERY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract",
			"DEFERRED_SNIPPETING_QUERY",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract::DIRECTORY_PARAM_KEY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract",
			"DIRECTORY_PARAM_KEY",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract::LIMIT_PARAM_KEY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract",
			"LIMIT_PARAM_KEY",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract::PRIMARY_ACCOUNT_NAME()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract",
			"PRIMARY_ACCOUNT_NAME",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract::PRIMARY_ACCOUNT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract",
			"PRIMARY_ACCOUNT_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract::REMOVE_DUPLICATE_ENTRIES()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract",
			"REMOVE_DUPLICATE_ENTRIES",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract::STREQUENT_PHONE_ONLY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract",
			"STREQUENT_PHONE_ONLY",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	ContactsContract::ContactsContract(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ContactsContract::ContactsContract()
		: JObject(
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

