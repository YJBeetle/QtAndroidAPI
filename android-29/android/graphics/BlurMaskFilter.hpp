#pragma once

#include "../../__JniBaseClass.hpp"
#include "./MaskFilter.hpp"

namespace android::graphics
{
	class BlurMaskFilter_Blur;
}

namespace android::graphics
{
	class BlurMaskFilter : public android::graphics::MaskFilter
	{
	public:
		// Fields
		
		BlurMaskFilter(QAndroidJniObject obj);
		// Constructors
		BlurMaskFilter(jfloat &arg0, android::graphics::BlurMaskFilter_Blur &arg1);
		BlurMaskFilter() = default;
		
		// Methods
	};
} // namespace android::graphics

