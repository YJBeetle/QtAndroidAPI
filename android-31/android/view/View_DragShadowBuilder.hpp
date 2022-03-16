#pragma once

#include "../graphics/Canvas.def.hpp"
#include "../graphics/Point.def.hpp"
#include "./View.def.hpp"
#include "./View_DragShadowBuilder.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	inline View_DragShadowBuilder::View_DragShadowBuilder()
		: JObject(
			"android.view.View$DragShadowBuilder",
			"()V"
		) {}
	inline View_DragShadowBuilder::View_DragShadowBuilder(android::view::View arg0)
		: JObject(
			"android.view.View$DragShadowBuilder",
			"(Landroid/view/View;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::view::View View_DragShadowBuilder::getView() const
	{
		return callObjectMethod(
			"getView",
			"()Landroid/view/View;"
		);
	}
	inline void View_DragShadowBuilder::onDrawShadow(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"onDrawShadow",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	inline void View_DragShadowBuilder::onProvideShadowMetrics(android::graphics::Point arg0, android::graphics::Point arg1) const
	{
		callMethod<void>(
			"onProvideShadowMetrics",
			"(Landroid/graphics/Point;Landroid/graphics/Point;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::view

// Base class headers

