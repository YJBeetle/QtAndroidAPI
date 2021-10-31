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
	
	// QJniObject forward
	CalendarContract_CalendarEntity::CalendarContract_CalendarEntity(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass CalendarContract_CalendarEntity::newEntityIterator(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"android.provider.CalendarContract$CalendarEntity",
			"newEntityIterator",
			"(Landroid/database/Cursor;)Landroid/content/EntityIterator;",
			arg0.object()
		);
	}
} // namespace android::provider

