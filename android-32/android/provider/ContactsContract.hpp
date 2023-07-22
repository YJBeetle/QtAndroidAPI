#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./ContactsContract.def.hpp"

namespace android::provider
{
	// Fields
	inline JString ContactsContract::AUTHORITY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract",
			"AUTHORITY",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri ContactsContract::AUTHORITY_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract",
			"AUTHORITY_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString ContactsContract::CALLER_IS_SYNCADAPTER()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract",
			"CALLER_IS_SYNCADAPTER",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract::DEFERRED_SNIPPETING()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract",
			"DEFERRED_SNIPPETING",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract::DEFERRED_SNIPPETING_QUERY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract",
			"DEFERRED_SNIPPETING_QUERY",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract::DIRECTORY_PARAM_KEY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract",
			"DIRECTORY_PARAM_KEY",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract::LIMIT_PARAM_KEY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract",
			"LIMIT_PARAM_KEY",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract::PRIMARY_ACCOUNT_NAME()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract",
			"PRIMARY_ACCOUNT_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract::PRIMARY_ACCOUNT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract",
			"PRIMARY_ACCOUNT_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract::REMOVE_DUPLICATE_ENTRIES()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract",
			"REMOVE_DUPLICATE_ENTRIES",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract::STREQUENT_PHONE_ONLY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract",
			"STREQUENT_PHONE_ONLY",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline ContactsContract::ContactsContract()
		: JObject(
			"android.provider.ContactsContract",
			"()V"
		) {}
	
	// Methods
	inline jboolean ContactsContract::isProfileId(jlong arg0)
	{
		return callStaticMethod<jboolean>(
			"android.provider.ContactsContract",
			"isProfileId",
			"(J)Z",
			arg0
		);
	}
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
