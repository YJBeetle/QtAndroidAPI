#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Canvas_VertexMode.hpp"

namespace android::graphics
{
	// Fields
	android::graphics::Canvas_VertexMode Canvas_VertexMode::TRIANGLES()
	{
		return getStaticObjectField(
			"android.graphics.Canvas$VertexMode",
			"TRIANGLES",
			"Landroid/graphics/Canvas$VertexMode;"
		);
	}
	android::graphics::Canvas_VertexMode Canvas_VertexMode::TRIANGLE_FAN()
	{
		return getStaticObjectField(
			"android.graphics.Canvas$VertexMode",
			"TRIANGLE_FAN",
			"Landroid/graphics/Canvas$VertexMode;"
		);
	}
	android::graphics::Canvas_VertexMode Canvas_VertexMode::TRIANGLE_STRIP()
	{
		return getStaticObjectField(
			"android.graphics.Canvas$VertexMode",
			"TRIANGLE_STRIP",
			"Landroid/graphics/Canvas$VertexMode;"
		);
	}
	
	// QJniObject forward
	Canvas_VertexMode::Canvas_VertexMode(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::Canvas_VertexMode Canvas_VertexMode::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Canvas$VertexMode",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Canvas$VertexMode;",
			arg0.object<jstring>()
		);
	}
	JArray Canvas_VertexMode::values()
	{
		return callStaticObjectMethod(
			"android.graphics.Canvas$VertexMode",
			"values",
			"()[Landroid/graphics/Canvas$VertexMode;"
		);
	}
} // namespace android::graphics

