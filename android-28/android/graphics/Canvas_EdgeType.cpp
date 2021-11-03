#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Canvas_EdgeType.hpp"

namespace android::graphics
{
	// Fields
	android::graphics::Canvas_EdgeType Canvas_EdgeType::AA()
	{
		return getStaticObjectField(
			"android.graphics.Canvas$EdgeType",
			"AA",
			"Landroid/graphics/Canvas$EdgeType;"
		);
	}
	android::graphics::Canvas_EdgeType Canvas_EdgeType::BW()
	{
		return getStaticObjectField(
			"android.graphics.Canvas$EdgeType",
			"BW",
			"Landroid/graphics/Canvas$EdgeType;"
		);
	}
	
	// QAndroidJniObject forward
	Canvas_EdgeType::Canvas_EdgeType(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::Canvas_EdgeType Canvas_EdgeType::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Canvas$EdgeType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Canvas$EdgeType;",
			arg0.object<jstring>()
		);
	}
	JArray Canvas_EdgeType::values()
	{
		return callStaticObjectMethod(
			"android.graphics.Canvas$EdgeType",
			"values",
			"()[Landroid/graphics/Canvas$EdgeType;"
		);
	}
} // namespace android::graphics

