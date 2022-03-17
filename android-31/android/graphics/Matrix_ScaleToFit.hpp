#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Matrix_ScaleToFit.def.hpp"

namespace android::graphics
{
	// Fields
	inline android::graphics::Matrix_ScaleToFit Matrix_ScaleToFit::CENTER()
	{
		return getStaticObjectField(
			"android.graphics.Matrix$ScaleToFit",
			"CENTER",
			"Landroid/graphics/Matrix$ScaleToFit;"
		);
	}
	inline android::graphics::Matrix_ScaleToFit Matrix_ScaleToFit::END()
	{
		return getStaticObjectField(
			"android.graphics.Matrix$ScaleToFit",
			"END",
			"Landroid/graphics/Matrix$ScaleToFit;"
		);
	}
	inline android::graphics::Matrix_ScaleToFit Matrix_ScaleToFit::FILL()
	{
		return getStaticObjectField(
			"android.graphics.Matrix$ScaleToFit",
			"FILL",
			"Landroid/graphics/Matrix$ScaleToFit;"
		);
	}
	inline android::graphics::Matrix_ScaleToFit Matrix_ScaleToFit::START()
	{
		return getStaticObjectField(
			"android.graphics.Matrix$ScaleToFit",
			"START",
			"Landroid/graphics/Matrix$ScaleToFit;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::graphics::Matrix_ScaleToFit Matrix_ScaleToFit::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Matrix$ScaleToFit",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Matrix$ScaleToFit;",
			arg0.object<jstring>()
		);
	}
	inline JArray Matrix_ScaleToFit::values()
	{
		return callStaticObjectMethod(
			"android.graphics.Matrix$ScaleToFit",
			"values",
			"()[Landroid/graphics/Matrix$ScaleToFit;"
		);
	}
} // namespace android::graphics

// Base class headers
#include "../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
