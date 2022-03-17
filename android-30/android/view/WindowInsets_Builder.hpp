#pragma once

#include "../graphics/Insets.def.hpp"
#include "./DisplayCutout.def.hpp"
#include "./WindowInsets.def.hpp"
#include "./WindowInsets_Builder.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	inline WindowInsets_Builder::WindowInsets_Builder()
		: JObject(
			"android.view.WindowInsets$Builder",
			"()V"
		) {}
	inline WindowInsets_Builder::WindowInsets_Builder(android::view::WindowInsets arg0)
		: JObject(
			"android.view.WindowInsets$Builder",
			"(Landroid/view/WindowInsets;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::view::WindowInsets WindowInsets_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/WindowInsets;"
		);
	}
	inline android::view::WindowInsets_Builder WindowInsets_Builder::setDisplayCutout(android::view::DisplayCutout arg0) const
	{
		return callObjectMethod(
			"setDisplayCutout",
			"(Landroid/view/DisplayCutout;)Landroid/view/WindowInsets$Builder;",
			arg0.object()
		);
	}
	inline android::view::WindowInsets_Builder WindowInsets_Builder::setInsets(jint arg0, android::graphics::Insets arg1) const
	{
		return callObjectMethod(
			"setInsets",
			"(ILandroid/graphics/Insets;)Landroid/view/WindowInsets$Builder;",
			arg0,
			arg1.object()
		);
	}
	inline android::view::WindowInsets_Builder WindowInsets_Builder::setInsetsIgnoringVisibility(jint arg0, android::graphics::Insets arg1) const
	{
		return callObjectMethod(
			"setInsetsIgnoringVisibility",
			"(ILandroid/graphics/Insets;)Landroid/view/WindowInsets$Builder;",
			arg0,
			arg1.object()
		);
	}
	inline android::view::WindowInsets_Builder WindowInsets_Builder::setMandatorySystemGestureInsets(android::graphics::Insets arg0) const
	{
		return callObjectMethod(
			"setMandatorySystemGestureInsets",
			"(Landroid/graphics/Insets;)Landroid/view/WindowInsets$Builder;",
			arg0.object()
		);
	}
	inline android::view::WindowInsets_Builder WindowInsets_Builder::setStableInsets(android::graphics::Insets arg0) const
	{
		return callObjectMethod(
			"setStableInsets",
			"(Landroid/graphics/Insets;)Landroid/view/WindowInsets$Builder;",
			arg0.object()
		);
	}
	inline android::view::WindowInsets_Builder WindowInsets_Builder::setSystemGestureInsets(android::graphics::Insets arg0) const
	{
		return callObjectMethod(
			"setSystemGestureInsets",
			"(Landroid/graphics/Insets;)Landroid/view/WindowInsets$Builder;",
			arg0.object()
		);
	}
	inline android::view::WindowInsets_Builder WindowInsets_Builder::setSystemWindowInsets(android::graphics::Insets arg0) const
	{
		return callObjectMethod(
			"setSystemWindowInsets",
			"(Landroid/graphics/Insets;)Landroid/view/WindowInsets$Builder;",
			arg0.object()
		);
	}
	inline android::view::WindowInsets_Builder WindowInsets_Builder::setTappableElementInsets(android::graphics::Insets arg0) const
	{
		return callObjectMethod(
			"setTappableElementInsets",
			"(Landroid/graphics/Insets;)Landroid/view/WindowInsets$Builder;",
			arg0.object()
		);
	}
	inline android::view::WindowInsets_Builder WindowInsets_Builder::setVisible(jint arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"setVisible",
			"(IZ)Landroid/view/WindowInsets$Builder;",
			arg0,
			arg1
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
