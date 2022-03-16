#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Path_FillType.def.hpp"

namespace android::graphics
{
	// Fields
	inline android::graphics::Path_FillType Path_FillType::EVEN_ODD()
	{
		return getStaticObjectField(
			"android.graphics.Path$FillType",
			"EVEN_ODD",
			"Landroid/graphics/Path$FillType;"
		);
	}
	inline android::graphics::Path_FillType Path_FillType::INVERSE_EVEN_ODD()
	{
		return getStaticObjectField(
			"android.graphics.Path$FillType",
			"INVERSE_EVEN_ODD",
			"Landroid/graphics/Path$FillType;"
		);
	}
	inline android::graphics::Path_FillType Path_FillType::INVERSE_WINDING()
	{
		return getStaticObjectField(
			"android.graphics.Path$FillType",
			"INVERSE_WINDING",
			"Landroid/graphics/Path$FillType;"
		);
	}
	inline android::graphics::Path_FillType Path_FillType::WINDING()
	{
		return getStaticObjectField(
			"android.graphics.Path$FillType",
			"WINDING",
			"Landroid/graphics/Path$FillType;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::graphics::Path_FillType Path_FillType::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Path$FillType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Path$FillType;",
			arg0.object<jstring>()
		);
	}
	inline JArray Path_FillType::values()
	{
		return callStaticObjectMethod(
			"android.graphics.Path$FillType",
			"values",
			"()[Landroid/graphics/Path$FillType;"
		);
	}
} // namespace android::graphics

// Base class headers
#include "../../java/lang/Enum.hpp"

