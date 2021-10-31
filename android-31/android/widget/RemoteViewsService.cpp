#include "../content/Intent.hpp"
#include "./RemoteViewsService.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	RemoteViewsService::RemoteViewsService(QJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	RemoteViewsService::RemoteViewsService()
		: android::app::Service(
			"android.widget.RemoteViewsService",
			"()V"
		) {}
	
	// Methods
	__JniBaseClass RemoteViewsService::onBind(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	__JniBaseClass RemoteViewsService::onGetViewFactory(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onGetViewFactory",
			"(Landroid/content/Intent;)Landroid/widget/RemoteViewsService$RemoteViewsFactory;",
			arg0.object()
		);
	}
} // namespace android::widget

