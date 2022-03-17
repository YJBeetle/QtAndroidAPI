#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Bitmap_Config.def.hpp"

namespace android::graphics
{
	// Fields
	inline android::graphics::Bitmap_Config Bitmap_Config::ALPHA_8()
	{
		return getStaticObjectField(
			"android.graphics.Bitmap$Config",
			"ALPHA_8",
			"Landroid/graphics/Bitmap$Config;"
		);
	}
	inline android::graphics::Bitmap_Config Bitmap_Config::ARGB_4444()
	{
		return getStaticObjectField(
			"android.graphics.Bitmap$Config",
			"ARGB_4444",
			"Landroid/graphics/Bitmap$Config;"
		);
	}
	inline android::graphics::Bitmap_Config Bitmap_Config::ARGB_8888()
	{
		return getStaticObjectField(
			"android.graphics.Bitmap$Config",
			"ARGB_8888",
			"Landroid/graphics/Bitmap$Config;"
		);
	}
	inline android::graphics::Bitmap_Config Bitmap_Config::HARDWARE()
	{
		return getStaticObjectField(
			"android.graphics.Bitmap$Config",
			"HARDWARE",
			"Landroid/graphics/Bitmap$Config;"
		);
	}
	inline android::graphics::Bitmap_Config Bitmap_Config::RGBA_F16()
	{
		return getStaticObjectField(
			"android.graphics.Bitmap$Config",
			"RGBA_F16",
			"Landroid/graphics/Bitmap$Config;"
		);
	}
	inline android::graphics::Bitmap_Config Bitmap_Config::RGB_565()
	{
		return getStaticObjectField(
			"android.graphics.Bitmap$Config",
			"RGB_565",
			"Landroid/graphics/Bitmap$Config;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::graphics::Bitmap_Config Bitmap_Config::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Bitmap$Config",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Bitmap$Config;",
			arg0.object<jstring>()
		);
	}
	inline JArray Bitmap_Config::values()
	{
		return callStaticObjectMethod(
			"android.graphics.Bitmap$Config",
			"values",
			"()[Landroid/graphics/Bitmap$Config;"
		);
	}
} // namespace android::graphics

// Base class headers
#include "../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
