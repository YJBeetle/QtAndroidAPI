#pragma once

#include "../graphics/Outline.def.hpp"
#include "../view/View.def.hpp"
#include "./RemoteViews_RemoteViewOutlineProvider.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline RemoteViews_RemoteViewOutlineProvider::RemoteViews_RemoteViewOutlineProvider(jfloat arg0)
		: android::view::ViewOutlineProvider(
			"android.widget.RemoteViews$RemoteViewOutlineProvider",
			"(F)V",
			arg0
		) {}
	
	// Methods
	inline void RemoteViews_RemoteViewOutlineProvider::getOutline(android::view::View arg0, android::graphics::Outline arg1) const
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/view/View;Landroid/graphics/Outline;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jfloat RemoteViews_RemoteViewOutlineProvider::getRadius() const
	{
		return callMethod<jfloat>(
			"getRadius",
			"()F"
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/ViewOutlineProvider.hpp"

