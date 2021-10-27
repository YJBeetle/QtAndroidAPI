#include "./Notification.hpp"
#include "./Notification_Builder.hpp"
#include "../widget/RemoteViews.hpp"
#include "./Notification_Style.hpp"

namespace android::app
{
	// Fields
	
	Notification_Style::Notification_Style(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Notification_Style::Notification_Style()
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$Style",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject Notification_Style::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/app/Notification;"
		);
	}
	void Notification_Style::setBuilder(android::app::Notification_Builder arg0)
	{
		__thiz.callMethod<void>(
			"setBuilder",
			"(Landroid/app/Notification$Builder;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::app

