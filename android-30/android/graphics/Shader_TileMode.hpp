#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Shader_TileMode.def.hpp"

namespace android::graphics
{
	// Fields
	inline android::graphics::Shader_TileMode Shader_TileMode::CLAMP()
	{
		return getStaticObjectField(
			"android.graphics.Shader$TileMode",
			"CLAMP",
			"Landroid/graphics/Shader$TileMode;"
		);
	}
	inline android::graphics::Shader_TileMode Shader_TileMode::MIRROR()
	{
		return getStaticObjectField(
			"android.graphics.Shader$TileMode",
			"MIRROR",
			"Landroid/graphics/Shader$TileMode;"
		);
	}
	inline android::graphics::Shader_TileMode Shader_TileMode::REPEAT()
	{
		return getStaticObjectField(
			"android.graphics.Shader$TileMode",
			"REPEAT",
			"Landroid/graphics/Shader$TileMode;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::graphics::Shader_TileMode Shader_TileMode::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Shader$TileMode",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Shader$TileMode;",
			arg0.object<jstring>()
		);
	}
	inline JArray Shader_TileMode::values()
	{
		return callStaticObjectMethod(
			"android.graphics.Shader$TileMode",
			"values",
			"()[Landroid/graphics/Shader$TileMode;"
		);
	}
} // namespace android::graphics

// Base class headers
#include "../../java/lang/Enum.hpp"

