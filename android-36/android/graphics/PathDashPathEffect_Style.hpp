#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./PathDashPathEffect_Style.def.hpp"

namespace android::graphics
{
	// Fields
	inline android::graphics::PathDashPathEffect_Style PathDashPathEffect_Style::MORPH()
	{
		return getStaticObjectField(
			"android.graphics.PathDashPathEffect$Style",
			"MORPH",
			"Landroid/graphics/PathDashPathEffect$Style;"
		);
	}
	inline android::graphics::PathDashPathEffect_Style PathDashPathEffect_Style::ROTATE()
	{
		return getStaticObjectField(
			"android.graphics.PathDashPathEffect$Style",
			"ROTATE",
			"Landroid/graphics/PathDashPathEffect$Style;"
		);
	}
	inline android::graphics::PathDashPathEffect_Style PathDashPathEffect_Style::TRANSLATE()
	{
		return getStaticObjectField(
			"android.graphics.PathDashPathEffect$Style",
			"TRANSLATE",
			"Landroid/graphics/PathDashPathEffect$Style;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::graphics::PathDashPathEffect_Style PathDashPathEffect_Style::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.PathDashPathEffect$Style",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/PathDashPathEffect$Style;",
			arg0.object<jstring>()
		);
	}
	inline JArray PathDashPathEffect_Style::values()
	{
		return callStaticObjectMethod(
			"android.graphics.PathDashPathEffect$Style",
			"values",
			"()[Landroid/graphics/PathDashPathEffect$Style;"
		);
	}
} // namespace android::graphics

// Base class headers
#include "../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
