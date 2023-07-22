#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Paint_Style.def.hpp"

namespace android::graphics
{
	// Fields
	inline android::graphics::Paint_Style Paint_Style::FILL()
	{
		return getStaticObjectField(
			"android.graphics.Paint$Style",
			"FILL",
			"Landroid/graphics/Paint$Style;"
		);
	}
	inline android::graphics::Paint_Style Paint_Style::FILL_AND_STROKE()
	{
		return getStaticObjectField(
			"android.graphics.Paint$Style",
			"FILL_AND_STROKE",
			"Landroid/graphics/Paint$Style;"
		);
	}
	inline android::graphics::Paint_Style Paint_Style::STROKE()
	{
		return getStaticObjectField(
			"android.graphics.Paint$Style",
			"STROKE",
			"Landroid/graphics/Paint$Style;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::graphics::Paint_Style Paint_Style::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Paint$Style",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Paint$Style;",
			arg0.object<jstring>()
		);
	}
	inline JArray Paint_Style::values()
	{
		return callStaticObjectMethod(
			"android.graphics.Paint$Style",
			"values",
			"()[Landroid/graphics/Paint$Style;"
		);
	}
} // namespace android::graphics

// Base class headers
#include "../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
