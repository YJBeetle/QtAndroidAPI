#include "../../JString.hpp"
#include "./Paint_FontMetricsInt.hpp"

namespace android::graphics
{
	// Fields
	jint Paint_FontMetricsInt::ascent()
	{
		return getField<jint>(
			"ascent"
		);
	}
	jint Paint_FontMetricsInt::bottom()
	{
		return getField<jint>(
			"bottom"
		);
	}
	jint Paint_FontMetricsInt::descent()
	{
		return getField<jint>(
			"descent"
		);
	}
	jint Paint_FontMetricsInt::leading()
	{
		return getField<jint>(
			"leading"
		);
	}
	jint Paint_FontMetricsInt::top()
	{
		return getField<jint>(
			"top"
		);
	}
	
	// QAndroidJniObject forward
	Paint_FontMetricsInt::Paint_FontMetricsInt(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Paint_FontMetricsInt::Paint_FontMetricsInt()
		: JObject(
			"android.graphics.Paint$FontMetricsInt",
			"()V"
		) {}
	
	// Methods
	JString Paint_FontMetricsInt::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::graphics

