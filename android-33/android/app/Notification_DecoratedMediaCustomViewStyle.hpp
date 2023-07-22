#pragma once

#include "./Notification_DecoratedMediaCustomViewStyle.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline Notification_DecoratedMediaCustomViewStyle::Notification_DecoratedMediaCustomViewStyle()
		: android::app::Notification_MediaStyle(
			"android.app.Notification$DecoratedMediaCustomViewStyle",
			"()V"
		) {}
	
	// Methods
} // namespace android::app

// Base class headers
#include "./Notification_Style.hpp"
#include "./Notification_MediaStyle.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
