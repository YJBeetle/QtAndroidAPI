#pragma once

#include "./Notification_DecoratedCustomViewStyle.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline Notification_DecoratedCustomViewStyle::Notification_DecoratedCustomViewStyle()
		: android::app::Notification_Style(
			"android.app.Notification$DecoratedCustomViewStyle",
			"()V"
		) {}
	
	// Methods
} // namespace android::app

// Base class headers
#include "./Notification_Style.hpp"

