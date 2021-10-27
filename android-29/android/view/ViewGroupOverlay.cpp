#include "../content/Context.hpp"
#include "./View.hpp"
#include "./ViewGroupOverlay.hpp"

namespace android::view
{
	// Fields
	
	ViewGroupOverlay::ViewGroupOverlay(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void ViewGroupOverlay::add(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"add",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewGroupOverlay::remove(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"remove",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::view

