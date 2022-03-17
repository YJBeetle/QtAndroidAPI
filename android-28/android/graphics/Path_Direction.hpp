#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Path_Direction.def.hpp"

namespace android::graphics
{
	// Fields
	inline android::graphics::Path_Direction Path_Direction::CCW()
	{
		return getStaticObjectField(
			"android.graphics.Path$Direction",
			"CCW",
			"Landroid/graphics/Path$Direction;"
		);
	}
	inline android::graphics::Path_Direction Path_Direction::CW()
	{
		return getStaticObjectField(
			"android.graphics.Path$Direction",
			"CW",
			"Landroid/graphics/Path$Direction;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::graphics::Path_Direction Path_Direction::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Path$Direction",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Path$Direction;",
			arg0.object<jstring>()
		);
	}
	inline JArray Path_Direction::values()
	{
		return callStaticObjectMethod(
			"android.graphics.Path$Direction",
			"values",
			"()[Landroid/graphics/Path$Direction;"
		);
	}
} // namespace android::graphics

// Base class headers
#include "../../java/lang/Enum.hpp"

