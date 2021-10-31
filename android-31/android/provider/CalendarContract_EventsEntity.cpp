#include "../content/ContentProviderClient.hpp"
#include "../content/ContentResolver.hpp"
#include "../net/Uri.hpp"
#include "./CalendarContract_EventsEntity.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri CalendarContract_EventsEntity::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$EventsEntity",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// QJniObject forward
	CalendarContract_EventsEntity::CalendarContract_EventsEntity(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass CalendarContract_EventsEntity::newEntityIterator(__JniBaseClass arg0, android::content::ContentProviderClient arg1)
	{
		return callStaticObjectMethod(
			"android.provider.CalendarContract$EventsEntity",
			"newEntityIterator",
			"(Landroid/database/Cursor;Landroid/content/ContentProviderClient;)Landroid/content/EntityIterator;",
			arg0.object(),
			arg1.object()
		);
	}
	__JniBaseClass CalendarContract_EventsEntity::newEntityIterator(__JniBaseClass arg0, android::content::ContentResolver arg1)
	{
		return callStaticObjectMethod(
			"android.provider.CalendarContract$EventsEntity",
			"newEntityIterator",
			"(Landroid/database/Cursor;Landroid/content/ContentResolver;)Landroid/content/EntityIterator;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::provider

