#include "./View.hpp"
#include "./ViewGroupOverlay.hpp"

namespace android::view
{
	// Fields
	
	// QAndroidJniObject forward
	ViewGroupOverlay::ViewGroupOverlay(QAndroidJniObject obj) : android::view::ViewOverlay(obj) {}
	
	// Constructors
	
	// Methods
	void ViewGroupOverlay::add(android::view::View arg0)
	{
		callMethod<void>(
			"add",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void ViewGroupOverlay::remove(android::view::View arg0)
	{
		callMethod<void>(
			"remove",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
} // namespace android::view

