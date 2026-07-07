#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Canvas_EdgeType.def.hpp"

namespace android::graphics
{
	// Fields
	inline android::graphics::Canvas_EdgeType Canvas_EdgeType::AA()
	{
		return getStaticObjectField(
			"android.graphics.Canvas$EdgeType",
			"AA",
			"Landroid/graphics/Canvas$EdgeType;"
		);
	}
	inline android::graphics::Canvas_EdgeType Canvas_EdgeType::BW()
	{
		return getStaticObjectField(
			"android.graphics.Canvas$EdgeType",
			"BW",
			"Landroid/graphics/Canvas$EdgeType;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::graphics::Canvas_EdgeType Canvas_EdgeType::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Canvas$EdgeType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Canvas$EdgeType;",
			arg0.object<jstring>()
		);
	}
	inline JArray Canvas_EdgeType::values()
	{
		return callStaticObjectMethod(
			"android.graphics.Canvas$EdgeType",
			"values",
			"()[Landroid/graphics/Canvas$EdgeType;"
		);
	}
} // namespace android::graphics

// Base class headers
#include "../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
