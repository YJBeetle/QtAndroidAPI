#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./PorterDuff_Mode.def.hpp"

namespace android::graphics
{
	// Fields
	inline android::graphics::PorterDuff_Mode PorterDuff_Mode::ADD()
	{
		return getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"ADD",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	inline android::graphics::PorterDuff_Mode PorterDuff_Mode::CLEAR()
	{
		return getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"CLEAR",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	inline android::graphics::PorterDuff_Mode PorterDuff_Mode::DARKEN()
	{
		return getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"DARKEN",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	inline android::graphics::PorterDuff_Mode PorterDuff_Mode::DST()
	{
		return getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"DST",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	inline android::graphics::PorterDuff_Mode PorterDuff_Mode::DST_ATOP()
	{
		return getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"DST_ATOP",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	inline android::graphics::PorterDuff_Mode PorterDuff_Mode::DST_IN()
	{
		return getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"DST_IN",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	inline android::graphics::PorterDuff_Mode PorterDuff_Mode::DST_OUT()
	{
		return getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"DST_OUT",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	inline android::graphics::PorterDuff_Mode PorterDuff_Mode::DST_OVER()
	{
		return getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"DST_OVER",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	inline android::graphics::PorterDuff_Mode PorterDuff_Mode::LIGHTEN()
	{
		return getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"LIGHTEN",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	inline android::graphics::PorterDuff_Mode PorterDuff_Mode::MULTIPLY()
	{
		return getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"MULTIPLY",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	inline android::graphics::PorterDuff_Mode PorterDuff_Mode::OVERLAY()
	{
		return getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"OVERLAY",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	inline android::graphics::PorterDuff_Mode PorterDuff_Mode::SCREEN()
	{
		return getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"SCREEN",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	inline android::graphics::PorterDuff_Mode PorterDuff_Mode::SRC()
	{
		return getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"SRC",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	inline android::graphics::PorterDuff_Mode PorterDuff_Mode::SRC_ATOP()
	{
		return getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"SRC_ATOP",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	inline android::graphics::PorterDuff_Mode PorterDuff_Mode::SRC_IN()
	{
		return getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"SRC_IN",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	inline android::graphics::PorterDuff_Mode PorterDuff_Mode::SRC_OUT()
	{
		return getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"SRC_OUT",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	inline android::graphics::PorterDuff_Mode PorterDuff_Mode::SRC_OVER()
	{
		return getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"SRC_OVER",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	inline android::graphics::PorterDuff_Mode PorterDuff_Mode::XOR()
	{
		return getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"XOR",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::graphics::PorterDuff_Mode PorterDuff_Mode::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.PorterDuff$Mode",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/PorterDuff$Mode;",
			arg0.object<jstring>()
		);
	}
	inline JArray PorterDuff_Mode::values()
	{
		return callStaticObjectMethod(
			"android.graphics.PorterDuff$Mode",
			"values",
			"()[Landroid/graphics/PorterDuff$Mode;"
		);
	}
} // namespace android::graphics

// Base class headers
#include "../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
