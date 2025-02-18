#pragma once

#include "./WindowId.def.hpp"
#include "./WindowId_FocusObserver.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	inline WindowId_FocusObserver::WindowId_FocusObserver()
		: JObject(
			"android.view.WindowId$FocusObserver",
			"()V"
		) {}
	
	// Methods
	inline void WindowId_FocusObserver::onFocusGained(android::view::WindowId arg0) const
	{
		callMethod<void>(
			"onFocusGained",
			"(Landroid/view/WindowId;)V",
			arg0.object()
		);
	}
	inline void WindowId_FocusObserver::onFocusLost(android::view::WindowId arg0) const
	{
		callMethod<void>(
			"onFocusLost",
			"(Landroid/view/WindowId;)V",
			arg0.object()
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
