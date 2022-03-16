#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./Contacts_Photos.hpp"

namespace android::provider
{
	// Fields
	JString Contacts_Photos::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Photos",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri Contacts_Photos::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Photos",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	JString Contacts_Photos::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Photos",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

