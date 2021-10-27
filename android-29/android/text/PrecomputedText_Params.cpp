#include "./TextPaint.hpp"
#include "./PrecomputedText_Params.hpp"

namespace android::text
{
	// Fields
	
	PrecomputedText_Params::PrecomputedText_Params(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean PrecomputedText_Params::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint PrecomputedText_Params::getBreakStrategy()
	{
		return __thiz.callMethod<jint>(
			"getBreakStrategy",
			"()I"
		);
	}
	jint PrecomputedText_Params::getHyphenationFrequency()
	{
		return __thiz.callMethod<jint>(
			"getHyphenationFrequency",
			"()I"
		);
	}
	QAndroidJniObject PrecomputedText_Params::getTextDirection()
	{
		return __thiz.callObjectMethod(
			"getTextDirection",
			"()Landroid/text/TextDirectionHeuristic;"
		);
	}
	QAndroidJniObject PrecomputedText_Params::getTextPaint()
	{
		return __thiz.callObjectMethod(
			"getTextPaint",
			"()Landroid/text/TextPaint;"
		);
	}
	jint PrecomputedText_Params::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring PrecomputedText_Params::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::text

