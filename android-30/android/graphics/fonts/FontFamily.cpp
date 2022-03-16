#include "./Font.hpp"
#include "./FontFamily.hpp"

namespace android::graphics::fonts
{
	// Fields
	
	// Constructors
	
	// Methods
	android::graphics::fonts::Font FontFamily::getFont(jint arg0) const
	{
		return callObjectMethod(
			"getFont",
			"(I)Landroid/graphics/fonts/Font;",
			arg0
		);
	}
	jint FontFamily::getSize() const
	{
		return callMethod<jint>(
			"getSize",
			"()I"
		);
	}
} // namespace android::graphics::fonts

