#include "../content/ContentProviderClient.hpp"
#include "../content/ContentResolver.hpp"
#include "../net/Uri.hpp"
#include "./CalendarContract_EventsEntity.hpp"

namespace android::provider
{
	// Fields
	QAndroidJniObject CalendarContract_EventsEntity::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$EventsEntity",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// QAndroidJniObject forward
	CalendarContract_EventsEntity::CalendarContract_EventsEntity(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject CalendarContract_EventsEntity::newEntityIterator(__JniBaseClass arg0, android::content::ContentProviderClient arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.CalendarContract$EventsEntity",
			"newEntityIterator",
			"(Landroid/database/Cursor;Landroid/content/ContentProviderClient;)Landroid/content/EntityIterator;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject CalendarContract_EventsEntity::newEntityIterator(__JniBaseClass arg0, android::content::ContentResolver arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.CalendarContract$EventsEntity",
			"newEntityIterator",
			"(Landroid/database/Cursor;Landroid/content/ContentResolver;)Landroid/content/EntityIterator;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::provider

