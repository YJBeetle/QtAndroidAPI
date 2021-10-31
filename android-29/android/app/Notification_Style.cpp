#include "./Notification.hpp"
#include "./Notification_Builder.hpp"
#include "../widget/RemoteViews.hpp"
#include "./Notification_Style.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	Notification_Style::Notification_Style(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Notification_Style::Notification_Style()
		: __JniBaseClass(
			"android.app.Notification$Style",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject Notification_Style::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/Notification;"
		);
	}
	void Notification_Style::setBuilder(android::app::Notification_Builder arg0)
	{
		callMethod<void>(
			"setBuilder",
			"(Landroid/app/Notification$Builder;)V",
			arg0.object()
		);
	}
} // namespace android::app
