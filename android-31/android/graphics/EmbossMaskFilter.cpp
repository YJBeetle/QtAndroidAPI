#include "./EmbossMaskFilter.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	EmbossMaskFilter::EmbossMaskFilter(QAndroidJniObject obj) : android::graphics::MaskFilter(obj) {}
	
	// Constructors
	EmbossMaskFilter::EmbossMaskFilter(jfloatArray arg0, jfloat arg1, jfloat arg2, jfloat arg3)
		: android::graphics::MaskFilter(
			"android.graphics.EmbossMaskFilter",
			"([FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
} // namespace android::graphics

