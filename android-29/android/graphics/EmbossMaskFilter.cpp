#include "./EmbossMaskFilter.hpp"

namespace android::graphics
{
	// Fields
	
	EmbossMaskFilter::EmbossMaskFilter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	EmbossMaskFilter::EmbossMaskFilter(jfloatArray arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.EmbossMaskFilter",
			"([FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
} // namespace android::graphics

