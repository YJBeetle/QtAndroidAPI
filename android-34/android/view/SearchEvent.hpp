#pragma once

#include "./InputDevice.def.hpp"
#include "./SearchEvent.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	inline SearchEvent::SearchEvent(android::view::InputDevice arg0)
		: JObject(
			"android.view.SearchEvent",
			"(Landroid/view/InputDevice;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::view::InputDevice SearchEvent::getInputDevice() const
	{
		return callObjectMethod(
			"getInputDevice",
			"()Landroid/view/InputDevice;"
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
