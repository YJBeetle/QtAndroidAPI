#include "../graphics/drawable/Drawable.hpp"
#include "./ViewOverlay.hpp"

namespace android::view
{
	// Fields
	
	// QAndroidJniObject forward
	ViewOverlay::ViewOverlay(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void ViewOverlay::add(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"add",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void ViewOverlay::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	void ViewOverlay::remove(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"remove",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
} // namespace android::view

