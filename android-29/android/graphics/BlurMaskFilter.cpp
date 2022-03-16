#include "./BlurMaskFilter_Blur.hpp"
#include "./BlurMaskFilter.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	BlurMaskFilter::BlurMaskFilter(jfloat arg0, android::graphics::BlurMaskFilter_Blur arg1)
		: android::graphics::MaskFilter(
			"android.graphics.BlurMaskFilter",
			"(FLandroid/graphics/BlurMaskFilter$Blur;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
} // namespace android::graphics

