#include "./Notification_DecoratedMediaCustomViewStyle.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	Notification_DecoratedMediaCustomViewStyle::Notification_DecoratedMediaCustomViewStyle(QJniObject obj) : android::app::Notification_MediaStyle(obj) {}
	
	// Constructors
	Notification_DecoratedMediaCustomViewStyle::Notification_DecoratedMediaCustomViewStyle()
		: android::app::Notification_MediaStyle(
			"android.app.Notification$DecoratedMediaCustomViewStyle",
			"()V"
		) {}
	
	// Methods
} // namespace android::app

