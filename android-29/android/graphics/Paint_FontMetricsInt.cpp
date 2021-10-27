#include "./Paint_FontMetricsInt.hpp"

namespace android::graphics
{
	// Fields
	jint Paint_FontMetricsInt::ascent()
	{
		return __thiz.getField<jint>(
			"ascent"
		);
	}
	jint Paint_FontMetricsInt::bottom()
	{
		return __thiz.getField<jint>(
			"bottom"
		);
	}
	jint Paint_FontMetricsInt::descent()
	{
		return __thiz.getField<jint>(
			"descent"
		);
	}
	jint Paint_FontMetricsInt::leading()
	{
		return __thiz.getField<jint>(
			"leading"
		);
	}
	jint Paint_FontMetricsInt::top()
	{
		return __thiz.getField<jint>(
			"top"
		);
	}
	
	Paint_FontMetricsInt::Paint_FontMetricsInt(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Paint_FontMetricsInt::Paint_FontMetricsInt()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Paint$FontMetricsInt",
			"()V"
		);
	}
	
	// Methods
	jstring Paint_FontMetricsInt::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::graphics

