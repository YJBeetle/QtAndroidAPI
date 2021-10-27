#include "./Notification_DecoratedMediaCustomViewStyle.hpp"

namespace android::app
{
	// Fields
	
	Notification_DecoratedMediaCustomViewStyle::Notification_DecoratedMediaCustomViewStyle(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Notification_DecoratedMediaCustomViewStyle::Notification_DecoratedMediaCustomViewStyle()
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$DecoratedMediaCustomViewStyle",
			"()V"
		);
	}
	
	// Methods
} // namespace android::app

