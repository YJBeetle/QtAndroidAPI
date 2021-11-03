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
	
	// QJniObject forward
	CalendarContract_SyncState::CalendarContract_SyncState(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

