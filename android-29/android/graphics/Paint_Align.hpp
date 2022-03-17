#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Paint_Align.def.hpp"

namespace android::graphics
{
	// Fields
	inline android::graphics::Paint_Align Paint_Align::CENTER()
	{
		return getStaticObjectField(
			"android.graphics.Paint$Align",
			"CENTER",
			"Landroid/graphics/Paint$Align;"
		);
	}
	inline android::graphics::Paint_Align Paint_Align::LEFT()
	{
		return getStaticObjectField(
			"android.graphics.Paint$Align",
			"LEFT",
			"Landroid/graphics/Paint$Align;"
		);
	}
	inline android::graphics::Paint_Align Paint_Align::RIGHT()
	{
		return getStaticObjectField(
			"android.graphics.Paint$Align",
			"RIGHT",
			"Landroid/graphics/Paint$Align;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::graphics::Paint_Align Paint_Align::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Paint$Align",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Paint$Align;",
			arg0.object<jstring>()
		);
	}
	inline JArray Paint_Align::values()
	{
		return callStaticObjectMethod(
			"android.graphics.Paint$Align",
			"values",
			"()[Landroid/graphics/Paint$Align;"
		);
	}
} // namespace android::graphics

// Base class headers
#include "../../java/lang/Enum.hpp"

