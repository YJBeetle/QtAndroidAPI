#include "./View.hpp"
#include "./ViewGroupOverlay.hpp"

namespace android::view
{
	// Fields
	
	// QJniObject forward
	ViewGroupOverlay::ViewGroupOverlay(QJniObject obj) : android::view::ViewOverlay(obj) {}
	
	// Constructors
	
	// Methods
	void ViewGroupOverlay::add(android::view::View arg0) const
	{
		callMethod<void>(
			"add",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void ViewGroupOverlay::remove(android::view::View arg0) const
	{
		callMethod<void>(
			"remove",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
} // namespace android::view

