#include "../net/Uri.hpp"
#include "./CalendarContract_SyncState.hpp"

namespace android::provider
{
	// Fields
	QAndroidJniObject CalendarContract_SyncState::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$SyncState",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	CalendarContract_SyncState::CalendarContract_SyncState(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::provider

