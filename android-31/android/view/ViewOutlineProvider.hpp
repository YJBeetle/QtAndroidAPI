#pragma once

#include "../graphics/Outline.def.hpp"
#include "./View.def.hpp"
#include "./ViewOutlineProvider.def.hpp"

namespace android::view
{
	// Fields
	inline android::view::ViewOutlineProvider ViewOutlineProvider::BACKGROUND()
	{
		return getStaticObjectField(
			"android.view.ViewOutlineProvider",
			"BACKGROUND",
			"Landroid/view/ViewOutlineProvider;"
		);
	}
	inline android::view::ViewOutlineProvider ViewOutlineProvider::BOUNDS()
	{
		return getStaticObjectField(
			"android.view.ViewOutlineProvider",
			"BOUNDS",
			"Landroid/view/ViewOutlineProvider;"
		);
	}
	inline android::view::ViewOutlineProvider ViewOutlineProvider::PADDED_BOUNDS()
	{
		return getStaticObjectField(
			"android.view.ViewOutlineProvider",
			"PADDED_BOUNDS",
			"Landroid/view/ViewOutlineProvider;"
		);
	}
	
	// Constructors
	inline ViewOutlineProvider::ViewOutlineProvider()
		: JObject(
			"android.view.ViewOutlineProvider",
			"()V"
		) {}
	
	// Methods
	inline void ViewOutlineProvider::getOutline(android::view::View arg0, android::graphics::Outline arg1) const
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/view/View;Landroid/graphics/Outline;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
