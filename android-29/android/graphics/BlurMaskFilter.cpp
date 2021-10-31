#include "./BlurMaskFilter_Blur.hpp"
#include "./BlurMaskFilter.hpp"

namespace android::graphics
{
	// Fields
	
	BlurMaskFilter::BlurMaskFilter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BlurMaskFilter::BlurMaskFilter(jfloat arg0, android::graphics::BlurMaskFilter_Blur arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.BlurMaskFilter",
			"(FLandroid/graphics/BlurMaskFilter$Blur;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	
	// Methods
} // namespace android::graphics

