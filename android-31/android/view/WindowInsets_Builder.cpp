#include "../graphics/Insets.hpp"
#include "../graphics/Rect.hpp"
#include "./DisplayCutout.hpp"
#include "./RoundedCorner.hpp"
#include "./WindowInsets.hpp"
#include "./WindowInsets_Builder.hpp"

namespace android::view
{
	// Fields
	
	// QAndroidJniObject forward
	WindowInsets_Builder::WindowInsets_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	WindowInsets_Builder::WindowInsets_Builder()
		: __JniBaseClass(
			"android.view.WindowInsets$Builder",
			"()V"
		) {}
	WindowInsets_Builder::WindowInsets_Builder(android::view::WindowInsets arg0)
		: __JniBaseClass(
			"android.view.WindowInsets$Builder",
			"(Landroid/view/WindowInsets;)V",
			arg0.object()
		) {}
	
	// Methods
	android::view::WindowInsets WindowInsets_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/WindowInsets;"
		);
	}
	android::view::WindowInsets_Builder WindowInsets_Builder::setDisplayCutout(android::view::DisplayCutout arg0)
	{
		return callObjectMethod(
			"setDisplayCutout",
			"(Landroid/view/DisplayCutout;)Landroid/view/WindowInsets$Builder;",
			arg0.object()
		);
	}
	android::view::WindowInsets_Builder WindowInsets_Builder::setInsets(jint arg0, android::graphics::Insets arg1)
	{
		return callObjectMethod(
			"setInsets",
			"(ILandroid/graphics/Insets;)Landroid/view/WindowInsets$Builder;",
			arg0,
			arg1.object()
		);
	}
	android::view::WindowInsets_Builder WindowInsets_Builder::setInsetsIgnoringVisibility(jint arg0, android::graphics::Insets arg1)
	{
		return callObjectMethod(
			"setInsetsIgnoringVisibility",
			"(ILandroid/graphics/Insets;)Landroid/view/WindowInsets$Builder;",
			arg0,
			arg1.object()
		);
	}
	android::view::WindowInsets_Builder WindowInsets_Builder::setMandatorySystemGestureInsets(android::graphics::Insets arg0)
	{
		return callObjectMethod(
			"setMandatorySystemGestureInsets",
			"(Landroid/graphics/Insets;)Landroid/view/WindowInsets$Builder;",
			arg0.object()
		);
	}
	android::view::WindowInsets_Builder WindowInsets_Builder::setPrivacyIndicatorBounds(android::graphics::Rect arg0)
	{
		return callObjectMethod(
			"setPrivacyIndicatorBounds",
			"(Landroid/graphics/Rect;)Landroid/view/WindowInsets$Builder;",
			arg0.object()
		);
	}
	android::view::WindowInsets_Builder WindowInsets_Builder::setRoundedCorner(jint arg0, android::view::RoundedCorner arg1)
	{
		return callObjectMethod(
			"setRoundedCorner",
			"(ILandroid/view/RoundedCorner;)Landroid/view/WindowInsets$Builder;",
			arg0,
			arg1.object()
		);
	}
	android::view::WindowInsets_Builder WindowInsets_Builder::setStableInsets(android::graphics::Insets arg0)
	{
		return callObjectMethod(
			"setStableInsets",
			"(Landroid/graphics/Insets;)Landroid/view/WindowInsets$Builder;",
			arg0.object()
		);
	}
	android::view::WindowInsets_Builder WindowInsets_Builder::setSystemGestureInsets(android::graphics::Insets arg0)
	{
		return callObjectMethod(
			"setSystemGestureInsets",
			"(Landroid/graphics/Insets;)Landroid/view/WindowInsets$Builder;",
			arg0.object()
		);
	}
	android::view::WindowInsets_Builder WindowInsets_Builder::setSystemWindowInsets(android::graphics::Insets arg0)
	{
		return callObjectMethod(
			"setSystemWindowInsets",
			"(Landroid/graphics/Insets;)Landroid/view/WindowInsets$Builder;",
			arg0.object()
		);
	}
	android::view::WindowInsets_Builder WindowInsets_Builder::setTappableElementInsets(android::graphics::Insets arg0)
	{
		return callObjectMethod(
			"setTappableElementInsets",
			"(Landroid/graphics/Insets;)Landroid/view/WindowInsets$Builder;",
			arg0.object()
		);
	}
	android::view::WindowInsets_Builder WindowInsets_Builder::setVisible(jint arg0, jboolean arg1)
	{
		return callObjectMethod(
			"setVisible",
			"(IZ)Landroid/view/WindowInsets$Builder;",
			arg0,
			arg1
		);
	}
} // namespace android::view

