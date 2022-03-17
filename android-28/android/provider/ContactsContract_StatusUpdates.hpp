#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_StatusUpdates.def.hpp"

namespace android::provider
{
	// Fields
	inline JString ContactsContract_StatusUpdates::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$StatusUpdates",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_StatusUpdates::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$StatusUpdates",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri ContactsContract_StatusUpdates::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$StatusUpdates",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline android::net::Uri ContactsContract_StatusUpdates::PROFILE_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$StatusUpdates",
			"PROFILE_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ContactsContract_StatusUpdates::getPresenceIconResourceId(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.provider.ContactsContract$StatusUpdates",
			"getPresenceIconResourceId",
			"(I)I",
			arg0
		);
	}
	inline jint ContactsContract_StatusUpdates::getPresencePrecedence(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.provider.ContactsContract$StatusUpdates",
			"getPresencePrecedence",
			"(I)I",
			arg0
		);
	}
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
