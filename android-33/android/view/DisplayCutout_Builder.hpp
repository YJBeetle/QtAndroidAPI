#pragma once

#include "../graphics/Insets.def.hpp"
#include "../graphics/Path.def.hpp"
#include "../graphics/Rect.def.hpp"
#include "./DisplayCutout.def.hpp"
#include "./DisplayCutout_Builder.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	inline DisplayCutout_Builder::DisplayCutout_Builder()
		: JObject(
			"android.view.DisplayCutout$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::view::DisplayCutout DisplayCutout_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/DisplayCutout;"
		);
	}
	inline android::view::DisplayCutout_Builder DisplayCutout_Builder::setBoundingRectBottom(android::graphics::Rect arg0) const
	{
		return callObjectMethod(
			"setBoundingRectBottom",
			"(Landroid/graphics/Rect;)Landroid/view/DisplayCutout$Builder;",
			arg0.object()
		);
	}
	inline android::view::DisplayCutout_Builder DisplayCutout_Builder::setBoundingRectLeft(android::graphics::Rect arg0) const
	{
		return callObjectMethod(
			"setBoundingRectLeft",
			"(Landroid/graphics/Rect;)Landroid/view/DisplayCutout$Builder;",
			arg0.object()
		);
	}
	inline android::view::DisplayCutout_Builder DisplayCutout_Builder::setBoundingRectRight(android::graphics::Rect arg0) const
	{
		return callObjectMethod(
			"setBoundingRectRight",
			"(Landroid/graphics/Rect;)Landroid/view/DisplayCutout$Builder;",
			arg0.object()
		);
	}
	inline android::view::DisplayCutout_Builder DisplayCutout_Builder::setBoundingRectTop(android::graphics::Rect arg0) const
	{
		return callObjectMethod(
			"setBoundingRectTop",
			"(Landroid/graphics/Rect;)Landroid/view/DisplayCutout$Builder;",
			arg0.object()
		);
	}
	inline android::view::DisplayCutout_Builder DisplayCutout_Builder::setCutoutPath(android::graphics::Path arg0) const
	{
		return callObjectMethod(
			"setCutoutPath",
			"(Landroid/graphics/Path;)Landroid/view/DisplayCutout$Builder;",
			arg0.object()
		);
	}
	inline android::view::DisplayCutout_Builder DisplayCutout_Builder::setSafeInsets(android::graphics::Insets arg0) const
	{
		return callObjectMethod(
			"setSafeInsets",
			"(Landroid/graphics/Insets;)Landroid/view/DisplayCutout$Builder;",
			arg0.object()
		);
	}
	inline android::view::DisplayCutout_Builder DisplayCutout_Builder::setWaterfallInsets(android::graphics::Insets arg0) const
	{
		return callObjectMethod(
			"setWaterfallInsets",
			"(Landroid/graphics/Insets;)Landroid/view/DisplayCutout$Builder;",
			arg0.object()
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
