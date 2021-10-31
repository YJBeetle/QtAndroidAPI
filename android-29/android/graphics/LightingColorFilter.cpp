#include "./LightingColorFilter.hpp"

namespace android::graphics
{
	// Fields
	
	LightingColorFilter::LightingColorFilter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LightingColorFilter::LightingColorFilter(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.LightingColorFilter",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jint LightingColorFilter::getColorAdd()
	{
		return __thiz.callMethod<jint>(
			"getColorAdd",
			"()I"
		);
	}
	jint LightingColorFilter::getColorMultiply()
	{
		return __thiz.callMethod<jint>(
			"getColorMultiply",
			"()I"
		);
	}
} // namespace android::graphics

