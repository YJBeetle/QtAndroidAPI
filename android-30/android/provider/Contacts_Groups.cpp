#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./Contacts_Groups.hpp"

namespace android::provider
{
	// Fields
	JString Contacts_Groups::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Groups",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString Contacts_Groups::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Groups",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri Contacts_Groups::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Groups",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	JString Contacts_Groups::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Groups",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri Contacts_Groups::DELETED_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Groups",
			"DELETED_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	JString Contacts_Groups::GROUP_ANDROID_STARRED()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Groups",
			"GROUP_ANDROID_STARRED",
			"Ljava/lang/String;"
		);
	}
	JString Contacts_Groups::GROUP_MY_CONTACTS()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Groups",
			"GROUP_MY_CONTACTS",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

