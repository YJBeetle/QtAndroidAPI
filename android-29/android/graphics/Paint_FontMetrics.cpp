#include "./Paint_FontMetrics.hpp"

namespace android::graphics
{
	// Fields
	jfloat Paint_FontMetrics::ascent()
	{
		return __thiz.getField<jfloat>(
			"ascent"
		);
	}
	jfloat Paint_FontMetrics::bottom()
	{
		return __thiz.getField<jfloat>(
			"bottom"
		);
	}
	jfloat Paint_FontMetrics::descent()
	{
		return __thiz.getField<jfloat>(
			"descent"
		);
	}
	jfloat Paint_FontMetrics::leading()
	{
		return __thiz.getField<jfloat>(
			"leading"
		);
	}
	jfloat Paint_FontMetrics::top()
	{
		return __thiz.getField<jfloat>(
			"top"
		);
	}
	
	Paint_FontMetrics::Paint_FontMetrics(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Paint_FontMetrics::Paint_FontMetrics()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Paint$FontMetrics",
			"()V"
		);
	}
	
	// Methods
} // namespace android::graphics

