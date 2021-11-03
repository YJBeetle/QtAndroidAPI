#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./ColorSpace_RenderIntent.hpp"

namespace android::graphics
{
	// Fields
	android::graphics::ColorSpace_RenderIntent ColorSpace_RenderIntent::ABSOLUTE()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace$RenderIntent",
			"ABSOLUTE",
			"Landroid/graphics/ColorSpace$RenderIntent;"
		);
	}
	android::graphics::ColorSpace_RenderIntent ColorSpace_RenderIntent::PERCEPTUAL()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace$RenderIntent",
			"PERCEPTUAL",
			"Landroid/graphics/ColorSpace$RenderIntent;"
		);
	}
	android::graphics::ColorSpace_RenderIntent ColorSpace_RenderIntent::RELATIVE()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace$RenderIntent",
			"RELATIVE",
			"Landroid/graphics/ColorSpace$RenderIntent;"
		);
	}
	android::graphics::ColorSpace_RenderIntent ColorSpace_RenderIntent::SATURATION()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace$RenderIntent",
			"SATURATION",
			"Landroid/graphics/ColorSpace$RenderIntent;"
		);
	}
	
	// QAndroidJniObject forward
	ColorSpace_RenderIntent::ColorSpace_RenderIntent(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::ColorSpace_RenderIntent ColorSpace_RenderIntent::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.ColorSpace$RenderIntent",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/ColorSpace$RenderIntent;",
			arg0.object<jstring>()
		);
	}
	JArray ColorSpace_RenderIntent::values()
	{
		return callStaticObjectMethod(
			"android.graphics.ColorSpace$RenderIntent",
			"values",
			"()[Landroid/graphics/ColorSpace$RenderIntent;"
		);
	}
} // namespace android::graphics

