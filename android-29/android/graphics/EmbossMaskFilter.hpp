#pragma once

#include "../../__JniBaseClass.hpp"
#include "./MaskFilter.hpp"


namespace android::graphics
{
	class EmbossMaskFilter : public android::graphics::MaskFilter
	{
	public:
		// Fields
		
		EmbossMaskFilter(QAndroidJniObject obj);
		// Constructors
		EmbossMaskFilter(jfloatArray &arg0, jfloat &arg1, jfloat &arg2, jfloat &arg3);
		EmbossMaskFilter() = default;
		
		// Methods
	};
} // namespace android::graphics

