#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./BlurMaskFilter_Blur.def.hpp"

namespace android::graphics
{
	// Fields
	inline android::graphics::BlurMaskFilter_Blur BlurMaskFilter_Blur::INNER()
	{
		return getStaticObjectField(
			"android.graphics.BlurMaskFilter$Blur",
			"INNER",
			"Landroid/graphics/BlurMaskFilter$Blur;"
		);
	}
	inline android::graphics::BlurMaskFilter_Blur BlurMaskFilter_Blur::NORMAL()
	{
		return getStaticObjectField(
			"android.graphics.BlurMaskFilter$Blur",
			"NORMAL",
			"Landroid/graphics/BlurMaskFilter$Blur;"
		);
	}
	inline android::graphics::BlurMaskFilter_Blur BlurMaskFilter_Blur::OUTER()
	{
		return getStaticObjectField(
			"android.graphics.BlurMaskFilter$Blur",
			"OUTER",
			"Landroid/graphics/BlurMaskFilter$Blur;"
		);
	}
	inline android::graphics::BlurMaskFilter_Blur BlurMaskFilter_Blur::SOLID()
	{
		return getStaticObjectField(
			"android.graphics.BlurMaskFilter$Blur",
			"SOLID",
			"Landroid/graphics/BlurMaskFilter$Blur;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::graphics::BlurMaskFilter_Blur BlurMaskFilter_Blur::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.BlurMaskFilter$Blur",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/BlurMaskFilter$Blur;",
			arg0.object<jstring>()
		);
	}
	inline JArray BlurMaskFilter_Blur::values()
	{
		return callStaticObjectMethod(
			"android.graphics.BlurMaskFilter$Blur",
			"values",
			"()[Landroid/graphics/BlurMaskFilter$Blur;"
		);
	}
} // namespace android::graphics

// Base class headers
#include "../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
