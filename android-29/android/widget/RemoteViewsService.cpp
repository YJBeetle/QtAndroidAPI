#include "../content/Intent.hpp"
#include "./RemoteViewsService.hpp"

namespace android::widget
{
	// Fields
	
	RemoteViewsService::RemoteViewsService(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RemoteViewsService::RemoteViewsService()
	{
		__thiz = QAndroidJniObject(
			"android.widget.RemoteViewsService",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject RemoteViewsService::onBind(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject RemoteViewsService::onGetViewFactory(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onGetViewFactory",
			"(Landroid/content/Intent;)Landroid/widget/RemoteViewsService$RemoteViewsFactory;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::widget

