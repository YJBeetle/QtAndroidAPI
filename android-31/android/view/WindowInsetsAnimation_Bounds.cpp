#include "../graphics/Insets.hpp"
#include "./WindowInsetsAnimation_Bounds.hpp"

namespace android::view
{
	// Fields
	
	// QJniObject forward
	WindowInsetsAnimation_Bounds::WindowInsetsAnimation_Bounds(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	WindowInsetsAnimation_Bounds::WindowInsetsAnimation_Bounds(android::graphics::Insets arg0, android::graphics::Insets arg1)
		: __JniBaseClass(
			"android.view.WindowInsetsAnimation$Bounds",
			"(Landroid/graphics/Insets;Landroid/graphics/Insets;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	android::graphics::Insets WindowInsetsAnimation_Bounds::getLowerBound()
	{
		return callObjectMethod(
			"getLowerBound",
			"()Landroid/graphics/Insets;"
		);
	}
	android::graphics::Insets WindowInsetsAnimation_Bounds::getUpperBound()
	{
		return callObjectMethod(
			"getUpperBound",
			"()Landroid/graphics/Insets;"
		);
	}
	android::view::WindowInsetsAnimation_Bounds WindowInsetsAnimation_Bounds::inset(android::graphics::Insets arg0)
	{
		return callObjectMethod(
			"inset",
			"(Landroid/graphics/Insets;)Landroid/view/WindowInsetsAnimation$Bounds;",
			arg0.object()
		);
	}
	jstring WindowInsetsAnimation_Bounds::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::view

