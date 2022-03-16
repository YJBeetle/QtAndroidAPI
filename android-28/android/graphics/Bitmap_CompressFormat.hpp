#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Bitmap_CompressFormat.def.hpp"

namespace android::graphics
{
	// Fields
	inline android::graphics::Bitmap_CompressFormat Bitmap_CompressFormat::JPEG()
	{
		return getStaticObjectField(
			"android.graphics.Bitmap$CompressFormat",
			"JPEG",
			"Landroid/graphics/Bitmap$CompressFormat;"
		);
	}
	inline android::graphics::Bitmap_CompressFormat Bitmap_CompressFormat::PNG()
	{
		return getStaticObjectField(
			"android.graphics.Bitmap$CompressFormat",
			"PNG",
			"Landroid/graphics/Bitmap$CompressFormat;"
		);
	}
	inline android::graphics::Bitmap_CompressFormat Bitmap_CompressFormat::WEBP()
	{
		return getStaticObjectField(
			"android.graphics.Bitmap$CompressFormat",
			"WEBP",
			"Landroid/graphics/Bitmap$CompressFormat;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::graphics::Bitmap_CompressFormat Bitmap_CompressFormat::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Bitmap$CompressFormat",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Bitmap$CompressFormat;",
			arg0.object<jstring>()
		);
	}
	inline JArray Bitmap_CompressFormat::values()
	{
		return callStaticObjectMethod(
			"android.graphics.Bitmap$CompressFormat",
			"values",
			"()[Landroid/graphics/Bitmap$CompressFormat;"
		);
	}
} // namespace android::graphics

// Base class headers
#include "../../java/lang/Enum.hpp"

