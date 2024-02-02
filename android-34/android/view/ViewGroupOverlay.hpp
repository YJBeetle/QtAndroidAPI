#pragma once

#include "./View.def.hpp"
#include "./ViewGroupOverlay.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void ViewGroupOverlay::add(android::view::View arg0) const
	{
		callMethod<void>(
			"add",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void ViewGroupOverlay::remove(android::view::View arg0) const
	{
		callMethod<void>(
			"remove",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
} // namespace android::view

// Base class headers
#include "./ViewOverlay.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
