#pragma once

#include "../../__JniBaseClass.hpp"
#include "./DrawFilter.hpp"


namespace android::graphics
{
	class PaintFlagsDrawFilter : public android::graphics::DrawFilter
	{
	public:
		// Fields
		
		PaintFlagsDrawFilter(QAndroidJniObject obj);
		// Constructors
		PaintFlagsDrawFilter(jint &arg0, jint &arg1);
		PaintFlagsDrawFilter() = default;
		
		// Methods
	};
} // namespace android::graphics

