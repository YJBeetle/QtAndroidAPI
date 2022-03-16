#pragma once

#include "../graphics/Rect.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./TimedText.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::graphics::Rect TimedText::getBounds() const
	{
		return callObjectMethod(
			"getBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	inline JString TimedText::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media

// Base class headers

