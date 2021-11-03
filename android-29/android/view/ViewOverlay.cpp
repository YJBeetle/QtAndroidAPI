#include "../content/Context.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "./View.hpp"
#include "./ViewOverlay.hpp"

namespace android::view
{
	// Fields
	
	// QJniObject forward
	ViewOverlay::ViewOverlay(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void ViewOverlay::add(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"add",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void ViewOverlay::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	void ViewOverlay::remove(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"remove",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
} // namespace android::view

