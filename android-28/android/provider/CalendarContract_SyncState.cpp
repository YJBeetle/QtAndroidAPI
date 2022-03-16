#include "../net/Uri.hpp"
#include "./CalendarContract_SyncState.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri CalendarContract_SyncState::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$SyncState",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

