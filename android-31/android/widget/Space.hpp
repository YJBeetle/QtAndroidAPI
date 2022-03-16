#pragma once

#include "../content/Context.def.hpp"
#include "../graphics/Canvas.def.hpp"
#include "./Space.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline Space::Space(android::content::Context arg0)
		: android::view::View(
			"android.widget.Space",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline Space::Space(android::content::Context arg0, JObject arg1)
		: android::view::View(
			"android.widget.Space",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline Space::Space(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::View(
			"android.widget.Space",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline Space::Space(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::view::View(
			"android.widget.Space",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline void Space::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"

