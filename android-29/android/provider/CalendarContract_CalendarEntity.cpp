#include "../net/Uri.hpp"
#include "./CalendarContract_CalendarEntity.hpp"

namespace android::provider
{
	// Fields
	QAndroidJniObject CalendarContract_CalendarEntity::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$CalendarEntity",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// QAndroidJniObject forward
	CalendarContract_CalendarEntity::CalendarContract_CalendarEntity(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject CalendarContract_CalendarEntity::newEntityIterator(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.CalendarContract$CalendarEntity",
			"newEntityIterator",
			"(Landroid/database/Cursor;)Landroid/content/EntityIterator;",
			arg0.object()
		);
	}
} // namespace android::provider

