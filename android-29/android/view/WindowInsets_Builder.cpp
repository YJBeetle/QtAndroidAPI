#include "../graphics/Insets.hpp"
#include "./DisplayCutout.hpp"
#include "./WindowInsets.hpp"
#include "./WindowInsets_Builder.hpp"

namespace android::view
{
	// Fields
	
	// QAndroidJniObject forward
	WindowInsets_Builder::WindowInsets_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	WindowInsets_Builder::WindowInsets_Builder()
		: JObject(
			"android.view.WindowInsets$Builder",
			"()V"
		) {}
	WindowInsets_Builder::WindowInsets_Builder(android::view::WindowInsets arg0)
		: JObject(
			"android.view.WindowInsets$Builder",
			"(Landroid/view/WindowInsets;)V",
			arg0.object()
		) {}
	
	// Methods
	android::view::WindowInsets WindowInsets_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/WindowInsets;"
		);
	}
	android::view::WindowInsets_Builder WindowInsets_Builder::setDisplayCutout(android::view::DisplayCutout arg0) const
	{
		return callObjectMethod(
			"setDisplayCutout",
			"(Landroid/view/DisplayCutout;)Landroid/view/WindowInsets$Builder;",
			arg0.object()
		);
	}
	android::view::WindowInsets_Builder WindowInsets_Builder::setMandatorySystemGestureInsets(android::graphics::Insets arg0) const
	{
		return callObjectMethod(
			"setMandatorySystemGestureInsets",
			"(Landroid/graphics/Insets;)Landroid/view/WindowInsets$Builder;",
			arg0.object()
		);
	}
	android::view::WindowInsets_Builder WindowInsets_Builder::setStableInsets(android::graphics::Insets arg0) const
	{
		return callObjectMethod(
			"setStableInsets",
			"(Landroid/graphics/Insets;)Landroid/view/WindowInsets$Builder;",
			arg0.object()
		);
	}
	android::view::WindowInsets_Builder WindowInsets_Builder::setSystemGestureInsets(android::graphics::Insets arg0) const
	{
		return callObjectMethod(
			"setSystemGestureInsets",
			"(Landroid/graphics/Insets;)Landroid/view/WindowInsets$Builder;",
			arg0.object()
		);
	}
	android::view::WindowInsets_Builder WindowInsets_Builder::setSystemWindowInsets(android::graphics::Insets arg0) const
	{
		return callObjectMethod(
			"setSystemWindowInsets",
			"(Landroid/graphics/Insets;)Landroid/view/WindowInsets$Builder;",
			arg0.object()
		);
	}
	android::view::WindowInsets_Builder WindowInsets_Builder::setTappableElementInsets(android::graphics::Insets arg0) const
	{
		return callObjectMethod(
			"setTappableElementInsets",
			"(Landroid/graphics/Insets;)Landroid/view/WindowInsets$Builder;",
			arg0.object()
		);
	}
} // namespace android::view

