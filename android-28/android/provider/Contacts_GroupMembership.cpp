#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./Contacts_GroupMembership.hpp"

namespace android::provider
{
	// Fields
	JString Contacts_GroupMembership::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		);
	}
	JString Contacts_GroupMembership::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString Contacts_GroupMembership::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri Contacts_GroupMembership::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	JString Contacts_GroupMembership::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	JString Contacts_GroupMembership::GROUP_ID()
	{
		return getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"GROUP_ID",
			"Ljava/lang/String;"
		);
	}
	JString Contacts_GroupMembership::GROUP_SYNC_ACCOUNT()
	{
		return getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"GROUP_SYNC_ACCOUNT",
			"Ljava/lang/String;"
		);
	}
	JString Contacts_GroupMembership::GROUP_SYNC_ACCOUNT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"GROUP_SYNC_ACCOUNT_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString Contacts_GroupMembership::GROUP_SYNC_ID()
	{
		return getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"GROUP_SYNC_ID",
			"Ljava/lang/String;"
		);
	}
	JString Contacts_GroupMembership::PERSON_ID()
	{
		return getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"PERSON_ID",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri Contacts_GroupMembership::RAW_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Contacts$GroupMembership",
			"RAW_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// QJniObject forward
	Contacts_GroupMembership::Contacts_GroupMembership(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

