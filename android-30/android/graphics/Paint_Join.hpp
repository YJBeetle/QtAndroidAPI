#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Paint_Join.def.hpp"

namespace android::graphics
{
	// Fields
	inline android::graphics::Paint_Join Paint_Join::BEVEL()
	{
		return getStaticObjectField(
			"android.graphics.Paint$Join",
			"BEVEL",
			"Landroid/graphics/Paint$Join;"
		);
	}
	inline android::graphics::Paint_Join Paint_Join::MITER()
	{
		return getStaticObjectField(
			"android.graphics.Paint$Join",
			"MITER",
			"Landroid/graphics/Paint$Join;"
		);
	}
	inline android::graphics::Paint_Join Paint_Join::ROUND()
	{
		return getStaticObjectField(
			"android.graphics.Paint$Join",
			"ROUND",
			"Landroid/graphics/Paint$Join;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::graphics::Paint_Join Paint_Join::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Paint$Join",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Paint$Join;",
			arg0.object<jstring>()
		);
	}
	inline JArray Paint_Join::values()
	{
		return callStaticObjectMethod(
			"android.graphics.Paint$Join",
			"values",
			"()[Landroid/graphics/Paint$Join;"
		);
	}
} // namespace android::graphics

// Base class headers
#include "../../java/lang/Enum.hpp"

