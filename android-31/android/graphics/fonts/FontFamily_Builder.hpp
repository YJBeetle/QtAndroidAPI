#pragma once

#include "./Font.def.hpp"
#include "./FontFamily.def.hpp"
#include "./FontFamily_Builder.def.hpp"

namespace android::graphics::fonts
{
	// Fields
	
	// Constructors
	inline FontFamily_Builder::FontFamily_Builder(android::graphics::fonts::Font arg0)
		: JObject(
			"android.graphics.fonts.FontFamily$Builder",
			"(Landroid/graphics/fonts/Font;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::graphics::fonts::FontFamily_Builder FontFamily_Builder::addFont(android::graphics::fonts::Font arg0) const
	{
		return callObjectMethod(
			"addFont",
			"(Landroid/graphics/fonts/Font;)Landroid/graphics/fonts/FontFamily$Builder;",
			arg0.object()
		);
	}
	inline android::graphics::fonts::FontFamily FontFamily_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/graphics/fonts/FontFamily;"
		);
	}
} // namespace android::graphics::fonts

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics::fonts;
#endif
