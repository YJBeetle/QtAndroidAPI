#include "../graphics/Rect.hpp"
#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./TimedText.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	android::graphics::Rect TimedText::getBounds() const
	{
		return callObjectMethod(
			"getBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	JString TimedText::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media

