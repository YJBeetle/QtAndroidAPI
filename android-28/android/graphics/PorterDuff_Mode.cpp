#include "./PorterDuff_Mode.hpp"

namespace android::graphics
{
	// Fields
	android::graphics::PorterDuff_Mode PorterDuff_Mode::ADD()
	{
		return getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"ADD",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	android::graphics::PorterDuff_Mode PorterDuff_Mode::CLEAR()
	{
		return getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"CLEAR",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	android::graphics::PorterDuff_Mode PorterDuff_Mode::DARKEN()
	{
		return getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"DARKEN",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	android::graphics::PorterDuff_Mode PorterDuff_Mode::DST()
	{
		return getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"DST",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	android::graphics::PorterDuff_Mode PorterDuff_Mode::DST_ATOP()
	{
		return getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"DST_ATOP",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	android::graphics::PorterDuff_Mode PorterDuff_Mode::DST_IN()
	{
		return getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"DST_IN",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	android::graphics::PorterDuff_Mode PorterDuff_Mode::DST_OUT()
	{
		return getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"DST_OUT",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	android::graphics::PorterDuff_Mode PorterDuff_Mode::DST_OVER()
	{
		return getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"DST_OVER",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	android::graphics::PorterDuff_Mode PorterDuff_Mode::LIGHTEN()
	{
		return getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"LIGHTEN",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	android::graphics::PorterDuff_Mode PorterDuff_Mode::MULTIPLY()
	{
		return getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"MULTIPLY",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	android::graphics::PorterDuff_Mode PorterDuff_Mode::OVERLAY()
	{
		return getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"OVERLAY",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	android::graphics::PorterDuff_Mode PorterDuff_Mode::SCREEN()
	{
		return getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"SCREEN",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	android::graphics::PorterDuff_Mode PorterDuff_Mode::SRC()
	{
		return getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"SRC",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	android::graphics::PorterDuff_Mode PorterDuff_Mode::SRC_ATOP()
	{
		return getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"SRC_ATOP",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	android::graphics::PorterDuff_Mode PorterDuff_Mode::SRC_IN()
	{
		return getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"SRC_IN",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	android::graphics::PorterDuff_Mode PorterDuff_Mode::SRC_OUT()
	{
		return getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"SRC_OUT",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	android::graphics::PorterDuff_Mode PorterDuff_Mode::SRC_OVER()
	{
		return getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"SRC_OVER",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	android::graphics::PorterDuff_Mode PorterDuff_Mode::XOR()
	{
		return getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"XOR",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	
	// QJniObject forward
	PorterDuff_Mode::PorterDuff_Mode(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::PorterDuff_Mode PorterDuff_Mode::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.PorterDuff$Mode",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/PorterDuff$Mode;",
			arg0
		);
	}
	jarray PorterDuff_Mode::values()
	{
		return callStaticObjectMethod(
			"android.graphics.PorterDuff$Mode",
			"values",
			"()[Landroid/graphics/PorterDuff$Mode;"
		).object<jarray>();
	}
} // namespace android::graphics

