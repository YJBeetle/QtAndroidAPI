#pragma once

#include "../graphics/Rect.def.hpp"
#include "./ActionMode.def.hpp"
#include "./View.def.hpp"
#include "./ActionMode_Callback2.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	inline ActionMode_Callback2::ActionMode_Callback2()
		: JObject(
			"android.view.ActionMode$Callback2",
			"()V"
		) {}
	
	// Methods
	inline void ActionMode_Callback2::onGetContentRect(android::view::ActionMode arg0, android::view::View arg1, android::graphics::Rect arg2) const
	{
		callMethod<void>(
			"onGetContentRect",
			"(Landroid/view/ActionMode;Landroid/view/View;Landroid/graphics/Rect;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::view

// Base class headers

