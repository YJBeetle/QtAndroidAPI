#pragma once

#include "../app/Activity.def.hpp"
#include "./SystemOnBackInvokedCallbacks.def.hpp"

namespace android::window
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject SystemOnBackInvokedCallbacks::finishAndRemoveTaskCallback(android::app::Activity arg0)
	{
		return callStaticObjectMethod(
			"android.window.SystemOnBackInvokedCallbacks",
			"finishAndRemoveTaskCallback",
			"(Landroid/app/Activity;)Landroid/window/OnBackInvokedCallback;",
			arg0.object()
		);
	}
	inline JObject SystemOnBackInvokedCallbacks::moveTaskToBackCallback(android::app::Activity arg0)
	{
		return callStaticObjectMethod(
			"android.window.SystemOnBackInvokedCallbacks",
			"moveTaskToBackCallback",
			"(Landroid/app/Activity;)Landroid/window/OnBackInvokedCallback;",
			arg0.object()
		);
	}
} // namespace android::window

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::window;
#endif
