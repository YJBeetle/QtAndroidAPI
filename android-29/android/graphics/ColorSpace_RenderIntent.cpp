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
	
	ColorSpace_RenderIntent::ColorSpace_RenderIntent(QAndroidJniObject obj) { __thiz = obj; }
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
	QAndroidJniObject ColorSpace_RenderIntent::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ColorSpace$RenderIntent",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/ColorSpace$RenderIntent;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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

