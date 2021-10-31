#include "./ColorSpace_RenderIntent.hpp"

namespace android::graphics
{
	// Fields
	QAndroidJniObject ColorSpace_RenderIntent::ABSOLUTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$RenderIntent",
			"ABSOLUTE",
			"Landroid/graphics/ColorSpace$RenderIntent;"
		);
	}
	QAndroidJniObject ColorSpace_RenderIntent::PERCEPTUAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$RenderIntent",
			"PERCEPTUAL",
			"Landroid/graphics/ColorSpace$RenderIntent;"
		);
	}
	QAndroidJniObject ColorSpace_RenderIntent::RELATIVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$RenderIntent",
			"RELATIVE",
			"Landroid/graphics/ColorSpace$RenderIntent;"
		);
	}
	QAndroidJniObject ColorSpace_RenderIntent::SATURATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace$RenderIntent",
			"SATURATION",
			"Landroid/graphics/ColorSpace$RenderIntent;"
		);
	}
	
	// QAndroidJniObject forward
	ColorSpace_RenderIntent::ColorSpace_RenderIntent(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject ColorSpace_RenderIntent::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ColorSpace$RenderIntent",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/ColorSpace$RenderIntent;",
			arg0
		);
	}
	jarray ColorSpace_RenderIntent::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ColorSpace$RenderIntent",
			"values",
			"()[Landroid/graphics/ColorSpace$RenderIntent;"
		).object<jarray>();
	}
} // namespace android::graphics
