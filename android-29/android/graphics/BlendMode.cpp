#include "./BlendMode.hpp"

namespace android::graphics
{
	// Fields
	android::graphics::BlendMode BlendMode::CLEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"CLEAR",
			"Landroid/graphics/BlendMode;"
		);
	}
	android::graphics::BlendMode BlendMode::COLOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"COLOR",
			"Landroid/graphics/BlendMode;"
		);
	}
	android::graphics::BlendMode BlendMode::COLOR_BURN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"COLOR_BURN",
			"Landroid/graphics/BlendMode;"
		);
	}
	android::graphics::BlendMode BlendMode::COLOR_DODGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"COLOR_DODGE",
			"Landroid/graphics/BlendMode;"
		);
	}
	android::graphics::BlendMode BlendMode::DARKEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"DARKEN",
			"Landroid/graphics/BlendMode;"
		);
	}
	android::graphics::BlendMode BlendMode::DIFFERENCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"DIFFERENCE",
			"Landroid/graphics/BlendMode;"
		);
	}
	android::graphics::BlendMode BlendMode::DST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"DST",
			"Landroid/graphics/BlendMode;"
		);
	}
	android::graphics::BlendMode BlendMode::DST_ATOP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"DST_ATOP",
			"Landroid/graphics/BlendMode;"
		);
	}
	android::graphics::BlendMode BlendMode::DST_IN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"DST_IN",
			"Landroid/graphics/BlendMode;"
		);
	}
	android::graphics::BlendMode BlendMode::DST_OUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"DST_OUT",
			"Landroid/graphics/BlendMode;"
		);
	}
	android::graphics::BlendMode BlendMode::DST_OVER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"DST_OVER",
			"Landroid/graphics/BlendMode;"
		);
	}
	android::graphics::BlendMode BlendMode::EXCLUSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"EXCLUSION",
			"Landroid/graphics/BlendMode;"
		);
	}
	android::graphics::BlendMode BlendMode::HARD_LIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"HARD_LIGHT",
			"Landroid/graphics/BlendMode;"
		);
	}
	android::graphics::BlendMode BlendMode::HUE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"HUE",
			"Landroid/graphics/BlendMode;"
		);
	}
	android::graphics::BlendMode BlendMode::LIGHTEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"LIGHTEN",
			"Landroid/graphics/BlendMode;"
		);
	}
	android::graphics::BlendMode BlendMode::LUMINOSITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"LUMINOSITY",
			"Landroid/graphics/BlendMode;"
		);
	}
	android::graphics::BlendMode BlendMode::MODULATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"MODULATE",
			"Landroid/graphics/BlendMode;"
		);
	}
	android::graphics::BlendMode BlendMode::MULTIPLY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"MULTIPLY",
			"Landroid/graphics/BlendMode;"
		);
	}
	android::graphics::BlendMode BlendMode::OVERLAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"OVERLAY",
			"Landroid/graphics/BlendMode;"
		);
	}
	android::graphics::BlendMode BlendMode::PLUS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"PLUS",
			"Landroid/graphics/BlendMode;"
		);
	}
	android::graphics::BlendMode BlendMode::SATURATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"SATURATION",
			"Landroid/graphics/BlendMode;"
		);
	}
	android::graphics::BlendMode BlendMode::SCREEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"SCREEN",
			"Landroid/graphics/BlendMode;"
		);
	}
	android::graphics::BlendMode BlendMode::SOFT_LIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"SOFT_LIGHT",
			"Landroid/graphics/BlendMode;"
		);
	}
	android::graphics::BlendMode BlendMode::SRC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"SRC",
			"Landroid/graphics/BlendMode;"
		);
	}
	android::graphics::BlendMode BlendMode::SRC_ATOP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"SRC_ATOP",
			"Landroid/graphics/BlendMode;"
		);
	}
	android::graphics::BlendMode BlendMode::SRC_IN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"SRC_IN",
			"Landroid/graphics/BlendMode;"
		);
	}
	android::graphics::BlendMode BlendMode::SRC_OUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"SRC_OUT",
			"Landroid/graphics/BlendMode;"
		);
	}
	android::graphics::BlendMode BlendMode::SRC_OVER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"SRC_OVER",
			"Landroid/graphics/BlendMode;"
		);
	}
	android::graphics::BlendMode BlendMode::XOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"XOR",
			"Landroid/graphics/BlendMode;"
		);
	}
	
	// QAndroidJniObject forward
	BlendMode::BlendMode(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::BlendMode BlendMode::valueOf(jstring arg0)
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

