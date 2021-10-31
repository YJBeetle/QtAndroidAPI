#include "./BlendMode.hpp"

namespace android::graphics
{
	// Fields
	QAndroidJniObject BlendMode::CLEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"CLEAR",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::COLOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"COLOR",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::COLOR_BURN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"COLOR_BURN",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::COLOR_DODGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"COLOR_DODGE",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::DARKEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"DARKEN",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::DIFFERENCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"DIFFERENCE",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::DST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"DST",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::DST_ATOP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"DST_ATOP",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::DST_IN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"DST_IN",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::DST_OUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"DST_OUT",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::DST_OVER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"DST_OVER",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::EXCLUSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"EXCLUSION",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::HARD_LIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"HARD_LIGHT",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::HUE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"HUE",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::LIGHTEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"LIGHTEN",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::LUMINOSITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"LUMINOSITY",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::MODULATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"MODULATE",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::MULTIPLY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"MULTIPLY",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::OVERLAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"OVERLAY",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::PLUS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"PLUS",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::SATURATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"SATURATION",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::SCREEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"SCREEN",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::SOFT_LIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"SOFT_LIGHT",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::SRC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"SRC",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::SRC_ATOP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"SRC_ATOP",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::SRC_IN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"SRC_IN",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::SRC_OUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"SRC_OUT",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::SRC_OVER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"SRC_OVER",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::XOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"XOR",
			"Landroid/graphics/BlendMode;"
		);
	}
	
	BlendMode::BlendMode(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject BlendMode::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BlendMode",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/BlendMode;",
			arg0
		);
	}
	jarray BlendMode::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BlendMode",
			"values",
			"()[Landroid/graphics/BlendMode;"
		).object<jarray>();
	}
} // namespace android::graphics

