#pragma once

#include "../content/Intent.def.hpp"
#include "./RemoteViewsService.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline RemoteViewsService::RemoteViewsService()
		: android::app::Service(
			"android.widget.RemoteViewsService",
			"()V"
		) {}
	
	// Methods
	inline JObject RemoteViewsService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline JObject RemoteViewsService::onGetViewFactory(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onGetViewFactory",
			"(Landroid/content/Intent;)Landroid/widget/RemoteViewsService$RemoteViewsFactory;",
			arg0.object()
		);
	}
} // namespace android::widget

// Base class headers
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
