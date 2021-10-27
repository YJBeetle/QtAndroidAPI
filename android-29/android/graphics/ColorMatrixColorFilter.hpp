#pragma once

#include "../../__JniBaseClass.hpp"
#include "./ColorFilter.hpp"

namespace android::graphics
{
	class ColorMatrix;
}

namespace android::graphics
{
	class ColorMatrixColorFilter : public android::graphics::ColorFilter
	{
	public:
		// Fields
		
		ColorMatrixColorFilter(QAndroidJniObject obj);
		// Constructors
		ColorMatrixColorFilter(jfloatArray &arg0);
		ColorMatrixColorFilter(android::graphics::ColorMatrix &arg0);
		ColorMatrixColorFilter() = default;
		
		// Methods
		void getColorMatrix(android::graphics::ColorMatrix arg0);
	};
} // namespace android::graphics

