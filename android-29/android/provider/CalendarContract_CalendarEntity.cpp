#include "../net/Uri.hpp"
#include "./CalendarContract_CalendarEntity.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri CalendarContract_CalendarEntity::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$CalendarEntity",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	
	// Methods
	JObject CalendarContract_CalendarEntity::newEntityIterator(JObject arg0)
	{
		return callStaticObjectMethod(
			"android.provider.CalendarContract$CalendarEntity",
			"newEntityIterator",
			"(Landroid/database/Cursor;)Landroid/content/EntityIterator;",
			arg0.object()
		);
	}
} // namespace android::provider

