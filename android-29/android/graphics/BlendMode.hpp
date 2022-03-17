#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./BlendMode.def.hpp"

namespace android::graphics
{
	// Fields
	inline android::graphics::BlendMode BlendMode::CLEAR()
	{
		return getStaticObjectField(
			"android.graphics.BlendMode",
			"CLEAR",
			"Landroid/graphics/BlendMode;"
		);
	}
	inline android::graphics::BlendMode BlendMode::COLOR()
	{
		return getStaticObjectField(
			"android.graphics.BlendMode",
			"COLOR",
			"Landroid/graphics/BlendMode;"
		);
	}
	inline android::graphics::BlendMode BlendMode::COLOR_BURN()
	{
		return getStaticObjectField(
			"android.graphics.BlendMode",
			"COLOR_BURN",
			"Landroid/graphics/BlendMode;"
		);
	}
	inline android::graphics::BlendMode BlendMode::COLOR_DODGE()
	{
		return getStaticObjectField(
			"android.graphics.BlendMode",
			"COLOR_DODGE",
			"Landroid/graphics/BlendMode;"
		);
	}
	inline android::graphics::BlendMode BlendMode::DARKEN()
	{
		return getStaticObjectField(
			"android.graphics.BlendMode",
			"DARKEN",
			"Landroid/graphics/BlendMode;"
		);
	}
	inline android::graphics::BlendMode BlendMode::DIFFERENCE()
	{
		return getStaticObjectField(
			"android.graphics.BlendMode",
			"DIFFERENCE",
			"Landroid/graphics/BlendMode;"
		);
	}
	inline android::graphics::BlendMode BlendMode::DST()
	{
		return getStaticObjectField(
			"android.graphics.BlendMode",
			"DST",
			"Landroid/graphics/BlendMode;"
		);
	}
	inline android::graphics::BlendMode BlendMode::DST_ATOP()
	{
		return getStaticObjectField(
			"android.graphics.BlendMode",
			"DST_ATOP",
			"Landroid/graphics/BlendMode;"
		);
	}
	inline android::graphics::BlendMode BlendMode::DST_IN()
	{
		return getStaticObjectField(
			"android.graphics.BlendMode",
			"DST_IN",
			"Landroid/graphics/BlendMode;"
		);
	}
	inline android::graphics::BlendMode BlendMode::DST_OUT()
	{
		return getStaticObjectField(
			"android.graphics.BlendMode",
			"DST_OUT",
			"Landroid/graphics/BlendMode;"
		);
	}
	inline android::graphics::BlendMode BlendMode::DST_OVER()
	{
		return getStaticObjectField(
			"android.graphics.BlendMode",
			"DST_OVER",
			"Landroid/graphics/BlendMode;"
		);
	}
	inline android::graphics::BlendMode BlendMode::EXCLUSION()
	{
		return getStaticObjectField(
			"android.graphics.BlendMode",
			"EXCLUSION",
			"Landroid/graphics/BlendMode;"
		);
	}
	inline android::graphics::BlendMode BlendMode::HARD_LIGHT()
	{
		return getStaticObjectField(
			"android.graphics.BlendMode",
			"HARD_LIGHT",
			"Landroid/graphics/BlendMode;"
		);
	}
	inline android::graphics::BlendMode BlendMode::HUE()
	{
		return getStaticObjectField(
			"android.graphics.BlendMode",
			"HUE",
			"Landroid/graphics/BlendMode;"
		);
	}
	inline android::graphics::BlendMode BlendMode::LIGHTEN()
	{
		return getStaticObjectField(
			"android.graphics.BlendMode",
			"LIGHTEN",
			"Landroid/graphics/BlendMode;"
		);
	}
	inline android::graphics::BlendMode BlendMode::LUMINOSITY()
	{
		return getStaticObjectField(
			"android.graphics.BlendMode",
			"LUMINOSITY",
			"Landroid/graphics/BlendMode;"
		);
	}
	inline android::graphics::BlendMode BlendMode::MODULATE()
	{
		return getStaticObjectField(
			"android.graphics.BlendMode",
			"MODULATE",
			"Landroid/graphics/BlendMode;"
		);
	}
	inline android::graphics::BlendMode BlendMode::MULTIPLY()
	{
		return getStaticObjectField(
			"android.graphics.BlendMode",
			"MULTIPLY",
			"Landroid/graphics/BlendMode;"
		);
	}
	inline android::graphics::BlendMode BlendMode::OVERLAY()
	{
		return getStaticObjectField(
			"android.graphics.BlendMode",
			"OVERLAY",
			"Landroid/graphics/BlendMode;"
		);
	}
	inline android::graphics::BlendMode BlendMode::PLUS()
	{
		return getStaticObjectField(
			"android.graphics.BlendMode",
			"PLUS",
			"Landroid/graphics/BlendMode;"
		);
	}
	inline android::graphics::BlendMode BlendMode::SATURATION()
	{
		return getStaticObjectField(
			"android.graphics.BlendMode",
			"SATURATION",
			"Landroid/graphics/BlendMode;"
		);
	}
	inline android::graphics::BlendMode BlendMode::SCREEN()
	{
		return getStaticObjectField(
			"android.graphics.BlendMode",
			"SCREEN",
			"Landroid/graphics/BlendMode;"
		);
	}
	inline android::graphics::BlendMode BlendMode::SOFT_LIGHT()
	{
		return getStaticObjectField(
			"android.graphics.BlendMode",
			"SOFT_LIGHT",
			"Landroid/graphics/BlendMode;"
		);
	}
	inline android::graphics::BlendMode BlendMode::SRC()
	{
		return getStaticObjectField(
			"android.graphics.BlendMode",
			"SRC",
			"Landroid/graphics/BlendMode;"
		);
	}
	inline android::graphics::BlendMode BlendMode::SRC_ATOP()
	{
		return getStaticObjectField(
			"android.graphics.BlendMode",
			"SRC_ATOP",
			"Landroid/graphics/BlendMode;"
		);
	}
	inline android::graphics::BlendMode BlendMode::SRC_IN()
	{
		return getStaticObjectField(
			"android.graphics.BlendMode",
			"SRC_IN",
			"Landroid/graphics/BlendMode;"
		);
	}
	inline android::graphics::BlendMode BlendMode::SRC_OUT()
	{
		return getStaticObjectField(
			"android.graphics.BlendMode",
			"SRC_OUT",
			"Landroid/graphics/BlendMode;"
		);
	}
	inline android::graphics::BlendMode BlendMode::SRC_OVER()
	{
		return getStaticObjectField(
			"android.graphics.BlendMode",
			"SRC_OVER",
			"Landroid/graphics/BlendMode;"
		);
	}
	inline android::graphics::BlendMode BlendMode::XOR()
	{
		return getStaticObjectField(
			"android.graphics.BlendMode",
			"XOR",
			"Landroid/graphics/BlendMode;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::graphics::BlendMode BlendMode::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.BlendMode",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/BlendMode;",
			arg0.object<jstring>()
		);
	}
	inline JArray BlendMode::values()
	{
		return callStaticObjectMethod(
			"android.graphics.BlendMode",
			"values",
			"()[Landroid/graphics/BlendMode;"
		);
	}
} // namespace android::graphics

// Base class headers
#include "../../java/lang/Enum.hpp"

