#pragma once

#include "./Font.def.hpp"
#include "../../../java/util/ArrayList.def.hpp"
#include "./FontFamily.def.hpp"

namespace android::graphics::fonts
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::graphics::fonts::Font FontFamily::getFont(jint arg0) const
	{
		return callObjectMethod(
			"getFont",
			"(I)Landroid/graphics/fonts/Font;",
			arg0
		);
	}
	inline jint FontFamily::getSize() const
	{
		return callMethod<jint>(
			"getSize",
			"()I"
		);
	}
} // namespace android::graphics::fonts

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics::fonts;
#endif
