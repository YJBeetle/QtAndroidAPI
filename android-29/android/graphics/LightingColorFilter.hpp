#pragma once

#include "../../__JniBaseClass.hpp"
#include "./ColorFilter.hpp"


namespace android::graphics
{
	class LightingColorFilter : public android::graphics::ColorFilter
	{
	public:
		// Fields
		
		LightingColorFilter(QAndroidJniObject obj);
		// Constructors
		LightingColorFilter(jint arg0, jint arg1);
		LightingColorFilter() = default;
		
		// Methods
		jint getColorAdd();
		jint getColorMultiply();
	};
} // namespace android::graphics

