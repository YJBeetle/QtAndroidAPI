#include "../graphics/Rect.hpp"
#include "./WindowInsets.hpp"
#include "./WindowMetrics.hpp"

namespace android::view
{
	// Fields
	
	// QJniObject forward
	WindowMetrics::WindowMetrics(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	WindowMetrics::WindowMetrics(android::graphics::Rect arg0, android::view::WindowInsets arg1)
		: JObject(
			"android.view.WindowMetrics",
			"(Landroid/graphics/Rect;Landroid/view/WindowInsets;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	android::graphics::Rect WindowMetrics::getBounds()
	{
		return callObjectMethod(
			"getBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	android::view::WindowInsets WindowMetrics::getWindowInsets()
	{
		return callObjectMethod(
			"getWindowInsets",
			"()Landroid/view/WindowInsets;"
		);
	}
} // namespace android::view

