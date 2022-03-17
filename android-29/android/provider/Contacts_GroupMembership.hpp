#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./Contacts_GroupMembership.def.hpp"

namespace android::provider
{
	// Fields
	inline JString Contacts_GroupMembership::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_GroupMembership::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_GroupMembership::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri Contacts_GroupMembership::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString Contacts_GroupMembership::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_GroupMembership::GROUP_ID()
	{
		return getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"GROUP_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_GroupMembership::GROUP_SYNC_ACCOUNT()
	{
		return getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"GROUP_SYNC_ACCOUNT",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_GroupMembership::GROUP_SYNC_ACCOUNT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"GROUP_SYNC_ACCOUNT_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_GroupMembership::GROUP_SYNC_ID()
	{
		return getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"GROUP_SYNC_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_GroupMembership::PERSON_ID()
	{
		return getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"PERSON_ID",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri Contacts_GroupMembership::RAW_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"RAW_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
