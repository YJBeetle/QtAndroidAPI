#include "./Notification_DecoratedCustomViewStyle.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	Notification_DecoratedCustomViewStyle::Notification_DecoratedCustomViewStyle(QJniObject obj) : android::app::Notification_Style(obj) {}
	
	// Constructors
	Notification_DecoratedCustomViewStyle::Notification_DecoratedCustomViewStyle()
		: android::app::Notification_Style(
			"android.app.Notification$DecoratedCustomViewStyle",
			"()V"
		) {}
	
	// Methods
} // namespace android::app

