#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./BlurMaskFilter_Blur.hpp"

namespace android::graphics
{
	// Fields
	android::graphics::BlurMaskFilter_Blur BlurMaskFilter_Blur::INNER()
	{
		return getStaticObjectField(
			"android.graphics.BlurMaskFilter$Blur",
			"INNER",
			"Landroid/graphics/BlurMaskFilter$Blur;"
		);
	}
	android::graphics::BlurMaskFilter_Blur BlurMaskFilter_Blur::NORMAL()
	{
		return getStaticObjectField(
			"android.graphics.BlurMaskFilter$Blur",
			"NORMAL",
			"Landroid/graphics/BlurMaskFilter$Blur;"
		);
	}
	android::graphics::BlurMaskFilter_Blur BlurMaskFilter_Blur::OUTER()
	{
		return getStaticObjectField(
			"android.graphics.BlurMaskFilter$Blur",
			"OUTER",
			"Landroid/graphics/BlurMaskFilter$Blur;"
		);
	}
	android::graphics::BlurMaskFilter_Blur BlurMaskFilter_Blur::SOLID()
	{
		return getStaticObjectField(
			"android.graphics.BlurMaskFilter$Blur",
			"SOLID",
			"Landroid/graphics/BlurMaskFilter$Blur;"
		);
	}
	
	// Constructors
	
	// Methods
	android::graphics::BlurMaskFilter_Blur BlurMaskFilter_Blur::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.BlurMaskFilter$Blur",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/BlurMaskFilter$Blur;",
			arg0.object<jstring>()
		);
	}
	JArray BlurMaskFilter_Blur::values()
	{
		return callStaticObjectMethod(
			"android.graphics.BlurMaskFilter$Blur",
			"values",
			"()[Landroid/graphics/BlurMaskFilter$Blur;"
		);
	}
} // namespace android::graphics

