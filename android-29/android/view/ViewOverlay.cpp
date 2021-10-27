#include "../content/Context.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "./View.hpp"
#include "./ViewOverlay.hpp"

namespace android::view
{
	// Fields
	
	ViewOverlay::ViewOverlay(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void ViewOverlay::add(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"add",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewOverlay::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	void ViewOverlay::remove(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"remove",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::view

