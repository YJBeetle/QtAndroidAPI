#include "../graphics/Insets.hpp"
#include "./DisplayCutout.hpp"
#include "./WindowInsets.hpp"
#include "./WindowInsets_Builder.hpp"

namespace android::view
{
	// Fields
	
	WindowInsets_Builder::WindowInsets_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WindowInsets_Builder::WindowInsets_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.view.WindowInsets$Builder",
			"()V"
		);
	}
	WindowInsets_Builder::WindowInsets_Builder(android::view::WindowInsets &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.WindowInsets$Builder",
			"(Landroid/view/WindowInsets;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject WindowInsets_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/WindowInsets;"
		);
	}
	QAndroidJniObject WindowInsets_Builder::setDisplayCutout(android::view::DisplayCutout arg0)
	{
		return __thiz.callObjectMethod(
			"setDisplayCutout",
			"(Landroid/view/DisplayCutout;)Landroid/view/WindowInsets$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject WindowInsets_Builder::setMandatorySystemGestureInsets(android::graphics::Insets arg0)
	{
		return __thiz.callObjectMethod(
			"setMandatorySystemGestureInsets",
			"(Landroid/graphics/Insets;)Landroid/view/WindowInsets$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject WindowInsets_Builder::setStableInsets(android::graphics::Insets arg0)
	{
		return __thiz.callObjectMethod(
			"setStableInsets",
			"(Landroid/graphics/Insets;)Landroid/view/WindowInsets$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject WindowInsets_Builder::setSystemGestureInsets(android::graphics::Insets arg0)
	{
		return __thiz.callObjectMethod(
			"setSystemGestureInsets",
			"(Landroid/graphics/Insets;)Landroid/view/WindowInsets$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject WindowInsets_Builder::setSystemWindowInsets(android::graphics::Insets arg0)
	{
		return __thiz.callObjectMethod(
			"setSystemWindowInsets",
			"(Landroid/graphics/Insets;)Landroid/view/WindowInsets$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject WindowInsets_Builder::setTappableElementInsets(android::graphics::Insets arg0)
	{
		return __thiz.callObjectMethod(
			"setTappableElementInsets",
			"(Landroid/graphics/Insets;)Landroid/view/WindowInsets$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::view

