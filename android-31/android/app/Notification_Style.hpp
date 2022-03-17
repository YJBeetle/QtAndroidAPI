#pragma once

#include "./Notification.def.hpp"
#include "./Notification_Builder.def.hpp"
#include "../widget/RemoteViews.def.hpp"
#include "../../JString.hpp"
#include "./Notification_Style.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline Notification_Style::Notification_Style()
		: JObject(
			"android.app.Notification$Style",
			"()V"
		) {}
	
	// Methods
	inline android::app::Notification Notification_Style::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/Notification;"
		);
	}
	inline void Notification_Style::setBuilder(android::app::Notification_Builder arg0) const
	{
		callMethod<void>(
			"setBuilder",
			"(Landroid/app/Notification$Builder;)V",
			arg0.object()
		);
	}
} // namespace android::app

// Base class headers

