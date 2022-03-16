#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Canvas_VertexMode.def.hpp"

namespace android::graphics
{
	// Fields
	inline android::graphics::Canvas_VertexMode Canvas_VertexMode::TRIANGLES()
	{
		return getStaticObjectField(
			"android.graphics.Canvas$VertexMode",
			"TRIANGLES",
			"Landroid/graphics/Canvas$VertexMode;"
		);
	}
	inline android::graphics::Canvas_VertexMode Canvas_VertexMode::TRIANGLE_FAN()
	{
		return getStaticObjectField(
			"android.graphics.Canvas$VertexMode",
			"TRIANGLE_FAN",
			"Landroid/graphics/Canvas$VertexMode;"
		);
	}
	inline android::graphics::Canvas_VertexMode Canvas_VertexMode::TRIANGLE_STRIP()
	{
		return getStaticObjectField(
			"android.graphics.Canvas$VertexMode",
			"TRIANGLE_STRIP",
			"Landroid/graphics/Canvas$VertexMode;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::graphics::Canvas_VertexMode Canvas_VertexMode::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Canvas$VertexMode",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Canvas$VertexMode;",
			arg0.object<jstring>()
		);
	}
	inline JArray Canvas_VertexMode::values()
	{
		return callStaticObjectMethod(
			"android.graphics.Canvas$VertexMode",
			"values",
			"()[Landroid/graphics/Canvas$VertexMode;"
		);
	}
} // namespace android::graphics

// Base class headers
#include "../../java/lang/Enum.hpp"

