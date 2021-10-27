#include "./Notification_DecoratedCustomViewStyle.hpp"

namespace android::app
{
	// Fields
	
	Notification_DecoratedCustomViewStyle::Notification_DecoratedCustomViewStyle(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Notification_DecoratedCustomViewStyle::Notification_DecoratedCustomViewStyle()
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$DecoratedCustomViewStyle",
			"()V"
		);
	}
	
	// Methods
} // namespace android::app

