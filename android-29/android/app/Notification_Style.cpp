#include "./Notification.hpp"
#include "./Notification_Builder.hpp"
#include "../widget/RemoteViews.hpp"
#include "../../JString.hpp"
#include "./Notification_Style.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	Notification_Style::Notification_Style(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Notification_Style::Notification_Style()
		: JObject(
			"android.app.Notification$Style",
			"()V"
		) {}
	
	// Methods
	android::app::Notification Notification_Style::build()
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

