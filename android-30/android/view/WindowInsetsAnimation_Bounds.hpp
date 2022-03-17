#pragma once

#include "../graphics/Insets.def.hpp"
#include "../../JString.hpp"
#include "./WindowInsetsAnimation_Bounds.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	inline WindowInsetsAnimation_Bounds::WindowInsetsAnimation_Bounds(android::graphics::Insets arg0, android::graphics::Insets arg1)
		: JObject(
			"android.view.WindowInsetsAnimation$Bounds",
			"(Landroid/graphics/Insets;Landroid/graphics/Insets;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline android::graphics::Insets WindowInsetsAnimation_Bounds::getLowerBound() const
	{
		return callObjectMethod(
			"getLowerBound",
			"()Landroid/graphics/Insets;"
		);
	}
	inline android::graphics::Insets WindowInsetsAnimation_Bounds::getUpperBound() const
	{
		return callObjectMethod(
			"getUpperBound",
			"()Landroid/graphics/Insets;"
		);
	}
	inline android::view::WindowInsetsAnimation_Bounds WindowInsetsAnimation_Bounds::inset(android::graphics::Insets arg0) const
	{
		return callObjectMethod(
			"inset",
			"(Landroid/graphics/Insets;)Landroid/view/WindowInsetsAnimation$Bounds;",
			arg0.object()
		);
	}
	inline JString WindowInsetsAnimation_Bounds::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::view

// Base class headers

